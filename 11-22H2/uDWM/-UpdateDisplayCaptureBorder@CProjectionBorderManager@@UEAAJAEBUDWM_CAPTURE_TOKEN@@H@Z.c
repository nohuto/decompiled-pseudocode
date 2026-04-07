/*
 * XREFs of ?UpdateDisplayCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800D3140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D0574 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3E38 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3F64 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x1800D4E08 (-_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV-$DynArray@PEAVCProjectionBorderVisual@@$0A@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateDisplayCaptureBorder(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2,
        int a3)
{
  unsigned __int8 *Element; // rax
  __int64 v7; // rcx
  HMONITOR v8; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (unsigned __int8 *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
                                 this + 7,
                                 *(_QWORD *)a2);
  if ( Element )
  {
    v7 = Element[56];
    if ( (_DWORD)v7 != (a3 != 0) )
    {
      Element[56] = a3 != 0;
      if ( a3 )
      {
        v8 = (HMONITOR)*((_QWORD *)Element + 2);
        if ( v8 )
          CProjectionBorderManager::_AddProjectionBorderForDisplay((CProjectionBorderManager *)this, v8, a2);
        else
          CProjectionBorderManager::_AddProjectionBorderForAllDisplays((CProjectionBorderManager *)this, a2);
      }
      else
      {
        CProjectionBorderManager::_RemoveVisuals(v7, Element + 24);
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
    return 0LL;
  }
  else
  {
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
    return 2147549183LL;
  }
}

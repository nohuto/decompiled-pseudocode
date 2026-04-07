/*
 * XREFs of ?UpdateWindowCaptureBorder@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z @ 0x1800CEAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CBE7C (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800CF7D8 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CFFBC (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::UpdateWindowCaptureBorder(
        struct _RTL_GENERIC_TABLE *this,
        const struct DWM_CAPTURE_TOKEN *a2,
        int a3)
{
  HWND *Element; // rax
  HWND *v7; // rsi
  unsigned int v8; // ebx
  CProjectionBorderManager *v9; // rcx
  bool v10; // bp
  int ProxyWindowHandle; // eax
  CProjectionBorderManager *v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  CProjectionBorderManager *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v18; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Element = (HWND *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a2);
  v7 = Element;
  v8 = 0;
  if ( !Element )
  {
    v13 = -2147418113;
    goto LABEL_12;
  }
  v9 = (CProjectionBorderManager *)*((unsigned __int8 *)Element + 32);
  if ( (_DWORD)v9 != (a3 != 0) )
  {
    v10 = a3 != 0;
    *((_BYTE *)Element + 32) = v10;
    ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v9, Element[2], v10);
    v13 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v14 = 658LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
LABEL_12:
      v8 = v13;
      goto LABEL_13;
    }
    v18 = 0LL;
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v12, v7[2], &v18);
    v13 = ProxyWindowHandle;
    if ( ProxyWindowHandle < 0 )
    {
      v14 = 661LL;
      goto LABEL_10;
    }
    if ( v18 )
    {
      ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v15, v18, v10);
      v13 = ProxyWindowHandle;
      if ( ProxyWindowHandle < 0 )
      {
        v14 = 664LL;
        goto LABEL_10;
      }
    }
  }
LABEL_13:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v8;
}

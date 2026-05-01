/*
 * XREFs of ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1803A9E70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18004DFE8 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1801664E8 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x1803AA224 (-_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PRE.c)
 *     WPP_SF_dL @ 0x1803AA334 (WPP_SF_dL.c)
 */

__int64 __fastcall CRotationManagerSync::LockAutoRotation(CRotationManagerSync *this)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  ORIENTATION_PREFERENCE v4; // edi
  unsigned int OrientationPreferenceFromCurrentOrientation; // eax
  int v6; // eax
  bool v7; // zf
  __int64 Ptr_high; // rdx
  ORIENTATION_PREFERENCE v10; // [rsp+48h] [rbp+10h] BYREF

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    v2 = 0;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = ORIENTATION_PREFERENCE_NONE;
    v10 = ORIENTATION_PREFERENCE_NONE;
    if ( !*((_DWORD *)this + 10) )
    {
      OrientationPreferenceFromCurrentOrientation = CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
                                                      (CRotationManagerSync *)((char *)this - 80),
                                                      &v10);
      v4 = v10;
      v2 = OrientationPreferenceFromCurrentOrientation;
    }
    if ( ++*((_DWORD *)this + 10) == 1 )
    {
      v6 = *((_DWORD *)this + 6);
      *(_QWORD *)((char *)this + 28) = *((_QWORD *)this + 2);
      *((_DWORD *)this + 9) = v6;
      *((_BYTE *)this + 37) = 1;
      if ( v4 != *((_DWORD *)this + 5) || !(_BYTE)v6 )
      {
        *((_DWORD *)this + 5) = v4;
        v7 = *((_BYTE *)this + 25) == 0;
        *((_BYTE *)this + 24) = 0;
        if ( v7 )
        {
          SetDisplayAutoRotationPreferences(v4);
          *((_BYTE *)this + 24) = 1;
        }
      }
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      if ( (_DWORD)Ptr_high != *((_DWORD *)this + 4) )
      {
        CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 80), Ptr_high, v3);
        *((_DWORD *)this + 4) = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      }
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_dL(*((_QWORD *)WPP_GLOBAL_Control + 2), Ptr_high, v3, *((unsigned int *)this + 7), v4);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}

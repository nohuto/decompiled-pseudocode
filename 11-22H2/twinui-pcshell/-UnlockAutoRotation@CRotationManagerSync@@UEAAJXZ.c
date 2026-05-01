/*
 * XREFs of ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1803AA140
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18004DFE8 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1801664E8 (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     WPP_SF_Ld @ 0x1803AA2E4 (WPP_SF_Ld.c)
 */

__int64 __fastcall CRotationManagerSync::UnlockAutoRotation(CRotationManagerSync *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  int v4; // eax
  int v5; // eax
  ORIENTATION_PREFERENCE v6; // ecx
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // edx

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = *((_DWORD *)this + 10);
    if ( v4 )
    {
      v2 = 1;
      v5 = v4 - 1;
      *((_DWORD *)this + 10) = v5;
      if ( !v5 )
      {
        v6 = *((_DWORD *)this + 8);
        if ( *((_DWORD *)this + 5) != v6 )
        {
          *((_DWORD *)this + 5) = v6;
          v7 = *((_BYTE *)this + 25) == 0;
          *((_BYTE *)this + 24) = 0;
          if ( v7 )
          {
            SetDisplayAutoRotationPreferences(v6);
            *((_BYTE *)this + 24) = 1;
          }
        }
        v8 = *((_DWORD *)this + 4);
        v9 = *((_DWORD *)this + 7);
        if ( v8 != v9 )
        {
          CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)((char *)this - 80), v9, v3);
          v8 = *((_DWORD *)this + 7);
          *((_DWORD *)this + 4) = v8;
        }
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          WPP_SF_Ld(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11LL,
            &WPP_5fb75948c05b34306fc66a79fd5d315e_Traceguids,
            *((unsigned int *)this + 8),
            v8);
        v2 = 0;
      }
    }
    else
    {
      v2 = -2147023728;
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}

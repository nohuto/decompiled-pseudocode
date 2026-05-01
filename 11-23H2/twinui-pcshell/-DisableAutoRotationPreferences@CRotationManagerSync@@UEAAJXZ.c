/*
 * XREFs of ?DisableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x1803A9D10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x18004DFE8 (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotationManagerSync::DisableAutoRotationPreferences(CRotationManagerSync *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v3 = *((_DWORD *)this + 11);
    if ( v3 )
    {
      v2 = 1;
      v4 = v3 - 1;
      *((_DWORD *)this + 11) = v4;
      if ( !v4 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8);
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

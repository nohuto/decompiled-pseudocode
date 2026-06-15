/*
 * XREFs of ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18003AC34
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18003A814 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18003A9B8 (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

wchar_t *__fastcall CAudioStream::GetClientFriendlyName(CAudioStream *this)
{
  __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *v4; // rax
  const wchar_t *v5; // rax
  wchar_t *v6; // rax

  v2 = *((_QWORD *)this + 9);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = (wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
    v3 = v4;
    if ( !v4 || !*v4 )
    {
      v5 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 80LL))(*((_QWORD *)this + 9));
      if ( v5 )
      {
        if ( *v5 )
        {
          v6 = wcsrchr(v5, 0x5Cu);
          v3 = v6 + 1;
          if ( !v6 )
            return 0LL;
        }
      }
    }
  }
  return v3;
}

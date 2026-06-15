/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSystemAudioStream@@K@Z @ 0x18000DE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SetAudioHandle(CAudioStream *this, struct SystemAudioStream *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  *((_QWORD *)this + 6) = *((_QWORD *)a2 + 4);
  v5 = *((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 5) = 0LL;
  v6 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)this + 61) = a3;
  return 0LL;
}

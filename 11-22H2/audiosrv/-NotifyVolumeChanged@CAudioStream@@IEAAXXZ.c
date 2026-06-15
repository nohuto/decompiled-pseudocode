/*
 * XREFs of ?NotifyVolumeChanged@CAudioStream@@IEAAXXZ @ 0x180018D7C
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::NotifyVolumeChanged(CAudioStream *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *i; // rdi
  int v5; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v6 = v2;
  v5 = 0;
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8, &v5);
  v3 = (_QWORD *)*((_QWORD *)this + 39);
  for ( i = (_QWORD *)*((_QWORD *)this + 38); i != v3; ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *((_QWORD *)this + 6));
  if ( v2 )
    LeaveCriticalSection(v2);
}

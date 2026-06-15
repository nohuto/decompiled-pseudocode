/*
 * XREFs of ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x18000E690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StopStream(unsigned __int64 this)
{
  int v2; // ecx

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(this + 40) + 48LL))(*(_QWORD *)(this + 40));
  v2 = *(_DWORD *)(this - 8 + 128);
  *(_DWORD *)(this - 8 + 128) = v2 - 1;
  if ( v2 == 1 )
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this - 8 + 200) + 336LL))(
      *(_QWORD *)(this - 8 + 200),
      this & -(__int64)(this != 8));
  return 0LL;
}

/*
 * XREFs of sub_1800160C0 @ 0x1800160C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_1800160C0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)(a5 + 32) = GetCurrentThreadId();
  (*(void (__fastcall **)(_QWORD, _QWORD))(a5 + 16))(v5, *(_QWORD *)(a5 + 24));
  *(_DWORD *)(a5 + 32) = 0;
}

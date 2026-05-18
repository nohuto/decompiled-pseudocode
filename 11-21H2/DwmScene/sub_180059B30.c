/*
 * XREFs of sub_180059B30 @ 0x180059B30
 * Callers:
 *     sub_180059C38 @ 0x180059C38 (sub_180059C38.c)
 *     sub_1800F8BA0 @ 0x1800F8BA0 (sub_1800F8BA0.c)
 *     sub_1800FAEA8 @ 0x1800FAEA8 (sub_1800FAEA8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180059B30(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = v3 + 40;
    v5 = *(_QWORD *)(v3 + 96);
    if ( !v5 )
      return sub_180010884((char *)v3, 0x68uLL);
    LOBYTE(a2) = v5 != v4;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5 + 32LL))(*(_QWORD *)(v3 + 96), a2);
    *(_QWORD *)(v4 + 56) = 0LL;
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      return sub_180010884((char *)v3, 0x68uLL);
  }
  return result;
}

/*
 * XREFs of sub_180029710 @ 0x180029710
 * Callers:
 *     sub_180026D64 @ 0x180026D64 (sub_180026D64.c)
 *     sub_18005B860 @ 0x18005B860 (sub_18005B860.c)
 *     sub_1800A30A0 @ 0x1800A30A0 (sub_1800A30A0.c)
 *     sub_1800ACA78 @ 0x1800ACA78 (sub_1800ACA78.c)
 *     sub_1800ED5B0 @ 0x1800ED5B0 (sub_1800ED5B0.c)
 *     sub_1800F8BA0 @ 0x1800F8BA0 (sub_1800F8BA0.c)
 *     sub_1800FB660 @ 0x1800FB660 (sub_1800FB660.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180029710(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        LOBYTE(v5) = v6 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}

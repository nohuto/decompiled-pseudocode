/*
 * XREFs of sub_18007C7D8 @ 0x18007C7D8
 * Callers:
 *     sub_18007CAE4 @ 0x18007CAE4 (sub_18007CAE4.c)
 *     sub_18007FD84 @ 0x18007FD84 (sub_18007FD84.c)
 * Callees:
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007C7D8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a3 + 56);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      sub_18001DE1C(a3, v7);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 64) = a2;
  return a1;
}

/*
 * XREFs of sub_180088AF8 @ 0x180088AF8
 * Callers:
 *     sub_180088EC8 @ 0x180088EC8 (sub_180088EC8.c)
 *     sub_18008CAF4 @ 0x18008CAF4 (sub_18008CAF4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180088AF8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a3 + 56);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      v8 = *(_QWORD *)(a3 + 56);
      if ( v8 )
      {
        LOBYTE(v7) = v8 != a3;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7);
        *(_QWORD *)(a3 + 56) = 0LL;
      }
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

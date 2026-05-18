/*
 * XREFs of sub_180026A88 @ 0x180026A88
 * Callers:
 *     sub_180026AE4 @ 0x180026AE4 (sub_180026AE4.c)
 *     sub_180026D64 @ 0x180026D64 (sub_180026D64.c)
 *     sub_1800276C8 @ 0x1800276C8 (sub_1800276C8.c)
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 *     sub_180028F80 @ 0x180028F80 (sub_180028F80.c)
 *     sub_18002D880 @ 0x18002D880 (sub_18002D880.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026A88(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v2 = a2;
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 56);
      if ( v4 )
      {
        LOBYTE(a2) = v4 != v3;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
        *(_QWORD *)(v3 + 56) = 0LL;
      }
      v3 += 64LL;
    }
    while ( v3 != v2 );
  }
  return result;
}

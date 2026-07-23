/*
 * XREFs of sub_140A521EC @ 0x140A521EC
 * Callers:
 *     sub_14039693C @ 0x14039693C (sub_14039693C.c)
 * Callees:
 *     sub_140251FD8 @ 0x140251FD8 (sub_140251FD8.c)
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_1403B6C6C @ 0x1403B6C6C (sub_1403B6C6C.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140A521EC(char a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  ULONG_PTR *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  sub_1403B6C6C(&v8, (unsigned __int16)word_140C4C04E);
  sub_140252258(&v8, 0LL, 0LL);
  v2 = sub_1402520D4((unsigned int *)&v8);
  if ( !v2 )
    return sub_14051E038(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8CAu);
  v3 = v2[5];
  if ( a1 )
    *(_DWORD *)(v3 + 12) |= 0x10u;
  else
    *(_DWORD *)(v3 + 12) &= ~0x10u;
  v4 = sub_140252134(*((_DWORD *)v2 + 4));
  if ( v4 )
    return sub_140251FD8((__int64)v4, (__int64)&v8, v5 + *(_QWORD *)(v6 + 40));
  else
    return sub_14051E038(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x8DAu);
}

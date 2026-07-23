/*
 * XREFs of sub_1402DB994 @ 0x1402DB994
 * Callers:
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1402DBA28 @ 0x1402DBA28 (sub_1402DBA28.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 */

__int64 __fastcall sub_1402DB994(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rbx

  v2 = sub_1402DBF3C(*(_QWORD *)(a1 + 48), a2, a1);
  v4 = sub_1402DBA28(v3);
  v5 = *(_QWORD *)(v2 + 72) - v4;
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
    sub_14028CE10(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v6 + 366)), v5);
    *(_QWORD *)(v2 + 72) = v4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), -v5);
  }
  return 0LL;
}

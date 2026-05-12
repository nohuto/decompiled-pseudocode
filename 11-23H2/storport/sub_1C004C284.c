/*
 * XREFs of sub_1C004C284 @ 0x1C004C284
 * Callers:
 *     sub_1C0037500 @ 0x1C0037500 (sub_1C0037500.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 */

__int64 __fastcall sub_1C004C284(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( !(unsigned int)sub_1C0007798(a1, 14) )
    return 3221225659LL;
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v5 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 16) = StorPortFreeDeviceBase;
  *(_QWORD *)(v5 + 24) = StorPortFreeDeviceBase;
  *(_QWORD *)(v5 + 48) = sub_1C004C000;
  *(_DWORD *)v5 = 65592;
  *(_QWORD *)(v5 + 8) = a1;
  return 0LL;
}

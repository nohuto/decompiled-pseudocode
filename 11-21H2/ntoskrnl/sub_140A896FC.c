/*
 * XREFs of sub_140A896FC @ 0x140A896FC
 * Callers:
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A853A0 @ 0x140A853A0 (sub_140A853A0.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 * Callees:
 *     sub_140A87EC4 @ 0x140A87EC4 (sub_140A87EC4.c)
 *     sub_140A885FC @ 0x140A885FC (sub_140A885FC.c)
 *     sub_140A88624 @ 0x140A88624 (sub_140A88624.c)
 */

__int64 __fastcall sub_140A896FC(__int64 *a1, ULONG_PTR *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  const void **v7; // r8
  __int64 v8; // rax
  __int16 v9; // r11
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  v6 = sub_140A885FC(*a1);
  if ( !v6 )
    return 0LL;
  v8 = sub_140A88624(*a2, *v7);
  if ( !v8 || !sub_140A87EC4(v6, v8, &v11) )
    return 0LL;
  *a2 = *(_QWORD *)(v6 + 56);
  *a3 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 32LL)
      + (unsigned int)(v11 << 12)
      + *(unsigned int *)(*(_QWORD *)(v6 + 56) + 44LL)
      + (unsigned __int64)(v9 & 0xFFF);
  *a1 = *(_QWORD *)(v6 + 48);
  return 1LL;
}

/*
 * XREFs of sub_14081F788 @ 0x14081F788
 * Callers:
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1408217D8 @ 0x1408217D8 (sub_1408217D8.c)
 *     sub_140821918 @ 0x140821918 (sub_140821918.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14081F788(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  *a4 = 0LL;
  v4 = a1;
  v5 = sub_1408217D8(a1, a2);
  if ( !v5 )
    return 3221225488LL;
  if ( (int)sub_140821918(3LL, *(_QWORD *)(v5 + 32), 0LL, &P) < 0 )
    return 3221225488LL;
  v7 = P;
  if ( !P )
    return 3221225488LL;
  sub_14042A5E0(*((_QWORD *)P + 1), v4);
  sub_14042A5E0(v7[1], v8);
  ExFreePoolWithTag(v7, 0);
  return 3221225488LL;
}

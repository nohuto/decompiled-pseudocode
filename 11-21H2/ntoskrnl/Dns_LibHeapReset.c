/*
 * XREFs of Dns_LibHeapReset @ 0x140AAB008
 * Callers:
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_1403DC330 @ 0x1403DC330 (sub_1403DC330.c)
 * Callees:
 *     <none>
 */

void __fastcall Dns_LibHeapReset(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140C0E0F0 = a1;
  *(_QWORD *)&xmmword_140C0E100 = a2;
  *((_QWORD *)&xmmword_140C0E100 + 1) = a3;
}

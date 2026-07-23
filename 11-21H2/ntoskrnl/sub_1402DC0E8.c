/*
 * XREFs of sub_1402DC0E8 @ 0x1402DC0E8
 * Callers:
 *     sub_1406CAF3C @ 0x1406CAF3C (sub_1406CAF3C.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140B050A8 @ 0x140B050A8 (sub_140B050A8.c)
 * Callees:
 *     sub_1402D9DB4 @ 0x1402D9DB4 (sub_1402D9DB4.c)
 *     sub_140429850 @ 0x140429850 (sub_140429850.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1402DC0E8(PCUNICODE_STRING SourceString, __int64 a2, __int64 a3)
{
  PVOID P[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  *(_OWORD *)P = 0LL;
  if ( !(unsigned int)sub_1402D9DB4((PANSI_STRING)P, SourceString) )
    return 0LL;
  v8 = 0;
  v9 = 0;
  v7[0] = a2;
  v7[1] = a3;
  sub_140429850(P, v7, 4LL);
  ExFreePoolWithTag(P[1], 0);
  return 1LL;
}

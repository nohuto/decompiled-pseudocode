/*
 * XREFs of sub_140998A68 @ 0x140998A68
 * Callers:
 *     sub_1405D89F0 @ 0x1405D89F0 (sub_1405D89F0.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall sub_140998A68(_DWORD *Buffer)
{
  int ExplicitScope; // [rsp+20h] [rbp-88h]
  WNF_CHANGE_STAMP MatchingChangeStamp; // [rsp+28h] [rbp-80h]
  LOGICAL CheckStamp; // [rsp+30h] [rbp-78h]
  int v6; // [rsp+38h] [rbp-70h]
  int v7; // [rsp+40h] [rbp-68h]
  int v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+50h] [rbp-58h]
  int v10; // [rsp+58h] [rbp-50h]
  int v11; // [rsp+60h] [rbp-48h]
  int v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+80h] [rbp-28h]

  v15 = *((unsigned __int8 *)Buffer + 23);
  v14 = *((unsigned __int8 *)Buffer + 22);
  v13 = *((unsigned __int8 *)Buffer + 21);
  v12 = *((unsigned __int8 *)Buffer + 20);
  v11 = *((unsigned __int8 *)Buffer + 19);
  v10 = *((unsigned __int8 *)Buffer + 18);
  v9 = *((unsigned __int8 *)Buffer + 17);
  v8 = *((unsigned __int8 *)Buffer + 16);
  v7 = *((unsigned __int16 *)Buffer + 7);
  v6 = *((unsigned __int16 *)Buffer + 6);
  CheckStamp = Buffer[2];
  MatchingChangeStamp = Buffer[1];
  ExplicitScope = *Buffer >> 1;
  DbgPrintEx(
    0x92u,
    3u,
    aPowerButtonHol,
    *Buffer & 1,
    ExplicitScope,
    MatchingChangeStamp,
    CheckStamp,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  return ZwUpdateWnfStateData(&stru_140037798, Buffer, 0x18u, 0LL, 0LL, 0, 0);
}

/*
 * XREFs of sub_1408288D4 @ 0x1408288D4
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_140800680 @ 0x140800680 (sub_140800680.c)
 *     sub_140800968 @ 0x140800968 (sub_140800968.c)
 *     sub_1408124A0 @ 0x1408124A0 (sub_1408124A0.c)
 *     sub_1408125C4 @ 0x1408125C4 (sub_1408125C4.c)
 *     sub_140818DF4 @ 0x140818DF4 (sub_140818DF4.c)
 *     sub_14081CE58 @ 0x14081CE58 (sub_14081CE58.c)
 *     sub_14081CF98 @ 0x14081CF98 (sub_14081CF98.c)
 *     sub_1408289F4 @ 0x1408289F4 (sub_1408289F4.c)
 *     sub_140828AC4 @ 0x140828AC4 (sub_140828AC4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 sub_1408288D4()
{
  int v0; // eax
  int v1; // ecx
  unsigned int v2; // ebx
  _DWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  bool v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  v11 = 0;
  RtlInitUnicodeString(&stru_140C22250, L"\\OSDataRoot");
  sub_140828AC4();
  v0 = dword_140D05164;
  if ( dword_140D05164 != -1 || (v0 = dword_140D05238, dword_140D05238 != -1) )
    dword_140D0506C = v0;
  sub_14081CE58(2);
  sub_140A48330(v1);
  v2 = dword_140D050EC;
  LOBYTE(v3) = 1;
  sub_140818DF4(1, v3, &v11);
  sub_140A47CF8(v5, v4);
  sub_14081CF98(2);
  LOBYTE(v6) = v11;
  sub_1408289F4(v2, v6);
  if ( !ExIsSoftBoot() && (int)sub_1408125C4(0LL, 2u, &v12) >= 0 )
  {
    v7 = v12;
    sub_140800680(v12, 0LL);
    sub_140800968(v7);
    sub_1408124A0(v7);
  }
  if ( (int)ExSubscribeWnfStateChange(
              (int)&qword_140C23728,
              (int)&qword_140011BF8,
              1,
              0,
              (__int64)sub_14098FB30,
              (__int64)&dword_140D050EC) < 0 )
    qword_140C23728 = 0LL;
  result = qword_140C5AD58;
  if ( qword_140C5AD58 )
    return sub_14042A5E0(v9, v8);
  return result;
}

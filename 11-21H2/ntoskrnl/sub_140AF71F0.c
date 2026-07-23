/*
 * XREFs of sub_140AF71F0 @ 0x140AF71F0
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1403B839C @ 0x1403B839C (sub_1403B839C.c)
 *     sub_1403B83F0 @ 0x1403B83F0 (sub_1403B83F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DEF50 (RtlQueryRegistryValuesEx.c)
 *     sub_14084BDD8 @ 0x14084BDD8 (sub_14084BDD8.c)
 *     sub_140AF740C @ 0x140AF740C (sub_140AF740C.c)
 */

__int64 __fastcall sub_140AF71F0(__int64 *Context)
{
  unsigned int v1; // ebx
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  char v6; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-C8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v9[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v10; // [rsp+E6h] [rbp-22h]
  char v11; // [rsp+E8h] [rbp-20h]
  char v12; // [rsp+EDh] [rbp-1Bh]

  v1 = 0;
  v6 = 0;
  if ( !byte_140D00A88 && (int)sub_1403B839C() < 0 && !byte_140D018F0 )
    byte_140D00A88 = 1;
  if ( Context )
  {
    v3 = 0;
    v4 = 0LL;
    do
    {
      if ( v4 >= 0x2B )
        sub_140502A3C();
      v9[v4] = 0;
      ++v3;
      ++v4;
    }
    while ( v3 < 0x2B );
    v10 = 257;
    v9[6] = 1;
    v11 = 1;
    v12 = 1;
    qword_140C54D58 = sub_140AF740C(Context, v9);
  }
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 4;
  QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&sub_140B219F0;
  QueryTable[0].DefaultType = 0;
  QueryTable[0].Name = L"ExistingPageFiles";
  QueryTable[0].EntryContext = &v6;
  RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", QueryTable, Context, 0LL);
  if ( !v6 )
  {
    *(_OWORD *)&v7[1] = 0LL;
    v1 = sub_14084BDD8(0LL, (__int128 *)&v7[1]) == 0 ? 0xC0000001 : 0;
  }
  sub_1403B83F0(Context[30]);
  return v1;
}

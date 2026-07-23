/*
 * XREFs of sub_1407491FC @ 0x1407491FC
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 * Callees:
 *     sub_1405643B8 @ 0x1405643B8 (sub_1405643B8.c)
 *     sub_1407490C0 @ 0x1407490C0 (sub_1407490C0.c)
 *     sub_1407491AC @ 0x1407491AC (sub_1407491AC.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14094FB70 @ 0x14094FB70 (sub_14094FB70.c)
 *     sub_14094FE24 @ 0x14094FE24 (sub_14094FE24.c)
 *     sub_14094FF34 @ 0x14094FF34 (sub_14094FF34.c)
 */

__int64 __fastcall sub_1407491FC(ULONG_PTR MaxDataSize, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int v6; // edi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v3 = a3;
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(MaxDataSize, (const EVENT_DESCRIPTOR *)qword_14003B390, a3, 1, *(const wchar_t **)(MaxDataSize + 48));
  if ( v3 && (*(_DWORD *)(MaxDataSize + 396) & 0x400000) != 0 )
  {
    v6 = -1073741267;
  }
  else
  {
    sub_1407490C0(*(_QWORD *)(MaxDataSize + 32), 1LL);
    if ( !*(_DWORD *)(MaxDataSize + 568)
      || (sub_14094FB70(0LL), sub_14094FE24(MaxDataSize, 2LL), v6 = sub_14094FF34(0LL, 2LL, &v8, 0LL), v6 >= 0) )
    {
      sub_1407491AC(MaxDataSize);
      v6 = sub_140749C4C(MaxDataSize, 0LL, a2);
    }
  }
  if ( (byte_140C0DD4B & 0x10) != 0 )
    sub_1405643B8(MaxDataSize, (const EVENT_DESCRIPTOR *)qword_14003B460, a3, 1, *(const wchar_t **)(MaxDataSize + 48));
  return (unsigned int)v6;
}

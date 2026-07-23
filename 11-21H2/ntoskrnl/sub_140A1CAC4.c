/*
 * XREFs of sub_140A1CAC4 @ 0x140A1CAC4
 * Callers:
 *     sub_140B1C78C @ 0x140B1C78C (sub_140B1C78C.c)
 * Callees:
 *     sub_1403A7864 @ 0x1403A7864 (sub_1403A7864.c)
 *     sub_140812260 @ 0x140812260 (sub_140812260.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_1408134D8 @ 0x1408134D8 (sub_1408134D8.c)
 *     sub_14081369C @ 0x14081369C (sub_14081369C.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 */

__int64 __fastcall sub_140A1CAC4(__int64 a1)
{
  char v2; // si
  int v3; // ebx
  __int64 result; // rax
  unsigned int v5; // r8d
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = sub_1403A7864(a1);
  v3 = sub_14081369C(v2);
  if ( v3 < 0
    || (v6 = 1, v3 = sub_1408123B4(a1, L"System", (__int64)L"Description", 4u, &v6, 4u), sub_1408134D8(v2), v3 < 0) )
  {
    sub_1408138F0(4LL, L"BcdSetSystemStore: Failed to set store as system store.Status: %x", (unsigned int)v3);
    return (unsigned int)v3;
  }
  else
  {
    result = sub_140812260(a1, 1);
    if ( (int)result < 0 )
    {
      sub_1408138F0(4LL, L"BcdSetSystemStore: Failed to set mark as system store.Status: %x", (unsigned int)result);
      return v5;
    }
  }
  return result;
}

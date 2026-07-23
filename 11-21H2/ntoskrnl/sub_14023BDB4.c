/*
 * XREFs of sub_14023BDB4 @ 0x14023BDB4
 * Callers:
 *     sub_14023BD7C @ 0x14023BD7C (sub_14023BD7C.c)
 * Callees:
 *     sub_1407CA920 @ 0x1407CA920 (sub_1407CA920.c)
 */

bool __fastcall sub_14023BDB4(__int64 a1)
{
  return byte_140C097BD && (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 && (unsigned __int8)sub_1407CA920();
}

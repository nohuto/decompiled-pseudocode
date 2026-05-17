/*
 * XREFs of RtlpValidKnownAce @ 0x18001B370
 * Callers:
 *     RtlValidAcl @ 0x18001B1D0 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidKnownAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  bool result; // al

  result = a1
        && (v1 = *(unsigned __int16 *)(a1 + 2), ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1)
        && (unsigned int)v1 >= 0x10
        && *(_BYTE *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 9) <= 0xFu
        && v1 >= 4 * (unsigned __int64)*(unsigned __int8 *)(a1 + 9) + 16;
  return result;
}

/*
 * XREFs of CpcSetAutonomousActivityWindow @ 0x1C0005280
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0002174 (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetAutonomousActivityWindow(__int64 *a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  while ( a2 > 0x7F )
  {
    ++v2;
    a2 /= 0xAu;
  }
  return WriteGenAddrMaybeHiddenEx(
           *a1,
           (_BYTE *)(a1[18] + 392),
           a2 & 0x7F | (unsigned __int64)((unsigned __int8)(v2 & 7) << 7));
}

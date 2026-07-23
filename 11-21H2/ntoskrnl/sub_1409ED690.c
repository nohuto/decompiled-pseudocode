/*
 * XREFs of sub_1409ED690 @ 0x1409ED690
 * Callers:
 *     sub_1409ECB90 @ 0x1409ECB90 (sub_1409ECB90.c)
 * Callees:
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     sub_1409ED6C0 @ 0x1409ED6C0 (sub_1409ED6C0.c)
 */

char sub_1409ED690()
{
  signed __int32 v0; // eax

  LOBYTE(v0) = ExIsSoftBoot();
  if ( (_BYTE)v0 )
  {
    v0 = _InterlockedCompareExchange(&dword_140D3CD40, 1, 0);
    if ( !v0 )
      LOBYTE(v0) = sub_1409ED6C0();
  }
  return v0;
}

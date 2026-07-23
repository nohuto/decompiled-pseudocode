/*
 * XREFs of sub_140940408 @ 0x140940408
 * Callers:
 *     sub_1409403F0 @ 0x1409403F0 (sub_1409403F0.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14041DB60 (ZwNotifyChangeKey.c)
 *     sub_140862728 @ 0x140862728 (sub_140862728.c)
 */

void __fastcall sub_140940408(HANDLE KeyHandle, char a2)
{
  HANDLE v4; // rbx

  if ( word_140C54E98 )
  {
    v4 = 0LL;
    if ( ZwNotifyChangeKey(KeyHandle, 0LL, qword_140C46B80, (PVOID)1, &stru_140C46B60, 4u, 0, 0LL, 0, 1u) < 0 )
      v4 = KeyHandle;
    if ( a2 )
      sub_140862728(KeyHandle);
    if ( v4 )
      ZwClose(v4);
  }
}

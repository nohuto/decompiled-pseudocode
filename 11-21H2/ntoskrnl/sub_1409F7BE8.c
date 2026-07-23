/*
 * XREFs of sub_1409F7BE8 @ 0x1409F7BE8
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_1408583D0 @ 0x1408583D0 (sub_1408583D0.c)
 */

__int64 __fastcall sub_1409F7BE8(char a1)
{
  NTSTATUS v2; // edi
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  Data = 0;
  KeyHandle = 0LL;
  v2 = sub_1408583D0(&KeyHandle);
  if ( v2 >= 0 )
  {
    Data = a1 != 0;
    v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1400065C0, 0, 4u, &Data, 4u);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}

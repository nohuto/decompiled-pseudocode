/*
 * XREFs of sub_1409654F8 @ 0x1409654F8
 * Callers:
 *     sub_140963B40 @ 0x140963B40 (sub_140963B40.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 */

NTSTATUS __fastcall sub_1409654F8(HANDLE KeyHandle, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int *v7; // rbx
  NTSTATUS v8; // edi
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  Length = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -2147483643 || result == -1073741789 )
  {
    v7 = (unsigned int *)sub_1402D84BC(Length);
    if ( v7 )
    {
      v8 = ZwQueryKey(KeyHandle, KeyFullInformation, v7, Length, &Length);
      if ( v8 >= 0 )
      {
        *a2 = v7[9] + 2LL;
        *a3 = v7[10];
      }
      sub_1402D8494(v7);
      return v8;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}

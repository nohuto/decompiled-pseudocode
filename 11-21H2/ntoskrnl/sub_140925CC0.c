/*
 * XREFs of sub_140925CC0 @ 0x140925CC0
 * Callers:
 *     sub_140925BD8 @ 0x140925BD8 (sub_140925BD8.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwRenameKey @ 0x14041E6E0 (ZwRenameKey.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 */

__int64 __fastcall sub_140925CC0(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  v3 = sub_140925ED0(a1, &a2[2], 131078LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwRenameKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}

/*
 * XREFs of sub_14064CC20 @ 0x14064CC20
 * Callers:
 *     sub_14064CD04 @ 0x14064CD04 (sub_14064CD04.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 */

__int64 __fastcall sub_14064CC20(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS Key; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-C8h] BYREF
  _DWORD KeyInformation[40]; // [rsp+40h] [rbp-B8h] BYREF

  memset(KeyInformation, 0, sizeof(KeyInformation));
  ResultLength[0] = 160;
  *a2 = 0LL;
  if ( ((unsigned __int8)KeyHandle & 1) != 0 )
  {
    return (unsigned int)-1073741822;
  }
  else
  {
    Key = ZwQueryKey(KeyHandle, KeyNameInformation, KeyInformation, 0xA0u, ResultLength);
    if ( Key < 0
      || KeyInformation[0] >= 0x4Cu
      && (HIWORD(KeyInformation[15]) = 0, Key = sub_140813164(0LL, &KeyInformation[1], 131103LL, a2), Key < 0) )
    {
      if ( *a2 )
      {
        sub_1408132F0();
        *a2 = 0LL;
      }
    }
  }
  return (unsigned int)Key;
}

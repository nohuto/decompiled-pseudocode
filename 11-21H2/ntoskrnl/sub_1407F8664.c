/*
 * XREFs of sub_1407F8664 @ 0x1407F8664
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 */

__int64 sub_1407F8664()
{
  signed __int32 v0; // edi
  NTSTATUS v1; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-10h]

  ResultLength = 0;
  KeyHandle = 0LL;
  KeyValueInformation = 0LL;
  v6 = 0;
  v0 = 0;
  v1 = ZwOpenKey(&KeyHandle, 1u, &stru_140C044B0);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(
           KeyHandle,
           &stru_140C044E0,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v1 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      v0 = HIDWORD(KeyValueInformation);
    ZwClose(KeyHandle);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)0xFFFFF780000002E0LL, v0, -1);
  if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741772 )
    return 0;
  return (unsigned int)v1;
}

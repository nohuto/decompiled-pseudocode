/*
 * XREFs of sub_14067A3F4 @ 0x14067A3F4
 * Callers:
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_1406DE008 @ 0x1406DE008 (sub_1406DE008.c)
 *     sub_1406DE494 @ 0x1406DE494 (sub_1406DE494.c)
 * Callees:
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_14067A3F4(HANDLE KeyHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  void *Pool2; // rbx
  NTSTATUS v6; // edi
  ULONG Length; // [rsp+50h] [rbp+18h] BYREF

  Length = 0;
  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -1073741789 || result == -2147483643 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, Length, 538996553LL);
    if ( Pool2 )
    {
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, Length, &Length);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return v6;
      }
      else
      {
        *a2 = Pool2;
        return 0;
      }
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}

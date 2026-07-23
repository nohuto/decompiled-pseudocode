/*
 * XREFs of sub_140A22520 @ 0x140A22520
 * Callers:
 *     sub_14080AA70 @ 0x14080AA70 (sub_14080AA70.c)
 *     sub_140A22650 @ 0x140A22650 (sub_140A22650.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQuerySymbolicLinkObject @ 0x14041E420 (ZwQuerySymbolicLinkObject.c)
 *     sub_140A22790 @ 0x140A22790 (sub_140A22790.c)
 *     sub_140A228D0 @ 0x140A228D0 (sub_140A228D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A22520(wchar_t **a1)
{
  wchar_t *Pool2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG ReturnedLength; // [rsp+58h] [rbp+28h] BYREF
  HANDLE LinkHandle; // [rsp+60h] [rbp+30h]

  ReturnedLength = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  LinkHandle = 0LL;
  if ( !(unsigned __int8)sub_140A22790()
    || (v3 = sub_140A228D0(L"\\ArcName\\multi(0)disk(0)rdisk(1)"), v3 == -1073740718) )
  {
    v3 = sub_140A228D0(L"\\ArcName\\multi(0)disk(0)rdisk(0)");
  }
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v4 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, &ReturnedLength);
    v3 = v4;
    if ( v4 == -1073741789 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, ReturnedLength + 2LL, 1263556947LL);
      if ( Pool2 )
      {
        DestinationString.MaximumLength = ReturnedLength;
        DestinationString.Buffer = Pool2;
        v3 = ZwQuerySymbolicLinkObject(LinkHandle, &DestinationString, 0LL);
        if ( v3 >= 0 )
        {
          Pool2[(unsigned __int64)DestinationString.Length >> 1] = 0;
          *a1 = Pool2;
        }
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else if ( v4 >= 0 )
    {
      v3 = -1073741823;
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v3 < 0 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v3;
}

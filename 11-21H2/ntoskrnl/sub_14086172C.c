/*
 * XREFs of sub_14086172C @ 0x14086172C
 * Callers:
 *     sub_140B2E474 @ 0x140B2E474 (sub_140B2E474.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407ECFCC @ 0x1407ECFCC (sub_1407ECFCC.c)
 *     sub_140947068 @ 0x140947068 (sub_140947068.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14086172C(void *Src, size_t Size, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // edi
  void *Pool2; // rax
  void *v9; // rbx
  _QWORD *v10; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = Size;
  if ( !(_DWORD)Size || !Src )
  {
    if ( (dword_140D3CA24 & 1) == 0 )
      dword_140D3CA24 |= 1u;
    return 3221225473LL;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)Size, 538996816LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Src, v6);
    v10 = sub_1407ECFCC((__int64)v9, v6);
    if ( v10 )
    {
      *a3 = v9;
      *a4 = v10;
      return 0LL;
    }
    ExFreePoolWithTag(v9, 0);
    if ( (dword_140D3CA24 & 4) == 0 )
    {
      dword_140D3CA24 |= 4u;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"INIT DATABASE FAILED");
      sub_140947068(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
    return 3221225473LL;
  }
  if ( (dword_140D3CA24 & 2) == 0 )
  {
    dword_140D3CA24 |= 2u;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"OUT OF MEMORY");
    sub_140947068(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
  }
  return 3221225626LL;
}

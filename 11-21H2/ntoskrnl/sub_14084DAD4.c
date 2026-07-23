/*
 * XREFs of sub_14084DAD4 @ 0x14084DAD4
 * Callers:
 *     sub_140B223B4 @ 0x140B223B4 (sub_140B223B4.c)
 *     sub_140B225D8 @ 0x140B225D8 (sub_140B225D8.c)
 * Callees:
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14084DAD4(PVOID *a1, _SID_IDENTIFIER_AUTHORITY *a2, unsigned int a3)
{
  UCHAR v3; // bl
  unsigned int v6; // eax
  void *Pool2; // rax
  NTSTATUS v8; // ebx

  v3 = a3;
  if ( a3 > 0x3FFFFFF7 )
    v6 = -1;
  else
    v6 = 4 * a3 + 8;
  Pool2 = (void *)ExAllocatePool2(256LL, v6, 538996816LL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    v8 = RtlInitializeSid(Pool2, a2, v3);
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  else
  {
    v8 = -1073741670;
  }
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v8;
}

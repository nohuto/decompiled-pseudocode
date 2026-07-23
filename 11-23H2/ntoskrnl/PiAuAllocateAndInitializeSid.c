/*
 * XREFs of PiAuAllocateAndInitializeSid @ 0x140813780
 * Callers:
 *     PiAuCreateUserSids @ 0x140B4049C (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x140B406C0 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlInitializeSid @ 0x140782240 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiAuAllocateAndInitializeSid(PVOID *a1, _SID_IDENTIFIER_AUTHORITY *a2, unsigned int a3)
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

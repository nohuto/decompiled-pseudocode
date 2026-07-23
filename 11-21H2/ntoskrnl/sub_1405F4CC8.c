/*
 * XREFs of sub_1405F4CC8 @ 0x1405F4CC8
 * Callers:
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 * Callees:
 *     RtlAbsoluteToSelfRelativeSD @ 0x140744160 (RtlAbsoluteToSelfRelativeSD.c)
 *     sub_1409CE6B8 @ 0x1409CE6B8 (sub_1409CE6B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405F4CC8(__int16 *a1, PVOID *a2, ULONG *a3, _BYTE *a4)
{
  NTSTATUS v7; // ebx
  void *Pool2; // rax
  void *v9; // rcx
  PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  AbsoluteSecurityDescriptor = a1;
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v7 = 0;
  if ( a1 )
  {
    if ( a1[1] < 0 )
    {
      *a3 = sub_1409CE6B8();
      *a2 = v9;
    }
    else
    {
      v7 = RtlAbsoluteToSelfRelativeSD(&AbsoluteSecurityDescriptor, 0LL, a3);
      if ( v7 == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, *a3, 1883333971LL);
        *a2 = Pool2;
        if ( Pool2 )
        {
          v7 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, Pool2, a3);
          if ( v7 >= 0 )
          {
            *a4 = 1;
          }
          else
          {
            ExFreePoolWithTag(*a2, 0);
            *a2 = 0LL;
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v7;
}

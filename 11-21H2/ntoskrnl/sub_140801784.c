/*
 * XREFs of sub_140801784 @ 0x140801784
 * Callers:
 *     NaptrDnsRecordConvert_1 @ 0x140801108 (NaptrDnsRecordConvert_1.c)
 *     sub_140801624 @ 0x140801624 (sub_140801624.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140801784(PVOID P, unsigned int a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_140C22BE0) = a2;
    Pool2 = (void *)ExAllocatePool2(64LL, a2, 1919052136LL);
    qword_140C22BD8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, P, (unsigned int)dword_140C22BE0);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}

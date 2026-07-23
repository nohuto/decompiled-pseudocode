/*
 * XREFs of sub_140909EB0 @ 0x140909EB0
 * Callers:
 *     sub_1409098C0 @ 0x1409098C0 (sub_1409098C0.c)
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140909EB0(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  ULONG *Pool2; // rbp
  char v4; // si
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = a1;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( a1 >= 0x20 || a1 && (dword_140C4AFE0 & 8) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    Pool2 = (ULONG *)ExAllocatePool2(256LL, 4 * ((unsigned int)(dword_140C4B004 + 31) >> 5), 1768710472LL);
    if ( Pool2 )
    {
      BitMapHeader.SizeOfBitMap = dword_140C4B004;
      v4 = 1;
      BitMapHeader.Buffer = Pool2;
      RtlClearAllBits(&BitMapHeader);
      ExAcquireFastMutex(&stru_140C4B020);
      if ( !*((_QWORD *)&stru_140C4ADE0.Buffer + 2 * v2) )
      {
        ++dword_140C4B00C;
        v4 = 0;
        *(&stru_140C4ADE0 + v2) = BitMapHeader;
      }
      KeReleaseGuardedMutex(&stru_140C4B020);
      if ( v4 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}

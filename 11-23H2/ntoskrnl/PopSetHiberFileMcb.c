/*
 * XREFs of PopSetHiberFileMcb @ 0x140800A98
 * Callers:
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140988EE0 (PopResizeHiberFile.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, unsigned int a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_140C3CDE0) = a2;
    Pool2 = (void *)ExAllocatePool2(64LL, a2, 1919052136LL);
    qword_140C3CDD8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, P, (unsigned int)dword_140C3CDE0);
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

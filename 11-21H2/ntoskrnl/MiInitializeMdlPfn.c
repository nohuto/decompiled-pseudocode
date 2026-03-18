/*
 * XREFs of MiInitializeMdlPfn @ 0x140589CEC
 * Callers:
 *     MiInitializeMdlSinglePage @ 0x14045B962 (MiInitializeMdlSinglePage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14058A110 (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1405B1A10 (MmAllocateSecureKernelPages.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  char v4; // cl
  char result; // al
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( (a2 & 0x100) != 0 )
  {
    v4 = *(_BYTE *)(a1 + 34);
    if ( (v4 & 7) != 5 )
      *(_BYTE *)(a1 + 34) = v4 & 0xF8 | 5;
    result = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    *(_QWORD *)(a1 + 24) = v6;
    v7 = 0LL;
    if ( (a2 & 0x80000200) == 0 )
      v7 = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 8) = v7;
    if ( a2 < 0 )
      *(_QWORD *)(a1 + 24) = v6 & 0xBFFFFFFFFFFFFFFFuLL;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1);
      MiSetPfnIdentity(a1, 3);
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_140C50848);
    }
    result = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = result;
    if ( a2 < 0 )
      result = MiSetPfnIdentity(a1, 1);
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_DWORD *)(a1 + 36) = 0;
  return result;
}

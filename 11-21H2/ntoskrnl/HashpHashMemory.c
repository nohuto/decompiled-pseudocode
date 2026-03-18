/*
 * XREFs of HashpHashMemory @ 0x140A3731C
 * Callers:
 *     MinCryptHashMemory @ 0x140652894 (MinCryptHashMemory.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     SymCryptSha256Result @ 0x1403FCC10 (SymCryptSha256Result.c)
 *     SymCryptSha384Result @ 0x140401E3C (SymCryptSha384Result.c)
 *     SymCryptSha512Result @ 0x14040362C (SymCryptSha512Result.c)
 *     SymCryptSha1Result @ 0x140404980 (SymCryptSha1Result.c)
 *     SymCryptMd5Result @ 0x140405390 (SymCryptMd5Result.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HashpHashBytes @ 0x140A378B4 (HashpHashBytes.c)
 *     HashpInitHash @ 0x140A3792C (HashpInitHash.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall HashpHashMemory(unsigned int a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5)
{
  char v5; // r15
  unsigned int *Pool2; // rax
  unsigned int *v10; // rbx
  int inited; // ebp
  size_t v12; // r8
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi

  v5 = byte_140CE21F0;
  if ( byte_140CE21F0 )
    Pool2 = (unsigned int *)ExAllocateFromNPagedLookasideList(&stru_140D04500);
  else
    Pool2 = (unsigned int *)ExAllocatePool2(258LL, 240LL, 1919109443LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = a1;
    inited = HashpInitHash(Pool2, a5);
    if ( inited >= 0 )
    {
      if ( *(_DWORD *)a3 )
        HashpHashBytes(v10, *(_QWORD *)(a3 + 8));
      switch ( *v10 )
      {
        case 0x8003u:
          SymCryptMd5Result((__int64)(v10 + 4), a4);
          break;
        case 0x8004u:
          SymCryptSha1Result(v10 + 4, a4);
          break;
        case 0x800Cu:
          SymCryptSha256Result(v10 + 4, a4);
          break;
        case 0x800Du:
          SymCryptSha384Result((__int64)(v10 + 4), a4);
          break;
        case 0x800Eu:
          SymCryptSha512Result(v10 + 4, a4);
          break;
      }
      goto LABEL_30;
    }
  }
  else
  {
    inited = -1073741801;
  }
  v12 = 0LL;
  v13 = a1 - 32771;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 8;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v12 = 64LL;
        }
        else
        {
          v12 = 48LL;
        }
      }
      else
      {
        v12 = 32LL;
      }
    }
    else
    {
      v12 = 20LL;
    }
  }
  else
  {
    v12 = 16LL;
  }
  memset(a4, 0, v12);
  if ( v10 )
  {
LABEL_30:
    if ( v5 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140D04500, v10);
    else
      ExFreePoolWithTag(v10, 0x72634943u);
  }
  return (unsigned int)inited;
}

/*
 * XREFs of sub_140858330 @ 0x140858330
 * Callers:
 *     sub_140857F38 @ 0x140857F38 (sub_140857F38.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A34B94 @ 0x140A34B94 (sub_140A34B94.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140858330(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  size_t v8; // r15
  char *PoolWithTag; // rax
  char *v10; // rsi
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 3 && *(_DWORD *)(a1 + 8) == 12 * (*(unsigned int *)(a1 + 8) / 0xCuLL) )
  {
    v4 = *(_DWORD *)(a1 + 8) / 0xCu;
    v5 = 8 * v4 + 8;
    if ( v5 > 0x1000 )
    {
      return 2;
    }
    else if ( v4 )
    {
      if ( v4 > *(_DWORD *)(a2 + 4) )
      {
        v8 = v5;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x6453704Cu);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v8);
          v6 = sub_140A34B94(a1 + 12, v4, a2, v10);
          if ( !v6 )
          {
            memmove((void *)(a2 + 8), v10 + 8, 8LL * v4);
            _InterlockedOr(v11, 0);
            *(_DWORD *)(a2 + 4) = v4;
          }
          ExFreePoolWithTag(v10, 0x6453704Cu);
        }
        else
        {
          return 7;
        }
      }
      else
      {
        return v4 < *(_DWORD *)(a2 + 4) ? 3 : 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 1;
  }
  return v6;
}

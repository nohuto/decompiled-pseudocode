/*
 * XREFs of sub_14064D064 @ 0x14064D064
 * Callers:
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1408138F0 @ 0x1408138F0 (sub_1408138F0.c)
 *     sub_140A2150C @ 0x140A2150C (sub_140A2150C.c)
 *     sub_140A21578 @ 0x140A21578 (sub_140A21578.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14064D064(__int64 a1, const void **a2, unsigned int *a3)
{
  int v3; // eax
  int v6; // edi
  PVOID PoolWithTag; // rax
  void *v8; // rsi
  size_t v9; // r15
  unsigned int v10; // r14d
  SIZE_T v11; // rbx
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // r8
  void *v15; // rbx
  char v17; // [rsp+60h] [rbp+8h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+20h]

  v3 = *(_DWORD *)(a1 + 48);
  v17 = 0;
  LODWORD(NumberOfBytes) = 0;
  v6 = 0;
  if ( (v3 & 8) == 0 )
  {
    v6 = sub_140A2150C(0LL);
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v6 = sub_140A2150C(PoolWithTag);
        if ( v6 >= 0 )
        {
          v6 = sub_140A21578(v8, &v17);
          if ( v6 >= 0 )
          {
            if ( v17 )
            {
              v9 = (unsigned int)NumberOfBytes;
              v10 = NumberOfBytes + 20;
              v11 = (unsigned int)(NumberOfBytes + 20);
              v12 = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x4B444342u);
              v13 = v12;
              if ( v12 )
              {
                memset(v12, 0, v11);
                v14 = v10;
                v15 = (void *)*a2;
                if ( v10 >= *a3 )
                  v14 = *a3;
                memmove(v13, *a2, v14);
                memmove(v13 + 20, v8, v9);
                ExFreePoolWithTag(v15, 0x4B444342u);
                *a2 = v13;
                *a3 = v10;
              }
              else
              {
                v6 = -1073741801;
              }
            }
          }
          else
          {
            sub_1408138F0(4LL, L"SyspartIsSpace failed for partition path: %s", v8);
          }
        }
        ExFreePoolWithTag(v8, 0x4B444342u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v6;
}

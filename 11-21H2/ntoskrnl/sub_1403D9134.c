/*
 * XREFs of sub_1403D9134 @ 0x1403D9134
 * Callers:
 *     sub_140AFCEF0 @ 0x140AFCEF0 (sub_140AFCEF0.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     sub_1403D92FC @ 0x1403D92FC (sub_1403D92FC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char sub_1403D9134()
{
  char v0; // bl
  PVOID PoolWithTag; // rax
  ULONG MaximumProcessorCount; // eax
  SIZE_T v3; // rdi
  ULONG v4; // ebp
  PVOID v5; // rax
  unsigned int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // rsi
  struct _KPRCB *v9; // rax
  void *v10; // rcx
  __int64 v11; // rdx
  PVOID v12; // rax
  PVOID v13; // rax

  v0 = 0;
  qword_140C10DA8 = 0LL;
  qword_140C10DB0 = 0LL;
  qword_140C10D98 = 0LL;
  qword_140C10DB8 = 0LL;
  qword_140C10DA0 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x61537845u);
  qword_140C10DA8 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v3 = 8LL * MaximumProcessorCount;
    v4 = MaximumProcessorCount;
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x61537845u);
    qword_140C10DB0 = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, v3);
      v6 = dword_140D06884;
      v7 = 0;
      if ( v4 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          v9 = v7 >= v6 ? KeGetCurrentPrcb() : (struct _KPRCB *)sub_140348800(v7);
          v10 = (void *)sub_140349710(
                          NonPagedPoolNx,
                          0x80uLL,
                          1632860229LL,
                          *(unsigned __int16 *)(*((_QWORD *)v9 + 24) + 138LL) | 0x80000000,
                          0);
          *(_QWORD *)(v8 + qword_140C10DB0) = v10;
          if ( !v10 )
            break;
          memset(v10, 0, 0x80uLL);
          v11 = sub_140348800(v7);
          if ( v11 )
            *(_QWORD *)(v11 + 34480) = *(_QWORD *)(v8 + qword_140C10DB0);
          ++v7;
          v8 += 8LL;
          if ( v7 >= v4 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x61537845u);
        qword_140C10D98 = (__int64)v12;
        if ( v12 )
        {
          sub_1403D92FC(v12, 0LL);
          v13 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x61537845u);
          qword_140C10DB8 = (ULONG_PTR)v13;
          if ( v13 )
          {
            sub_1403D92FC(v13, 1LL);
            return 1;
          }
        }
      }
    }
  }
  return v0;
}

/*
 * XREFs of ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E504
 * Callers:
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006E694 (SmmUnmapNonPagedObjectFromIommu.c)
 *     ?SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x1C006E970 (-SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z.c)
 * Callees:
 *     SmmUnmapIommu @ 0x1C002FC9C (SmmUnmapIommu.c)
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006DBA8 (SmmIoMmuUnmapStagingMdl.c)
 */

void __fastcall SmmUnmapContiguousRangeFromIommu(
        struct SYSMM_IOMMU *a1,
        __int64 a2,
        struct _MDL *a3,
        SIZE_T a4,
        bool a5)
{
  SIZE_T v8; // r14
  PMDL Mdl; // rax
  _DWORD *v10; // rdi
  PMDL v11; // rdx
  struct _MDL *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *p_Next; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h]
  int v21; // [rsp+30h] [rbp-50h]
  int v22; // [rsp+34h] [rbp-4Ch]
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  struct _MDL *v28; // [rsp+70h] [rbp-10h] BYREF

  v8 = a4 >> 12;
  Mdl = MmCreateMdl(0LL, 0LL, a4);
  v10 = Mdl;
  if ( Mdl )
  {
    v11 = Mdl + 1;
    if ( (_DWORD)v8 )
    {
      v12 = Mdl + 1;
      v13 = (unsigned int)v8;
      do
      {
        v12->Next = a3;
        a3 = (struct _MDL *)((char *)a3 + 1);
        v12 = (struct _MDL *)((char *)v12 + 8);
        --v13;
      }
      while ( v13 );
    }
    if ( a5 )
    {
      v21 = v10[10] >> 12;
      v14 = *((_QWORD *)a1 + 20);
      p_Next = &v11->Next;
      v20 = v14 + 48;
      v22 = *((_DWORD *)a1 + 56);
      v23 = 0LL;
      SmmIoMmuUnmapStagingMdl((__int64)a1, a2, (unsigned int *)&p_Next);
    }
    else
    {
      SmmUnmapIommu((__int64)a1, a2, v10);
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v24 = 0LL;
    v15 = 4096;
    v25 = 56;
    v16 = 0;
    v26 = 0LL;
    v27 = 4096LL;
    if ( (_DWORD)v8 )
    {
      while ( 1 )
      {
        v28 = a3;
        v17 = a2 ? a2 + (v16 << 12) : 0LL;
        if ( a5 )
        {
          p_Next = &v28;
          v18 = *((_QWORD *)a1 + 20);
          v21 = v15 >> 12;
          v20 = v18 + 48;
          v22 = *((_DWORD *)a1 + 56);
          v23 = 0LL;
          SmmIoMmuUnmapStagingMdl((__int64)a1, v17, (unsigned int *)&p_Next);
        }
        else
        {
          SmmUnmapIommu((__int64)a1, v17, &v24);
        }
        ++v16;
        a3 = (struct _MDL *)((char *)a3 + 1);
        if ( v16 >= (unsigned int)v8 )
          break;
        v15 = v27;
      }
    }
  }
}

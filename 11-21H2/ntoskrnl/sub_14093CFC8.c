/*
 * XREFs of sub_14093CFC8 @ 0x14093CFC8
 * Callers:
 *     sub_14093A0B8 @ 0x14093A0B8 (sub_14093A0B8.c)
 *     sub_14093A908 @ 0x14093A908 (sub_14093A908.c)
 *     sub_14093A954 @ 0x14093A954 (sub_14093A954.c)
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 *     sub_14093C640 @ 0x14093C640 (sub_14093C640.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14093CFC8(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  PVOID *v14; // rcx
  unsigned int i; // edi
  void *v16; // rcx
  void *v17; // rcx

  if ( a1 )
  {
    sub_14093C640(a1);
    v2 = *(void **)(a1 + 560);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x706D644Cu);
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    v3 = *(void **)(a1 + 592);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x706D644Cu);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    v4 = *(void **)(a1 + 648);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    v5 = *(void **)(a1 + 672);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x706D644Cu);
      *(_QWORD *)(a1 + 672) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
    {
      sub_14096ED20(v6, *(unsigned int *)(a1 + 152));
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 1040);
    if ( v7 )
    {
      sub_14096ED20(v7, *(unsigned int *)(a1 + 1048));
      *(_QWORD *)(a1 + 1040) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 992);
    if ( v8 )
    {
      sub_14096ED20(v8, *(unsigned int *)(a1 + 1000));
      *(_QWORD *)(a1 + 992) = 0LL;
    }
    sub_14093C2FC(a1);
    v9 = *(void **)(a1 + 896);
    if ( v9 )
    {
      ZwClose(v9);
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    v10 = *(void **)(a1 + 904);
    if ( v10 )
    {
      ZwClose(v10);
      *(_QWORD *)(a1 + 904) = 0LL;
    }
    v11 = *(void **)(a1 + 912);
    if ( v11 )
    {
      ZwClose(v11);
      *(_QWORD *)(a1 + 912) = 0LL;
    }
    v12 = *(void **)(a1 + 1096);
    if ( v12 )
    {
      ObfDereferenceObject(v12);
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
    v13 = *(void **)(a1 + 1088);
    if ( v13 != (void *)-1LL )
    {
      ObCloseHandle(v13, 0);
      *(_QWORD *)(a1 + 1088) = 0LL;
    }
    v14 = *(PVOID **)(a1 + 1112);
    if ( v14 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 1104); ++i )
      {
        v14 = *(PVOID **)(a1 + 1112);
        if ( v14[i] )
        {
          ExFreePoolWithTag(v14[i], 0x706D644Cu);
          *(_QWORD *)(*(_QWORD *)(a1 + 1112) + 8LL * i) = 0LL;
          v14 = *(PVOID **)(a1 + 1112);
        }
      }
      ExFreePoolWithTag(v14, 0x706D644Cu);
      *(_QWORD *)(a1 + 1112) = 0LL;
      *(_DWORD *)(a1 + 1104) = 0;
    }
    v16 = *(void **)(a1 + 1120);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x706D644Cu);
      *(_QWORD *)(a1 + 1120) = 0LL;
    }
    v17 = *(void **)(a1 + 1128);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x706D644Cu);
      *(_QWORD *)(a1 + 1128) = 0LL;
    }
  }
}

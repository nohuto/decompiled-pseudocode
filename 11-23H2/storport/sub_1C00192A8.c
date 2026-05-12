/*
 * XREFs of sub_1C00192A8 @ 0x1C00192A8
 * Callers:
 *     sub_1C0019218 @ 0x1C0019218 (sub_1C0019218.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00192A8(__int64 a1)
{
  IRP *v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  struct _MDL *v9; // rcx
  IRP *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  struct _MDL *v17; // rcx

  v2 = *(IRP **)(a1 + 8);
  if ( v2 )
  {
    IoFreeIrp(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 2) == 40 )
    {
      *(_QWORD *)(v3 + 80) = 0LL;
      if ( !*(_DWORD *)(v3 + 20) )
      {
        v4 = 0;
        if ( *(_DWORD *)(v3 + 56) )
        {
          while ( 1 )
          {
            v5 = *(unsigned int *)(v3 + 4LL * v4 + 120);
            if ( (unsigned int)v5 >= 0x80 )
            {
              v6 = *(unsigned int *)(v3 + 16);
              if ( (unsigned int)v5 <= (unsigned int)v6 && *(_DWORD *)(v5 + v3) == 64 && v5 + 40 <= v6 )
                break;
            }
            if ( ++v4 >= *(_DWORD *)(v3 + 56) )
              goto LABEL_12;
          }
          *(_QWORD *)((unsigned int)v5 + v3 + 16) = 0LL;
        }
      }
    }
    else
    {
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) = 0LL;
    }
LABEL_12:
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x72536152u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v7 = *(void **)(a1 + 32);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x4E536152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v8 = *(void **)(a1 + 40);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v9 = *(struct _MDL **)(a1 + 16);
  if ( v9 )
    IoFreeMdl(v9);
  v10 = *(IRP **)(a1 + 64);
  if ( v10 )
  {
    IoFreeIrp(v10);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      *(_QWORD *)(v11 + 80) = 0LL;
      if ( !*(_DWORD *)(v11 + 20) )
      {
        v12 = 0;
        if ( *(_DWORD *)(v11 + 56) )
        {
          while ( 1 )
          {
            v13 = *(unsigned int *)(v11 + 4LL * v12 + 120);
            if ( (unsigned int)v13 >= 0x80 )
            {
              v14 = *(unsigned int *)(v11 + 16);
              if ( (unsigned int)v13 <= (unsigned int)v14 && *(_DWORD *)(v13 + v11) == 64 && v13 + 40 <= v14 )
                break;
            }
            if ( ++v12 >= *(_DWORD *)(v11 + 56) )
              goto LABEL_30;
          }
          *(_QWORD *)((unsigned int)v13 + v11 + 16) = 0LL;
        }
      }
    }
    else
    {
      *(_QWORD *)(v11 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) = 0LL;
    }
LABEL_30:
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x72536152u);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v15 = *(void **)(a1 + 88);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x4E536152u);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v16 = *(void **)(a1 + 96);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x32316152u);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
  }
  v17 = *(struct _MDL **)(a1 + 72);
  if ( v17 )
    IoFreeMdl(v17);
}

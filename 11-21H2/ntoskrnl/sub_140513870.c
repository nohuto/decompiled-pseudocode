/*
 * XREFs of sub_140513870 @ 0x140513870
 * Callers:
 *     <none>
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140513BCC @ 0x140513BCC (sub_140513BCC.c)
 *     sub_14051541C @ 0x14051541C (sub_14051541C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140513870(__int64 a1, __int64 a2)
{
  struct _MDL *v3; // rcx
  __int64 *v4; // rbx
  KIRQL v5; // al
  __int64 **v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rbx
  void *v19; // rcx
  unsigned int i; // ebx
  __int64 v21; // rbx
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rbx
  void *v27; // rbx
  void *v28; // rcx
  __int64 v29; // rdx

  v3 = *(struct _MDL **)(a1 + 296);
  if ( v3 )
  {
    IoFreeMdl(v3);
    *(_QWORD *)(a1 + 296) = 0LL;
  }
  v4 = (__int64 *)(a1 + 456);
  if ( *(_QWORD *)(a1 + 456) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C4E2F0);
    v6 = *(__int64 ***)(a1 + 464);
    v7 = v5;
    v8 = (__int64 *)*v4;
    if ( *(__int64 **)(*v4 + 8) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = (__int64)v6;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4E2F0);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v7 + 1);
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)a2;
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  if ( *(_QWORD *)(a1 + 504) )
  {
    *(_BYTE *)(a1 + 516) = 0;
    sub_14051541C(a1);
  }
  v14 = *(_QWORD *)(a1 + 536);
  if ( v14 )
  {
    sub_14042A5E0(v14, a2);
    *(_QWORD *)(a1 + 536) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 432) && !*(_BYTE *)(a1 + 337) )
  {
    if ( !*(_BYTE *)(a1 + 434) )
    {
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *(_QWORD *)(v15 + 16);
      if ( (*(_BYTE *)(v16 + 48) & 1) != 0 )
      {
        do
        {
          for ( i = 0; i < *(_DWORD *)(v15 + 8); ++i )
            sub_140513BCC(a1);
          v21 = *(_QWORD *)v15;
          sub_1403B1B5C(v14, v15);
          v15 = v21;
        }
        while ( v21 );
      }
      else
      {
        sub_1403B1B5C(v14, v16);
        sub_1403B1B5C(v17, v15);
        if ( *(_BYTE *)(a1 + 336) )
        {
          v18 = *(void **)(a1 + 320);
          if ( v18 )
          {
            v19 = *(void **)(a1 + 328);
            if ( v19 )
              MmUnmapLockedPages(v19, *(PMDL *)(a1 + 320));
            sub_140221A30((ULONG_PTR)v18, 0);
            ExFreePoolWithTag(v18, 0);
          }
        }
        else
        {
          MmFreeContiguousMemory(*(PVOID *)(a1 + 320));
        }
      }
      v22 = *(_QWORD *)(a1 + 16);
      goto LABEL_42;
    }
    v23 = *(_DWORD *)(a1 + 32);
    v24 = *(_QWORD *)(a1 + 24);
    if ( v23 )
    {
      v25 = v23;
      do
      {
        v26 = *(_QWORD *)(v24 + 8);
        sub_140513BCC(a1);
        v24 = v26;
        --v25;
      }
      while ( v25 );
    }
    v27 = *(void **)(a1 + 320);
    if ( v27 )
    {
      v28 = *(void **)(a1 + 328);
      if ( v28 )
        MmUnmapLockedPages(v28, *(PMDL *)(a1 + 320));
      sub_140221A30((ULONG_PTR)v27, 0);
      ExFreePoolWithTag(v27, 0);
    }
    v29 = *(_QWORD *)(a1 + 48);
    if ( v29 )
    {
      sub_1403B1B5C(v14, *(_QWORD *)(v29 + 16));
      v22 = *(_QWORD *)(a1 + 48);
LABEL_42:
      sub_1403B1B5C(v14, v22);
    }
  }
}

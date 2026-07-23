/*
 * XREFs of sub_140931100 @ 0x140931100
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     MmFreeContiguousMemorySpecifyCache @ 0x140213380 (MmFreeContiguousMemorySpecifyCache.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_14054BFF0 @ 0x14054BFF0 (sub_14054BFF0.c)
 *     sub_14054C0E0 @ 0x14054C0E0 (sub_14054C0E0.c)
 *     sub_14096ED20 @ 0x14096ED20 (sub_14096ED20.c)
 */

void __fastcall sub_140931100(__int64 a1, SIZE_T a2, MEMORY_CACHING_TYPE a3)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v4 = *(void **)(a1 + 34568);
  if ( v4 )
  {
    if ( (struct _KPRCB *)a1 == KeGetCurrentPrcb() )
    {
      sub_14054BFF0(589843, &v7);
      sub_14054C0E0(589843, v7 & 0xFFFFFFFFFFFFFFFEuLL);
      v4 = *(void **)(a1 + 34568);
    }
    if ( (dword_140D0688C & 2) != 0 )
      MmUnmapVideoDisplay(v4, 1uLL);
    else
      MmFreeContiguousMemorySpecifyCache(v4, a2, a3);
    *(_QWORD *)(a1 + 34568) = 0LL;
  }
  v5 = *(void **)(a1 + 35000);
  if ( v5 )
    MmFreeContiguousMemorySpecifyCache(v5, a2, a3);
  v6 = *(_QWORD *)(a1 + 34560);
  if ( v6 )
    sub_14096ED20(v6, 20480LL);
}

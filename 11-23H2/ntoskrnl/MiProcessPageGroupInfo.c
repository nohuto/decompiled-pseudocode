/*
 * XREFs of MiProcessPageGroupInfo @ 0x14032F7A0
 * Callers:
 *     MiZeroAndReleasePages @ 0x1402D32C0 (MiZeroAndReleasePages.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiConvertEntireLargePageToSmall @ 0x1402D2D60 (MiConvertEntireLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x1402E8B70 (MiGetPfnPageSizeIndex.c)
 *     MiZeroInParallel @ 0x1403044C0 (MiZeroInParallel.c)
 *     MiDereferencePageChains @ 0x14032F8BC (MiDereferencePageChains.c)
 */

__int64 __fastcall MiProcessPageGroupInfo(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r12d
  _QWORD **v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int PfnPageSizeIndex; // eax

  MiZeroInParallel(a1);
  v6 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v7 = (_QWORD **)(a1 + 128);
    do
    {
      v8 = *v7;
      if ( *v7 != v7 )
      {
        do
        {
          v9 = (_QWORD *)*v8;
          if ( (v8[5] & 0x10000000000LL) != 0 )
          {
            PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v8);
            v10 = PfnPageSizeIndex;
            if ( a3 )
              MiConvertEntireLargePageToSmall((__int64)v8, PfnPageSizeIndex, 0, 0, 0LL, 0LL, 0LL);
          }
          else
          {
            v10 = 3;
          }
          v11 = a2 + 24LL * v10;
          v12 = *(_QWORD **)(v11 + 8);
          if ( *v12 != v11 )
            __fastfail(3u);
          v8[1] = v12;
          *v8 = v11;
          *v12 = v8;
          *(_QWORD *)(v11 + 8) = v8;
          v8 = v9;
          ++*(_QWORD *)(v11 + 16);
        }
        while ( v9 != v7 );
      }
      v7 += 5;
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a1 + 24) );
  }
  return MiDereferencePageChains(a1);
}

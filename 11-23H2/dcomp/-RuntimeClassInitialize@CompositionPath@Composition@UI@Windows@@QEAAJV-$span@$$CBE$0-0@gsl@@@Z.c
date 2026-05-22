/*
 * XREFs of ?RuntimeClassInitialize@CompositionPath@Composition@UI@Windows@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012FD20
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV?$span@$$CBE$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPath@Composition@UI@Windows@@AEAV?$span@$$CBE$0?0@gsl@@@Z @ 0x18012F9F4 (--$MakeAndInitialize2@VCompositionPath@Composition@UI@Windows@@V1234@AEAV-$span@$$CBE$0-0@gsl@@@.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x180040F88 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?Initialize@CPathData@@QEAAXV?$span@$$CBE$0?0@gsl@@@Z @ 0x1801B3198 (-Initialize@CPathData@@QEAAXV-$span@$$CBE$0-0@gsl@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPath::RuntimeClassInitialize(__int64 a1, __int128 *a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = operator new(0x50uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x50uLL);
    *(_DWORD *)(v5 + 52) = 0;
    *(_DWORD *)(v5 + 56) = 0;
    *(_QWORD *)v5 = &CPathData::`vftable';
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_BYTE *)(v5 + 72) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)(a1 + 64), v5);
  v6 = *(_QWORD *)(a1 + 64);
  v8 = *a2;
  CPathData::Initialize(v6, &v8);
  return 0LL;
}

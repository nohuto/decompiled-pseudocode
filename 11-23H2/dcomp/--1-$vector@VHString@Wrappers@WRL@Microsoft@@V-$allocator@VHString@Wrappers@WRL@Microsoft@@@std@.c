/*
 * XREFs of ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180151614
 * Callers:
 *     ?StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAUIAnimationObject@234@PEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180152110 (-StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::~vector<Microsoft::WRL::Wrappers::HString>(__int64 a1)
{
  HSTRING *v1; // rbx
  HSTRING *v3; // rsi
  void *v4; // rcx
  __int64 v5; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(HSTRING **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(HSTRING **)(a1 + 8);
    while ( v1 != v3 )
    {
      WindowsDeleteString(*v1);
      *v1++ = 0LL;
    }
    v4 = *(void **)a1;
    v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    v6 = *(void **)a1;
    v7 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (v5 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v7);
      v4 = v6;
    }
    operator delete(v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

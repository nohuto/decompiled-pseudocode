/*
 * XREFs of ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x1802A1710
 * Callers:
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@$4PPPPPPPM@DFI@EAAJXZ @ 0x180120BD0 (-CopyFrontToBackBuffer@CConversionSwapChain@@$4PPPPPPPM@DFI@EAAJXZ.c)
 * Callees:
 *     ?NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180030050 (-NotifyRenderedRect@CLegacySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x180034430 (-CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180034874 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D87C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 */

__int64 __fastcall CConversionSwapChain::CopyFrontToBackBuffer(CConversionSwapChain *this)
{
  int v1; // eax
  __int64 v3; // rdx
  FastRegion::Internal::CRgnData *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-50h]
  int *v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+50h] [rbp-38h]
  int v14[4]; // [rsp+60h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 99);
  if ( !v1 || v1 == 3 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(
      *((FastRegion::Internal::CRgnData **)this + 84),
      (struct FastRegion::CRegion::Iterator *)v9);
    while ( (unsigned __int64)v11 < v10 )
    {
      v14[1] = *v11;
      v14[3] = v11[2];
      v3 = 2 * v13;
      v14[0] = *(_DWORD *)(v12 + 4 * v3);
      v14[2] = *(_DWORD *)(v12 + 4 * v3 + 4);
      CLegacySwapChain::NotifyRenderedRect((__int64)this, v14);
      FastRegion::Internal::CRgnData::StepIterator(v4, (struct FastRegion::CRegion::Iterator *)v9);
    }
  }
  if ( ((*((_DWORD *)this + 99) - 1) & 0xFFFFFFFD) == 0 && *((_BYTE *)this + 776) )
    CLegacySwapChain::NotifyRenderedRect((__int64)this, (int *)this + 190);
  v5 = CLegacySwapChain::CopyFrontToBackBuffer(this);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Eu, 0LL);
  return v7;
}

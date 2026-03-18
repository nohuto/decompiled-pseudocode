/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18029FB00
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJXZ @ 0x1801204F0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAJXZ.c)
 * Callees:
 *     ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x1800186CC (-CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRe.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180034874 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D87C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::CopyFrontToBackBuffer(CLegacyStereoSwapChain *this)
{
  FastRegion::Internal::CRgnData *v2; // rcx
  int v3; // r8d
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  FastRegion::Internal::CRgnData *v8; // rcx
  unsigned int v10; // [rsp+50h] [rbp-48h] BYREF
  int v11; // [rsp+54h] [rbp-44h]
  int v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+5Ch] [rbp-3Ch]
  char v14[8]; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-30h]
  int *v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+80h] [rbp-18h]

  v2 = *(FastRegion::Internal::CRgnData **)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68))
                                          + 16LL);
  if ( *(_DWORD *)v2 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(v2, (struct FastRegion::CRegion::Iterator *)v14);
    while ( (unsigned __int64)v16 < v15 )
    {
      v3 = v16[2];
      v4 = 2 * v18;
      v11 = *v16;
      v13 = v3;
      v5 = *(_DWORD *)(v17 + 4 * v4);
      v6 = *((_QWORD *)this + 29);
      v12 = *(_DWORD *)(v17 + 4 * v4 + 4);
      v7 = *((_QWORD *)this + 10);
      v10 = v5;
      CD3DDevice::CopySubresourceRegion(v7, *((_QWORD *)this + 30), 1, (int *)&v10, v6, 1u, v5, v11, 0);
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v14);
    }
  }
  return CLegacySwapChain::CopyFrontToBackBuffer(this);
}

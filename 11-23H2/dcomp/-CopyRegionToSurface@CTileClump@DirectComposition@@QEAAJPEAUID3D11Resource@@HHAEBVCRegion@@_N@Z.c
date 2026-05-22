/*
 * XREFs of ?CopyRegionToSurface@CTileClump@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBVCRegion@@_N@Z @ 0x1800055D0
 * Callers:
 *     ?CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K@Z @ 0x1800054F4 (-CopyRegionToClump@CTileClump@DirectComposition@@QEAAJPEAV12@PEAUID3D11Texture2D@@AEBVCRegion@@K.c)
 *     ?CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z @ 0x1800FD9C0 (-CopySurface@CVirtualSurface@DirectComposition@@QEAAJPEAUID3D11Resource@@HHAEBUtagRECT@@_N@Z.c)
 * Callees:
 *     ?GetD3D11Texture2DAndContentOrigin@CTileClump@DirectComposition@@QEAAJPEAPEAUID3D11Texture2D@@PEAI1@Z @ 0x18000580C (-GetD3D11Texture2DAndContentOrigin@CTileClump@DirectComposition@@QEAAJPEAPEAUID3D11Texture2D@@PE.c)
 *     ?CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchSurfaceManager@2@@Z @ 0x18000BE74 (-CopySurface@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@II0AEBUtagRECT@@PEAVCScratchS.c)
 *     ?RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180034FA8 (-RemoveGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ?SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z @ 0x180038D94 (-SetEmptyGuardRect@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Texture2D@@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800816D8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CTileClump::CopyRegionToSurface(
        DirectComposition::CTileClump *this,
        struct ID3D11Resource *a2,
        int a3,
        int a4,
        const struct CRegion *a5,
        bool a6)
{
  _DWORD *v9; // rsi
  int v10; // eax
  _DWORD *v11; // rsi
  FastRegion::Internal::CRgnData *v12; // rcx
  int v13; // r15d
  __int64 v14; // r10
  int v15; // r8d
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // r11d
  LONG v19; // edx
  unsigned int v20; // r9d
  int v21; // eax
  __int64 v22; // rax
  FastRegion::Internal::CRgnData *v23; // rcx
  struct ID3D11Texture2D *v25; // [rsp+40h] [rbp-39h] BYREF
  struct ID3D11Texture2D *v26; // [rsp+48h] [rbp-31h] BYREF
  struct tagRECT v27; // [rsp+50h] [rbp-29h] BYREF
  _DWORD *v28; // [rsp+60h] [rbp-19h] BYREF
  __int128 v29; // [rsp+68h] [rbp-11h]
  FastRegion::Internal::CRgnData *v30; // [rsp+78h] [rbp-1h]
  int v31; // [rsp+80h] [rbp+7h]
  int v32; // [rsp+84h] [rbp+Bh]
  unsigned int v33; // [rsp+D0h] [rbp+57h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+5Fh] BYREF
  int v35; // [rsp+E0h] [rbp+67h]

  v35 = a3;
  v25 = 0LL;
  v26 = 0LL;
  DirectComposition::CTileClump::GetD3D11Texture2DAndContentOrigin(this, &v25, &v34, &v33);
  ((void (__fastcall *)(struct ID3D11Resource *, GUID *, struct ID3D11Texture2D **))a2->lpVtbl->QueryInterface)(
    a2,
    &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
    &v26);
  DirectComposition::CDxDevice::RemoveGuardRect((DirectComposition::CDxDevice *)(*((_QWORD *)this + 5) + 8LL), v25);
  if ( a6 )
    DirectComposition::CDxDevice::RemoveGuardRect((DirectComposition::CDxDevice *)(*((_QWORD *)this + 5) + 8LL), v26);
  v9 = *(_DWORD **)a5;
  v28 = v9;
  v10 = *v9;
  if ( !*v9 )
  {
    v29 = 0LL;
LABEL_17:
    v11 = (_DWORD *)*((_QWORD *)&v29 + 1);
    goto LABEL_5;
  }
  v31 = 0;
  v11 = v9 + 3;
  *((_QWORD *)&v29 + 1) = v11;
  v12 = (FastRegion::Internal::CRgnData *)((char *)v11 + (int)v11[1]);
  *(_QWORD *)&v29 = &v11[2 * v10 - 2];
  v30 = v12;
  v32 = ((__int64)v11 + (int)v11[3] - (_QWORD)v12 + 8) >> 3;
  if ( v32 <= 0 )
  {
    FastRegion::Internal::CRgnData::StepIterator(v12, (struct FastRegion::CRegion::Iterator *)&v28);
    goto LABEL_17;
  }
LABEL_5:
  v13 = v35;
  while ( (unsigned __int64)v11 < (unsigned __int64)v29 )
  {
    v14 = 2 * v31;
    v15 = *((_DWORD *)v30 + v14);
    v16 = *(_DWORD **)(*((_QWORD *)this + 9) + 16LL);
    v17 = v16[18] + (v16[22] & 1);
    v18 = v16[19] + ((v16[22] >> 2) & 1);
    v19 = v18 + *v11 - *((_DWORD *)this + 15);
    v20 = *v11 - a4;
    LODWORD(v16) = v17 + *((_DWORD *)v30 + v14 + 1) - *((_DWORD *)this + 14);
    v27.left = v17 + v15 - *((_DWORD *)this + 14);
    v21 = v11[2] - *((_DWORD *)this + 15);
    v27.right = (int)v16;
    v27.bottom = v18 + v21;
    v22 = *((_QWORD *)this + 5);
    v27.top = v19;
    DirectComposition::CDxDevice::CopySurface(
      (DirectComposition::CDxDevice *)(v22 + 8),
      a2,
      v15 - v13,
      v20,
      (struct ID3D11Resource *)v25,
      &v27,
      *(struct DirectComposition::CScratchSurfaceManager **)(v22 + 304));
    FastRegion::Internal::CRgnData::StepIterator(v23, (struct FastRegion::CRegion::Iterator *)&v28);
    v11 = (_DWORD *)*((_QWORD *)&v29 + 1);
  }
  DirectComposition::CDxDevice::SetEmptyGuardRect((DirectComposition::CDxDevice *)(*((_QWORD *)this + 5) + 8LL), v25);
  if ( a6 )
    DirectComposition::CDxDevice::SetEmptyGuardRect((DirectComposition::CDxDevice *)(*((_QWORD *)this + 5) + 8LL), v26);
  if ( v25 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v25->lpVtbl->Release)(v25);
  if ( v26 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v26->lpVtbl->Release)(v26);
  return 0LL;
}

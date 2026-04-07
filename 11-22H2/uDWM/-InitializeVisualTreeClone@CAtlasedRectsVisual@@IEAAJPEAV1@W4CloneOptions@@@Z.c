/*
 * XREFs of ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000AF40
 * Callers:
 *     ?CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18000ADB0 (-CloneVisualTree@CButton@@MEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180012AF0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18000AE54 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x18000B300 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000B4B0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180012DCC (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180015828 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180023050 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAtlasedRectsVisual::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ebx
  const struct _MARGINS *v8; // rdx
  unsigned int v9; // r12d
  CAtlasedImage *v10; // rax
  CAtlasedImage *v11; // rax
  __int64 v12; // rdx
  CAtlasedImage *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  CAtlasedImage *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  CAtlasedImage *v19; // rsi
  const RECT *v20; // rbx
  CAtlasedImage *v21; // rbx
  int v22; // eax
  int v23; // esi
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rsi
  CBaseObject *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  CAtlasedImage **v31; // r9
  CAtlasedImage **v32; // rdx
  CAtlasedImage *v33; // rcx
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  _QWORD *v37; // r9
  unsigned int v38; // eax
  int v39; // [rsp+20h] [rbp-30h]
  CAtlasedImage *v40; // [rsp+30h] [rbp-20h] BYREF
  CAtlasedImage **v41; // [rsp+38h] [rbp-18h] BYREF
  CAtlasedImage *v42; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v40 = 0LL;
  v6 = CVisual::InitializeVisualTreeClone();
  v7 = v6;
  if ( v6 < 0 )
  {
    v35 = (unsigned int)v6;
    v36 = 276LL;
    goto LABEL_58;
  }
  v8 = *(const struct _MARGINS **)(a1 + 280);
  if ( v8 )
    CAtlasedRectsVisual::SetClipMargins((CAtlasedRectsVisual *)a2, v8);
  v9 = 0;
  if ( !*(_DWORD *)(a1 + 272) )
    return 0LL;
  while ( 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 224LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9),
            a3) )
      goto LABEL_37;
    v10 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             128LL);
    if ( !v10 )
      break;
    v11 = CAtlasedImage::CAtlasedImage(v10);
    if ( !v11 )
      break;
    v40 = v11;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9);
    if ( *(_DWORD *)(v12 + 16) != *((_DWORD *)v11 + 4) || *(_DWORD *)(v12 + 20) != *((_DWORD *)v11 + 5) )
    {
      *((_QWORD *)v11 + 2) = *(_QWORD *)(v12 + 16);
      CAtlasedImage::SetDirtyFlags(v11, 1, 0x2000u);
    }
    v13 = v40;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9);
    if ( *((_DWORD *)v40 + 6) != *(_DWORD *)(v14 + 24) || *((_DWORD *)v40 + 7) != *(_DWORD *)(v14 + 28) )
    {
      *((_QWORD *)v40 + 3) = *(_QWORD *)(v14 + 24);
      *((_DWORD *)v13 + 24) |= 1u;
      v15 = *((_QWORD *)v13 + 10);
      if ( v15 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 0x2000LL);
    }
    v16 = v40;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9);
    if ( *((_DWORD *)v40 + 8) != *(_DWORD *)(v17 + 32)
      || *((_DWORD *)v40 + 9) != *(_DWORD *)(v17 + 36)
      || *((_DWORD *)v40 + 10) != *(_DWORD *)(v17 + 40)
      || *((_DWORD *)v40 + 11) != *(_DWORD *)(v17 + 44) )
    {
      *((_OWORD *)v40 + 2) = *(_OWORD *)(v17 + 32);
      *((_DWORD *)v16 + 24) |= 1u;
      v18 = *((_QWORD *)v16 + 10);
      if ( v18 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, 4096LL);
    }
    v19 = v40;
    v20 = *(const RECT **)(*(_QWORD *)(a1 + 248) + 8LL * v9);
    if ( !EqualRect((const RECT *)v40 + 3, v20 + 3) )
    {
      *((RECT *)v40 + 3) = v20[3];
      CAtlasedImage::SetDirtyFlags(v19, 1, 0x2000u);
    }
    v21 = v40;
    v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9) + 64LL);
    if ( *((_DWORD *)v40 + 16) != v22 )
    {
      *((_DWORD *)v40 + 16) = v22;
      CAtlasedImage::SetDirtyFlags(v21, 1, 0x2000u);
      v21 = v40;
    }
    v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9) + 68LL);
    if ( v23 != *((_DWORD *)v21 + 17) )
    {
      *((_DWORD *)v21 + 24) |= 2u;
      v24 = *((_QWORD *)v21 + 10);
      if ( v24 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 0x2000LL);
      *((_DWORD *)v21 + 17) = v23;
      v21 = v40;
    }
    v25 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9) + 72LL);
    v26 = (CBaseObject *)*((_QWORD *)v21 + 9);
    if ( v26 != (CBaseObject *)v25 )
    {
      if ( v26 )
        CBaseObject::Release(v26);
      *((_QWORD *)v21 + 9) = v25;
      if ( v25 )
        _InterlockedIncrement(v25 + 2);
      CAtlasedImage::SetDirtyFlags(v21, 1, 0x2000u);
      v21 = v40;
    }
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9);
    if ( *(_BYTE *)(v27 + 116) )
    {
      CAtlasedImage::SetMarginClip(v21, (struct tagRECT *)(v27 + 100));
      v21 = v40;
    }
    *((_DWORD *)v21 + 30) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9) + 120LL);
    v28 = *(unsigned int *)(a2 + 272);
    v42 = v40;
    if ( (unsigned int)v28 > *(_DWORD *)(a2 + 272) )
    {
      v7 = -2147024809;
      v38 = 451;
      goto LABEL_55;
    }
    v41 = &v42;
    v7 = DynArrayImpl<0>::Grow((int)a2 + 248, 8, 1, 0, (__int64)&v41);
    if ( v7 < 0 )
    {
      v38 = 461;
LABEL_55:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v38, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4Cu, 0LL);
      v36 = 307LL;
      goto LABEL_57;
    }
    v29 = *(unsigned int *)(a2 + 272);
    *(_DWORD *)(a2 + 272) = v29 + 1;
    v30 = *(_QWORD *)(a2 + 248);
    if ( (unsigned int)v29 > (unsigned int)v28 )
    {
      v37 = (_QWORD *)(v30 + 8 * v29);
      do
      {
        v29 = (unsigned int)(v29 - 1);
        *v37-- = *(_QWORD *)(v30 + 8 * v29);
      }
      while ( (unsigned int)v29 > (unsigned int)v28 );
    }
    v31 = (CAtlasedImage **)(v30 + 8 * v28);
    v32 = v41;
    if ( v41 >= v31 && (unsigned __int64)v41 < v30 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 272) - 1) )
      v32 = ++v41;
    *v31 = *v32;
    _InterlockedIncrement((volatile signed __int32 *)v42 + 2);
    *((_QWORD *)v42 + 10) = a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 0x2000LL);
    v33 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v33 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(CAtlasedImage *, __int64))v33)(v33, 1LL);
    }
LABEL_37:
    if ( ++v9 >= *(_DWORD *)(a1 + 272) )
      return 0LL;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA2u, 0LL);
  v40 = 0LL;
  v36 = 290LL;
LABEL_57:
  v35 = (unsigned int)v7;
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)v35,
    v39);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v40);
  return (unsigned int)v7;
}

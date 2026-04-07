/*
 * XREFs of ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180024008
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180020660 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180005EEC (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18001DBE4 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180021080 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180027094 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002A1F0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180034CA0 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAtlasedRectsVisual::InitializeVisualTreeClone(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // eax
  unsigned int v7; // ebx
  const struct _MARGINS *v8; // rdx
  unsigned int v9; // r12d
  CAtlasedImage *v10; // rax
  CAtlasedImage *v11; // rax
  CAtlasedImage *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  const RECT *v19; // rsi
  CAtlasedImage *v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // esi
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rsi
  CBaseObject *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  int inserted; // eax
  CAtlasedImage *v31; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  CAtlasedImage *v35; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]

  v3 = a3;
  v35 = 0LL;
  v6 = CVisual::InitializeVisualTreeClone();
  v7 = v6;
  if ( v6 < 0 )
  {
    v33 = (unsigned int)v6;
    v34 = 277LL;
    goto LABEL_52;
  }
  v8 = *(const struct _MARGINS **)(a1 + 280);
  if ( v8 )
    CAtlasedRectsVisual::SetClipMargins((CAtlasedRectsVisual *)a2, v8);
  v9 = 0;
  if ( !*(_DWORD *)(a1 + 272) )
  {
LABEL_41:
    v7 = 0;
    goto LABEL_42;
  }
  while ( 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * v9),
            v3) )
      goto LABEL_40;
    v10 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             128LL);
    if ( !v10 )
      break;
    v11 = CAtlasedImage::CAtlasedImage(v10);
    v12 = v11;
    if ( !v11 )
      break;
    v35 = v11;
    v13 = *(_QWORD *)(a1 + 248);
    v14 = *(_QWORD *)(v13 + 8LL * v9);
    if ( *(_DWORD *)(v14 + 16) != *((_DWORD *)v11 + 4) || *(_DWORD *)(v14 + 20) != *((_DWORD *)v11 + 5) )
    {
      *((_QWORD *)v11 + 2) = *(_QWORD *)(v14 + 16);
      CAtlasedImage::SetDirtyFlags(v11, 1, 0x2000u);
      v13 = *(_QWORD *)(a1 + 248);
      v12 = v35;
    }
    v15 = *(_QWORD *)(v13 + 8LL * v9);
    if ( *((_DWORD *)v12 + 6) != *(_DWORD *)(v15 + 24) || *((_DWORD *)v12 + 7) != *(_DWORD *)(v15 + 28) )
    {
      *((_QWORD *)v12 + 3) = *(_QWORD *)(v15 + 24);
      *((_DWORD *)v12 + 24) |= 1u;
      v16 = *((_QWORD *)v12 + 10);
      if ( v16 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 0x2000LL);
      v12 = v35;
    }
    v17 = *(_QWORD *)(a1 + 248);
    v18 = *(_QWORD *)(v17 + 8LL * v9);
    if ( *((_DWORD *)v12 + 8) != *(_DWORD *)(v18 + 32)
      || *((_DWORD *)v12 + 9) != *(_DWORD *)(v18 + 36)
      || *((_DWORD *)v12 + 10) != *(_DWORD *)(v18 + 40)
      || *((_DWORD *)v12 + 11) != *(_DWORD *)(v18 + 44) )
    {
      *((_OWORD *)v12 + 2) = *(_OWORD *)(v18 + 32);
      CAtlasedImage::SetDirtyFlags(v12, 1, 0x1000u);
      v17 = *(_QWORD *)(a1 + 248);
      v12 = v35;
    }
    v19 = *(const RECT **)(v17 + 8LL * v9);
    if ( !EqualRect((const RECT *)v12 + 3, v19 + 3) )
    {
      *((RECT *)v12 + 3) = v19[3];
      CAtlasedImage::SetDirtyFlags(v12, 1, 0x2000u);
    }
    v20 = v35;
    v21 = *(_QWORD *)(a1 + 248);
    v22 = *(_DWORD *)(*(_QWORD *)(v21 + 8LL * v9) + 64LL);
    if ( *((_DWORD *)v35 + 16) != v22 )
    {
      *((_DWORD *)v35 + 16) = v22;
      CAtlasedImage::SetDirtyFlags(v35, 1, 0x2000u);
      v21 = *(_QWORD *)(a1 + 248);
      v20 = v35;
    }
    v23 = *(_DWORD *)(*(_QWORD *)(v21 + 8LL * v9) + 68LL);
    if ( v23 != *((_DWORD *)v20 + 17) )
    {
      *((_DWORD *)v20 + 24) |= 2u;
      v24 = *((_QWORD *)v20 + 10);
      if ( v24 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 0x2000LL);
      *((_DWORD *)v20 + 17) = v23;
      v21 = *(_QWORD *)(a1 + 248);
      v20 = v35;
    }
    v25 = *(volatile signed __int32 **)(*(_QWORD *)(v21 + 8LL * v9) + 72LL);
    v26 = (CBaseObject *)*((_QWORD *)v20 + 9);
    if ( v26 != (CBaseObject *)v25 )
    {
      if ( v26 )
        CBaseObject::Release(v26);
      *((_QWORD *)v20 + 9) = v25;
      if ( v25 )
        _InterlockedIncrement(v25 + 2);
      *((_DWORD *)v20 + 24) |= 1u;
      v27 = *((_QWORD *)v20 + 10);
      if ( v27 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL))(v27, 0x2000LL);
      v20 = v35;
    }
    v28 = *(_QWORD *)(a1 + 248);
    v29 = *(_QWORD *)(v28 + 8LL * v9);
    if ( *(_BYTE *)(v29 + 116) )
    {
      CAtlasedImage::SetMarginClip(v20, (struct tagRECT *)(v29 + 100));
      v28 = *(_QWORD *)(a1 + 248);
      v20 = v35;
    }
    *((_DWORD *)v20 + 30) = *(_DWORD *)(*(_QWORD *)(v28 + 8LL * v9) + 120LL);
    inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex((CAtlasedRectsVisual *)a2, v35, a2[68]);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v33 = (unsigned int)inserted;
      v34 = 308LL;
      goto LABEL_52;
    }
    v31 = v35;
    v35 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v31 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(CAtlasedImage *, __int64))v31)(v31, 1LL);
    v3 = a3;
LABEL_40:
    if ( ++v9 >= *(_DWORD *)(a1 + 272) )
      goto LABEL_41;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA3u);
  v35 = 0LL;
  v33 = 2147942414LL;
  v34 = 291LL;
LABEL_52:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v34,
    (int)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)v33);
LABEL_42:
  if ( v35 )
    CBaseObject::Release(v35);
  return v7;
}

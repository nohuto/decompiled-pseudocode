/*
 * XREFs of ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18004BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180016F30 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180068896 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800984AC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800988D4 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::CloneVisualTree(__int64 a1, CVisual **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CVisual *v6; // rax
  CVisual *v7; // rdi
  int updated; // eax
  CVisual *v9; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct _MARGINS v14; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CVisual *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0LL;
  *a2 = 0LL;
  v4 = CAccent::Create(&v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v16;
    v7 = v16;
    if ( *(_DWORD *)(a1 + 288) != 3 )
    {
      updated = CAccent::UpdateAccentPolicy(
                  v16,
                  (const struct tagRECT *)(a1 + 624),
                  (__m128i *)(a1 + 288),
                  *(struct CBaseGeometryProxy **)(a1 + 424));
      v5 = updated;
      if ( updated < 0 )
      {
        v13 = 564LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)updated);
        v11 = v5;
        v12 = 551LL;
        goto LABEL_21;
      }
      v6 = v16;
    }
    if ( (*(_BYTE *)(a1 + 292) & 0xE0) == 0 )
    {
LABEL_6:
      v9 = 0LL;
      *a2 = v6;
      v5 = 0;
      goto LABEL_7;
    }
    v14 = 0LL;
    *((_BYTE *)v7 + 406) = 1;
    updated = CRenderDataVisual::ClearInstructions(v7);
    v5 = updated;
    if ( updated >= 0 )
    {
      CVisual::SetInsetFromParent(v7, &v14);
      *((_DWORD *)v7 + 73) = *(_DWORD *)(a1 + 292);
      updated = CAccent::_EnsureBorderShadowAtlas(v7);
      v5 = updated;
      if ( updated >= 0 )
      {
        updated = CAccent::_UpdateBorderShadowParts(v7);
        v5 = updated;
        if ( updated >= 0 )
        {
          updated = CAccent::_UpdateBorderShadowForAccent(v7);
          v5 = updated;
          if ( updated >= 0 )
          {
            v6 = v16;
            goto LABEL_6;
          }
          v13 = 577LL;
        }
        else
        {
          v13 = 576LL;
        }
      }
      else
      {
        v13 = 575LL;
      }
    }
    else
    {
      v13 = 572LL;
    }
    goto LABEL_20;
  }
  v11 = (unsigned int)v4;
  v12 = 550LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)v11);
  v9 = v16;
LABEL_7:
  if ( v9 )
  {
    v16 = 0LL;
    CBaseObject::Release(v9);
  }
  return v5;
}

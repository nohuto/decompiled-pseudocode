/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800474A4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800F7A0C (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801F7B9C (-ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDR.c)
 * Callees:
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x180048898 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800DE2D4 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  CPtrArrayBase *v1; // rdi
  unsigned int Count; // eax
  int v4; // ebx
  int v5; // esi
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r15
  struct CVisual *v9; // rax
  unsigned __int64 v10; // r10
  __int64 v11; // r11
  struct CVisual *v12; // r14
  char v13; // al
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+78h] [rbp+10h]

  v1 = (CVisual *)((char *)this + 80);
  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 80));
  v4 = 0;
  v5 = 0;
  v6 = Count;
  if ( Count )
  {
    v17 = 0LL;
    v7 = 0LL;
    v18 = Count;
    v8 = 16LL;
    do
    {
      v9 = (struct CVisual *)CPtrArrayBase::operator[](v1, v7);
      v12 = v9;
      if ( v9 )
      {
        if ( (*((_BYTE *)v9 + 103) & 2) != 0 )
        {
          CVisual::DirtyForInvisibleChild(this, v9, 0);
          v5 += *((_DWORD *)v12 + 67);
          v13 = *((_BYTE *)v12 + 272);
          v14 = v4 + *((_DWORD *)v12 + 66);
          v4 = v14 + 1;
          if ( (v13 & 1) == 0 )
            v4 = v14;
          if ( (v13 & 4) != 0 )
            ++v5;
        }
        *((_QWORD *)v12 + 11) = 0LL;
        (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v12 + 16LL))(v12);
        v15 = CPtrArrayBase::GetCount(v1);
        v10 = v17;
        if ( v17 >= v15 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024809, 0x126u, 0LL);
          v10 = v17;
        }
        else if ( v15 == 1 )
        {
          *(_QWORD *)v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFCuLL) + v8) = 0LL;
        }
        v11 = v18;
      }
      ++v7;
      v8 += 8LL;
      v17 = v10 + 1;
      v18 = v11 - 1;
    }
    while ( v11 != 1 );
  }
  CPtrArrayBase::Clear(v1);
  CVisual::PropagateBackdropUpdates(this, -v4, -v5);
  if ( v6 )
    CVisual::PropagateFlags(this, 5LL);
}

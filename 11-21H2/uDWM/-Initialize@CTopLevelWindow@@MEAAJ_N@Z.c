/*
 * XREFs of ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870
 * Callers:
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18001B750 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180038E48 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18000E618 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800265D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180036DA4 (-Initialize@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180037460 (-SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180038C24 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddChild@CVisual@@QEAAJPEAV1@_N@Z @ 0x180100588 (-AddChild@CVisual@@QEAAJPEAV1@_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::Initialize(struct CWindowBorder **this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  CWindowBorder **v7; // rsi
  struct CVisual **v8; // r14
  struct CVisual **v9; // rbp
  struct CVisual **v10; // r15
  struct CVisual **v11; // r12
  CVisual *v12; // rcx
  __int64 v13; // rbp
  CVisual *v14; // rcx
  struct CVisual *v15; // rbp
  struct CVisual *v16; // rdx
  unsigned int v18; // [rsp+20h] [rbp-48h]
  struct _MARGINS v19; // [rsp+30h] [rbp-38h] BYREF

  v4 = CVisual::Initialize((CVisual *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v18 = 199;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v18);
    return v5;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &AcrylicHostBackdrop::`vftable';
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_BYTE *)(v6 + 24) = a2;
  }
  else
  {
    v6 = 0LL;
  }
  this[107] = (struct CWindowBorder *)v6;
  if ( v6 )
  {
    v4 = AcrylicHostBackdrop::Initialize((AcrylicHostBackdrop *)v6);
    v5 = v4;
    if ( v4 < 0 )
    {
      v18 = 203;
      goto LABEL_3;
    }
    if ( a2 )
    {
      *((_BYTE *)this + 248) |= 8u;
    }
    else
    {
      v7 = this + 33;
      v4 = CWindowBorder::Create(this + 33);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 207;
        goto LABEL_3;
      }
      v8 = this + 34;
      v4 = CCanvasVisual::Create(this + 34);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 208;
        goto LABEL_3;
      }
      v9 = this + 69;
      v4 = CCanvasVisual::Create(this + 69);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 209;
        goto LABEL_3;
      }
      v10 = this + 70;
      v4 = CCanvasVisual::Create(this + 70);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 210;
        goto LABEL_3;
      }
      v11 = this + 36;
      v4 = CTopLevelAtlasedRectsVisual::Create(this + 36);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 211;
        goto LABEL_3;
      }
      v4 = CWindowBorder::SetContent(*v7, *v8);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 213;
        goto LABEL_3;
      }
      v4 = CVisual::AddChild(*v8, *v11, 1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 214;
        goto LABEL_3;
      }
      v4 = CVisual::AddChild(*v8, *v10, 1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 215;
        goto LABEL_3;
      }
      v4 = CVisual::AddChild(*v10, *v9, 1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v18 = 216;
        goto LABEL_3;
      }
      v12 = *v9;
      v19 = 0LL;
      CVisual::SetInsetFromParent(v12, &v19);
      CVisual::SetInsetFromParent(*v11, &v19);
      v13 = *((_QWORD *)this[107] + 2);
      v14 = *(CVisual **)(v13 + 48);
      if ( v14 && (v15 = *(struct CVisual **)(v13 + 16)) != 0LL )
      {
        v4 = CVisual::AddChild(v14, *v7, 1);
        v5 = v4;
        if ( v4 < 0 )
        {
          v18 = 229;
          goto LABEL_3;
        }
        v4 = CVisual::AddChild((CVisual *)this, v15, 1);
        v5 = v4;
        if ( v4 < 0 )
        {
          v18 = 230;
          goto LABEL_3;
        }
      }
      else
      {
        v16 = *v7;
        *((_BYTE *)this + 864) = 1;
        v4 = CVisual::AddChild((CVisual *)this, v16, 0);
        v5 = v4;
        if ( v4 < 0 )
        {
          v18 = 237;
          goto LABEL_3;
        }
      }
      *((_DWORD *)*v10 + 50) = -1;
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xCAu);
  }
  return v5;
}

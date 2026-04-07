/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18001BEAC
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18001BDD8 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18001B750 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x18001C3E8 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18001ED0C (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180020E24 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  __int64 v2; // rdi
  char v5; // bp
  int v6; // eax
  unsigned int v7; // ebx
  CWindowData *v8; // rax
  CWindowData *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  CBaseObject *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  CBaseObject *v18; // [rsp+58h] [rbp+10h] BYREF
  CWindowData *v19; // [rsp+60h] [rbp+18h]

  v2 = *((_QWORD *)a2 + 94);
  v18 = 0LL;
  v5 = *(_BYTE *)(v2 + 664);
  if ( (v5 & 4) == 0 )
  {
    *(_BYTE *)(v2 + 664) = v5 & 0xFD;
    CWindowData::OnWindowStyleUpdated((CWindowData *)v2);
  }
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 440));
  v6 = CVisual::RenderRecursive(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 95;
    goto LABEL_22;
  }
  v8 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        840LL);
  v19 = v8;
  if ( v8 )
    v9 = CWindowData::CWindowData(v8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 4) = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x64u);
    goto LABEL_14;
  }
  *((_QWORD *)v9 + 5) = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *(_QWORD *)(v2 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(*((_QWORD *)this + 4) + 96LL) = *(_OWORD *)(v2 + 96);
  *(_OWORD *)(*((_QWORD *)this + 4) + 216LL) = *(_OWORD *)(v2 + 216);
  *(_OWORD *)(*((_QWORD *)this + 4) + 264LL) = *(_OWORD *)(v2 + 264);
  *(_OWORD *)(*((_QWORD *)this + 4) + 280LL) = *(_OWORD *)(v2 + 280);
  *(_QWORD *)(*((_QWORD *)this + 4) + 136LL) = *(_QWORD *)(v2 + 136);
  *(_DWORD *)(*((_QWORD *)this + 4) + 672LL) = *(_DWORD *)(v2 + 672);
  *(_BYTE *)(*((_QWORD *)this + 4) + 668LL) ^= (*(_BYTE *)(v2 + 668) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 668LL)) & 8;
  *(_BYTE *)(*((_QWORD *)this + 4) + 408LL) = *(_BYTE *)(v2 + 408);
  *(_DWORD *)(*((_QWORD *)this + 4) + 132LL) = *(_DWORD *)(v2 + 132);
  *(_OWORD *)(*((_QWORD *)this + 4) + 676LL) = *(_OWORD *)(v2 + 676);
  *(_OWORD *)(*((_QWORD *)this + 4) + 692LL) = *(_OWORD *)(v2 + 692);
  *(_OWORD *)(*((_QWORD *)this + 4) + 708LL) = *(_OWORD *)(v2 + 708);
  *(_OWORD *)(*((_QWORD *)this + 4) + 724LL) = *(_OWORD *)(v2 + 724);
  *(_DWORD *)(*((_QWORD *)this + 4) + 116LL) = *(_DWORD *)(v2 + 116);
  *(_DWORD *)(*((_QWORD *)this + 4) + 120LL) = *(_DWORD *)(v2 + 120);
  *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = *(_DWORD *)(v2 + 128);
  *(_DWORD *)(*((_QWORD *)this + 4) + 124LL) = *(_DWORD *)(v2 + 124);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *(_DWORD *)(v2 + 112);
  *(_OWORD *)(*((_QWORD *)this + 4) + 300LL) = *(_OWORD *)(v2 + 300);
  *(_QWORD *)(*((_QWORD *)this + 4) + 320LL) = *(_QWORD *)(v2 + 320);
  *(_DWORD *)(*((_QWORD *)this + 4) + 328LL) = *(_DWORD *)(v2 + 328);
  v10 = *((_QWORD *)this + 4);
  *(_OWORD *)(v10 + 336) = *(_OWORD *)(v2 + 336);
  *(_OWORD *)(v10 + 352) = *(_OWORD *)(v2 + 352);
  *(_OWORD *)(v10 + 368) = *(_OWORD *)(v2 + 368);
  *(_OWORD *)(v10 + 384) = *(_OWORD *)(v2 + 384);
  *(_QWORD *)(v10 + 400) = *(_QWORD *)(v2 + 400);
  *(_BYTE *)(*((_QWORD *)this + 4) + 669LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 669LL) ^ *(_BYTE *)(v2 + 669)) & 1;
  *(_BYTE *)(*((_QWORD *)this + 4) + 665LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 665LL) ^ *(_BYTE *)(v2 + 665)) & 0x20;
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_DWORD *)(*((_QWORD *)this + 4) + 184LL) = *(_DWORD *)(v2 + 184);
  *(_DWORD *)(*((_QWORD *)this + 4) + 188LL) = *(_DWORD *)(v2 + 188);
  *(_DWORD *)(*((_QWORD *)this + 4) + 192LL) = *(_DWORD *)(v2 + 192);
  *(_DWORD *)(*((_QWORD *)this + 4) + 196LL) = *(_DWORD *)(v2 + 196);
  *(_QWORD *)(*((_QWORD *)this + 4) + 832LL) = *(_QWORD *)(v2 + 832);
  *(_BYTE *)(*((_QWORD *)this + 4) + 665LL) = (!CWindowData::IsSimpleClientArea((CWindowData *)v2) ? 0x10 : 0) | *(_BYTE *)(*((_QWORD *)this + 4) + 665LL) & 0xEF;
  *(_QWORD *)(*((_QWORD *)this + 4) + 424LL) = *(_QWORD *)(v2 + 424);
  v11 = *(_QWORD *)(v2 + 424);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( (*(_BYTE *)(v2 + 668) & 8) == 0 )
  {
    v6 = CTopLevelWindow::CloneVisualTree((__int64)a2, &v18, 4u);
    v7 = v6;
    if ( v6 < 0 )
    {
      v17 = 146;
    }
    else
    {
      v12 = v18;
      v13 = *((_QWORD *)this + 4);
      v18 = 0LL;
      *((_QWORD *)this + 3) = v12;
      *(_QWORD *)(v13 + 440) = v12;
      v14 = *((_QWORD *)this + 3);
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v14 = *((_QWORD *)this + 3);
      }
      v15 = *((_QWORD *)this + 4);
      *(_QWORD *)(v14 + 752) = v15;
      *(_QWORD *)(v14 + 760) = *(_QWORD *)(v15 + 40);
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 3));
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_14;
      v17 = 155;
    }
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v17);
  }
LABEL_14:
  *(_BYTE *)(v2 + 664) &= ~2u;
  *(_BYTE *)(v2 + 664) |= v5 & 2;
  if ( v18 )
    CBaseObject::Release(v18);
  return v7;
}

/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180006EA8
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180006DD4 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180007294 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800072EC (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18000740C (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800308C8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180035C44 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
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
  CVisual **v12; // r14
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v2 = *((_QWORD *)a2 + 94);
  v5 = *(_BYTE *)(v2 + 672);
  if ( (v5 & 4) == 0 )
  {
    *(_BYTE *)(v2 + 672) = v5 & 0xFD;
    CWindowData::OnWindowStyleUpdated((CWindowData *)v2);
  }
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 440));
  v6 = CVisual::RenderRecursive(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = 94;
    goto LABEL_20;
  }
  v8 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        864LL);
  if ( v8 )
    v9 = CWindowData::CWindowData(v8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 4) = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x63u, 0LL);
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
  *(_DWORD *)(*((_QWORD *)this + 4) + 680LL) = *(_DWORD *)(v2 + 680);
  *(_BYTE *)(*((_QWORD *)this + 4) + 676LL) ^= (*(_BYTE *)(v2 + 676) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 676LL)) & 8;
  *(_BYTE *)(*((_QWORD *)this + 4) + 408LL) = *(_BYTE *)(v2 + 408);
  *(_DWORD *)(*((_QWORD *)this + 4) + 132LL) = *(_DWORD *)(v2 + 132);
  *(_OWORD *)(*((_QWORD *)this + 4) + 684LL) = *(_OWORD *)(v2 + 684);
  *(_OWORD *)(*((_QWORD *)this + 4) + 700LL) = *(_OWORD *)(v2 + 700);
  *(_OWORD *)(*((_QWORD *)this + 4) + 716LL) = *(_OWORD *)(v2 + 716);
  *(_OWORD *)(*((_QWORD *)this + 4) + 732LL) = *(_OWORD *)(v2 + 732);
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
  *(_BYTE *)(*((_QWORD *)this + 4) + 677LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 677LL) ^ *(_BYTE *)(v2 + 677)) & 1;
  *(_BYTE *)(*((_QWORD *)this + 4) + 673LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 673LL) ^ *(_BYTE *)(v2 + 673)) & 0x20;
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_DWORD *)(*((_QWORD *)this + 4) + 184LL) = *(_DWORD *)(v2 + 184);
  *(_DWORD *)(*((_QWORD *)this + 4) + 188LL) = *(_DWORD *)(v2 + 188);
  *(_DWORD *)(*((_QWORD *)this + 4) + 192LL) = *(_DWORD *)(v2 + 192);
  *(_DWORD *)(*((_QWORD *)this + 4) + 196LL) = *(_DWORD *)(v2 + 196);
  *(_QWORD *)(*((_QWORD *)this + 4) + 856LL) = *(_QWORD *)(v2 + 856);
  *(_BYTE *)(*((_QWORD *)this + 4) + 673LL) = (!CWindowData::IsSimpleClientArea((CWindowData *)v2) ? 0x10 : 0) | *(_BYTE *)(*((_QWORD *)this + 4) + 673LL) & 0xEF;
  *(_QWORD *)(*((_QWORD *)this + 4) + 424LL) = *(_QWORD *)(v2 + 424);
  v11 = *(_QWORD *)(v2 + 424);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( (*(_BYTE *)(v2 + 676) & 8) == 0 )
  {
    v12 = (CVisual **)((char *)this + 24);
    v6 = CTopLevelWindow::CloneForNewWindowData(a2, *((_QWORD *)this + 4), 4LL, (char *)this + 24);
    v7 = v6;
    if ( v6 < 0 )
    {
      v14 = 145;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 440LL) = *v12;
      if ( *v12 )
        _InterlockedIncrement((volatile signed __int32 *)*v12 + 2);
      v6 = CVisual::RenderRecursive(*v12);
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_14;
      v14 = 150;
    }
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v14, 0LL);
  }
LABEL_14:
  *(_BYTE *)(v2 + 672) &= ~2u;
  *(_BYTE *)(v2 + 672) |= v5 & 2;
  return v7;
}

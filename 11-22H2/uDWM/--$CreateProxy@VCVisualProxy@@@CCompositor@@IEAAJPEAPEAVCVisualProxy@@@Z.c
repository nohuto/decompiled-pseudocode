/*
 * XREFs of ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180022770
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180012260 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CDCompositionInteropVisual@@UEAAJXZ @ 0x180019FE0 (-Initialize@CDCompositionInteropVisual@@UEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180020DC0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180021590 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x1800370C0 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Initialize@CCanvasVisual@@MEAAJXZ @ 0x180051CB0 (-Initialize@CCanvasVisual@@MEAAJXZ.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180052F50 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CVisualProxy>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD, __int64); // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  CBaseObject *v9; // rdi
  int v10; // ebp
  unsigned int v12; // eax
  int v13; // r14d
  int v14; // r15d

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = v4;
  if ( !v4 )
  {
    v6 = 0LL;
    v5 = 0LL;
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x77u, 0LL);
    goto LABEL_6;
  }
  *(_OWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 8) = 1;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)v4 = &CVisualProxy::`vftable';
  v6 = (void (__fastcall ***)(_QWORD, __int64))v4;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v4 + 16) = 0LL;
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v9 = (CBaseObject *)v8;
  if ( !v8 )
  {
    v10 = -2147024882;
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u, 0LL);
    v13 = -2147024882;
    goto LABEL_14;
  }
  *(_DWORD *)(v8 + 8) = 1;
  *(_QWORD *)v8 = &CResource::`vftable';
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 16) = v7;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 88LL))(v7, 39LL, v8 + 24);
  if ( v10 < 0 )
  {
    v12 = 68;
LABEL_12:
    v13 = v10;
    v14 = v10;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v12, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x29u, 0LL);
    CBaseObject::Release(v9);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x10u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x79u, 0LL);
    goto LABEL_6;
  }
  if ( !*((_DWORD *)v9 + 6) )
  {
    v10 = -2147024882;
    v12 = 69;
    goto LABEL_12;
  }
  *(_QWORD *)(v5 + 16) = v9;
  *a2 = v5;
  v10 = 0;
LABEL_6:
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    (**v6)(v6, 1LL);
  return (unsigned int)v10;
}

/*
 * XREFs of ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180026DC0
 * Callers:
 *     ?Initialize@CCanvasVisual@@MEAAJXZ @ 0x18000E3D0 (-Initialize@CCanvasVisual@@MEAAJXZ.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180036480 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800381C0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositor::CreateProxy<CVisualProxy>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  CBaseObject *v8; // rdi
  int v9; // r15d
  unsigned int v10; // edi
  int v12; // ebp
  int v13; // r14d
  unsigned int v14; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = v4;
  if ( !v4 )
  {
    v5 = 0LL;
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x61u);
    goto LABEL_7;
  }
  *(_OWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 8) = 1;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)v4 = &CVisualProxy::`vftable';
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v8 = (CBaseObject *)v7;
  if ( !v7 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x27u);
    v12 = -2147024882;
    v10 = -2147024882;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x10u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x63u);
    goto LABEL_7;
  }
  *(_DWORD *)(v7 + 8) = 1;
  *(_QWORD *)v7 = &CResource::`vftable';
  *(_QWORD *)(v7 + 16) = v6;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 39LL, v7 + 24);
  if ( v9 < 0 )
  {
    v14 = 68;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v14);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x29u);
    CBaseObject::Release(v8);
    v12 = v9;
    v10 = v9;
    v13 = v9;
    goto LABEL_16;
  }
  if ( !*((_DWORD *)v8 + 6) )
  {
    v9 = -2147024882;
    v14 = 69;
    goto LABEL_11;
  }
  *(_QWORD *)(v5 + 16) = v8;
  *a2 = v5;
  v10 = 0;
LABEL_7:
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  return v10;
}

/*
 * XREFs of ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180021820
 * Callers:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180021590 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180050D9C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A183C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::Create(struct CCanvasVisual **a1)
{
  __int64 v2; // rax
  struct CCanvasVisual *v3; // rbx
  int v4; // ebp

  if ( !a1 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x15u, 0LL);
    return 2147942487LL;
  }
  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         288LL);
  v3 = (struct CCanvasVisual *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 32) = &VisualCollection::`vftable';
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(v2 + 80) = 0;
    *(_QWORD *)(v2 + 184) = 0x3FF0000000000000LL;
    *(_QWORD *)(v2 + 176) = 0x3FF0000000000000LL;
    *(_QWORD *)(v2 + 192) = 0x3FF0000000000000LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 104) = 0LL;
    *(_QWORD *)(v2 + 112) = 0LL;
    *(_DWORD *)(v2 + 200) = -2;
    *(_QWORD *)(v2 + 40) = v2;
    *(_DWORD *)(v2 + 136) = 0x7FFFFFFF;
    *(_DWORD *)(v2 + 144) = 0x7FFFFFFF;
    *(_DWORD *)(v2 + 140) = 0x7FFFFFFF;
    *(_DWORD *)(v2 + 148) = 0x7FFFFFFF;
    *(_QWORD *)(v2 + 256) = 0LL;
    *(_QWORD *)(v2 + 264) = 0LL;
    *(_QWORD *)(v2 + 272) = 0LL;
    *(_DWORD *)(v2 + 280) = 0;
    *(_QWORD *)v2 = &CCanvasVisual::`vftable';
    *(_QWORD *)(v2 + 248) = 0LL;
    v4 = ((__int64 (__fastcall *)(__int64))*(&CCanvasVisual::`vftable' + 1))(v2);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      return 0LL;
    }
  }
  else
  {
    v3 = 0LL;
    v4 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x15u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return (unsigned int)v4;
}

/*
 * XREFs of ?InitializeInputs@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E204
 * Callers:
 *     ?RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionEffectFactory@234@@Z @ 0x18002E13C (-RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@P.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180085594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18008EB50 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrush::InitializeInputs(
        Windows::UI::Composition::CompositionEffectBrush *this)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  bool v4; // cf
  SIZE_T v5; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rax
  unsigned int v8; // edi
  _QWORD *v9; // rbx
  Microsoft::WRL::AgileRef *i; // rbp
  char *v11; // rcx
  char *v13; // rbx

  v2 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 152LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 21) + 152LL));
  v3 = 8 * v2;
  if ( !is_mul_ok(v2, 8uLL) )
    v3 = -1LL;
  v4 = __CFADD__(v3, 8LL);
  v5 = v3 + 8;
  if ( v4 )
    v5 = -1LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, v5);
  v8 = 0;
  if ( v7 )
  {
    *v7 = v2;
    v9 = v7 + 1;
    for ( i = (Microsoft::WRL::AgileRef *)(v7 + 1); v2; --v2 )
    {
      Microsoft::WRL::AgileRef::AgileRef(i);
      i = (Microsoft::WRL::AgileRef *)((char *)i + 8);
    }
  }
  else
  {
    v9 = 0LL;
  }
  v11 = (char *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = v9;
  if ( v11 )
  {
    v13 = v11 - 8;
    `vector destructor iterator'(
      v11,
      8uLL,
      *((_QWORD *)v11 - 1),
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBrush>::~RefPtr<Windows::UI::Composition::CompositionBrush>);
    operator delete(v13, 8LL * *(_QWORD *)v13 + 8);
  }
  if ( !*((_QWORD *)this + 22) )
  {
    v8 = -2147024882;
    DoStackCaptureDirect(-2147024882, 0x168u);
  }
  return v8;
}

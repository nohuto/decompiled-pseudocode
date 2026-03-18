/*
 * XREFs of ??1CBrushRenderingEffect@@EEAA@XZ @ 0x1800545E0
 * Callers:
 *     ??_ECBrushRenderingEffect@@EEAAPEAXI@Z @ 0x180054580 (--_ECBrushRenderingEffect@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1EffectInput@@QEAA@XZ @ 0x1800D0FD0 (--1EffectInput@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::~CBrushRenderingEffect(CBrushRenderingEffect *this)
{
  EffectInput *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rcx

  v2 = (CBrushRenderingEffect *)((char *)this + 120);
  v3 = 4LL;
  do
  {
    v2 = (EffectInput *)((char *)v2 - 24);
    EffectInput::~EffectInput(v2);
    --v3;
  }
  while ( v3 );
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
  }
}

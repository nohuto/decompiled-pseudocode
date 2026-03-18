/*
 * XREFs of ??1CNaturalAnimation@@UEAA@XZ @ 0x18023B954
 * Callers:
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x1801C2E60 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC838 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CNaturalAnimation::~CNaturalAnimation(CNaturalAnimation *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CNaturalAnimation::`vftable';
  v2 = *((_QWORD *)this + 56);
  if ( v2 )
  {
    *((_QWORD *)this + 56) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 55);
  CBaseExpression::~CBaseExpression(this);
}

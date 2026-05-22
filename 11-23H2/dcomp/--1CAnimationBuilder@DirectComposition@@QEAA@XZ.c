/*
 * XREFs of ??1CAnimationBuilder@DirectComposition@@QEAA@XZ @ 0x180063EB4
 * Callers:
 *     ?Release@CAnimationBuilder@DirectComposition@@UEAAKXZ @ 0x180063E70 (-Release@CAnimationBuilder@DirectComposition@@UEAAKXZ.c)
 * Callees:
 *     ?Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ @ 0x180064050 (-Reset@CAnimationBuilder@DirectComposition@@UEAAJXZ.c)
 *     ?RemoveAnimationBuilder@CDevice@DirectComposition@@QEAAXPEAVCAnimationBuilder@2@@Z @ 0x18006412C (-RemoveAnimationBuilder@CDevice@DirectComposition@@QEAAXPEAVCAnimationBuilder@2@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBuilder::~CAnimationBuilder(DirectComposition::CDevice **this)
{
  DirectComposition::CDevice *v2; // rcx
  DirectComposition::CDevice *v3; // rcx
  DirectComposition::CDevice *v4; // rcx

  *this = (DirectComposition::CDevice *)&DirectComposition::CAnimationBuilder::`vftable';
  DirectComposition::CAnimationBuilder::Reset((DirectComposition::CAnimationBuilder *)this);
  v2 = this[3];
  if ( v2 )
  {
    DirectComposition::CDevice::RemoveAnimationBuilder(v2, (struct DirectComposition::CAnimationBuilder *)this);
    v3 = this[3];
    if ( v3 )
    {
      (*(void (__fastcall **)(DirectComposition::CDevice *))(*(_QWORD *)v3 + 16LL))(v3);
      this[3] = 0LL;
    }
  }
  v4 = this[4];
  if ( v4 )
  {
    operator delete(v4, 0x10uLL);
    this[4] = 0LL;
  }
  DirectComposition::CAnimationData::Reset((DirectComposition::CAnimationData *)(this + 6));
}

/*
 * XREFs of ?SetReference@ParameterEntry@@QEAAXPEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x18014FB3C
 * Callers:
 *     ?SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z @ 0x18014FBA0 (-SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVComp.c)
 * Callees:
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ??4?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVCompositionObject@Composition@UI@Windows@@@Z @ 0x1800442F4 (--4-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVComposit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ParameterEntry::SetReference(
        Microsoft::WRL2::NestableRuntimeClass **this,
        struct Windows::UI::Composition::CompositionObject *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  ParameterEntry::ClearMatrixValue((ParameterEntry *)this);
  *((_DWORD *)this + 2) = 0;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::operator=(
    this + 2,
    (volatile signed __int32 *)a2);
  *((_DWORD *)this + 8) = 1;
  v4 = this[3];
  if ( v4 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}

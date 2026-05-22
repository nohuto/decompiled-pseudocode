/*
 * XREFs of ?SetMatrix3x2@ParameterEntry@@QEAAXAEBUMatrix3x2@Numerics@Foundation@Windows@@@Z @ 0x18014F83C
 * Callers:
 *     ?SetMatrix3x2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x18014F948 (-SetMatrix3x2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatr.c)
 * Callees:
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

void __fastcall ParameterEntry::SetMatrix3x2(
        volatile signed __int32 **this,
        const struct Windows::Foundation::Numerics::Matrix3x2 *a2)
{
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rax

  if ( *((_DWORD *)this + 2) != 104 )
  {
    ParameterEntry::ClearMatrixValue((ParameterEntry *)this);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock(this + 2, v4);
    *((_DWORD *)this + 2) = 104;
    v5 = (volatile signed __int32 *)operator new(0x18uLL);
    if ( v5 )
    {
      *(_OWORD *)v5 = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
    }
    this[5] = v5;
  }
  v6 = this[5];
  *(_OWORD *)v6 = *(_OWORD *)a2;
  *((_QWORD *)v6 + 2) = *((_QWORD *)a2 + 2);
}

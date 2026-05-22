/*
 * XREFs of ?SetMatrix4x4@ParameterEntry@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x18003FC24
 * Callers:
 *     ?SetMatrix4x4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix4x4@Numerics@Foundation@4@@Z @ 0x18003FB64 (-SetMatrix4x4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatr.c)
 * Callees:
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

void __fastcall ParameterEntry::SetMatrix4x4(
        ParameterEntry *this,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a2)
{
  void *v4; // rax
  void *v5; // rdi
  _OWORD *v6; // rax

  if ( *((_DWORD *)this + 2) != 265 )
  {
    ParameterEntry::ClearMatrixValue(this);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock((char *)this + 16);
    *((_DWORD *)this + 2) = 265;
    v4 = operator new(0x40uLL);
    v5 = v4;
    if ( v4 )
      memset_0(v4, 0, 0x40uLL);
    else
      v5 = 0LL;
    *((_QWORD *)this + 5) = v5;
  }
  v6 = (_OWORD *)*((_QWORD *)this + 5);
  *v6 = *(_OWORD *)a2;
  v6[1] = *((_OWORD *)a2 + 1);
  v6[2] = *((_OWORD *)a2 + 2);
  v6[3] = *((_OWORD *)a2 + 3);
}

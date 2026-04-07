/*
 * XREFs of ?Update@CDoubleResourceProxy@@QEAAJN@Z @ 0x18006CDA8
 * Callers:
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C73A0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDoubleResourceProxy::Update(CDoubleResourceProxy *this, double a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 232LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}

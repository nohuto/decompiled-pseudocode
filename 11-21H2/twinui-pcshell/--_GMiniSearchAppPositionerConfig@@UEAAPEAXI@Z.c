/*
 * XREFs of ??_GMiniSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803AE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

MiniSearchAppPositionerConfig *__fastcall MiniSearchAppPositionerConfig::`scalar deleting destructor'(
        MiniSearchAppPositionerConfig *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  *(_QWORD *)this = &IMiniSearchAppPositionerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

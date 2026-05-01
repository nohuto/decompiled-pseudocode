/*
 * XREFs of ??_GTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803A0630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

TaskbarSearchAppPositionerConfig *__fastcall TaskbarSearchAppPositionerConfig::`scalar deleting destructor'(
        TaskbarSearchAppPositionerConfig *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  *(_QWORD *)this = &ISearchAppPositionerConfig::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

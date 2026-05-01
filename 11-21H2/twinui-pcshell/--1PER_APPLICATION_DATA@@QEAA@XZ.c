/*
 * XREFs of ??1PER_APPLICATION_DATA@@QEAA@XZ @ 0x180165AAC
 * Callers:
 *     ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x180165A60 (-Release@-$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PER_APPLICATION_DATA::~PER_APPLICATION_DATA(PER_APPLICATION_DATA *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}

/*
 * XREFs of ??_ECPPIAllUpViewController@@UEAAPEAXI@Z @ 0x1804B5900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1804AD5C0 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CPPIAllUpViewController *__fastcall CPPIAllUpViewController::`vector deleting destructor'(
        CPPIAllUpViewController *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 17);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

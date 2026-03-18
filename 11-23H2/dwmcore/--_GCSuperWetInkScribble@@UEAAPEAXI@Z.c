/*
 * XREFs of ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x18022C910
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D0654 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CSuperWetInkScribble *__fastcall CSuperWetInkScribble::`scalar deleting destructor'(
        CSuperWetInkScribble *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 7);
  if ( v4 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

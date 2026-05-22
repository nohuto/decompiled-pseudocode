/*
 * XREFs of ?CreatePresentationManager@CPresentationFactory@@UEAAJPEAPEAUIPresentationManager@@@Z @ 0x1801AEF50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AD4D0 (-Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CPresentationFactory::CreatePresentationManager(
        CPresentationFactory *this,
        struct IPresentationManager **a2)
{
  struct IUnknown *v2; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  struct CPresentationManager *v6; // rcx
  struct CPresentationManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct IUnknown *)*((_QWORD *)this + 2);
  v8 = 0LL;
  v4 = CPresentationManager::Create(v2, &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    DoStackCaptureDirect(v4, 0x39u);
  }
  else
  {
    v6 = v8;
    v8 = 0LL;
    *a2 = v6;
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v8);
  return v5;
}

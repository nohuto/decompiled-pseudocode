/*
 * XREFs of CreatePresentationFactory @ 0x1801ACAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CPresentationFactory@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEE60 (-Create@CPresentationFactory@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CreatePresentationFactory(struct IUnknown *a1, __int64 *a2, struct CPresentationFactory **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // eax
  struct CPresentationFactory *v8; // rcx
  struct CPresentationFactory *v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = *a2;
  v4 = 0;
  v10 = 0LL;
  v6 = v3 - *(_QWORD *)&GUID_8fb37b58_1d74_4f64_a49c_1f97a80a2ec0.Data1;
  if ( !v6 )
    v6 = a2[1] - *(_QWORD *)GUID_8fb37b58_1d74_4f64_a49c_1f97a80a2ec0.Data4;
  if ( !v6 )
  {
    v7 = CPresentationFactory::Create(a1, &v10);
    v4 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x14u);
    }
    else
    {
      v8 = v10;
      v10 = 0LL;
      *a3 = v8;
    }
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v10);
  return v4;
}

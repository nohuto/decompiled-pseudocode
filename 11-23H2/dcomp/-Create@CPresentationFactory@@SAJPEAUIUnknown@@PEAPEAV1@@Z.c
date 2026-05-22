/*
 * XREFs of ?Create@CPresentationFactory@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEE60
 * Callers:
 *     CreatePresentationFactory @ 0x1801ACAC0 (CreatePresentationFactory.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CheckSupport@CSynchronizationContext@@SAJPEAUIUnknown@@PEA_N1@Z @ 0x1801AEAF4 (-CheckSupport@CSynchronizationContext@@SAJPEAUIUnknown@@PEA_N1@Z.c)
 *     ??4?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z @ 0x1801AED44 (--4-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z.c)
 *     ??4?$com_ptr_t@VCPresentationFactory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPresentationFactory@@@Z @ 0x1801AEDAC (--4-$com_ptr_t@VCPresentationFactory@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPresenta.c)
 */

__int64 __fastcall CPresentationFactory::Create(struct IUnknown *a1, struct CPresentationFactory **a2)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  char *v6; // rax
  __int64 *v7; // rbx
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( !a1 )
  {
    v4 = -2147467261;
    v5 = 18;
LABEL_11:
    DoStackCaptureDirect(v4, v5);
    goto LABEL_12;
  }
  v6 = (char *)operator new(0x20uLL);
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *(_DWORD *)(v6 + 26) = 0;
    *((_WORD *)v6 + 15) = 0;
    *(_QWORD *)v6 = &CPresentationFactory::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    *((_WORD *)v6 + 12) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  wil::com_ptr_t<CPresentationFactory,wil::err_returncode_policy>::operator=(&v10, (__int64)v6);
  v7 = (__int64 *)v10;
  if ( !v10 )
  {
    v4 = -2147024882;
    v5 = 23;
    goto LABEL_11;
  }
  v8 = CSynchronizationContext::CheckSupport(a1, (bool *)(v10 + 24), (bool *)(v10 + 25));
  v4 = v8;
  if ( v8 < 0 )
  {
    DoStackCaptureDirect(v8, 0x2Au);
    v5 = 26;
    goto LABEL_11;
  }
  wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator=(v7 + 2, (__int64)a1);
  v10 = 0LL;
  *a2 = (struct CPresentationFactory *)v7;
LABEL_12:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v10);
  return v4;
}

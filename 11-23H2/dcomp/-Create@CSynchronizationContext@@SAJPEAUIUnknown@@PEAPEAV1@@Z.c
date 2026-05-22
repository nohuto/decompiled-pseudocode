/*
 * XREFs of ?Create@CSynchronizationContext@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x1801AEB84
 * Callers:
 *     ?Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z @ 0x1801ADD50 (-Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCSynchronizationContext@@@std@@QEBAXPEAVCSynchronizationContext@@@Z @ 0x1801AD0E4 (--R-$default_delete@VCSynchronizationContext@@@std@@QEBAXPEAVCSynchronizationContext@@@Z.c)
 *     ??0CSynchronizationContext11@@IEAA@PEAUID3D11Device5@@@Z @ 0x1801AE8E0 (--0CSynchronizationContext11@@IEAA@PEAUID3D11Device5@@@Z.c)
 *     ?CheckSupport@CSynchronizationContext11@@SAJPEAUID3D11Device@@PEA_N1@Z @ 0x1801B1468 (-CheckSupport@CSynchronizationContext11@@SAJPEAUID3D11Device@@PEA_N1@Z.c)
 */

__int64 __fastcall CSynchronizationContext::Create(struct IUnknown *a1, struct CSynchronizationContext **a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  CSynchronizationContext11 *v3; // rbx
  int v5; // eax
  int v6; // edi
  unsigned int v7; // edx
  int v8; // ecx
  CSynchronizationContext11 *v9; // rax
  struct CSynchronizationContext *v10; // rax
  CSynchronizationContext11 *v11; // rax
  __int64 v12; // rcx
  bool v14; // [rsp+40h] [rbp+8h] BYREF
  bool v15; // [rsp+50h] [rbp+18h] BYREF
  struct ID3D11Device5 *v16; // [rsp+58h] [rbp+20h] BYREF

  lpVtbl = a1->lpVtbl;
  v3 = 0LL;
  v16 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct ID3D11Device5 **))lpVtbl->QueryInterface)(
         a1,
         &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 35;
    goto LABEL_18;
  }
  v5 = CSynchronizationContext11::CheckSupport((struct ID3D11Device *)v16, &v14, &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 38;
LABEL_18:
    v8 = v5;
    goto LABEL_19;
  }
  if ( v14 )
  {
    if ( v15 )
    {
      v9 = (CSynchronizationContext11 *)operator new(0x48uLL);
      v3 = v9;
      if ( !v9 )
      {
        v3 = 0LL;
        v8 = -2147024882;
        v6 = -2147024882;
        v7 = 51;
        goto LABEL_19;
      }
      CSynchronizationContext11::CSynchronizationContext11(v9, v16);
      *((_BYTE *)v3 + 64) = 0;
      *(_QWORD *)v3 = &CSynchronizationContext11Driver::`vftable';
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
      v6 = ((__int64 (__fastcall *)(CSynchronizationContext11 *))*(&CSynchronizationContext11Driver::`vftable' + 1))(v3);
      v10 = v3;
      if ( v6 < 0 )
      {
        v7 = 52;
        goto LABEL_5;
      }
    }
    else
    {
      v11 = (CSynchronizationContext11 *)operator new(0x40uLL);
      v3 = v11;
      if ( !v11 )
      {
        v3 = 0LL;
        v8 = -2147024882;
        v6 = -2147024882;
        v7 = 58;
        goto LABEL_19;
      }
      CSynchronizationContext11::CSynchronizationContext11(v11, v16);
      *(_QWORD *)v3 = &CSynchronizationContext11Driverless::`vftable';
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
      v6 = ((__int64 (__fastcall *)(CSynchronizationContext11 *))*(&CSynchronizationContext11Driverless::`vftable' + 1))(v3);
      v10 = v3;
      if ( v6 < 0 )
      {
        v7 = 59;
        goto LABEL_5;
      }
    }
    v3 = 0LL;
    *a2 = v10;
    goto LABEL_20;
  }
  v6 = -2147467259;
  v7 = 43;
LABEL_5:
  v8 = v6;
LABEL_19:
  DoStackCaptureDirect(v8, v7);
LABEL_20:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v16);
  if ( v3 )
    std::default_delete<CSynchronizationContext>::operator()(v12, (__int64 (__fastcall ***)(_QWORD, __int64))v3);
  return (unsigned int)v6;
}

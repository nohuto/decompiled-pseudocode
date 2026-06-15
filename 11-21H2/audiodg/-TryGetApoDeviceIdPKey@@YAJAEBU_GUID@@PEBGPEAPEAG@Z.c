/*
 * XREFs of ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140017D24
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140017E50 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140015140 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TryGetApoDeviceIdPKey(const struct _GUID *a1, const unsigned __int16 *a2, unsigned __int16 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  const unsigned __int16 *v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int16 *v13; // rax
  int v14; // [rsp+20h] [rbp-60h]
  struct IPropertyStore *v15; // [rsp+40h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  v15 = 0LL;
  if ( (int)TryGetFxPropertyStore(a2, &v15) < 0 || !v15 )
    goto LABEL_6;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  v18 = (__int128)*a1;
  v19 = 100;
  v5 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))v15->lpVtbl->GetValue)(
         v15,
         &v18,
         pvar);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = (unsigned int)v5;
    v9 = 46LL;
    goto LABEL_18;
  }
  if ( LOWORD(pvar[0]) == 31 )
  {
    v10 = (const unsigned __int16 *)pvar[1];
    v11 = -1LL;
    do
      ++v11;
    while ( *((_WORD *)pvar[1] + v11) );
    *a3 = 0LL;
    v12 = v11 + 1;
    if ( v11 + 1 >= v11 && is_mul_ok(v12, 2uLL) )
    {
      v13 = (unsigned __int16 *)CoTaskMemAlloc(2 * v12);
      *a3 = v13;
      if ( v13 )
      {
        StringCchCopyNExW((char *)v13, v11 + 1, v10, v11);
        goto LABEL_5;
      }
      v6 = -2147024882;
    }
    else
    {
      v6 = -2147024362;
    }
    v8 = v6;
    v9 = 50LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)v8,
      v14);
    PropVariantClear(pvar);
    goto LABEL_7;
  }
LABEL_5:
  PropVariantClear(pvar);
LABEL_6:
  v6 = 0;
LABEL_7:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v15);
  return v6;
}

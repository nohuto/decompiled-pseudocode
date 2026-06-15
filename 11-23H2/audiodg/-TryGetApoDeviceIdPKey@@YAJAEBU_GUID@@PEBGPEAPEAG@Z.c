/*
 * XREFs of ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140016174
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015CD0 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140016758 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TryGetApoDeviceIdPKey(const struct _GUID *a1, const unsigned __int16 *a2, unsigned __int16 **a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // [rsp+20h] [rbp-50h]
  struct IPropertyStore *v13; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a3 = 0LL;
  v13 = 0LL;
  if ( (int)TryGetFxPropertyStore(a2, &v13) >= 0 && v13 )
  {
    *(_OWORD *)pvar = 0LL;
    v15 = 0LL;
    v16 = (__int128)*a1;
    v17 = 100;
    v5 = ((__int64 (__fastcall *)(struct IPropertyStore *, __int128 *, PROPVARIANT *))v13->lpVtbl->GetValue)(
           v13,
           &v16,
           pvar);
    v8 = v5;
    if ( v5 < 0 )
    {
      v10 = 48LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v5,
        v12);
      PropVariantClear(pvar);
      goto LABEL_7;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *((_WORD *)pvar[1] + v11) );
      v5 = _AllocStringWorker<CTCoAllocPolicy>(v7, v6, (const unsigned __int16 *)pvar[1], v11, v12, a3);
      v8 = v5;
      if ( v5 < 0 )
      {
        v10 = 52LL;
        goto LABEL_13;
      }
    }
    PropVariantClear(pvar);
  }
  v8 = 0;
LABEL_7:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v13);
  return v8;
}

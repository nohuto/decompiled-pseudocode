/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18007D4A0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18007CD24 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800484B8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18004E930 (_alloca_probe.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x18007B030 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18007C374 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18007C7B4 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18007E0BC (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18007F464 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18007F4F8 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const struct __WIL__WNF_STATE_NAME *v5; // rdi
  const struct __WIL__WNF_STATE_NAME *v6; // r15
  unsigned __int64 v7; // rsi
  const struct __WIL__WNF_TYPE_ID *v8; // rdx
  const void *v9; // r8
  unsigned int v10; // ebx
  unsigned int v11; // eax
  void *v12; // rdx
  void *v13; // rdx
  char v14; // bl
  const struct __WIL__WNF_TYPE_ID *v15; // r9
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v17; // r9
  wil::details *v18; // rcx
  wil::details *v19; // rcx
  void *v20; // [rsp+20h] [rbp-E0h]
  void *v21; // [rsp+20h] [rbp-E0h]
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  _BYTE *v27; // [rsp+70h] [rbp-90h]
  _BYTE v28[24]; // [rsp+80h] [rbp-80h] BYREF
  void *v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  wil::details *v31; // [rsp+B0h] [rbp-50h]
  char v32; // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+B9h] [rbp-47h]
  _BYTE v34[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v35; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-30h]
  _BYTE *v37; // [rsp+E0h] [rbp-20h]
  void ***v38; // [rsp+130h] [rbp+30h]
  _BYTE v39[4096]; // [rsp+140h] [rbp+40h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v28,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v23 = 4096;
    v10 = wil_details_NtQueryWnfStateData(v5, v8, v9, &v22, v39, &v23);
    wil::details::NtStatusToHr((wil::details *)v10);
    if ( v10 )
    {
      v11 = 0;
      v23 = 0;
      v22 = 0;
    }
    else
    {
      v11 = v23;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v28, v39, v11, 0x1000uLL);
    if ( v33 )
      break;
    v24 = 0LL;
    *(_QWORD *)&v26 = &v24;
    *((_QWORD *)&v26 + 1) = &v25;
    v27 = v28;
    v35 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v36 = v26;
    v37 = v28;
    v38 = &v35;
    v14 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v34);
    if ( !v32 )
      goto LABEL_11;
    updated = wil_details_NtUpdateWnfStateData(v5, v29, v30 - (int)v29, v15, v20, v22, 1u);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v29, v30 - (_DWORD)v29, v17, v21, 0, 0);
LABEL_11:
      v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
      v25 = v24;
      goto LABEL_12;
    }
    ++v7;
    v14 = 0;
LABEL_12:
    v18 = v31;
    v31 = 0LL;
    if ( v18 )
      wil::details::FreeProcessHeap(v18, v13);
    if ( v14 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v19 = v31;
  v31 = 0LL;
  if ( v19 )
    wil::details::FreeProcessHeap(v19, v12);
}

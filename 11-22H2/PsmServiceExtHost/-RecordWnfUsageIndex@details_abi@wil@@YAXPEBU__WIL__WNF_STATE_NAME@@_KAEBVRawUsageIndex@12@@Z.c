/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180079250
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800789F8 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x18004D308 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18004D39C (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x180053760 (_alloca_probe.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180075BCC (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180076DF0 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180077B7C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180078384 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180079AF4 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int WnfStateData; // ebx
  unsigned int v11; // eax
  char v12; // bl
  __int64 v13; // r9
  int updated; // eax
  __int64 v15; // r9
  void *v16; // rcx
  void *v17; // rcx
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  _BYTE v26[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  void *v29; // [rsp+B0h] [rbp-50h]
  char v30; // [rsp+B8h] [rbp-48h]
  char v31; // [rsp+B9h] [rbp-47h]
  _BYTE v32[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v33; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-30h]
  _BYTE *v35; // [rsp+E0h] [rbp-20h]
  void ***v36; // [rsp+130h] [rbp+30h]
  _BYTE v37[4096]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v23 = 0LL;
  v7 = this;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v26,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v20 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData((__int64)v7, v8, v9, (__int64)&v21, (__int64)v37, (__int64)&v20);
    wil::details::NtStatusToHr((wil::details *)WnfStateData);
    if ( WnfStateData )
    {
      v11 = 0;
      v21 = 0;
      v20 = 0;
    }
    else
    {
      v11 = v20;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v26, v37, v11, 0x1000uLL);
    if ( v31 )
      break;
    v22 = 0LL;
    *(_QWORD *)&v24 = &v22;
    *((_QWORD *)&v24 + 1) = &v23;
    v25 = v26;
    v33 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v36 = &v33;
    v34 = v24;
    v35 = v26;
    v12 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v32);
    if ( !v30 )
      goto LABEL_11;
    updated = wil_details_NtUpdateWnfStateData((__int64)v7, v27, v28 - (int)v27, v13, v18, v21, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((__int64)v7, v27, v28 - v27, v15, v19, 0, 0);
LABEL_11:
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v23 = v22;
      goto LABEL_12;
    }
    ++v4;
    v12 = 0;
LABEL_12:
    v16 = v29;
    v29 = 0LL;
    if ( v16 )
      MemoryFree(v16);
    if ( v12 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v17 = v29;
  v29 = 0LL;
  if ( v17 )
    MemoryFree(v17);
}

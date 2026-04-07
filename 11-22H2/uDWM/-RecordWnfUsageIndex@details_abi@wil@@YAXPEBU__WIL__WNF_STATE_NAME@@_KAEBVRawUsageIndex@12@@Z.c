/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180010324
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180011258 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180010578 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18001089C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800112E4 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800113BC (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800580D8 (-MemoryFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x18005E918 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18005E9AC (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1800662E0 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rdi
  wil::details_abi *v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // edx
  int v9; // r8d
  wil::details *WnfStateData; // rbx
  int v11; // edx
  unsigned int v12; // eax
  char v13; // bl
  void *v14; // rcx
  int updated; // eax
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h]
  _BYTE *v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h]
  void *v28; // [rsp+B0h] [rbp-50h]
  char v29; // [rsp+B8h] [rbp-48h]
  char v30; // [rsp+B9h] [rbp-47h]
  _BYTE v31[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v32; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-30h]
  _BYTE *v34; // [rsp+E0h] [rbp-20h]
  void ***v35; // [rsp+130h] [rbp+30h]
  _BYTE v36[4096]; // [rsp+140h] [rbp+40h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v22 = 0LL;
  while ( 1 )
  {
    LOBYTE(v18) = *((_BYTE *)a3 + 8);
    LOWORD(v17) = a3[3];
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    wil::details_abi::RawUsageIndex::RawUsageIndex(v25, *a3, a3[1], a4, v17, v18);
    LODWORD(v20) = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v5,
                                                   v8,
                                                   v9,
                                                   (unsigned int)&v19,
                                                   (__int64)v36,
                                                   (__int64)&v20);
    wil::details::NtStatusToHr(WnfStateData, v11);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      LODWORD(v20) = 0;
      v19 = 0;
    }
    else
    {
      v12 = v20;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v25, v36, v12, 0x1000uLL);
    if ( v30 )
      break;
    v21 = 0LL;
    *(_QWORD *)&v23 = &v21;
    *((_QWORD *)&v23 + 1) = &v22;
    v24 = v25;
    v32 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v33 = v23;
    v34 = v25;
    v35 = &v32;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, v31);
    if ( v29 )
    {
      updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v26, v27 - (int)v26, (_DWORD)a4, v17, v19, 1);
      if ( updated == -1073741823 )
      {
        ++v7;
        v13 = 0;
        goto LABEL_7;
      }
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v26, v27 - v26, (_DWORD)a4, v17, 0, 0);
    }
    v5 = (wil::details_abi *)((char *)v5 + 8);
    v22 = v21;
LABEL_7:
    v14 = v28;
    v28 = 0LL;
    if ( v14 )
      MemoryFree(v14);
    if ( v13 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v16 = v28;
  v28 = 0LL;
  if ( v16 )
    MemoryFree(v16);
}

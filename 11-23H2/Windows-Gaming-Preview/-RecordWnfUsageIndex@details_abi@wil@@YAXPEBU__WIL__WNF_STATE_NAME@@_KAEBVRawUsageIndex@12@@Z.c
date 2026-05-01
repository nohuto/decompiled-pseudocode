/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180005F88
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006430 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180002398 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003780 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     wil_details_NtQueryWnfStateData @ 0x18000489C (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180004950 (wil_details_NtUpdateWnfStateData.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180005124 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180005344 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x1800093C4 (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18004CE10 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        __int64 a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  __int64 v4; // rdi
  wil::details_abi *v5; // rsi
  wil::details_abi *v6; // r13
  unsigned __int64 v7; // r15
  unsigned int v8; // r9d
  __int16 v9; // cx
  __int64 v10; // rax
  wil::details *WnfStateData; // rbx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  int v15; // ebx
  unsigned int v16; // r14d
  __int64 v17; // r12
  char v18; // bl
  __int64 v19; // r9
  int updated; // eax
  __int64 v21; // r9
  void *v22; // r14
  HANDLE ProcessHeap; // rax
  void *v24; // rbx
  HANDLE v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v32; // [rsp+64h] [rbp-9Ch]
  __int16 v33; // [rsp+66h] [rbp-9Ah]
  char v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int128 v37; // [rsp+80h] [rbp-80h]
  LPVOID lpMem; // [rsp+90h] [rbp-70h]
  __int16 v39; // [rsp+98h] [rbp-68h]
  char v40; // [rsp+9Ah] [rbp-66h]
  __int64 v41; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v44; // [rsp+B8h] [rbp-48h] BYREF
  char v45; // [rsp+BAh] [rbp-46h]
  unsigned int v46; // [rsp+BCh] [rbp-44h]
  unsigned __int16 v47; // [rsp+C0h] [rbp-40h]
  __int128 v48; // [rsp+C8h] [rbp-38h]
  __int16 v49; // [rsp+D8h] [rbp-28h] BYREF
  char v50; // [rsp+DAh] [rbp-26h]
  int v51; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v52; // [rsp+E0h] [rbp-20h]
  __int128 v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v55; // [rsp+100h] [rbp+0h] BYREF
  __int64 v56; // [rsp+108h] [rbp+8h] BYREF
  __int128 v57; // [rsp+110h] [rbp+10h]
  _WORD *v58; // [rsp+120h] [rbp+20h]
  _BYTE *v59; // [rsp+130h] [rbp+30h]
  _BYTE v60[8]; // [rsp+138h] [rbp+38h] BYREF
  void **v61; // [rsp+140h] [rbp+40h] BYREF
  __int128 v62; // [rsp+148h] [rbp+48h]
  _WORD *v63; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *v64; // [rsp+1A8h] [rbp+A8h]
  _WORD v65[2048]; // [rsp+1B0h] [rbp+B0h] BYREF

  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * a2);
  v7 = 0LL;
  v42 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *(_BYTE *)(v4 + 8);
    v8 = *(unsigned __int16 *)(v4 + 6);
    LOBYTE(a2) = *(_BYTE *)(v4 + 4);
    v9 = *(_WORD *)(v4 + 2);
    v31[0] = *(_WORD *)v4;
    v31[1] = v9;
    v32 = a2;
    v33 = v8;
    v34 = a3;
    if ( (_WORD)v8 )
    {
      v10 = v8;
      if ( (_BYTE)a3 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( (_BYTE)a3 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v35 = v10;
    }
    else
    {
      v35 = 0LL;
    }
    v36 = 0LL;
    v37 = 0LL;
    lpMem = 0LL;
    v39 = 0;
    v40 = 0;
    v28 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (__int64)v5,
                                                   a2,
                                                   a3,
                                                   (__int64)&v29,
                                                   (__int64)v65,
                                                   (__int64)&v28);
    wil::details::NtStatusToHr(WnfStateData);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v28 = 0;
      v29 = 0;
    }
    else
    {
      v12 = v28;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v31, v65, v12, (const char *)0x1000);
    if ( HIBYTE(v39) )
      break;
    v41 = 0LL;
    *(_QWORD *)&v57 = &v41;
    *((_QWORD *)&v57 + 1) = &v42;
    v58 = v31;
    v61 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v62 = v57;
    v63 = v31;
    v64 = (wil::details::in1diag3 *)&v61;
    v59 = v60;
    v30[0] = (unsigned __int8 *)(*(_QWORD *)(v4 + 24) + 10LL);
    v13 = *(_BYTE *)(v4 + 4);
    v44 = *(_WORD *)(v4 + 2);
    v45 = v13;
    v46 = 0;
    v47 = 0;
    v48 = 0LL;
    v14 = *(_BYTE *)(v4 + 8);
    v49 = *(_WORD *)(v4 + 6);
    v50 = v14;
    v51 = 0;
    v52 = 0;
    v53 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v44,
              v30,
              *(unsigned __int8 **)(v4 + 32)) )
    {
      v15 = 0;
      v16 = v46;
      if ( v46 )
      {
        v17 = *((_QWORD *)&v48 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v49,
                  v30,
                  *(unsigned __int8 **)(v4 + 32)) )
        {
          v28 = v51;
          v54 = v52;
          v55 = *((_QWORD *)&v53 + 1);
          v56 = v47;
          v43 = v17;
          if ( !v64 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v26 = &v54;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v64 + 32LL))(
                  v64,
                  &v43,
                  &v56,
                  &v55) )
          {
            v18 = 0;
            goto LABEL_24;
          }
          if ( ++v15 >= v16 )
            goto LABEL_14;
        }
      }
    }
    v18 = 1;
LABEL_24:
    wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(v60);
    if ( !(_BYTE)v39 )
      goto LABEL_29;
    updated = wil_details_NtUpdateWnfStateData((__int64)v5, v36, (int)v37 - (int)v36, v19, (int)v26, v29, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((__int64)v5, v36, v37 - v36, v21, v27, 0, 0);
LABEL_29:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v42 = v41;
      goto LABEL_30;
    }
    ++v7;
    v18 = 0;
LABEL_30:
    v22 = lpMem;
    lpMem = 0LL;
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v22);
    }
    if ( v18 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v24 = lpMem;
  lpMem = 0LL;
  if ( v24 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
}

/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180040664
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18003F71C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180028E9C (--1-$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800324D8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18003B5C0 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18003F5C8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180045130 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18004B4C8 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18004B57C (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800ED720 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int16 *v4; // rdi
  const struct __WIL__WNF_STATE_NAME *v5; // rsi
  const struct __WIL__WNF_STATE_NAME *v6; // r12
  unsigned __int64 v7; // r15
  unsigned int v8; // r9d
  unsigned __int16 v9; // cx
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  int v15; // ebx
  char v16; // bl
  const struct __WIL__WNF_TYPE_ID *v17; // r9
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v19; // r9
  void *v20; // r14
  HANDLE ProcessHeap; // rax
  void *v22; // rbx
  HANDLE v23; // rax
  __int64 *v24; // [rsp+20h] [rbp-E0h]
  void *v25; // [rsp+20h] [rbp-E0h]
  unsigned int v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v30; // [rsp+64h] [rbp-9Ch]
  __int16 v31; // [rsp+66h] [rbp-9Ah]
  char v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  void *v34; // [rsp+78h] [rbp-88h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  LPVOID lpMem; // [rsp+90h] [rbp-70h]
  __int16 v37; // [rsp+98h] [rbp-68h]
  char v38; // [rsp+9Ah] [rbp-66h]
  __int64 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v42; // [rsp+B8h] [rbp-48h] BYREF
  char v43; // [rsp+BAh] [rbp-46h]
  unsigned int v44; // [rsp+BCh] [rbp-44h]
  unsigned __int16 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+C8h] [rbp-38h]
  unsigned __int16 v47; // [rsp+D8h] [rbp-28h] BYREF
  char v48; // [rsp+DAh] [rbp-26h]
  unsigned int v49; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v50; // [rsp+E0h] [rbp-20h]
  __int128 v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v53; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h] BYREF
  __int128 v55; // [rsp+110h] [rbp+10h]
  _WORD *v56; // [rsp+120h] [rbp+20h]
  char *v57; // [rsp+130h] [rbp+30h]
  char v58[8]; // [rsp+138h] [rbp+38h] BYREF
  void **v59; // [rsp+140h] [rbp+40h] BYREF
  __int128 v60; // [rsp+148h] [rbp+48h]
  _WORD *v61; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *v62; // [rsp+1A8h] [rbp+A8h]
  _BYTE v63[4096]; // [rsp+1B0h] [rbp+B0h] BYREF

  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v40 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *((_BYTE *)v4 + 8);
    v8 = v4[3];
    LOBYTE(a2) = *((_BYTE *)v4 + 4);
    v9 = v4[1];
    v29[0] = *v4;
    v29[1] = v9;
    v30 = (char)a2;
    v31 = v8;
    v32 = (char)a3;
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
      v33 = v10;
    }
    else
    {
      v33 = 0LL;
    }
    v34 = 0LL;
    v35 = 0LL;
    lpMem = 0LL;
    v37 = 0;
    v38 = 0;
    v26 = 4096;
    v11 = wil_details_NtQueryWnfStateData(v5, a2, a3, &v27, v63, &v26);
    wil::details::NtStatusToHr((wil::details *)v11);
    if ( v11 )
    {
      v12 = 0;
      v26 = 0;
      v27 = 0;
    }
    else
    {
      v12 = v26;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v29, v63, v12, 0x1000uLL);
    if ( HIBYTE(v37) )
      break;
    v39 = 0LL;
    *(_QWORD *)&v55 = &v39;
    *((_QWORD *)&v55 + 1) = &v40;
    v56 = v29;
    v59 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v60 = v55;
    v61 = v29;
    v62 = (wil::details::in1diag3 *)&v59;
    v57 = v58;
    v28[0] = (unsigned __int8 *)(*((_QWORD *)v4 + 3) + 10LL);
    v13 = *((_BYTE *)v4 + 4);
    v42 = v4[1];
    v43 = v13;
    v44 = 0;
    v45 = 0;
    v46 = 0LL;
    v14 = *((_BYTE *)v4 + 8);
    v47 = v4[3];
    v48 = v14;
    v49 = 0;
    v50 = 0;
    v51 = 0LL;
LABEL_14:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v42,
              v28,
              *((unsigned __int8 **)v4 + 4)) )
    {
      v15 = 0;
      if ( v44 )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v47,
                  v28,
                  *((unsigned __int8 **)v4 + 4)) )
        {
          v26 = v49;
          v52 = v50;
          v53 = *((_QWORD *)&v51 + 1);
          v54 = v45;
          v41 = *((_QWORD *)&v46 + 1);
          if ( !v62 )
            wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
          v24 = &v52;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v62 + 32LL))(
                  v62,
                  &v41,
                  &v54,
                  &v53) )
          {
            v16 = 0;
            goto LABEL_23;
          }
          if ( ++v15 >= v44 )
            goto LABEL_14;
        }
      }
    }
    v16 = 1;
LABEL_23:
    wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>((__int64)v58);
    if ( !(_BYTE)v37 )
      goto LABEL_28;
    updated = wil_details_NtUpdateWnfStateData(v5, v34, (int)v35 - (int)v34, v17, v24, v27, 1u);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData(v5, v34, v35 - (_DWORD)v34, v19, v25, 0, 0);
LABEL_28:
      v5 = (const struct __WIL__WNF_STATE_NAME *)((char *)v5 + 8);
      v40 = v39;
      goto LABEL_29;
    }
    ++v7;
    v16 = 0;
LABEL_29:
    v20 = lpMem;
    lpMem = 0LL;
    if ( v20 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    if ( v16 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v22 = lpMem;
  lpMem = 0LL;
  if ( v22 )
  {
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v22);
  }
}

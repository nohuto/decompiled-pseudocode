/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000C1E8
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000B8F4 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     ??$?0V_lambda_8db0ce862824541f40dfb767113f1e28_@@X@?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@V_lambda_8db0ce862824541f40dfb767113f1e28_@@@Z @ 0x180009698 (--$-0V_lambda_8db0ce862824541f40dfb767113f1e28_@@X@-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@V_l.c)
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x180009BEC (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     ??R?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z @ 0x18000A158 (--R-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000B468 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000B7B8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000CB44 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAKPEAX3@Z @ 0x18000DB64 (-wil_details_NtQueryWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBU__WIL__WNF_TYPE_ID@@PEBXPEAK.c)
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x18000DC18 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     _alloca_probe @ 0x18000E0D0 (_alloca_probe.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  const struct __WIL__WNF_STATE_NAME *v4; // r13
  unsigned __int64 v5; // r15
  const struct __WIL__WNF_STATE_NAME *v7; // rsi
  const struct __WIL__WNF_TYPE_ID *v8; // rdx
  char v9; // cl
  __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned __int8 *v14; // r8
  __int64 v15; // r12
  char v16; // cl
  bool i; // al
  int v18; // ebx
  unsigned int v19; // r14d
  char v20; // bl
  const struct __WIL__WNF_TYPE_ID *v21; // r9
  int updated; // eax
  const struct __WIL__WNF_TYPE_ID *v23; // r9
  void *v24; // r14
  HANDLE ProcessHeap; // rax
  void *v26; // rbx
  HANDLE v27; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-E0h]
  void *v29; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v33; // [rsp+54h] [rbp-ACh]
  __int16 v34; // [rsp+56h] [rbp-AAh]
  char v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  void *v37; // [rsp+68h] [rbp-98h]
  __int128 v38; // [rsp+70h] [rbp-90h]
  LPVOID lpMem; // [rsp+80h] [rbp-80h]
  __int16 v40; // [rsp+88h] [rbp-78h]
  char v41; // [rsp+8Ah] [rbp-76h]
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h] BYREF
  __int16 v44; // [rsp+A0h] [rbp-60h] BYREF
  char v45; // [rsp+A2h] [rbp-5Eh]
  unsigned int v46; // [rsp+A4h] [rbp-5Ch]
  unsigned __int16 v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  __int16 v49; // [rsp+C0h] [rbp-40h] BYREF
  char v50; // [rsp+C2h] [rbp-3Eh]
  int v51; // [rsp+C4h] [rbp-3Ch]
  unsigned __int16 v52; // [rsp+C8h] [rbp-38h]
  __int128 v53; // [rsp+D0h] [rbp-30h]
  __int64 *v54; // [rsp+E0h] [rbp-20h]
  __int64 *v55; // [rsp+E8h] [rbp-18h]
  _WORD *v56; // [rsp+F0h] [rbp-10h]
  _BYTE v57[128]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v58[4096]; // [rsp+180h] [rbp+80h] BYREF

  v4 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v5 = 0LL;
  v43 = 0LL;
  v7 = this;
  while ( 1 )
  {
    v8 = (const struct __WIL__WNF_TYPE_ID *)*(unsigned __int16 *)(a3 + 6);
    v9 = *(_BYTE *)(a3 + 8);
    v32[0] = *(_WORD *)a3;
    v32[1] = *(_WORD *)(a3 + 2);
    v33 = *(_BYTE *)(a3 + 4);
    v34 = (__int16)v8;
    v35 = v9;
    if ( (_WORD)v8 )
    {
      v10 = (unsigned int)v8;
      if ( v9 == 1 )
      {
        v10 = (unsigned int)v8 + 2LL;
      }
      else if ( v9 == 2 )
      {
        v10 = (unsigned int)v8 + 4LL;
      }
      v36 = v10;
    }
    else
    {
      v36 = 0LL;
    }
    v40 = 0;
    v37 = 0LL;
    v38 = 0LL;
    lpMem = 0LL;
    v41 = 0;
    LODWORD(v30) = 4096;
    v11 = wil_details_NtQueryWnfStateData(v7, v8, (const void *)a3, &v31, v58, (unsigned int *)&v30);
    wil::details::NtStatusToHr((wil::details *)v11);
    if ( v11 )
    {
      v12 = 0;
      v31 = 0;
      LODWORD(v30) = 0;
    }
    else
    {
      v12 = (unsigned int)v30;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v32, v58, v12, 0x1000uLL);
    if ( HIBYTE(v40) )
      break;
    v42 = 0LL;
    v54 = &v42;
    v55 = &v43;
    v56 = v32;
    v13 = wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>((__int64)v57);
    v14 = *(unsigned __int8 **)(a3 + 32);
    v30 = (unsigned __int8 *)(*(_QWORD *)(a3 + 24) + 10LL);
    v15 = v13;
    LOWORD(v13) = *(_WORD *)(a3 + 6);
    v44 = *(_WORD *)(a3 + 2);
    v16 = *(_BYTE *)(a3 + 4);
    v49 = v13;
    LOBYTE(v13) = *(_BYTE *)(a3 + 8);
    v45 = v16;
    v46 = 0;
    v47 = 0;
    v48 = 0LL;
    v50 = v13;
    v51 = 0;
    v52 = 0;
    v53 = 0LL;
    for ( i = wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v44, &v30, v14);
          i;
          i = wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v44,
                &v30,
                *(unsigned __int8 **)(a3 + 32)) )
    {
      v18 = 0;
      v19 = v46;
      if ( v46 )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v49,
                  &v30,
                  *(unsigned __int8 **)(a3 + 32)) )
        {
          v28 = v52;
          if ( !(unsigned __int8)wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
                                   v15,
                                   *((_QWORD *)&v48 + 1),
                                   v47,
                                   *((_QWORD *)&v53 + 1)) )
          {
            v20 = 0;
            goto LABEL_22;
          }
          if ( ++v18 >= v19 )
            break;
        }
      }
    }
    v20 = 1;
LABEL_22:
    wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(v15);
    if ( !(_BYTE)v40 )
      goto LABEL_27;
    updated = wil_details_NtUpdateWnfStateData(v7, v37, (int)v38 - (int)v37, v21, (const void *)v28, v31, 1u);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData(v7, v37, v38 - (_DWORD)v37, v23, v29, 0, 0);
LABEL_27:
      v7 = (const struct __WIL__WNF_STATE_NAME *)((char *)v7 + 8);
      v43 = v42;
      goto LABEL_28;
    }
    ++v5;
    v20 = 0;
LABEL_28:
    v24 = lpMem;
    lpMem = 0LL;
    if ( v24 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v24);
    }
    if ( v20 || v7 >= v4 || v5 >= 0x32 )
      return;
  }
  v26 = lpMem;
  lpMem = 0LL;
  if ( v26 )
  {
    v27 = GetProcessHeap();
    HeapFree(v27, 0, v26);
  }
}

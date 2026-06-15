/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800143F0
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012470 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013D50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800D8494 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800E3D9C (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x180135204 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPolicyVolumeForAudioStream(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3,
        float *a4,
        __int64 *a5,
        int a6)
{
  float v10; // xmm6_4
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  unsigned int (__fastcall *v18)(__int64, __int64, _QWORD); // rbx
  unsigned int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm0_4
  float (__fastcall *v22)(__int64, __int64, _QWORD); // rdi
  unsigned int v23; // ebx
  __int64 v24; // rax
  unsigned int (__fastcall *v25)(__int64, _QWORD); // rbx
  unsigned int v26; // eax
  __int64 v27; // rbx
  float (__fastcall *v28)(__int64, __int64); // rdi
  __int64 v29; // rax
  float v30; // xmm0_4
  float v31; // xmm0_4
  unsigned int (__fastcall *v32)(__int64, _QWORD); // rbx
  unsigned int v33; // eax
  __int64 v34; // rax
  float v35; // xmm6_4
  float v36; // xmm0_4
  __int64 result; // rax
  __int64 v38; // rbx
  void (__fastcall *v39)(__int64, __int64); // rdi
  __int64 v40; // rax
  float v41; // xmm0_4
  int v42; // [rsp+20h] [rbp-100h]
  __int64 v43; // [rsp+A0h] [rbp-80h] BYREF
  int v44; // [rsp+A8h] [rbp-78h]
  __int64 v45; // [rsp+ACh] [rbp-74h]
  int v46; // [rsp+B4h] [rbp-6Ch]
  __int64 v47; // [rsp+B8h] [rbp-68h]
  __int64 v48; // [rsp+C0h] [rbp-60h] BYREF
  float v49; // [rsp+C8h] [rbp-58h]
  __int64 v50; // [rsp+D0h] [rbp-50h] BYREF
  int v51; // [rsp+D8h] [rbp-48h] BYREF
  int v52; // [rsp+DCh] [rbp-44h] BYREF
  __int64 v53; // [rsp+E0h] [rbp-40h] BYREF
  int v54; // [rsp+E8h] [rbp-38h] BYREF
  float v55; // [rsp+ECh] [rbp-34h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-28h] BYREF
  int v58; // [rsp+100h] [rbp-20h] BYREF
  int v59; // [rsp+104h] [rbp-1Ch] BYREF
  __int64 v60; // [rsp+108h] [rbp-18h] BYREF
  __int64 v61; // [rsp+110h] [rbp-10h] BYREF
  __int64 v62; // [rsp+118h] [rbp-8h] BYREF
  __int64 v63; // [rsp+120h] [rbp+0h] BYREF
  _BYTE v64[4]; // [rsp+128h] [rbp+8h] BYREF
  float v65; // [rsp+12Ch] [rbp+Ch]
  char v66; // [rsp+130h] [rbp+10h]
  float v67; // [rsp+134h] [rbp+14h]
  __int64 v68; // [rsp+138h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+A8h]

  LODWORD(v50) = 1065353216;
  v10 = FLOAT_1_0;
  v45 = LODWORD(FLOAT_1_0) | 0x3F80000000000000LL;
  v47 = 0x3F8000003F800000LL;
  v46 = 1065353216;
  v48 = 0x3F8000003F800000LL;
  v49 = 1.0;
  v44 = 1065353216;
  *a4 = 1.0;
  v11 = *a2;
  v43 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 24))(a2, &v43);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v12,
      v42);
  v13 = *a2;
  v61 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v13 + 32))(a2, &v61);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v43 + 120LL))(v43) )
    v14 = 0.0;
  else
    v14 = FLOAT_1_0;
  *(float *)&v60 = v14;
  v15 = v14 * *a4;
  *a4 = v15;
  if ( v15 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 72))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2) )
      v16 = FLOAT_1_0;
    else
      v16 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v43 + 200LL))(v43);
    *((float *)&v48 + 1) = v16;
    *a4 = v16 * *a4;
    if ( v61
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2) )
    {
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v61 + 88LL))(v61, &v48, a5);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v43 + 472LL))(v43)
      || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v43 + 480LL))(v43) )
    {
      *a4 = *a4 * 0.0;
    }
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != 24 )
  {
    v17 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1)
       && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
       && dword_180196610[(*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2)]
        ? 0.0
        : FLOAT_1_0;
    *((float *)&v47 + 1) = v17;
    *a4 = v17 * *a4;
    v18 = *(unsigned int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL);
    v19 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
    v20 = v18(a1, v43, v19) ? (*(float (__fastcall **)(__int64))(*(_QWORD *)v43 + 208LL))(v43) : FLOAT_1_0;
    *(float *)&v47 = v20;
    *a4 = v20 * *a4;
    LODWORD(v50) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 288LL))(a1, a2);
    v21 = *(float *)&v50 * *a4;
    *a4 = v21;
    if ( v21 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2) )
      {
        v22 = *(float (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 360LL);
        v23 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        v24 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v49 = v22(a1, v24, v23);
        *a4 = v49 * *a4;
        v25 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL);
        v26 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        if ( v25(a1, v26) )
        {
          v30 = FLOAT_1_0;
        }
        else
        {
          v27 = v43;
          v28 = *(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 216LL);
          v29 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v30 = v28(v27, v29);
        }
        v46 = LODWORD(v30);
        v31 = v30 * *a4;
        *a4 = v31;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
          && (v32 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL),
              v33 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2),
              v32(a1, v33)) )
        {
          v38 = v43;
          v39 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 224LL);
          v40 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v39(v38, v40);
        }
        else
        {
          v31 = FLOAT_1_0;
        }
        *((float *)&v45 + 1) = v31;
        *a4 = v31 * *a4;
        (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)a1 + 64LL))(a1, a2, v64);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2)
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v43 + 184LL))(v43)
           || v61 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v61 + 128LL))(v61)) )
        {
          v10 = v64[0] ? 0.0 : v65;
          *(float *)&v45 = v10;
          if ( a5 )
          {
            v34 = v68;
            if ( *a5 > v68 )
              v34 = *a5;
            *a5 = v34;
          }
        }
        v35 = fminf(v10, *(float *)&v48) * *a4;
        if ( v66 )
          v36 = 0.0;
        else
          v36 = v67;
        v44 = LODWORD(v36);
        *a4 = v35 * v36;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 64))(a2);
  if ( (_BYTE)result )
  {
    v41 = *a4;
    if ( *a4 != 0.0 )
      v41 = FLOAT_1_0;
    *a4 = v41;
  }
  if ( a3 )
  {
    result = *a3;
    if ( a6 == 2 )
    {
      if ( (unsigned int)result > 4 && (a3[4] & 6) != 0 )
      {
        result = *((_QWORD *)a3 + 3) & 6LL;
        if ( result == *((_QWORD *)a3 + 3) )
        {
          v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
          v58 = v44;
          v57 = __PAIR64__(v45, HIDWORD(v45));
          v56 = __PAIR64__(v46, LODWORD(v49));
          v54 = HIDWORD(v47);
          v55 = *(float *)&v47;
          v53 = __PAIR64__(v48, HIDWORD(v48));
          v52 = v60;
          v51 = v50;
          v62 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 72LL))(v43);
          v63 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
          result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     (int)a3,
                     (int)&dword_18018C295,
                     (__int64)&v63,
                     (__int64)&v50,
                     (__int64)&v62,
                     (__int64)&v51,
                     (__int64)&v52,
                     (__int64)&v53,
                     (__int64)&v53 + 4,
                     (__int64)&v54,
                     (__int64)&v55,
                     (__int64)&v56,
                     (__int64)&v56 + 4,
                     (__int64)&v57,
                     (__int64)&v57 + 4,
                     (__int64)&v58,
                     (__int64)&v59);
        }
      }
    }
    else if ( (unsigned int)result > 4 && (a3[4] & 2) != 0 )
    {
      result = *((_QWORD *)a3 + 3) & 2LL;
      if ( result == *((_QWORD *)a3 + 3) )
      {
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
        v52 = v44;
        v53 = v45;
        v54 = v46;
        v55 = v49;
        v56 = v47;
        v57 = v48;
        v58 = v60;
        v59 = v50;
        v50 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 72LL))(v43);
        v62 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
        result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                   (int)a3,
                   (int)&unk_18018C153,
                   (__int64)&v62,
                   (__int64)&v60,
                   (__int64)&v50,
                   (__int64)&v59,
                   (__int64)&v58,
                   (__int64)&v57 + 4,
                   (__int64)&v57,
                   (__int64)&v56 + 4,
                   (__int64)&v56,
                   (__int64)&v55,
                   (__int64)&v54,
                   (__int64)&v53 + 4,
                   (__int64)&v53,
                   (__int64)&v52,
                   (__int64)&v51);
      }
    }
  }
  if ( v61 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  if ( v43 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  return result;
}

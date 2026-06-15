/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18001A688
 * Callers:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x18000B860 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800EB5B8 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x180084530 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 a1, __int64 *a2, _DWORD *a3, float *a4, __int64 *a5, int a6)
{
  float v10; // xmm6_4
  __int64 (__fastcall *v11)(__int64 *, __int64 *); // rbx
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
  __int64 v38; // rbx
  void (__fastcall *v39)(__int64, __int64); // rdi
  __int64 v40; // rax
  float v41; // xmm0_4
  __int64 v42; // [rsp+A0h] [rbp-80h] BYREF
  int v43; // [rsp+A8h] [rbp-78h]
  __int64 v44; // [rsp+ACh] [rbp-74h]
  int v45; // [rsp+B4h] [rbp-6Ch]
  __int64 v46; // [rsp+B8h] [rbp-68h]
  __int64 v47; // [rsp+C0h] [rbp-60h] BYREF
  float v48; // [rsp+C8h] [rbp-58h]
  __int64 v49; // [rsp+D0h] [rbp-50h] BYREF
  int v50; // [rsp+D8h] [rbp-48h] BYREF
  int v51; // [rsp+DCh] [rbp-44h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-40h] BYREF
  int v53; // [rsp+E8h] [rbp-38h] BYREF
  float v54; // [rsp+ECh] [rbp-34h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-28h] BYREF
  int v57; // [rsp+100h] [rbp-20h] BYREF
  int v58; // [rsp+104h] [rbp-1Ch] BYREF
  __int64 v59; // [rsp+108h] [rbp-18h] BYREF
  __int64 v60; // [rsp+110h] [rbp-10h] BYREF
  __int64 v61; // [rsp+118h] [rbp-8h] BYREF
  __int64 v62; // [rsp+120h] [rbp+0h] BYREF
  _BYTE v63[4]; // [rsp+128h] [rbp+8h] BYREF
  float v64; // [rsp+12Ch] [rbp+Ch]
  char v65; // [rsp+130h] [rbp+10h]
  float v66; // [rsp+134h] [rbp+14h]
  __int64 v67; // [rsp+138h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+A8h]

  LODWORD(v49) = 1065353216;
  v10 = FLOAT_1_0;
  v44 = LODWORD(FLOAT_1_0) | 0x3F80000000000000LL;
  v46 = 0x3F8000003F800000LL;
  v45 = 1065353216;
  v47 = 0x3F8000003F800000LL;
  v48 = 1.0;
  v43 = 1065353216;
  *a4 = 1.0;
  v42 = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*a2 + 24);
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset(&v42);
  v12 = v11(a2, &v42);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (int)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v12);
  v13 = *a2;
  v60 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v13 + 32))(a2, &v60);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 120LL))(v42) )
    v14 = 0.0;
  else
    v14 = FLOAT_1_0;
  *(float *)&v59 = v14;
  v15 = v14 * *a4;
  *a4 = v15;
  if ( v15 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 72))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2) )
      v16 = FLOAT_1_0;
    else
      v16 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v42 + 200LL))(v42);
    *((float *)&v47 + 1) = v16;
    *a4 = v16 * *a4;
    if ( v60
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2) )
    {
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v60 + 88LL))(v60, &v47, a5);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 472LL))(v42)
      || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 480LL))(v42) )
    {
      *a4 = *a4 * 0.0;
    }
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != 24 )
  {
    v17 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1)
       && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
       && dword_1801A04A0[(*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2)]
        ? 0.0
        : FLOAT_1_0;
    *((float *)&v46 + 1) = v17;
    *a4 = v17 * *a4;
    v18 = *(unsigned int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL);
    v19 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
    v20 = v18(a1, v42, v19) ? (*(float (__fastcall **)(__int64))(*(_QWORD *)v42 + 208LL))(v42) : FLOAT_1_0;
    *(float *)&v46 = v20;
    *a4 = v20 * *a4;
    LODWORD(v49) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 280LL))(a1, a2);
    v21 = *(float *)&v49 * *a4;
    *a4 = v21;
    if ( v21 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2) )
      {
        v22 = *(float (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 352LL);
        v23 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        v24 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v48 = v22(a1, v24, v23);
        *a4 = v48 * *a4;
        v25 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL);
        v26 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        if ( v25(a1, v26) )
        {
          v30 = FLOAT_1_0;
        }
        else
        {
          v27 = v42;
          v28 = *(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 216LL);
          v29 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v30 = v28(v27, v29);
        }
        v45 = LODWORD(v30);
        v31 = v30 * *a4;
        *a4 = v31;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
          && (v32 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 88LL),
              v33 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2),
              v32(a1, v33)) )
        {
          v38 = v42;
          v39 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 224LL);
          v40 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v39(v38, v40);
        }
        else
        {
          v31 = FLOAT_1_0;
        }
        *((float *)&v44 + 1) = v31;
        *a4 = v31 * *a4;
        (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)a1 + 64LL))(a1, a2, v63);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2)
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v42 + 184LL))(v42)
           || v60 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v60 + 128LL))(v60)) )
        {
          v10 = v63[0] ? 0.0 : v64;
          *(float *)&v44 = v10;
          if ( a5 )
          {
            v34 = v67;
            if ( *a5 > v67 )
              v34 = *a5;
            *a5 = v34;
          }
        }
        v35 = fminf(v10, *(float *)&v47) * *a4;
        if ( v65 )
          v36 = 0.0;
        else
          v36 = v66;
        v43 = LODWORD(v36);
        *a4 = v35 * v36;
      }
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2) )
  {
    v41 = *a4;
    if ( *a4 != 0.0 )
      v41 = FLOAT_1_0;
    *a4 = v41;
  }
  if ( a3 )
  {
    if ( a6 == 2 )
    {
      if ( *a3 > 4u && (unsigned __int8)tlgKeywordOn(a3, 6LL) )
      {
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
        v57 = v43;
        v56 = __PAIR64__(v44, HIDWORD(v44));
        v55 = __PAIR64__(v45, LODWORD(v48));
        v53 = HIDWORD(v46);
        v54 = *(float *)&v46;
        v52 = __PAIR64__(v47, HIDWORD(v47));
        v51 = v59;
        v50 = v49;
        v61 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 72LL))(v42);
        v62 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)a3,
          (int)&dword_18019527F,
          (__int64)&v62,
          (__int64)&v49,
          (__int64)&v61,
          (__int64)&v50,
          (__int64)&v51,
          (__int64)&v52,
          (__int64)&v52 + 4,
          (__int64)&v53,
          (__int64)&v54,
          (__int64)&v55,
          (__int64)&v55 + 4,
          (__int64)&v56,
          (__int64)&v56 + 4,
          (__int64)&v57,
          (__int64)&v58);
      }
    }
    else if ( *a3 > 4u && (unsigned __int8)tlgKeywordOn(a3, 2LL) )
    {
      v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 40LL))(v42);
      v51 = v43;
      v52 = v44;
      v53 = v45;
      v54 = v48;
      v55 = v46;
      v56 = v47;
      v57 = v59;
      v58 = v49;
      v49 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
      v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 72LL))(v42);
      v61 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 80))(a2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)a3,
        (int)&unk_18019513D,
        (__int64)&v61,
        (__int64)&v59,
        (__int64)&v49,
        (__int64)&v58,
        (__int64)&v57,
        (__int64)&v56 + 4,
        (__int64)&v56,
        (__int64)&v55 + 4,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53,
        (__int64)&v52 + 4,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v50);
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v60);
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v42);
}

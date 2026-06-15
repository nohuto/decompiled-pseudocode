/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18003A124
 * Callers:
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x1800398B4 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 a1, __int64 *a2, __int64 a3, float *a4)
{
  float v7; // xmm8_4
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  unsigned int (__fastcall *v16)(__int64, __int64, _QWORD); // rbx
  unsigned int v17; // eax
  float v18; // xmm0_4
  float (__fastcall *v19)(__int64, __int64, _QWORD); // rdi
  unsigned int v20; // ebx
  __int64 v21; // rax
  float v22; // xmm0_4
  unsigned int (__fastcall *v23)(__int64, _QWORD); // rbx
  unsigned int v24; // eax
  __int64 v25; // rbx
  void (__fastcall *v26)(__int64, __int64); // rdi
  __int64 v27; // rax
  float v28; // xmm0_4
  unsigned int (__fastcall *v29)(__int64, _QWORD); // rbx
  unsigned int v30; // eax
  __int64 v31; // rbx
  void (__fastcall *v32)(__int64, __int64); // rdi
  __int64 v33; // rax
  __int64 result; // rax
  float v35; // xmm0_4
  __int64 v36; // [rsp+28h] [rbp-49h] BYREF
  float v37; // [rsp+30h] [rbp-41h] BYREF
  __int64 v38; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v39[4]; // [rsp+40h] [rbp-31h] BYREF
  float v40; // [rsp+44h] [rbp-2Dh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+4Fh]

  v7 = FLOAT_1_0;
  v37 = 1.0;
  *a4 = 1.0;
  v8 = *a2;
  v36 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 24))(a2, &v36);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v9);
  v10 = *a2;
  v38 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v10 + 32))(a2, &v38);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 120LL))(v36) )
    v11 = 0.0;
  else
    v11 = FLOAT_1_0;
  v12 = v11 * *a4;
  *a4 = v12;
  if ( v12 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 72))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2) )
      v13 = FLOAT_1_0;
    else
      v13 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v36 + 200LL))(v36);
    *a4 = v13 * *a4;
    if ( v38
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v38 + 88LL))(v38, &v37, 0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 472LL))(v36)
      || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 480LL))(v36) )
    {
      *a4 = *a4 * 0.0;
    }
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2) != 24 )
  {
    v14 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1)
       && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
       && dword_180050290[(*(unsigned int (__fastcall **)(__int64 *))(*a2 + 56))(a2)]
        ? 0.0
        : FLOAT_1_0;
    v15 = v14 * *a4;
    *a4 = v15;
    v16 = *(unsigned int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 72LL);
    v17 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
    if ( v16(a1, v36, v17) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 208LL))(v36);
    else
      v15 = FLOAT_1_0;
    *a4 = v15 * *a4;
    v18 = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 288LL))(a1, a2) * *a4;
    *a4 = v18;
    if ( v18 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2) )
      {
        v19 = *(float (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 360LL);
        v20 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        v21 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
        v22 = v19(a1, v21, v20) * *a4;
        *a4 = v22;
        v23 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 80LL);
        v24 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2);
        if ( v23(a1, v24) )
        {
          v22 = FLOAT_1_0;
        }
        else
        {
          v25 = v36;
          v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 216LL);
          v27 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v26(v25, v27);
        }
        v28 = v22 * *a4;
        *a4 = v28;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 64))(a2)
          || (v29 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL),
              v30 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 56))(a2),
              !v29(a1, v30)) )
        {
          v28 = FLOAT_1_0;
        }
        else
        {
          v31 = v36;
          v32 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 224LL);
          v33 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 40))(a2);
          v32(v31, v33);
        }
        *a4 = v28 * *a4;
        (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)a1 + 64LL))(a1, a2, v39);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a2 + 48))(a2)
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v36 + 184LL))(v36)
           || v38 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v38 + 128LL))(v38)) )
        {
          if ( v39[0] )
            v7 = 0.0;
          else
            v7 = v40;
        }
        *a4 = fminf(v7, v37) * *a4;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 64))(a2);
  if ( (_BYTE)result )
  {
    v35 = *a4;
    if ( *a4 != 0.0 )
      v35 = FLOAT_1_0;
    *a4 = v35;
  }
  if ( v38 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v36 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  return result;
}

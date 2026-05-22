/*
 * XREFs of ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z @ 0x180155680
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800E5B40 (-OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180154E88 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$07@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoteTextIntegration_Perf_Vail@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180155390 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoteTextIntegration_Perf_Vail@@@details.c)
 *     ?SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z @ 0x180155414 (-SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z.c)
 */

__int64 __fastcall InputServiceProxy::SendKeyboardEvent(
        InputServiceProxy *this,
        const struct KeyboardEvent *a2,
        unsigned int a3)
{
  unsigned int v4; // edi
  __int16 v5; // r12
  unsigned __int16 v6; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  bool v13; // zf
  __int16 v14; // ax
  __int16 v15; // cx
  _BYTE *v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-99h]
  int v24; // [rsp+20h] [rbp-99h]
  bool v25[4]; // [rsp+70h] [rbp-49h] BYREF
  int v26; // [rsp+74h] [rbp-45h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-41h] BYREF
  int v28; // [rsp+80h] [rbp-39h] BYREF
  __int64 v29; // [rsp+88h] [rbp-31h] BYREF
  int v30; // [rsp+90h] [rbp-29h] BYREF
  int v31; // [rsp+94h] [rbp-25h] BYREF
  int v32; // [rsp+98h] [rbp-21h] BYREF
  int v33; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v34; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-11h] BYREF
  LARGE_INTEGER v36; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-1h] BYREF
  int v38; // [rsp+C8h] [rbp+Fh]
  unsigned __int16 v39[2]; // [rsp+D0h] [rbp+17h] BYREF
  __int16 v40; // [rsp+D4h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *(_DWORD *)v39 = 0;
  v40 = 0;
  v4 = 0;
  v28 = 0;
  v5 = 0;
  v26 = 0;
  v6 = 0;
  v35 = 0LL;
  v29 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned int)dword_1802404C8 > 5
    && (qword_1802404D8 & 0x40000) != 0
    && (qword_1802404E0 & 0x40000) == qword_1802404E0 )
  {
    v36 = PerformanceCount;
    v30 = *((unsigned __int16 *)a2 + 8);
    v31 = *((unsigned __int16 *)a2 + 9);
    *(_WORD *)v25 = *((_WORD *)a2 + 10);
    v32 = *((_DWORD *)a2 + 1);
    v33 = *(_DWORD *)a2;
    v34 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v9,
      byte_180205A81,
      v10,
      v11,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)v25,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v36);
  }
  v12 = 256LL;
  if ( !a3 )
  {
LABEL_17:
    if ( *((_DWORD *)a2 + 1) != 1 )
    {
LABEL_19:
      if ( *(_DWORD *)a2 == 2 )
      {
        SurrogateCharAccumulator::OnKey(
          (InputServiceProxy *)((char *)this + 48),
          *((_WORD *)a2 + 10),
          (*((_BYTE *)a2 + 8) & 4) != 0,
          v25,
          v39,
          &v28);
        v4 = v28;
      }
      if ( *((_QWORD *)this + 4) )
      {
        InputServiceProxy::SampleRandomPickStart(
          this,
          *(_DWORD *)a2,
          *((_DWORD *)a2 + 1),
          *((_WORD *)a2 + 10),
          *((_WORD *)a2 + 9),
          *((_WORD *)a2 + 8),
          PerformanceCount.QuadPart);
        v16 = (_BYTE *)*((_QWORD *)this + 7);
        if ( *v16 )
        {
          v6 = 4;
          *v16 = 0;
        }
        v17 = MsgBlobCreateShared((char *)a2 + 38, 256LL, &v29);
        if ( v17 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x115,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)(unsigned int)v17,
            v23);
        if ( !*((_DWORD *)a2 + 1) )
        {
          if ( *(_DWORD *)a2 )
          {
            if ( *(_DWORD *)a2 == 1 )
            {
              LOWORD(v23) = *((_WORD *)a2 + 9);
              v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 48LL))(
                      *((_QWORD *)this + 4),
                      a3,
                      (unsigned __int16)(v5 | *((_WORD *)a2 + 4)),
                      v6 | 8u);
              if ( v21 < 0 )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x137,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                  (const char *)(unsigned int)v21,
                  v23);
            }
            else if ( *(_DWORD *)a2 == 2 )
            {
              v18 = MsgStringCreateShared(v39, v4, &v35);
              if ( v18 < 0 )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x140,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                  (const char *)(unsigned int)v18,
                  v23);
              LOWORD(v23) = *((_WORD *)a2 + 9);
              v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 64LL))(
                      *((_QWORD *)this + 4),
                      a3,
                      (unsigned __int16)(v5 | *((_WORD *)a2 + 4)),
                      v6);
              if ( v19 < 0 )
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  (void *)0x14C,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                  (const char *)(unsigned int)v19,
                  v23);
              MsgRelease(v35);
            }
          }
          else
          {
            v24 = v6 | *((_DWORD *)a2 + 3);
            v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(
                    *((_QWORD *)this + 4),
                    a3,
                    *((unsigned __int16 *)a2 + 11),
                    (unsigned __int16)(v5 | *((_WORD *)a2 + 4)));
            if ( v22 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x128,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                (const char *)(unsigned int)v22,
                v24);
          }
        }
        MsgRelease(v29);
      }
      return 0LL;
    }
LABEL_18:
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoteTextIntegration_Perf_Vail>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_RemoteTextIntegration_Perf_Vail>::GetImpl'::`2'::impl,
      0,
      v12,
      v11);
    goto LABEL_19;
  }
  if ( *((_DWORD *)a2 + 1) == 1 )
    goto LABEL_18;
  v13 = *(_DWORD *)a2 == 2;
  v37 = 0LL;
  v38 = 0;
  if ( v13 )
  {
    v14 = *((_WORD *)a2 + 10);
    v15 = 4327;
  }
  else
  {
    v15 = *((_WORD *)a2 + 9);
    v14 = *((unsigned __int8 *)a2 + 16);
  }
  v13 = (*((_BYTE *)a2 + 8) & 4) == 0;
  LOWORD(v37) = v14;
  WORD4(v37) = v15;
  if ( !v13 )
  {
    v15 |= 0x8000u;
    WORD4(v37) = v15;
  }
  if ( (*((_WORD *)a2 + 8) & 0xE100) == 0xE000 )
    WORD4(v37) = v15 | 0x100;
  HIDWORD(v37) = *((_DWORD *)a2 + 8);
  LOWORD(v38) = *((_WORD *)a2 + 11);
  if ( (int)NtUserPostKeyboardInputMessage(a3, &v37, &v26) >= 0 && v26 != *((_DWORD *)this + 13) )
  {
    *((_DWORD *)this + 13) = v26;
    v5 = 2048;
    goto LABEL_17;
  }
  return 0LL;
}

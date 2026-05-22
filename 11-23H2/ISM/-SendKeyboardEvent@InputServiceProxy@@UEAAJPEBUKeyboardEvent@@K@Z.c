/*
 * XREFs of ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@K@Z @ 0x1801748E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800FE940 (-OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801742FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U1@U-$_tlgWrapperByVal@$07@@.c)
 *     ?SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z @ 0x180174670 (-SampleRandomPickStart@InputServiceProxy@@AEAAXIIGGG_K@Z.c)
 */

__int64 __fastcall InputServiceProxy::SendKeyboardEvent(
        InputServiceProxy *this,
        const struct KeyboardEvent *a2,
        unsigned int a3)
{
  unsigned int v4; // edi
  __int16 v5; // r14
  unsigned __int16 v6; // r12
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  __int16 v13; // ax
  __int16 v14; // cx
  _BYTE *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+20h] [rbp-99h]
  int v23; // [rsp+20h] [rbp-99h]
  bool v24[4]; // [rsp+70h] [rbp-49h] BYREF
  int v25; // [rsp+74h] [rbp-45h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-41h] BYREF
  int v27; // [rsp+80h] [rbp-39h] BYREF
  __int64 v28; // [rsp+88h] [rbp-31h] BYREF
  int v29; // [rsp+90h] [rbp-29h] BYREF
  int v30; // [rsp+94h] [rbp-25h] BYREF
  int v31; // [rsp+98h] [rbp-21h] BYREF
  int v32; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v33; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-11h] BYREF
  LARGE_INTEGER v35; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-1h] BYREF
  int v37; // [rsp+C8h] [rbp+Fh]
  unsigned __int16 v38[2]; // [rsp+D0h] [rbp+17h] BYREF
  __int16 v39; // [rsp+D4h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *(_DWORD *)v38 = 0;
  v39 = 0;
  v4 = 0;
  v27 = 0;
  v5 = 0;
  v25 = 0;
  v6 = 0;
  v34 = 0LL;
  v28 = 0LL;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned int)dword_180266508 > 5
    && (qword_180266518 & 0x40000) != 0
    && (qword_180266520 & 0x40000) == qword_180266520 )
  {
    v35 = PerformanceCount;
    v29 = *((unsigned __int16 *)a2 + 8);
    v30 = *((unsigned __int16 *)a2 + 9);
    *(_WORD *)v24 = *((_WORD *)a2 + 10);
    v31 = *((_DWORD *)a2 + 1);
    v32 = *(_DWORD *)a2;
    v33 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v9,
      byte_180227E21,
      v10,
      v11,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)v24,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v35);
  }
  if ( !a3 || *((_DWORD *)a2 + 1) == 1 )
    goto LABEL_17;
  v12 = *(_DWORD *)a2 == 2;
  v36 = 0LL;
  v37 = 0;
  if ( v12 )
  {
    v13 = *((_WORD *)a2 + 10);
    v14 = 4327;
  }
  else
  {
    v14 = *((_WORD *)a2 + 9);
    v13 = *((unsigned __int8 *)a2 + 16);
  }
  v12 = (*((_BYTE *)a2 + 8) & 4) == 0;
  LOWORD(v36) = v13;
  WORD4(v36) = v14;
  if ( !v12 )
  {
    v14 |= 0x8000u;
    WORD4(v36) = v14;
  }
  if ( (*((_WORD *)a2 + 8) & 0xE100) == 0xE000 )
    WORD4(v36) = v14 | 0x100;
  HIDWORD(v36) = *((_DWORD *)a2 + 8);
  LOWORD(v37) = *((_WORD *)a2 + 11);
  if ( (int)NtUserPostKeyboardInputMessage(a3, &v36, &v25) >= 0 && v25 != *((_DWORD *)this + 13) )
  {
    *((_DWORD *)this + 13) = v25;
    v5 = 2048;
LABEL_17:
    if ( *(_DWORD *)a2 == 2 )
    {
      SurrogateCharAccumulator::OnKey(
        (InputServiceProxy *)((char *)this + 48),
        *((_WORD *)a2 + 10),
        (*((_BYTE *)a2 + 8) & 4) != 0,
        v24,
        v38,
        &v27);
      v4 = v27;
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
      v15 = (_BYTE *)*((_QWORD *)this + 7);
      if ( *v15 )
      {
        v6 = 4;
        *v15 = 0;
      }
      v16 = MsgBlobCreateShared((char *)a2 + 38, 256LL, &v28);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x115,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)v16,
          v22);
      if ( !*((_DWORD *)a2 + 1) )
      {
        if ( *(_DWORD *)a2 )
        {
          if ( *(_DWORD *)a2 == 1 )
          {
            LOWORD(v22) = *((_WORD *)a2 + 9);
            v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 48LL))(
                    *((_QWORD *)this + 4),
                    a3,
                    (unsigned __int16)(*((_WORD *)a2 + 4) | v5),
                    v6 | 8u);
            if ( v20 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x137,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                (const char *)(unsigned int)v20,
                v22);
          }
          else if ( *(_DWORD *)a2 == 2 )
          {
            v17 = MsgStringCreateShared(v38, v4, &v34);
            if ( v17 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x140,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                (const char *)(unsigned int)v17,
                v22);
            LOWORD(v22) = *((_WORD *)a2 + 9);
            v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 64LL))(
                    *((_QWORD *)this + 4),
                    a3,
                    (unsigned __int16)(*((_WORD *)a2 + 4) | v5),
                    v6);
            if ( v18 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x14C,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
                (const char *)(unsigned int)v18,
                v22);
            MsgRelease(v34);
          }
        }
        else
        {
          v23 = *((_DWORD *)a2 + 3) | v6;
          v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(
                  *((_QWORD *)this + 4),
                  a3,
                  *((unsigned __int16 *)a2 + 11),
                  (unsigned __int16)(*((_WORD *)a2 + 4) | v5));
          if ( v21 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x128,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
              (const char *)(unsigned int)v21,
              v23);
        }
      }
      MsgRelease(v28);
    }
  }
  return 0LL;
}

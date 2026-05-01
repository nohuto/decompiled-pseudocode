/*
 * XREFs of ?Stop@VirtualDesktopSetWallpaperActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_N@Z @ 0x180604914
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18060384C (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1805FDD80 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805FDD80.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity::Stop(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetWallpaperActivity *this,
        struct IVirtualDesktop *a2,
        char a3)
{
  int *v5; // rax
  int v6; // ecx
  int *v7; // rdi
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _DWORD *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  _BYTE v18[4]; // [rsp+B0h] [rbp-80h] BYREF
  int v19; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v20; // [rsp+B8h] [rbp-78h] BYREF
  int v21; // [rsp+BCh] [rbp-74h] BYREF
  int v22; // [rsp+C0h] [rbp-70h] BYREF
  int v23; // [rsp+C4h] [rbp-6Ch] BYREF
  int v24; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+100h] [rbp-30h] BYREF
  __int64 v32; // [rsp+108h] [rbp-28h] BYREF
  __int64 v33; // [rsp+110h] [rbp-20h] BYREF
  __int64 v34; // [rsp+118h] [rbp-18h] BYREF
  __int64 v35; // [rsp+120h] [rbp-10h] BYREF
  _BYTE v36[24]; // [rsp+128h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+140h] [rbp+10h] BYREF
  __int64 *v38; // [rsp+160h] [rbp+30h]
  int v39; // [rsp+168h] [rbp+38h]
  int v40; // [rsp+16Ch] [rbp+3Ch]
  int *v41; // [rsp+170h] [rbp+40h]
  int v42; // [rsp+178h] [rbp+48h]
  int v43; // [rsp+17Ch] [rbp+4Ch]
  DWORD *v44; // [rsp+180h] [rbp+50h]
  int v45; // [rsp+188h] [rbp+58h]
  int v46; // [rsp+18Ch] [rbp+5Ch]
  _BYTE *v47; // [rsp+190h] [rbp+60h]
  int v48; // [rsp+198h] [rbp+68h]
  int v49; // [rsp+19Ch] [rbp+6Ch]
  _BYTE *v50; // [rsp+1A0h] [rbp+70h]
  int v51; // [rsp+1A8h] [rbp+78h]
  int v52; // [rsp+1ACh] [rbp+7Ch]

  (*(void (__fastcall **)(struct IVirtualDesktop *, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v36);
  v5 = (int *)*((_QWORD *)this + 6);
  v6 = v5[19];
  if ( v6 >= 0 || v6 != v5[22] || (v7 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = wil::details::static_lazy<WindowManagementLogging>::get(
            v13,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v15 = (_DWORD *)v14[1];
    if ( *v15 > 5u && tlgKeywordOn(v14[1], 0x400000000000LL) )
    {
      v18[0] = a3;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v40 = 0;
      v20 = CurrentThreadId;
      v19 = *(_DWORD *)(v17 + 76);
      v50 = v18;
      v47 = v36;
      v44 = &v20;
      v41 = &v19;
      v38 = &v25;
      v45 = 4;
      v42 = 4;
      v25 = 50331648LL;
      v51 = 1;
      v48 = 16;
      v39 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v15,
        (unsigned __int8 *)dword_18086CFBC,
        (const GUID *)(v17 + 8),
        0LL,
        7u,
        &v37);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v9 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                     v8,
                     (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v12 = *((_QWORD *)this + 6);
      v26 = (__int64)v36;
      v27 = *((_QWORD *)v7 + 15);
      v28 = *((_QWORD *)v7 + 14);
      v21 = v7[26];
      v29 = *((_QWORD *)v7 + 12);
      v30 = *((_QWORD *)v7 + 11);
      v22 = v7[20];
      v31 = *((_QWORD *)v7 + 9);
      v23 = v7[8];
      v32 = *((_QWORD *)v7 + 3);
      v24 = *v7;
      v33 = *((_QWORD *)v7 + 16);
      v19 = v7[16];
      v34 = *((_QWORD *)v7 + 7);
      v20 = v7[2];
      v18[0] = a3;
      v35 = 0x1000000LL;
      v25 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
        v10,
        (unsigned __int8 *)dword_18086CE65,
        (const GUID *)(v12 + 8),
        v11,
        (__int64)&v25,
        (__int64)&v35,
        (__int64)&v20,
        (const wchar_t **)&v34,
        (__int64)&v19,
        (const wchar_t **)&v33,
        (__int64)&v24,
        (const WCHAR **)&v32,
        (__int64)&v23,
        (const wchar_t **)&v31,
        (__int64)&v22,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v21,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        &v26,
        (__int64)v18);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}

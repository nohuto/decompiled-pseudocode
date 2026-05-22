/*
 * XREFs of ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18010D680
 * Callers:
 *     ??$MPCTarget_DeliverInput@PEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@ISMTracing@@SAX$$QEAPEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@Z @ 0x18010C5A0 (--$MPCTarget_DeliverInput@PEAVMPCTarget@@AEAPEAULegacyInputInfo@@AEAJ@ISMTracing@@SAX$$QEAPEAVMP.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800B4BD0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x1800B4CD4 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x1800C5960 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18010C8E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U2@U2@U-.c)
 */

void __fastcall ISMTracing::MPCTarget_DeliverInput_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        int a4)
{
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  WINBOOL fPending; // [rsp+88h] [rbp-9h] BYREF
  int v11; // [rsp+8Ch] [rbp-5h] BYREF
  int v12; // [rsp+90h] [rbp-1h] BYREF
  int v13; // [rsp+94h] [rbp+3h] BYREF
  int v14; // [rsp+98h] [rbp+7h] BYREF
  int v15; // [rsp+9Ch] [rbp+Bh] BYREF
  int v16; // [rsp+A0h] [rbp+Fh] BYREF
  int v17; // [rsp+A4h] [rbp+13h] BYREF
  int PIDOfMPCTarget; // [rsp+A8h] [rbp+17h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+27h] BYREF
  int v21; // [rsp+C0h] [rbp+2Fh]
  __int64 TypeOfTarget; // [rsp+C8h] [rbp+37h] BYREF
  __int64 v23; // [rsp+F8h] [rbp+67h] BYREF

  v23 = (__int64)this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      v20 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v21 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v20);
    }
    v7 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      LOBYTE(v23) = *((_BYTE *)a3 + 3002);
      v12 = *((_DWORD *)a3 + 17);
      v13 = *((_DWORD *)a3 + 16);
      v14 = *((_DWORD *)a3 + 18);
      v15 = *((_DWORD *)a3 + 2);
      v16 = *((_DWORD *)a3 + 1);
      v17 = *(_DWORD *)a3;
      v11 = a4;
      TypeOfTarget = (__int64)ISMTracing::GetTypeOfTarget(a2);
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
      v20 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v7,
        (unsigned __int8 *)dword_18022574D,
        v8,
        v9,
        (__int64)&v20,
        (__int64)&PIDOfMPCTarget,
        (const WCHAR **)&TypeOfTarget,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v23,
        (__int64)&v11);
    }
  }
}

/*
 * XREFs of ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@_NI@Z @ 0x1800C79DC
 * Callers:
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800C468C (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x1800B4BD0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800C5054 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U-$_tlgWrap.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        char a4,
        unsigned int a5)
{
  __int64 v8; // rbx
  bool v9; // zf
  const wchar_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  WINBOOL fPending; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v14; // [rsp+6Ch] [rbp+3h] BYREF
  int v15; // [rsp+70h] [rbp+7h] BYREF
  int v16; // [rsp+74h] [rbp+Bh] BYREF
  int v17; // [rsp+78h] [rbp+Fh] BYREF
  int PIDOfMPCTarget; // [rsp+7Ch] [rbp+13h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+17h] BYREF
  __int64 v20; // [rsp+88h] [rbp+1Fh] BYREF
  int v21; // [rsp+90h] [rbp+27h]
  __int64 v22; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+C8h] [rbp+5Fh] BYREF

  v23 = (__int64)this;
  v19 = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, (LPVOID *)&v19) && fPending )
  {
    v20 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    v19 = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v21 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v20);
  }
  v8 = v19[1];
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
  {
    v9 = *(_DWORD *)a3 == 512;
    v14 = a5;
    v15 = *((_DWORD *)a3 + 18);
    v16 = *((_DWORD *)a3 + 2);
    v17 = *((_DWORD *)a3 + 1);
    LOBYTE(v23) = a4;
    if ( v9 )
    {
      v10 = L"Hand";
    }
    else if ( *(_DWORD *)a3 == 1024 )
    {
      v10 = L"Clicker";
    }
    else if ( *(_DWORD *)a3 == 0x2000 )
    {
      v10 = L"6dof";
    }
    else
    {
      v10 = &Src;
      if ( *(_DWORD *)a3 == 0x40000 )
        v10 = L"Voice";
    }
    v22 = (__int64)v10;
    PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
    v20 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v8,
      (unsigned __int8 *)dword_1802221C4,
      v11,
      v12,
      (__int64)&v20,
      (__int64)&PIDOfMPCTarget,
      (const WCHAR **)&v22,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v23,
      (__int64)&v14);
  }
}

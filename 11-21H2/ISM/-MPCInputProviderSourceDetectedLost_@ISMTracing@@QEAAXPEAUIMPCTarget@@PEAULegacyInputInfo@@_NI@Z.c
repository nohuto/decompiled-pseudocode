/*
 * XREFs of ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@_NI@Z @ 0x1800AEA10
 * Callers:
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x1800AC260 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x18009D9B0 (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1800ACBAC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@U2@U-$_tlgWrap.c)
 */

void __fastcall ISMTracing::MPCInputProviderSourceDetectedLost_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        char a4,
        unsigned int a5)
{
  __int64 v8; // rdi
  bool v9; // zf
  unsigned __int16 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+68h] [rbp+Fh] BYREF
  int v14; // [rsp+6Ch] [rbp+13h] BYREF
  int v15; // [rsp+70h] [rbp+17h] BYREF
  int v16; // [rsp+74h] [rbp+1Bh] BYREF
  int PIDOfMPCTarget; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+80h] [rbp+27h] BYREF
  __int64 v19; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+5Fh] BYREF

  v20 = (__int64)this;
  v8 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
  {
    v9 = *(_DWORD *)a3 == 512;
    v13 = a5;
    v14 = *((_DWORD *)a3 + 18);
    v15 = *((_DWORD *)a3 + 2);
    v16 = *((_DWORD *)a3 + 1);
    LOBYTE(v20) = a4;
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
      v10 = word_1801F8EB4;
      if ( *(_DWORD *)a3 == 0x40000 )
        v10 = L"Voice";
    }
    v18 = (__int64)v10;
    PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a2);
    v19 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v8,
      (unsigned __int8 *)dword_18020081C,
      v11,
      v12,
      (__int64)&v19,
      (__int64)&PIDOfMPCTarget,
      (unsigned __int16 **)&v18,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v20,
      (__int64)&v13);
  }
}

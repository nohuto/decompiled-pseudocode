/*
 * XREFs of ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x18009343C
 * Callers:
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x180093194 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@33333333@Z @ 0x180093248 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteT.c)
 */

void __fastcall ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
        ISMTracing *this,
        const bool *a2,
        const unsigned int *a3,
        const bool *a4,
        const bool *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  char v17; // cl
  char v18; // [rsp+70h] [rbp-10h] BYREF
  char v19; // [rsp+71h] [rbp-Fh] BYREF
  char v20; // [rsp+72h] [rbp-Eh] BYREF
  char v21; // [rsp+73h] [rbp-Dh] BYREF
  char v22; // [rsp+74h] [rbp-Ch] BYREF
  char v23; // [rsp+75h] [rbp-Bh] BYREF
  char v24; // [rsp+76h] [rbp-Ah] BYREF
  char v25; // [rsp+77h] [rbp-9h] BYREF
  int v26; // [rsp+78h] [rbp-8h] BYREF
  ISMTracing *v27; // [rsp+90h] [rbp+10h] BYREF

  v27 = this;
  v16 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v16 > 4u && (*(_BYTE *)(v16 + 16) & 1) != 0 && (*(_QWORD *)(v16 + 24) & 1LL) == *(_QWORD *)(v16 + 24) )
  {
    LOBYTE(v27) = *a11;
    v18 = *a10;
    v19 = *a9;
    v20 = *a8;
    v21 = *a7;
    v22 = *a6;
    v17 = *a5;
    v24 = *a4;
    v26 = *a3;
    v25 = *a2;
    v23 = v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v16,
      byte_1801FF804,
      v14,
      v15,
      (__int64)&v25,
      (__int64)&v26,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v27);
  }
}

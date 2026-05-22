/*
 * XREFs of ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000@Z @ 0x1800607F0
 * Callers:
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEAK00AEBK0000@Z @ 0x180060758 (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@S.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?Provider@ISMTracing@@SAQEBU_tlgProvider_t@@XZ @ 0x1800267E0 (-Provider@ISMTracing@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 */

void __fastcall ISMTracing::GameControllerRawInputProvider_UpdateFocusPids_(
        ISMTracing *this,
        const unsigned int *a2,
        const unsigned int *a3,
        const unsigned int *a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned int *a7,
        const unsigned int *a8,
        const unsigned int *a9)
{
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+64h] [rbp-1Ch] BYREF
  int v19; // [rsp+68h] [rbp-18h] BYREF
  int v20; // [rsp+6Ch] [rbp-14h] BYREF
  int v21; // [rsp+70h] [rbp-10h] BYREF
  int v22; // [rsp+74h] [rbp-Ch] BYREF
  int v23; // [rsp+78h] [rbp-8h] BYREF
  ISMTracing *v24; // [rsp+90h] [rbp+10h] BYREF

  v24 = this;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v13 = ISMTracing::Provider(v12);
    if ( *(_DWORD *)v13 > 4u )
    {
      LODWORD(v24) = *a9;
      v17 = *a8;
      v18 = *a7;
      v19 = *a6;
      v16 = *a5;
      v21 = *a4;
      v22 = *a3;
      v23 = *a2;
      v20 = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)v13,
        (int)&unk_180231C5B,
        v14,
        v15,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v24);
    }
  }
}

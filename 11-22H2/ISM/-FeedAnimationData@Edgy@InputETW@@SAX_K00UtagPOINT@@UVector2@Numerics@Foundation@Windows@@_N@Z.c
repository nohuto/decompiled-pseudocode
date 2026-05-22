/*
 * XREFs of ?FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x180176254
 * Callers:
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180176370 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1801086E0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180168C60 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplat.c)
 */

char __fastcall InputETW::Edgy::FeedAnimationData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  int v6; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v16; // [rsp+68h] [rbp-9h] BYREF
  double v17; // [rsp+70h] [rbp-1h] BYREF
  double v18; // [rsp+78h] [rbp+7h] BYREF
  __int64 v19; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+88h] [rbp+17h] BYREF
  __int64 v21; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+98h] [rbp+27h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+2Fh] BYREF
  int v24; // [rsp+E4h] [rbp+73h]

  v24 = HIDWORD(a4);
  v6 = a4;
  LOBYTE(v10) = InputETW::IsEnabled(a1);
  if ( (_BYTE)v10 )
  {
    v10 = (__int64)wil::details::static_lazy<InputETW>::get(
                     v11,
                     _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v14 = *(_QWORD *)(v10 + 8);
    if ( *(_DWORD *)v14 > 5u && (*(_BYTE *)(v14 + 16) & 1) != 0 )
    {
      v10 = *(_QWORD *)(v14 + 24) & 1LL;
      if ( v10 == *(_QWORD *)(v14 + 24) )
      {
        v16 = a6;
        v19 = v24;
        v20 = v6;
        v21 = a3;
        v22 = a2;
        v23 = a1;
        v17 = *((float *)&a5 + 1);
        v18 = *(float *)&a5;
        LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                        v14,
                        byte_18023689B,
                        v12,
                        v13,
                        (__int64)&v23,
                        (__int64)&v22,
                        (__int64)&v21,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v18,
                        (__int64)&v17,
                        (__int64)&v16);
      }
    }
  }
  return v10;
}

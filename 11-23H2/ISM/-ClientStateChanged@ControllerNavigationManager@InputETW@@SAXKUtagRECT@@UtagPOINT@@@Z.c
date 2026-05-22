/*
 * XREFs of ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x180190DB0
 * Callers:
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180190CB4 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333@Z @ 0x180162C40 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall InputETW::ControllerNavigationManager::ClientStateChanged(
        __int64 a1,
        struct tagRECT *a2,
        struct tagPOINT a3)
{
  LONG x; // ebx
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+60h] [rbp+17h] BYREF
  __int64 right; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 bottom; // [rsp+70h] [rbp+27h] BYREF
  __int64 left; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 top; // [rsp+80h] [rbp+37h] BYREF
  _QWORD v15[3]; // [rsp+88h] [rbp+3Fh] BYREF
  LONG y; // [rsp+C4h] [rbp+7Bh]
  __int64 v17; // [rsp+C8h] [rbp+7Fh] BYREF

  y = a3.y;
  x = a3.x;
  v4 = (unsigned int)a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v7 = wil::details::static_lazy<InputETW>::get(v6, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v17 = y;
      v10 = x;
      right = a2->right;
      bottom = a2->bottom;
      left = a2->left;
      top = a2->top;
      v15[0] = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        byte_180227F33,
        v8,
        v9,
        (__int64)v15,
        (__int64)&top,
        (__int64)&left,
        (__int64)&bottom,
        (__int64)&right,
        (__int64)&v10,
        (__int64)&v17);
    }
  }
}

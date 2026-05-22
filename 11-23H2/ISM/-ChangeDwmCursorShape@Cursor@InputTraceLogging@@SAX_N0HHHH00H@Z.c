/*
 * XREFs of ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z @ 0x180104B3C
 * Callers:
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x180106924 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1801034FC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJ.c)
 */

void __fastcall InputTraceLogging::Cursor::ChangeDwmCursorShape(
        __int64 a1,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        bool a7,
        bool a8,
        int a9)
{
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rax
  int v17; // [rsp+68h] [rbp-1h] BYREF
  BOOL v18; // [rsp+6Ch] [rbp+3h] BYREF
  BOOL v19; // [rsp+70h] [rbp+7h] BYREF
  int v20; // [rsp+74h] [rbp+Bh] BYREF
  int v21; // [rsp+78h] [rbp+Fh] BYREF
  int v22; // [rsp+7Ch] [rbp+13h] BYREF
  int v23; // [rsp+80h] [rbp+17h] BYREF
  __int64 v24; // [rsp+88h] [rbp+1Fh] BYREF

  v12 = a1;
  v13 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                      a1,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
        + 1);
  if ( *(_DWORD *)v13 > 4u && (*(_BYTE *)(v13 + 16) & 8) != 0 && (*(_QWORD *)(v13 + 24) & 8LL) == *(_QWORD *)(v13 + 24) )
  {
    v17 = a9;
    v18 = a8;
    v19 = a7;
    v20 = a6;
    v21 = a5;
    v22 = a4;
    v23 = a3;
    if ( a2 )
    {
      v16 = "True";
      if ( !v12 )
        v16 = "False";
    }
    else
    {
      v16 = (const char *)&word_180218410;
    }
    v24 = (__int64)v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      byte_18022518A,
      v14,
      v15,
      (const unsigned __int16 **)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
}

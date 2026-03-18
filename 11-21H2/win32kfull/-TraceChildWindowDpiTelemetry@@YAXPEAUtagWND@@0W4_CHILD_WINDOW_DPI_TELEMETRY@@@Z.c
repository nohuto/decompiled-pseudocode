/*
 * XREFs of ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C0002DA0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0238468 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     GetProcessImageFilename @ 0x1C0002E6C (GetProcessImageFilename.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1C0238150 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall TraceChildWindowDpiTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  const unsigned __int16 *v4; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 result; // rax
  const unsigned __int16 *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  const unsigned __int16 *v14; // [rsp+80h] [rbp+40h] BYREF
  const unsigned __int16 *v15; // [rsp+88h] [rbp+48h] BYREF
  const unsigned __int16 *v16; // [rsp+98h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = &word_1C02E3794;
  v14 = &word_1C02E3794;
  v15 = &word_1C02E3794;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 424);
  result = GetProcessImageFilename(v8, &v14);
  v10 = v14;
  v11 = result;
  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 16);
    v12 = *(_QWORD *)(result + 424);
    if ( v8 == v12 )
    {
      v4 = v14;
    }
    else
    {
      result = GetProcessImageFilename(v12, &v15);
      v4 = v15;
      v7 = result;
    }
  }
  if ( (unsigned int)dword_1C03263F8 > 5 )
  {
    result = tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v15 = v4;
      v16 = v10;
      LODWORD(v14) = a3;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                 v13,
                 &unk_1C02F11F2);
    }
  }
  if ( v11 )
    result = FreeTmpBuffer(v11);
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}

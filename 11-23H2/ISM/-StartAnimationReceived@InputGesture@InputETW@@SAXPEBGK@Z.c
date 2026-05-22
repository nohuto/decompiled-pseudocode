/*
 * XREFs of ?StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x180060E0C
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800012E0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x180017E48 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::InputGesture::StartAnimationReceived(const unsigned __int16 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  const struct _tlgProvider_t *v5; // rax
  __int64 v6; // r9
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v2 = (unsigned int)a2;
  if ( InputETW::IsEnabled((unsigned __int8)a1, a2) )
  {
    v5 = InputETW::Provider(v4);
    if ( *(_DWORD *)v5 > 5u && (*((_BYTE *)v5 + 16) & 1) != 0 && (*((_QWORD *)v5 + 3) & 1LL) == *((_QWORD *)v5 + 3) )
    {
      v7 = v2;
      v8 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        (int)v5,
        (int)&dword_1802262C7,
        (__int64)v5,
        v6,
        (const WCHAR **)&v8,
        (__int64)&v7);
    }
  }
}

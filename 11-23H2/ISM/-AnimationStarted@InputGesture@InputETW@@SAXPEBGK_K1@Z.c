/*
 * XREFs of ?AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z @ 0x18006034C
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x180017E48 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800F9C60 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x1801526EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall InputETW::InputGesture::AnimationStarted(
        const unsigned __int16 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v5 = (unsigned int)a2;
  if ( InputETW::IsEnabled((unsigned __int8)a1, a2) )
  {
    v9 = InputETW::Provider(v8);
    if ( *(_DWORD *)v9 > 5u && (*((_BYTE *)v9 + 16) & 1) != 0 && (*((_QWORD *)v9 + 3) & 1LL) == *((_QWORD *)v9 + 3) )
    {
      v10 = a4;
      v11 = a3;
      v12 = v5;
      v13 = (__int64)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (int)v9,
        (int)&dword_1802261FD,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}

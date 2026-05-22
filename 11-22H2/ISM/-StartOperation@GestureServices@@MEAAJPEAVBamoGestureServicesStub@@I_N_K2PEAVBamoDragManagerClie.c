/*
 * XREFs of ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1800738C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001754 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x180018678 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1801086E0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x180161570 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ?EventGestureCancelled@GestureHandler@@SAXKPEBGPEAVDragManagerClientProxy@@@Z @ 0x180164D3C (-EventGestureCancelled@GestureHandler@@SAXKPEBGPEAVDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18016E72C (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall GestureServices::StartOperation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        bool a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct DragManagerClientProxy *a7,
        unsigned int a8)
{
  __int64 v9; // rdi
  __int64 ProcessorTypeString; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  const char *v15; // r9
  const struct _tlgProvider_t *v16; // rax
  const unsigned __int16 *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = a3;
  ProcessorTypeString = GestureServices::GetProcessorTypeString(a1, a8);
  if ( InputETW::IsEnabled(v13, v12) )
  {
    v16 = InputETW::Provider(v14);
    if ( *(_DWORD *)v16 > 5u && (*((_BYTE *)v16 + 16) & 1) != 0 && (*((_QWORD *)v16 + 3) & 1LL) == *((_QWORD *)v16 + 3) )
    {
      v19 = v9;
      v20 = ProcessorTypeString;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        (int)v16,
        (int)&dword_180235189,
        (__int64)v16,
        (__int64)v15,
        (const WCHAR **)&v20,
        (__int64)&v19);
    }
  }
  if ( a8 )
  {
    if ( a8 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x166,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
        v15);
    if ( !ShellGesturesProcessor::StartOperation(*(ShellGesturesProcessor **)(a1 + 80), v9, a4, a5, a6, a7) )
    {
      v17 = (const unsigned __int16 *)GestureServices::GetProcessorTypeString(a1, 2LL);
      GestureHandler::EventGestureCancelled(v9, v17, a7);
    }
  }
  else
  {
    DragNDropProcessor::StartDrag(*(DragNDropProcessor **)(a1 + 64), v9, a5, a7);
  }
  return 0LL;
}

/*
 * XREFs of ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994
 * Callers:
 *     ?DCompositionCreateDevice3@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18001BDAC (-DCompositionCreateDevice3@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 *     ?DCompositionCreateDevice2@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008977C (-DCompositionCreateDevice2@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?DCompositionCreateDevice@CDevice@DirectComposition@@SAJPEAUIDXGIDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1554 (-DCompositionCreateDevice@CDevice@DirectComposition@@SAJPEAUIDXGIDevice@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@@@Z @ 0x1800FF9B0 (-DCompositionCreateDwmDevice@CDevice@DirectComposition@@SAJAEBU_GUID@@PEAPEAXPEAPEAUIDwmChannel@.c)
 * Callees:
 *     ??0CDevice@DirectComposition@@QEAA@PEAUIDeviceOwner@1@W4DeviceVersion@1@@Z @ 0x18001DA88 (--0CDevice@DirectComposition@@QEAA@PEAUIDeviceOwner@1@W4DeviceVersion@1@@Z.c)
 *     ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC (-Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z.c)
 *     _tlgKeywordOn @ 0x18006445C (_tlgKeywordOn.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180084814 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1800EC798 (McTemplateU0xq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CDevice::Create(
        __int64 a1,
        unsigned int a2,
        struct IUnknown *a3,
        unsigned int **a4)
{
  void *v8; // rax
  DirectComposition::CDevice *v9; // rax
  unsigned int *v10; // rbx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  char v19[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+38h] [rbp-10h] BYREF

  v8 = DefaultHeap::AllocClear(0x348uLL);
  if ( v8
    && (v9 = (DirectComposition::CDevice *)DirectComposition::CDevice::CDevice(v8, a1, a2),
        (v10 = (unsigned int *)v9) != 0LL) )
  {
    v12 = DirectComposition::CDevice::Initialize(v9, a3);
    if ( v12 < 0 )
    {
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      *a4 = v10;
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
        McTemplateU0xq_EventWriteTransfer(v11, &DCOMPEVENT_DEVICE_CREATE, v10, v10[40]);
      if ( !_InterlockedExchange(&dword_18021CFB0, 1)
        && (unsigned int)dword_1802191B0 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1802191B0, 0x400000000000LL, v13, v14) )
      {
        v20 = 0x1000000LL;
        v19[0] = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v16,
          (unsigned int)&unk_1801F1FB3,
          v17,
          v18,
          (__int64)v19,
          (__int64)&v20);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}

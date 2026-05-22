/*
 * XREFs of ?OnInputGenerated@?$CPointerInputObserverServer@$0M@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z @ 0x18012E650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?DeliverToApps@?$CBaseInputObserverServer@$0M@@@UEBAXV?$function@$$A6AXAEBV?$ComPtr@VBamoInputObserverClientProxy@@@WRL@Microsoft@@@Z@std@@@Z @ 0x18012E3C0 (-DeliverToApps@-$CBaseInputObserverServer@$0M@@@UEBAXV-$function@$$A6AXAEBV-$ComPtr@VBamoInputOb.c)
 *     ?DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x18012E4B4 (-DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservat.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPointerInputObserverServer<12>::OnInputGenerated(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD v5[8]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 48) == 4 )
  {
    v4 = operator new(0x40uLL);
    *(_DWORD *)v4 = 64;
    v4[1] = *(_QWORD *)(a2 + 8);
    *((_BYTE *)v4 + 16) = *(_BYTE *)(a2 + 16) & 1;
    v4[3] = *(_QWORD *)(a2 + 24);
    v4[4] = *(_QWORD *)(a2 + 60);
    *((_DWORD *)v4 + 10) = *(_DWORD *)(a2 + 32);
    v4[6] = *(_QWORD *)(a2 + 40);
    *((_DWORD *)v4 + 14) = *(_DWORD *)(a2 + 56);
    InputTraceLogging::Mouse::DeliverToObserver((const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *)v4);
    v5[0] = &std::_Func_impl_no_alloc<_lambda_3cfa35e9c796ca0beab8e1187c70cfaf_,void,Microsoft::WRL::ComPtr<BamoInputObserverClientProxy> const &>::`vftable';
    v5[1] = v4;
    v5[7] = v5;
    CBaseInputObserverServer<12>::DeliverToApps(a1, (__int64)v5);
    operator delete(v4);
  }
}

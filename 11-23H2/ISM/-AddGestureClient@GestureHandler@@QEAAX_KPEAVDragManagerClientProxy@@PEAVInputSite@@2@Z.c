/*
 * XREFs of ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180156798
 * Callers:
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180061DD8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18016F688 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1GestureClient@GestureHandler@@QEAA@XZ @ 0x180152C08 (--1GestureClient@GestureHandler@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@QEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801562EC (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::AddGestureClient(
        GestureHandler *this,
        __int64 a2,
        struct DragManagerClientProxy *a3,
        struct InputSite *a4)
{
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp-10h]

  v8 = a2;
  v9 = (__int64 (__fastcall ***)(_QWORD))a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v9);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v10);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v11);
  v12 = 0;
  v7 = *((_QWORD *)this + 15);
  if ( v7 == *((_QWORD *)this + 16) )
  {
    std::vector<GestureHandler::GestureClient>::_Emplace_reallocate<GestureHandler::GestureClient>(
      (__int64 *)this + 14,
      v7,
      (__int64)&v8);
  }
  else
  {
    *(_QWORD *)v7 = a2;
    *(_QWORD *)(v7 + 8) = 0LL;
    if ( (__int64 (__fastcall ****)(_QWORD))(v7 + 8) != &v9 )
    {
      *(_QWORD *)(v7 + 8) = a3;
      v9 = 0LL;
    }
    *(_QWORD *)(v7 + 16) = 0LL;
    v10 = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    v11 = 0LL;
    *(_BYTE *)(v7 + 32) = 0;
    *((_QWORD *)this + 15) += 40LL;
  }
  GestureHandler::GestureClient::~GestureClient((GestureHandler::GestureClient *)&v8);
}

/*
 * XREFs of ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180063B9C
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_N@Z @ 0x180064A80 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_9ead50e0cd1551eeb76b97ff9d1b3ab3_@@X_N@std@@EEAAX$$QEA_.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??$?0V_lambda_b461a9ffe5f5cec38e175d7dd8469474_@@$0A@@?$function@$$A6AXXZ@std@@QEAA@V_lambda_b461a9ffe5f5cec38e175d7dd8469474_@@@Z @ 0x180062CE8 (--$-0V_lambda_b461a9ffe5f5cec38e175d7dd8469474_@@$0A@@-$function@$$A6AXXZ@std@@QEAA@V_lambda_b46.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x1800C3DE4 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::OnStreamStateChanged(
        __int64 a1,
        char a2)
{
  char v3; // al
  struct CSerialWorkQueue *SerialWorkQueue; // rbx
  _QWORD *v5; // rax
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v9[10]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = *(_BYTE *)(a1 + 113);
  *(_BYTE *)(a1 + 113) = a2;
  if ( v3 != a2 )
  {
    *(_QWORD *)v7 = a1;
    SerialWorkQueue = GetSerialWorkQueue();
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v8, (_QWORD *)(a1 + 152));
    v5 = std::function<void (void)>::function<void (void)>(v9, (__int64 *)v7);
    v6 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x122,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v6,
        v7[0]);
  }
}

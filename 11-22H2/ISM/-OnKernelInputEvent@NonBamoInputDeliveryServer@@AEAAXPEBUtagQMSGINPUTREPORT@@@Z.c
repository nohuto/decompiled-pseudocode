/*
 * XREFs of ?OnKernelInputEvent@NonBamoInputDeliveryServer@@AEAAXPEBUtagQMSGINPUTREPORT@@@Z @ 0x180181888
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b30a7da4d22722610e9add99a7ef96c9__void_tagQMSGINPUTREPORT_const___::_Do_call @ 0x1801819E0 (std--_Func_impl_no_alloc__lambda_b30a7da4d22722610e9add99a7ef96c9__void_tagQMSGINPU_ea_1801819E0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x18014E860 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NonBamoInputDeliveryServer::OnKernelInputEvent(
        NonBamoInputDeliveryServer *this,
        const struct tagQMSGINPUTREPORT *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+30h] [rbp-59h] BYREF
  void *v6; // [rsp+38h] [rbp-51h]
  int v7[4]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+50h] [rbp-39h]
  int v9; // [rsp+58h] [rbp-31h]
  __int128 v10; // [rsp+60h] [rbp-29h]
  __int128 v11; // [rsp+70h] [rbp-19h]
  __int128 v12; // [rsp+80h] [rbp-9h]
  __int128 v13; // [rsp+90h] [rbp+7h]
  __int128 v14; // [rsp+A0h] [rbp+17h]
  __int128 v15; // [rsp+B0h] [rbp+27h]
  __int128 v16; // [rsp+C0h] [rbp+37h]
  __int64 v17; // [rsp+D0h] [rbp+47h]

  v10 = *(_OWORD *)a2;
  v11 = *((_OWORD *)a2 + 1);
  v12 = *((_OWORD *)a2 + 2);
  v13 = *((_OWORD *)a2 + 3);
  v14 = *((_OWORD *)a2 + 4);
  v15 = *((_OWORD *)a2 + 5);
  v16 = *((_OWORD *)a2 + 6);
  v17 = *((_QWORD *)a2 + 14);
  v7[0] = 0x800000;
  v7[1] = 0;
  v7[2] = 0;
  v8 = 0LL;
  v9 = 152;
  InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v5, 5, v7, a4);
  (*(void (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                + 24LL))(
    NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
    (char *)a2 + 80,
    v6,
    v5);
  if ( v6 )
    operator delete[](v6);
}

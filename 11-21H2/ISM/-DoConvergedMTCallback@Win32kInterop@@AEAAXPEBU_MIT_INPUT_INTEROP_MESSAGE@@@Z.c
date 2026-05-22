/*
 * XREFs of ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800DF9E0
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800E1004 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800A29DC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800A3DFC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800DF79C (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800E0138 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_POINTER_INFO@@KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1800E14CC (-ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_POINTER_INFO@@KAEBUtagTELEMET.c)
 *     ??$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@AEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800E2F04 (--$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInputMediator@@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::DoConvergedMTCallback(Win32kInterop *this, const struct _MIT_INPUT_INTEROP_MESSAGE *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int SizeForPointerCount; // eax
  __int64 v6; // r8
  const char *v7; // r9
  struct PointerInputInfo *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // r9
  __int64 i; // r10
  _OWORD *v12; // r8
  char *v13; // rcx
  char *v14; // [rsp+38h] [rbp-51h] BYREF
  struct PointerInputInfo *v15; // [rsp+40h] [rbp-49h] BYREF
  __int128 v16; // [rsp+50h] [rbp-39h] BYREF
  __int128 v17; // [rsp+60h] [rbp-29h]
  __int128 *v18; // [rsp+88h] [rbp-1h]
  __int64 (__fastcall **v19)(); // [rsp+90h] [rbp+7h] BYREF
  __int128 v20; // [rsp+98h] [rbp+Fh]
  __int128 v21; // [rsp+A8h] [rbp+1Fh]
  __int64 (__fastcall ***v22)(); // [rsp+C8h] [rbp+3Fh]
  const struct _MIT_INPUT_INTEROP_MESSAGE *v23; // [rsp+F8h] [rbp+6Fh] BYREF
  char *v24; // [rsp+100h] [rbp+77h] BYREF
  struct PointerInputInfo *v25; // [rsp+108h] [rbp+7Fh] BYREF

  v23 = a2;
  v24 = (char *)a2 + 8;
  InputTraceLogging::ISM::ReceivePointerFrame(
    (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 168),
    *((_DWORD *)a2 + 39),
    (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8));
  v14 = v24;
  v3 = _Mtx_lock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
  if ( v3 )
    std::_Throw_C_error(v3);
  std::deque<PointerInputMediator::PointerFrame>::emplace_back<tagMANIPULATION_INPUT_INFO const * &>(v4, &v14);
  _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(*((_DWORD *)v24 + 37));
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (__int64)&v15,
    SizeForPointerCount,
    v6,
    v7);
  v25 = v15;
  InitializeInputInfoWithPointerInfo((const struct tagPOINTER_INFO_UNION *)(v24 + 160), *((_DWORD *)v24 + 38) != 0, v15);
  *((_DWORD *)v25 + 79) = *((_DWORD *)v24 + 37);
  *((_DWORD *)v25 + 11) = *((_DWORD *)v24 + 36);
  v8 = v25;
  v9 = v24;
  *(_OWORD *)((char *)v25 + 88) = *(_OWORD *)v24;
  *(_OWORD *)((char *)v8 + 104) = v9[1];
  *(_OWORD *)((char *)v8 + 120) = v9[2];
  *(_OWORD *)((char *)v8 + 136) = v9[3];
  *(_OWORD *)((char *)v8 + 152) = v9[4];
  *(_OWORD *)((char *)v8 + 168) = v9[5];
  *(_OWORD *)((char *)v8 + 184) = v9[6];
  *(_OWORD *)((char *)v8 + 200) = v9[7];
  *(_OWORD *)((char *)v8 + 216) = v9[8];
  v10 = 0LL;
  for ( i = (__int64)v25; (unsigned int)v10 < *((_DWORD *)v25 + 79); i = (__int64)v25 )
  {
    v12 = (_OWORD *)(144 * v10 + i + 320);
    v13 = &v24[240 * (unsigned int)v10 + 160];
    *v12 = *(_OWORD *)v13;
    v12[1] = *((_OWORD *)v13 + 1);
    v12[2] = *((_OWORD *)v13 + 2);
    v12[3] = *((_OWORD *)v13 + 3);
    v12[4] = *((_OWORD *)v13 + 4);
    v12[5] = *((_OWORD *)v13 + 5);
    v12[6] = *((_OWORD *)v13 + 6);
    v12[7] = *((_OWORD *)v13 + 7);
    v12[8] = *((_OWORD *)v13 + 8);
    v10 = (unsigned int)(v10 + 1);
  }
  *(_QWORD *)&v16 = &v24;
  *((_QWORD *)&v16 + 1) = &v23;
  *(_QWORD *)&v17 = this;
  *((_QWORD *)&v17 + 1) = &v25;
  v19 = off_1801E59C8;
  v20 = v16;
  v21 = v17;
  v22 = &v19;
  *(_QWORD *)&v16 = off_1801E5868;
  v18 = &v16;
  Win32kInterop::DeliverToContextualProcessing(this, i, *((_DWORD *)v24 + 39), (__int64)&v16, (__int64)&v19);
  if ( v15 )
    operator delete[](v15);
}

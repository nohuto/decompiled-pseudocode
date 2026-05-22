/*
 * XREFs of ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800F9668
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800FA898 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x1800BA3DC (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800BB7EC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800F9420 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x1800F9BC8 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_POINTER_INFO@@KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1800FAD58 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_POINTER_INFO@@KAEBUtagTELEMET.c)
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800FCEEC (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::DoConvergedMTCallback(Win32kInterop *this, const struct _MIT_INPUT_INTEROP_MESSAGE *a2)
{
  unsigned int SizeForPointerCount; // eax
  __int64 v4; // r8
  const char *v5; // r9
  struct PointerInputInfo *v6; // rcx
  struct tagMANIPULATION_INPUT_INFO *v7; // rax
  __int64 v8; // r9
  __int64 i; // r10
  _OWORD *v10; // r8
  _OWORD *v11; // rcx
  struct PointerInputInfo *v12; // [rsp+30h] [rbp-49h] BYREF
  __int128 v13; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+50h] [rbp-29h]
  __int128 *v15; // [rsp+78h] [rbp-1h]
  __int64 (__fastcall **v16)(); // [rsp+80h] [rbp+7h] BYREF
  __int128 v17; // [rsp+88h] [rbp+Fh]
  __int128 v18; // [rsp+98h] [rbp+1Fh]
  __int64 (__fastcall ***v19)(); // [rsp+B8h] [rbp+3Fh]
  struct tagMANIPULATION_INPUT_INFO *v20; // [rsp+E0h] [rbp+67h] BYREF
  const struct _MIT_INPUT_INTEROP_MESSAGE *v21; // [rsp+E8h] [rbp+6Fh] BYREF
  struct PointerInputInfo *v22; // [rsp+F0h] [rbp+77h] BYREF

  v21 = a2;
  v20 = (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8);
  InputTraceLogging::ISM::ReceivePointerFrame(
    (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 168),
    *((_DWORD *)a2 + 39),
    (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8));
  PointerInputMediator::OnNewFrame(v20);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(*((_DWORD *)v20 + 37));
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (__int64)&v12,
    SizeForPointerCount,
    v4,
    v5);
  v22 = v12;
  InitializeInputInfoWithPointerInfo(
    (struct tagMANIPULATION_INPUT_INFO *)((char *)v20 + 160),
    *((_BYTE *)v20 + 152) & 1,
    v12);
  *((_DWORD *)v22 + 79) = *((_DWORD *)v20 + 37);
  *((_DWORD *)v22 + 11) = *((_DWORD *)v20 + 36);
  v6 = v22;
  v7 = v20;
  *(_OWORD *)((char *)v22 + 88) = *(_OWORD *)v20;
  *(_OWORD *)((char *)v6 + 104) = *((_OWORD *)v7 + 1);
  *(_OWORD *)((char *)v6 + 120) = *((_OWORD *)v7 + 2);
  *(_OWORD *)((char *)v6 + 136) = *((_OWORD *)v7 + 3);
  *(_OWORD *)((char *)v6 + 152) = *((_OWORD *)v7 + 4);
  *(_OWORD *)((char *)v6 + 168) = *((_OWORD *)v7 + 5);
  *(_OWORD *)((char *)v6 + 184) = *((_OWORD *)v7 + 6);
  *(_OWORD *)((char *)v6 + 200) = *((_OWORD *)v7 + 7);
  *(_OWORD *)((char *)v6 + 216) = *((_OWORD *)v7 + 8);
  *((_BYTE *)v22 + 313) = (*((_DWORD *)v20 + 38) & 2u) >> 1;
  v8 = 0LL;
  for ( i = (__int64)v22; (unsigned int)v8 < *((_DWORD *)v22 + 79); i = (__int64)v22 )
  {
    v10 = (_OWORD *)(144 * v8 + i + 320);
    v11 = (_OWORD *)((char *)v20 + 240 * (unsigned int)v8 + 160);
    *v10 = *v11;
    v10[1] = v11[1];
    v10[2] = v11[2];
    v10[3] = v11[3];
    v10[4] = v11[4];
    v10[5] = v11[5];
    v10[6] = v11[6];
    v10[7] = v11[7];
    v10[8] = v11[8];
    v8 = (unsigned int)(v8 + 1);
  }
  *(_QWORD *)&v13 = &v20;
  *((_QWORD *)&v13 + 1) = &v21;
  *(_QWORD *)&v14 = this;
  *((_QWORD *)&v14 + 1) = &v22;
  v16 = off_180204C78;
  v17 = v13;
  v18 = v14;
  v19 = &v16;
  *(_QWORD *)&v13 = off_180204B18;
  v15 = &v13;
  Win32kInterop::DeliverToContextualProcessing(this, i, *((_DWORD *)v20 + 39), (__int64)&v13, (__int64)&v16);
  if ( v12 )
    operator delete[](v12);
}

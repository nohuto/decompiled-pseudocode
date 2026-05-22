/*
 * XREFs of ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x18014BAFC
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014AD38 (-OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProce.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TimeFromPerfCount@EdgyRecognizer@@AEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18014BCE0 (-TimeFromPerfCount@EdgyRecognizer@@AEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU.c)
 *     ?WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z @ 0x18014BD34 (-WithinAngle@EdgyRecognizer@@AEAA_NUtagPOINT@@0UVector2@Numerics@Foundation@Windows@@M@Z.c)
 *     ?OnPointerInfoFrame@DragGestureTracker@@QEAAJAEAUtagPOINTER_INFO@@@Z @ 0x18019D6BC (-OnPointerInfoFrame@DragGestureTracker@@QEAAJAEAUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall EdgyRecognizer::OnPointerInfoFrame(
        EdgyRecognizer *this,
        struct PointerInputInfo *a2,
        struct tagPOINTER_INFO *a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  float v9; // xmm0_4
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v19; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 2) == 1 )
    return 0LL;
  v6 = *((_QWORD *)this + 2);
  if ( !v6 )
    goto LABEL_17;
  if ( !*((_QWORD *)this + 6) )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 24LL))(v6 + 8);
    v8 = *((_QWORD *)this + 2) + 8LL;
    *((_QWORD *)this + 3) = *v7;
    v9 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    v10 = *((_QWORD *)this + 2) + 8LL;
    *((float *)this + 8) = v9;
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
    v12 = *((_QWORD *)this + 2) + 8LL;
    *((_DWORD *)this + 9) = v11;
    *((_QWORD *)this + 5) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
    *((_QWORD *)this + 6) = *(_QWORD *)EdgyRecognizer::TimeFromPerfCount(this, &v19, *((_QWORD *)a2 + 2))
                          + 1000000LL * *((_QWORD *)this + 5);
    *((_QWORD *)this + 7) = *((_QWORD *)a3 + 5);
  }
  if ( *((_QWORD *)this + 6) < *(_QWORD *)EdgyRecognizer::TimeFromPerfCount(this, &v19, *((_QWORD *)a2 + 2))
    && (unsigned int)(*((_DWORD *)this + 2) - 2) <= 1 )
  {
    goto LABEL_17;
  }
  v13 = DragGestureTracker::OnPointerInfoFrame(*(DragGestureTracker **)this, a3);
  v15 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyrecognizer.cpp",
      (const char *)(unsigned int)v13);
    return v15;
  }
  if ( *((_DWORD *)this + 2) == 2 )
  {
    v14 = *(_QWORD *)this;
    if ( **(_DWORD **)this != 1 )
    {
      if ( **(_DWORD **)this == 3 )
      {
        *((_DWORD *)this + 2) = 3;
        goto LABEL_14;
      }
      return 0LL;
    }
LABEL_17:
    *((_DWORD *)this + 2) = 1;
    return 0LL;
  }
  if ( *((_DWORD *)this + 2) == 3 )
  {
LABEL_14:
    if ( (unsigned __int8)EdgyRecognizer::WithinAngle(
                            v14,
                            *((_QWORD *)a3 + 5),
                            *((_QWORD *)this + 7),
                            *((_QWORD *)this + 3),
                            *((_DWORD *)this + 8)) )
    {
      v17 = *((_QWORD *)a3 + 5);
      if ( (int)((*((_QWORD *)this + 7) - v17) * (*((_QWORD *)this + 7) - v17)
               + (HIDWORD(*((_QWORD *)this + 7)) - HIDWORD(v17)) * (HIDWORD(*((_QWORD *)this + 7)) - HIDWORD(v17))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 9) * *((_DWORD *)this + 9)) )
        *((_DWORD *)this + 2) = 4;
      return 0LL;
    }
    goto LABEL_17;
  }
  return 0LL;
}

/*
 * XREFs of ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C0209BA0
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _lambda_b6666937a6a6c2ac0b10e616cd7412b3_::operator() @ 0x1C015AA08 (_lambda_b6666937a6a6c2ac0b10e616cd7412b3_--operator().c)
 *     _lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator() @ 0x1C0209490 (_lambda_dcff6b42735babe5bbfdec74d1bb422f_--operator().c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C020D2C8 (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 */

void __fastcall EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(struct MOVESIZEDATA *a1)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // edx
  int v13; // r8d
  unsigned int *v14[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+50h] BYREF
  struct MOVESIZEDATA *v18; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v15 = *((_DWORD *)a1 + 73);
  v3 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 288LL);
  v16 = v3;
  if ( v15 != v3 && (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 288LL) & 0xF) == 3 )
  {
    *((_DWORD *)a1 + 73) = v3;
    v4 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 256LL));
    v8 = v15 >> 8;
    v9 = v16 >> 8;
    v17 = v4;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        v7,
        4,
        1,
        25,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
    }
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        26,
        4,
        1,
        26,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
        **((_QWORD **)a1 + 2));
    }
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        1,
        27,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
        v9);
    }
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        1,
        28,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
        v8);
    }
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        v7,
        4,
        1,
        29,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
    }
    v18 = a1;
    lambda_b6666937a6a6c2ac0b10e616cd7412b3_::operator()((__int64)&v18);
    v10 = *((_QWORD *)a1 + 2);
    *(_OWORD *)((char *)a1 + 120) = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 24) = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 88LL);
    *(_OWORD *)((char *)a1 + 56) = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 88LL);
    xxxGetMinMaxTrackInfo(a1, v11);
    v14[0] = &v15;
    v14[1] = (unsigned int *)&v17;
    v14[2] = &v16;
    LogicalToPhysicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v15, &v17);
    PhysicalToLogicalDPIRect((char *)a1 + 136, (char *)a1 + 136, v16, &v17);
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v14, (__int64)a1 + 264);
    lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(v14, (__int64)a1 + 188);
    if ( *((_DWORD *)a1 + 44) == 9 )
    {
      *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 66);
      *((_DWORD *)a1 + 43) = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 67);
    }
    LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        (unsigned int)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
        4,
        1,
        36,
        (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
    }
    lambda_b6666937a6a6c2ac0b10e616cd7412b3_::operator()((__int64)&v18);
  }
}

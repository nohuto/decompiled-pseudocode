/*
 * XREFs of ConnectHwpInterrupt @ 0x1C0026D20
 * Callers:
 *     <none>
 * Callees:
 *     IsHwpNativeInterruptEnabled @ 0x1C0002FC4 (IsHwpNativeInterruptEnabled.c)
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     IsHgsEnabled @ 0x1C0007814 (IsHgsEnabled.c)
 *     IsHgsInterruptSupported @ 0x1C0026E34 (IsHgsInterruptSupported.c)
 *     IsHwpHighestInterruptSupported @ 0x1C0026EAC (IsHwpHighestInterruptSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0026F28 (IsHwpNativeInterruptSupported.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx
  bool v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  int v5; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // [rsp+48h] [rbp+10h]
  unsigned __int64 v9; // [rsp+48h] [rbp+10h]
  unsigned __int64 v10; // [rsp+48h] [rbp+10h]

  if ( IsHwpNativeInterruptEnabled(a1) )
  {
    BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpNativeInterruptSupported();
    BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpHighestInterruptSupported();
    v2 = (unsigned __int8)IsHgsInterruptSupported() && (unsigned __int8)IsHgsEnabled();
    HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v2;
    if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
    {
      v3 = __readmsr(0x773u);
      v8 = v3;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v3) = v3 & 0xFFFFFFFC;
        LODWORD(v8) = v3;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v8) = v3 & 0xFFFFFFFB;
      __writemsr(0x773u, v8);
      v4 = __readmsr(0x777u);
      v9 = v4;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v4) = v4 & 0xFFFFFFFA;
        LODWORD(v9) = v4;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v9) = v4 & 0xFFFFFFF7;
      v1 = HIDWORD(v9);
      __writemsr(0x777u, v9);
    }
    if ( v2 )
    {
      v10 = __readmsr(0x1B2u) & 0xFFFFFFFFFDFFFFFFuLL;
      v1 = HIDWORD(v10);
      __writemsr(0x1B2u, v10);
    }
    v5 = ((__int64 (__fastcall *)(char (__fastcall *)(__int64, __int64, __int64), unsigned __int64))HalPrivateDispatchTable[117])(
           HwpInterruptService,
           v1);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xEu,
          (__int64)&WPP_9442ac2458a23d7ffa41ae3edf890933_Traceguids,
          v5);
    }
    else
    {
      if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        v7 = __readmsr(0x1B1u);
        if ( (v7 & 0x4000000) != 0 )
          ((void (__fastcall *)(__int64))qword_1C001F3C8)(433LL);
      }
      return 0;
    }
  }
  else
  {
    v5 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        3u,
        0xDu,
        (__int64)&WPP_9442ac2458a23d7ffa41ae3edf890933_Traceguids);
  }
  return (unsigned int)v5;
}

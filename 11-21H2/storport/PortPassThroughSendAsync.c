/*
 * XREFs of PortPassThroughSendAsync @ 0x1C00889F4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C008860C (PortPassThroughExSendAsync.c)
 * Callees:
 *     PortPassThroughBuildIrpEx @ 0x1C001510C (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C0015538 (PortPassThroughFreeIrpEx.c)
 *     PortpEnableCancel @ 0x1C0021F34 (PortpEnableCancel.c)
 *     PortPassThroughFreeSrb @ 0x1C00220CC (PortPassThroughFreeSrb.c)
 *     StorASyncScsiPassThroughCompletion @ 0x1C0022B60 (StorASyncScsiPassThroughCompletion.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     PortPassThroughBuildSrb @ 0x1C0088BC4 (PortPassThroughBuildSrb.c)
 *     PortPassThroughValidate @ 0x1C0088D2C (PortPassThroughValidate.c)
 *     PortPassThroughGetDataBuffer @ 0x1C0088E34 (PortPassThroughGetDataBuffer.c)
 */

__int64 __fastcall PortPassThroughSendAsync(
        struct _DEVICE_OBJECT *a1,
        PIRP a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  char v8; // r15
  void *v11; // rdi
  int v12; // ebx
  __int64 v13; // r8
  void *DataBuffer; // rax
  void *v15; // rbx
  KPROCESSOR_MODE AccessMode; // cl
  PIRP v17; // rbp
  _QWORD *v18; // r14
  __int64 Pool2; // rax
  __int64 v20; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v23[4]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v24; // [rsp+60h] [rbp-68h]
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+80h] [rbp-48h]

  *(_OWORD *)v23 = 0LL;
  v8 = a3;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v12 = PortPassThroughValidate((_DWORD)a1, (_DWORD)a2, a3, a5, a6, (__int64)v23);
  if ( v12 >= 0 )
  {
    LOBYTE(v13) = v8;
    DataBuffer = (void *)PortPassThroughGetDataBuffer(v23, a2, v13);
    v15 = DataBuffer;
    if ( v8 )
      AccessMode = a2->RequestorMode;
    else
      AccessMode = 0;
    v17 = PortPassThroughBuildIrpEx(
            (__int64)a1,
            DataBuffer,
            v23[3],
            LOBYTE(v23[2]) != 0,
            AccessMode,
            a2,
            0,
            0LL,
            0,
            0LL);
    if ( v17 )
    {
      v18 = (_QWORD *)PortPassThroughBuildSrb(v23, v15);
      if ( v18
        && (v17->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v18,
            v18[6] = v17,
            Pool2 = ExAllocatePool2(64LL, 48LL, 1766878288LL),
            (v11 = (void *)Pool2) != 0LL) )
      {
        *(_QWORD *)(Pool2 + 24) = v18;
        *(_QWORD *)(Pool2 + 8) = v17;
        v20 = Pool2;
        *(_BYTE *)Pool2 = v8;
        *(_QWORD *)(Pool2 + 16) = a2;
        *(_QWORD *)(Pool2 + 32) = StorASyncScsiPassThroughCompletion;
        *(_QWORD *)(Pool2 + 40) = a8;
        CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
        CurrentStackLocation[-1].Context = v11;
        CurrentStackLocation[-1].Control = -32;
        v12 = PortpEnableCancel((__int64)a2, v20);
        if ( v12 == 259 )
        {
          IofCallDriver(a1, v17);
          return 259LL;
        }
      }
      else
      {
        v12 = -1073741670;
      }
      PortPassThroughFreeIrpEx(v17);
      if ( v18 )
        PortPassThroughFreeSrb(v18);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x69506C50u);
    }
    else
    {
      v12 = -1073741670;
    }
  }
  a2->IoStatus.Status = v12;
  StorASyncScsiPassThroughCompletion(a2);
  return (unsigned int)v12;
}

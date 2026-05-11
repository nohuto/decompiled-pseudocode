/*
 * XREFs of USBType1RenderCreatePin @ 0x1C0039350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005144 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0009A84 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00369C0 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C00395BC (USBType1Create1MsecBuffers.c)
 *     USBType1NeedLockDelay @ 0x1C00397C4 (USBType1NeedLockDelay.c)
 *     USBType1PinFormatChange @ 0x1C0039870 (USBType1PinFormatChange.c)
 */

__int64 __fastcall USBType1RenderCreatePin(PVOID *PointerToPointerToItem, __int64 a2, __int64 a3)
{
  char v4; // bp
  void *v5; // r9
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  int v9; // ebx
  int v10; // r8d
  struct _NPAGED_LOOKASIDE_LIST *Pool2; // rax
  void *v13; // rdx

  v4 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v5 = &WPP_1518cd3ab610380295f9683503cbea4d_Traceguids;
  LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  v6 = PointerToPointerToItem[2];
  v7 = v6[19];
  v8 = v6[18];
  v9 = USBType1Create1MsecBuffers(PointerToPointerToItem, a2, a3, v5);
  if ( v9 >= 0 )
  {
    *(_BYTE *)(v7 + 96) = *(_QWORD *)(v8 + 176) != 0LL;
    *(_BYTE *)(v7 + 99) = USBType1NeedLockDelay(v6);
    Pool2 = (struct _NPAGED_LOOKASIDE_LIST *)ExAllocatePool2(64LL, 128LL, 1096972357LL);
    *(_QWORD *)(v7 + 128) = Pool2;
    if ( Pool2 )
    {
      ExInitializeNPagedLookasideList(
        Pool2,
        USBType1AllocateRequest,
        (PFREE_FUNCTION)USBType1FreeRequest,
        0x200u,
        *(char *)(*(_QWORD *)(v6[2] + 40LL) + 76LL) + 8LL,
        0x41627845u,
        0x32u);
      v9 = KsAddItemToObjectBag(PointerToPointerToItem[1], *(PVOID *)(v7 + 128), ExFreePool);
      if ( v9 < 0 )
        ExFreePool(*(PVOID *)(v7 + 128));
      else
        v9 = USBType1PinFormatChange(PointerToPointerToItem);
    }
    if ( !*(_BYTE *)(v7 + 96) )
    {
LABEL_10:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_19;
    }
    if ( v9 >= 0 )
    {
      *(_DWORD *)(v7 + 856) = *((_DWORD *)v6 + 26);
      v9 = USBType1AsyncEndpointInitialize((__int64)PointerToPointerToItem);
      goto LABEL_10;
    }
  }
LABEL_19:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v4 = 0;
  }
  if ( v4 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = &WPP_1518cd3ab610380295f9683503cbea4d_Traceguids;
    LOBYTE(v13) = v4;
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v13,
      v10,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v9;
}

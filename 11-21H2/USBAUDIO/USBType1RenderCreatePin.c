/*
 * XREFs of USBType1RenderCreatePin @ 0x1C003A120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0001A94 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0001CA0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00399D4 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0039B40 (USBType1Create1MsecBuffers.c)
 *     USBType1PinFormatChange @ 0x1C0039EF0 (USBType1PinFormatChange.c)
 */

__int64 __fastcall USBType1RenderCreatePin(PVOID *PointerToPointerToItem)
{
  char v2; // bp
  char v3; // dl
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // r15
  int v7; // ebx
  __int64 v8; // rax
  bool v9; // zf
  char v10; // al
  struct _NPAGED_LOOKASIDE_LIST *Pool2; // rax
  SIZE_T Size; // [rsp+20h] [rbp-58h]

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v3 = 0;
  }
  if ( v3 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v3,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Size,
      8u,
      0x18u,
      (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
  v4 = PointerToPointerToItem[2];
  v5 = v4[19];
  v6 = v4[18];
  v7 = USBType1Create1MsecBuffers((__int64)PointerToPointerToItem);
  if ( v7 >= 0 )
  {
    *(_BYTE *)(v5 + 96) = *(_QWORD *)(v6 + 176) != 0LL;
    v8 = *(_QWORD *)(v4[18] + 160LL);
    if ( !*(_BYTE *)(v8 + 4) || (v9 = *(_WORD *)(v8 + 5) == 0, v10 = 1, v9) )
      v10 = 0;
    *(_BYTE *)(v5 + 99) = v10;
    Pool2 = (struct _NPAGED_LOOKASIDE_LIST *)ExAllocatePool2(64LL, 128LL, 1096972357LL);
    *(_QWORD *)(v5 + 128) = Pool2;
    if ( Pool2 )
    {
      ExInitializeNPagedLookasideList(
        Pool2,
        (PALLOCATE_FUNCTION)USBType1AllocateRequest,
        (PFREE_FUNCTION)USBType1FreeRequest,
        0x200u,
        *(char *)(*(_QWORD *)(v4[2] + 40LL) + 76LL) + 8LL,
        0x41627845u,
        0x32u);
      v7 = KsAddItemToObjectBag(PointerToPointerToItem[1], *(PVOID *)(v5 + 128), ExFreePool);
      if ( v7 < 0 )
        ExFreePool(*(PVOID *)(v5 + 128));
      else
        v7 = USBType1PinFormatChange(PointerToPointerToItem);
    }
    if ( !*(_BYTE *)(v5 + 96) )
    {
LABEL_19:
      if ( v7 >= 0 )
        return (unsigned int)v7;
      goto LABEL_20;
    }
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v5 + 856) = *((_DWORD *)v4 + 26);
      v7 = USBType1AsyncEndpointInitialize((__int64)PointerToPointerToItem);
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v2 = 0;
  }
  if ( v2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      Size,
      8u,
      0x19u,
      (__int64)&WPP_1518cd3ab610380295f9683503cbea4d_Traceguids);
  return (unsigned int)v7;
}

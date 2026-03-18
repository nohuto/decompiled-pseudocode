/*
 * XREFs of PiProcessDeviceResetAction @ 0x140560174
 * Callers:
 *     PnpDeviceActionWorker @ 0x1402DD320 (PnpDeviceActionWorker.c)
 * Callees:
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1403A6ED8 (McTemplateK0zq_EtwWriteTransfer.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     IopLogDeviceResetComplete @ 0x1409455A8 (IopLogDeviceResetComplete.c)
 *     IopQueueDeviceResetEvent @ 0x1409457D0 (IopQueueDeviceResetEvent.c)
 *     PiQueryStopForReset @ 0x140945A10 (PiQueryStopForReset.c)
 *     PnpTraceRequestDeviceRemovalForReset @ 0x140957A40 (PnpTraceRequestDeviceRemovalForReset.c)
 *     PnpStopDeviceSubtree @ 0x14095A388 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PiProcessDeviceResetAction(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // r14
  unsigned int v4; // r12d
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  ULONG_PTR v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // [rsp+98h] [rbp+50h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v28 = 0LL;
  v29 = 0LL;
  v27 = 0;
  if ( !v1 || (v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL)) == 0 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    if ( v1 )
    {
      IoAddTriageDumpDataBlock(v1, (PVOID)*(unsigned __int16 *)(v1 + 2));
      v1 = *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)(v1 + 8);
      if ( v10 )
      {
        IoAddTriageDumpDataBlock(v10, (PVOID)(unsigned int)*(__int16 *)(v10 + 2));
        v1 = *(_QWORD *)(a1 + 16);
        v11 = (_WORD *)(*(_QWORD *)(v1 + 8) + 56LL);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
          v1 = *(_QWORD *)(a1 + 16);
        }
      }
      if ( v1 )
      {
        v12 = *(_QWORD *)(v1 + 312);
        v13 = *(_QWORD *)(v12 + 40);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v12 + 40);
          IoAddTriageDumpDataBlock(v13, (PVOID)0x310);
          if ( *(_WORD *)(v14 + 40) )
          {
            IoAddTriageDumpDataBlock(v14 + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 48), (PVOID)*(unsigned __int16 *)(v14 + 40));
          }
          v15 = *(_QWORD *)(a1 + 16);
          if ( v15 )
            v16 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
          else
            v16 = 0LL;
          if ( *(_WORD *)(v16 + 56) )
          {
            if ( v15 )
              v17 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
            else
              LODWORD(v17) = 0;
            IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
            v18 = *(_QWORD *)(a1 + 16);
            if ( v18 )
            {
              v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
              v20 = v19;
            }
            else
            {
              v19 = 0LL;
              v20 = 0LL;
            }
            IoAddTriageDumpDataBlock(*(_QWORD *)(v20 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
            v15 = *(_QWORD *)(a1 + 16);
          }
          if ( v15 )
            v21 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
          else
            v21 = 0LL;
          v1 = v15;
          if ( *(_QWORD *)(v21 + 16) )
          {
            v22 = v15 ? *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL) : 0LL;
            if ( *(_WORD *)(*(_QWORD *)(v22 + 16) + 56LL) )
            {
              if ( v15 )
                v23 = *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL);
              else
                v23 = 0LL;
              IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 16) + 56, (PVOID)2);
              v24 = *(_QWORD *)(a1 + 16);
              if ( v24 )
              {
                v25 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
                v26 = v25;
              }
              else
              {
                v25 = 0LL;
                v26 = 0LL;
              }
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(v26 + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v25 + 16) + 56LL));
              v1 = *(_QWORD *)(a1 + 16);
            }
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 2uLL, v1, 0LL, 0LL);
  }
  v4 = *(_DWORD *)(a1 + 32);
  if ( (byte_140C0DD4C & 1) != 0 )
    McTemplateK0zq_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceReset_DevMgnt_Start,
      0LL,
      *(const wchar_t **)(v3 + 48),
      v4);
  if ( (v4 & 4) != 0 )
  {
    v5 = PiQueryStopForReset(v3, &v29, &v27);
    v6 = v5;
    if ( v5 < 0 )
    {
      PnpRequestDeviceRemoval(v3, 0LL, 54LL, (unsigned int)v5);
      v8 = 6LL;
      v7 = v29 + 40;
      goto LABEL_13;
    }
    PnpStopDeviceSubtree(v3);
  }
  v6 = IopQueueDeviceResetEvent(v1);
  if ( (v4 & 4) != 0 )
  {
    BYTE4(v28) = PnPBootDriversInitialized;
    LODWORD(v28) = 3;
    v6 = PipProcessDevNodeTree(v3, a1, (unsigned int)&v28, 0, 0, 1, 0);
  }
  PnpTraceRequestDeviceRemovalForReset(v1, v4, v6);
  v7 = 0LL;
  v8 = 0LL;
LABEL_13:
  IopLogDeviceResetComplete(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL), v6, v8, v7);
  return v6;
}

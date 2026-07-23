/*
 * XREFs of PipProcessDevNodeTree @ 0x1406CB6C0
 * Callers:
 *     PnpDeviceActionWorker @ 0x1403595D0 (PnpDeviceActionWorker.c)
 *     PnpProcessRebalance @ 0x1405655B4 (PnpProcessRebalance.c)
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x1407CD2C4 (PiProcessReenumeration.c)
 *     PiProcessStartSystemDevices @ 0x140864400 (PiProcessStartSystemDevices.c)
 *     PiRestartDevice @ 0x140864D00 (PiRestartDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1409596D4 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     PoFxPrepareDevice @ 0x140321AA4 (PoFxPrepareDevice.c)
 *     PoFxActivateDevice @ 0x140322ED4 (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x14032320C (PoFxIdleDevice.c)
 *     PiCollapseEnumRequests @ 0x140359024 (PiCollapseEnumRequests.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x1405619A8 (McTemplateK0z_EtwWriteTransfer.c)
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     PpDevNodeUnlockTree @ 0x1406C992C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C99C0 (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x1406CB6C0 (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406CBC58 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBCEC (PnpCheckForActiveDependencies.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBED4 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     PnpProcessAssignResources @ 0x140790C8C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase1 @ 0x140790F58 (PipProcessStartPhase1.c)
 *     PipProcessStartPhase2 @ 0x140791088 (PipProcessStartPhase2.c)
 *     IopAllocateUnicodeString @ 0x140793EC8 (IopAllocateUnicodeString.c)
 *     PipEnumerateDevice @ 0x140794F6C (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x1407955F0 (PipEnumerateCompleted.c)
 *     PipProcessStartPhase3 @ 0x14079BBB4 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1407E2778 (PiProcessNewDeviceNodeAsync.c)
 *     PipSetDevNodeProblem @ 0x14086952C (PipSetDevNodeProblem.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x14087560C (PnpSynchronizeDeviceEventQueue.c)
 *     PipProcessRestartPhase1 @ 0x14096F53C (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x14096F608 (PipProcessRestartPhase2.c)
 */

__int64 __fastcall PipProcessDevNodeTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        unsigned __int8 a6,
        char a7)
{
  char v7; // r15
  int v8; // edi
  int v9; // r12d
  int v10; // r13d
  unsigned __int16 *v11; // rsi
  __int64 v12; // r9
  char v13; // dl
  unsigned __int8 v14; // r14
  __int64 v15; // rcx
  char v16; // r12
  ULONG_PTR v17; // rbx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // edi
  ULONG_PTR v24; // rax
  PVOID *v25; // rax
  int restarted; // eax
  unsigned int started; // eax
  bool v29; // al
  int v30; // ebx
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  char v34[4]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-34h]
  unsigned int v36; // [rsp+48h] [rbp-30h]
  PVOID *v37; // [rsp+50h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-20h] BYREF
  char v39; // [rsp+C0h] [rbp+48h] BYREF
  char v40; // [rsp+C8h] [rbp+50h]
  __int64 v41; // [rsp+D0h] [rbp+58h]
  int v42; // [rsp+D8h] [rbp+60h]

  v42 = a4;
  v41 = a3;
  v7 = a7;
  v39 = 0;
  v8 = a4;
  v37 = (PVOID *)a1;
  v9 = a3;
  v10 = a2;
  v11 = (unsigned __int16 *)a1;
  v12 = 1LL;
  DestinationString = 0LL;
  if ( a2 )
  {
    if ( v8 != 1 && !*(_BYTE *)(a2 + 28) && !a7 )
    {
      v29 = PiCollapseEnumRequests(a2);
      a1 = (__int64)IopRootDeviceNode;
      v12 = 1LL;
      if ( v29 )
        v11 = (unsigned __int16 *)IopRootDeviceNode;
    }
  }
  LOBYTE(a1) = 0;
  v13 = 1;
  v36 = 0;
  v35 = a1;
  v14 = 0;
  v40 = 0;
  a7 = 1;
LABEL_4:
  if ( !v7 )
  {
    if ( (byte_140C0E20B & 8) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        a1,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Start,
        a3,
        *((const wchar_t **)v11 + 6));
    LOBYTE(a2) = a5;
    v34[0] = 0;
    v40 = PnpProcessAssignResources(v11, a2, v34, v12);
    if ( (byte_140C0E20B & 8) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        v15,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_AssignResources_Stop,
        a3,
        *((const wchar_t **)v11 + 6));
    if ( v34[0] )
    {
      v32 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, v9, v8, 0, 0, 1);
      LODWORD(a1) = (unsigned __int8)v35;
      v12 = 1LL;
      if ( v32 == -1073741106 )
        LODWORD(a1) = 1;
      v35 = a1;
    }
    else
    {
      LOBYTE(a1) = v35;
      v12 = 1LL;
    }
    v13 = a7;
  }
  v16 = 0;
  v34[0] = 1;
  v17 = (ULONG_PTR)v11;
  while ( 1 )
  {
    v18 = 1;
    if ( (_BYTE)a1 )
      break;
    if ( v13 )
    {
      v19 = *(_DWORD *)(v17 + 704);
      if ( (v19 & 0x10000) != 0 )
        *(_DWORD *)(v17 + 704) = v19 & 0xFFFEFFFF;
    }
    if ( (unsigned int)(*(_DWORD *)(v17 + 300) - 769) > 1 && (*(_DWORD *)(v17 + 396) & 0x6000) == 0 )
    {
      if ( (unsigned __int8)PnpCheckForActiveDependencies(v17, 2LL, a3, 1LL) )
        PipSetDevNodeProblem(v17, 51LL, 0LL);
      v12 = 1LL;
    }
    a2 = *(unsigned int *)(v17 + 396);
    if ( (a2 & 0x6000) != 0 )
      goto LABEL_45;
    switch ( *(_DWORD *)(v17 + 300) )
    {
      case 0x301:
        if ( v42 == 3 && (a2 & 0x2000000) != 0 || v7 )
          goto LABEL_41;
        if ( (unsigned __int8)PnpCheckForActiveDependencies(v17, 1LL, a3, 1LL) )
        {
          PipSetDevNodeProblem(v17, 51LL, 0LL);
          goto LABEL_41;
        }
        v20 = PiProcessNewDeviceNodeAsync(v17, a6);
        a2 = (unsigned int)v20;
        if ( v20 == 259 )
          goto LABEL_86;
LABEL_33:
        if ( v20 >= 0 )
          goto LABEL_34;
        goto LABEL_40;
      case 0x304:
        if ( v7 || (*(_DWORD *)(v17 + 704) & 0x10000) != 0 )
          goto LABEL_41;
        v21 = PipCallDriverAddDevice(v17, v41);
        a2 = (unsigned int)v21;
        if ( v21 >= 0 )
        {
          PoFxPrepareDevice(v17, 0);
          v18 = 0;
          v40 = 1;
          goto LABEL_41;
        }
        if ( *(_DWORD *)(v17 + 300) == 772 )
          *(_DWORD *)(v17 + 704) |= 0x10000u;
        goto LABEL_40;
      case 0x306:
        if ( v7 )
          goto LABEL_41;
        PoFxActivateDevice(*(_QWORD *)(v17 + 32));
        *(_DWORD *)(v17 + 704) |= 0x200u;
        started = PipProcessStartPhase1(v17);
        break;
      case 0x308:
        restarted = PipProcessStartPhase2(v17, a2, a3, 1LL);
LABEL_89:
        if ( restarted >= 0 )
        {
LABEL_34:
          v18 = 0;
LABEL_41:
          v39 = 0;
          v22 = PnpDeviceCompletionProcessCompletedRequests(0LL, 0LL, &v39, v12);
          a2 = v22;
          if ( v22 != -1073741106 )
          {
            if ( v39 )
              goto LABEL_45;
            if ( !v16 )
              goto LABEL_45;
            v16 = 0;
            a2 = (unsigned int)PnpDeviceCompletionProcessCompletedRequests(0LL, 1LL, &v39, v12);
            v14 &= -(v39 != 0);
            if ( (_DWORD)a2 != -1073741106 )
              goto LABEL_45;
          }
          goto LABEL_102;
        }
        a2 = 3221226190LL;
        goto LABEL_40;
      case 0x309:
        if ( (int)a2 < 0 )
        {
          v18 = 1;
          goto LABEL_41;
        }
        restarted = PipProcessStartPhase3(v17, v42 != 1);
        goto LABEL_89;
      case 0x30A:
        if ( v42 == 1 && (unsigned __int16 *)v17 != v11 )
          goto LABEL_41;
        v18 = 2;
        if ( v7 || (a2 & 8) == 0 )
          goto LABEL_41;
        v20 = PipEnumerateDevice(v17, a6, v14, 1LL);
        a2 = (unsigned int)v20;
        if ( v20 == 259 )
        {
          v14 = 1;
          v18 = 1;
          goto LABEL_41;
        }
        goto LABEL_33;
      case 0x30C:
        started = PipProcessRestartPhase1(v17, a6, v14, 1LL);
        break;
      case 0x30D:
        restarted = PipProcessRestartPhase2(v17, a2, a3, 1LL);
        goto LABEL_89;
      case 0x30F:
        if ( (*(_DWORD *)(v17 + 704) & 0x200) != 0 )
        {
          PoFxIdleDevice(*(_QWORD *)(v17 + 32));
          *(_DWORD *)(v17 + 704) &= ~0x200u;
        }
        a2 = (unsigned int)PipEnumerateCompleted(v17);
        v18 = 2;
        goto LABEL_40;
      default:
        goto LABEL_41;
    }
    a2 = started;
    if ( started == 259 )
    {
LABEL_86:
      v14 = 1;
      goto LABEL_41;
    }
    v18 = 0;
LABEL_40:
    if ( (_DWORD)a2 != -1073741106 )
      goto LABEL_41;
LABEL_102:
    if ( !v7 )
      break;
    v36 = a2;
LABEL_45:
    if ( !v14 || !v18 || PnpAsyncOptions < 0 )
    {
      v23 = v18 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
        {
          v24 = *(_QWORD *)(v17 + 8);
          if ( !v24 )
            goto LABEL_47;
LABEL_49:
          v17 = v24;
        }
        v12 = 1LL;
        goto LABEL_51;
      }
    }
    while ( 1 )
    {
LABEL_47:
      if ( (unsigned __int16 *)v17 == v11 )
      {
        if ( (PnpAsyncOptions & 4) != 0 && (*(_DWORD *)(v17 + 396) & 0x6000) != 0 )
        {
          if ( v14 )
          {
            PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v39, v12);
            v14 = 0;
          }
LABEL_78:
          v34[0] = 0;
        }
        else if ( !v14 )
        {
          goto LABEL_78;
        }
        v12 = 1LL;
        v13 = 0;
        v16 = 1;
        a7 = 0;
        goto LABEL_52;
      }
      v24 = *(_QWORD *)v17;
      if ( *(_QWORD *)v17 )
        goto LABEL_49;
      if ( v14 && PnpAsyncOptions > 0 )
        break;
      if ( *(_QWORD *)(v17 + 16) )
        v17 = *(_QWORD *)(v17 + 16);
    }
    v33 = *(_QWORD *)(v17 + 16);
    if ( v33 )
      v17 = *(_QWORD *)(v33 + 8);
    v12 = 1LL;
    v16 = 1;
LABEL_51:
    v13 = a7;
LABEL_52:
    v25 = v37;
LABEL_53:
    a1 = v35;
    if ( !v34[0] )
    {
      v8 = v42;
      v9 = v41;
      if ( !v40 )
      {
        if ( !v7 )
          ObfDereferenceObject(v25[4]);
        return v36;
      }
      goto LABEL_4;
    }
  }
  LOBYTE(v35) = 0;
  PnpDeviceCompletionProcessCompletedRequests(1LL, 1LL, &v39, 1LL);
  v14 = 0;
  PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, v10, v41, v42, a5, a6, 1);
  v30 = IopAllocateUnicodeString(&DestinationString, v11[20]);
  if ( v30 < 0 )
  {
    ObfDereferenceObject(v37[4]);
    return (unsigned int)v30;
  }
  else
  {
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 20));
    ObfDereferenceObject(v37[4]);
    PpDevNodeUnlockTree(1);
    PnpSynchronizeDeviceEventQueue();
    PpDevNodeLockTree(1);
    v31 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
    RtlFreeUnicodeString(&DestinationString);
    if ( v31 )
    {
      v12 = 1LL;
      v13 = a7;
      v11 = *(unsigned __int16 **)(*(_QWORD *)(v31 + 312) + 40LL);
      v25 = (PVOID *)v11;
      v17 = (ULONG_PTR)v11;
      v37 = (PVOID *)v11;
      goto LABEL_53;
    }
    return 3221225473LL;
  }
}

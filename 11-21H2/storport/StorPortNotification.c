/*
 * XREFs of StorPortNotification @ 0x1C0010160
 * Callers:
 *     StorPortNotificationVrfy @ 0x1C0095440 (StorPortNotificationVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidAdapterRequestComplete @ 0x1C0010E50 (RaidAdapterRequestComplete.c)
 *     RaidLogMiniportCompletion @ 0x1C0011020 (RaidLogMiniportCompletion.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C00112B8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0011350 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterRequestTimer @ 0x1C00113F4 (RaidAdapterRequestTimer.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterRequestTimerDeferred @ 0x1C00365FC (RaidAdapterRequestTimerDeferred.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C004110C (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0041180 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqquuuqpp_EtwWriteTransfer @ 0x1C004134C (McTemplateK0pqquuuqpp_EtwWriteTransfer.c)
 *     RaidpLinkDown @ 0x1C0042114 (RaidpLinkDown.c)
 *     RaidpLinkUp @ 0x1C0042180 (RaidpLinkUp.c)
 *     StorAsyncNotificationDeferred @ 0x1C00423A8 (StorAsyncNotificationDeferred.c)
 *     StorEnablePassiveInitialization @ 0x1C0042468 (StorEnablePassiveInitialization.c)
 *     StorPortPause @ 0x1C00437C0 (StorPortPause.c)
 *     StorpGetExtendedTable @ 0x1C0045AB8 (StorpGetExtendedTable.c)
 *     StorpMarkDeviceFailed @ 0x1C0046668 (StorpMarkDeviceFailed.c)
 *     RaidHandleTraceNotifyType @ 0x1C004C8C0 (RaidHandleTraceNotifyType.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0054F70 (RaidUnitProcessAsyncNotification.c)
 *     StorEtwIORequestServiceTimeEventData @ 0x1C005AD24 (StorEtwIORequestServiceTimeEventData.c)
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C005B01C (StorEtwLogoRequestServiceTimeEventData.c)
 */

void StorPortNotification(unsigned int a1, _QWORD *a2, ...)
{
  unsigned __int64 v2; // r9
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 *v5; // rax
  int v6; // ecx
  va_list v7; // r8
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PKDPC v14; // r14
  unsigned int v15; // edi
  char v16; // r15
  char v17; // r12
  PKDPC v18; // r14
  char v19; // r13
  PSLIST_ENTRY v20; // rax
  struct _SLIST_ENTRY *v21; // rdi
  PKDEFERRED_ROUTINE v22; // rdi
  PKDPC v23; // rdi
  struct _KDPC *v24; // rdi
  KDPC_IMPORTANCE v25; // r14d
  KDPC_IMPORTANCE v26; // edx
  char v27; // r14
  __int64 *v28; // rax
  int v29; // edx
  PKDEFERRED_ROUTINE v30; // r8
  _DWORD *v31; // rdi
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  PKDEFERRED_ROUTINE v35; // r14
  __int64 v36; // r8
  __int64 v37; // r10
  unsigned int v38; // edx
  int v39; // r15d
  _DWORD *v40; // rdi
  unsigned __int8 v41; // r12
  unsigned __int8 v42; // r13
  int v43; // ecx
  int *v44; // r14
  PKDEFERRED_ROUTINE v45; // r12
  unsigned int v46; // edi
  __int64 Unit; // rax
  __int64 v48; // r13
  char v49; // al
  int v50; // ecx
  unsigned int *v51; // rdi
  KIRQL CurrentIrql; // al
  ULONG_PTR BugCheckParameter4; // r14
  __int64 v54; // rcx
  __int64 v55; // rax
  bool v56; // zf
  void (__fastcall *v57)(unsigned int *); // rax
  PKDPC v58; // r14
  __int64 v59; // rdi
  __int64 v60; // rax
  _DWORD *v61; // rdi
  _DWORD **v62; // rax
  _DWORD *v63; // r8
  _SINGLE_LIST_ENTRY *p_DpcListEntry; // rcx
  void *v65; // rdx
  signed __int32 v66[8]; // [rsp+0h] [rbp-79h] BYREF
  unsigned __int8 v67; // [rsp+60h] [rbp-19h]
  unsigned int v68; // [rsp+64h] [rbp-15h]
  va_list v69; // [rsp+68h] [rbp-11h]
  __int64 v70; // [rsp+70h] [rbp-9h]
  __int64 v71; // [rsp+78h] [rbp-1h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned __int64 v75; // [rsp+E8h] [rbp+6Fh]
  PKDPC v76; // [rsp+F0h] [rbp+77h] BYREF
  va_list va; // [rsp+F0h] [rbp+77h]
  unsigned __int64 v78; // [rsp+F8h] [rbp+7Fh] BYREF
  va_list va1; // [rsp+F8h] [rbp+7Fh]
  _DWORD *v80; // [rsp+100h] [rbp+87h]
  _DWORD *v81; // [rsp+108h] [rbp+8Fh] BYREF
  va_list va2; // [rsp+108h] [rbp+8Fh]
  __int64 v83; // [rsp+110h] [rbp+97h]
  _DWORD *v84; // [rsp+118h] [rbp+9Fh]
  __int64 v85; // [rsp+120h] [rbp+A7h] BYREF
  va_list va3; // [rsp+120h] [rbp+A7h]
  __int64 v87; // [rsp+128h] [rbp+AFh]
  _DWORD *v88; // [rsp+130h] [rbp+B7h]
  va_list va4; // [rsp+138h] [rbp+BFh] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v76 = va_arg(va1, PKDPC);
  va_copy(va2, va1);
  v78 = va_arg(va2, _QWORD);
  v80 = va_arg(va2, _DWORD *);
  va_copy(va3, va2);
  v81 = va_arg(va3, _DWORD *);
  v83 = va_arg(va3, _QWORD);
  v84 = va_arg(va3, _DWORD *);
  va_copy(va4, va3);
  v85 = va_arg(va4, _QWORD);
  v87 = va_arg(va4, _QWORD);
  v88 = va_arg(va4, _DWORD *);
  v75 = (unsigned __int64)a2;
  v2 = (unsigned __int64)a2;
  v69 = 0LL;
  v3 = a1;
  v4 = 0LL;
  if ( a2 )
  {
    v5 = (__int64 *)*(a2 - 2);
    if ( v5 )
    {
      v4 = *v5;
      if ( *v5 )
      {
        if ( *(_DWORD *)v4 )
          v4 = 0LL;
      }
    }
  }
  va_copy(v69, va);
  v6 = -1073741822;
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedIncrement(&ExtRefCount);
      v6 = ((__int64 (__fastcall *)(_QWORD, __int64, PKDPC *, _QWORD *))ExtNotificationReplace)(v3, v4, (PKDPC *)va, a2);
      _InterlockedDecrement(&ExtRefCount);
    }
    v2 = v75;
  }
  v69 = 0LL;
  if ( v6 == -1073741822 )
  {
    va_copy(v7, va);
    va_copy(v69, va);
    if ( !DisableExtensionDriver )
    {
      if ( EnableExtensionCalls )
      {
        _InterlockedIncrement(&ExtRefCount);
        ((void (__fastcall *)(_QWORD, __int64, PKDPC *, unsigned __int64))ExtNotificationPre)(v3, v4, (PKDPC *)va, v2);
        _InterlockedDecrement(&ExtRefCount);
      }
      v2 = v75;
    }
    va_copy(v69, va);
    switch ( v3 )
    {
      case 0u:
        if ( v4 && v76 )
        {
          v65 = LOBYTE(v76->Number) == 40 ? v76[1].DeferredContext : v76->SystemArgument2;
          if ( v65 )
            RaidAdapterRequestComplete(v4, v65, 0LL);
        }
        break;
      case 0x1004u:
        v62 = *(_DWORD ***)(v2 - 16);
        v63 = 0LL;
        if ( v62 )
        {
          v63 = *v62;
          if ( *v62 )
          {
            if ( *v63 )
              v63 = 0LL;
          }
        }
        if ( !v76 || !v63 && v76->TargetInfoAsUlong - 2 <= 1 )
          break;
        if ( v76->TargetInfoAsUlong == 1 )
        {
          p_DpcListEntry = &v76->DpcListEntry;
        }
        else
        {
          if ( v76->TargetInfoAsUlong != 2 )
          {
            switch ( v76->TargetInfoAsUlong )
            {
              case 3u:
                RaidAdapterReleaseInterruptLock(v63, LOBYTE(v76->DeferredRoutine));
                break;
              case 4u:
                KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)&v76->DpcListEntry);
                break;
              case 5u:
                KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v76->DpcListEntry);
                break;
            }
            break;
          }
          p_DpcListEntry = &v76->DpcListEntry;
          if ( !v63[186] )
          {
            RaidAdapterReleaseInterruptLock(v63, LOBYTE(p_DpcListEntry->Next));
            break;
          }
        }
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)p_DpcListEntry);
        break;
      case 0x1002u:
        v61 = v81;
        if ( v76 )
          *v61 = KeInsertQueueDpc(v76, (PVOID)v78, v80);
        break;
      case 0x1006u:
        if ( StorEtwLoggingEnabled )
        {
          v58 = v76;
          if ( v78 )
          {
            v59 = *(_BYTE *)(v78 + 2) == 40 ? *(_QWORD *)(v78 + 96) : *(_QWORD *)(v78 + 48);
            if ( v59 )
            {
              if ( (byte_1C00799E1 & 1) != 0 || (byte_1C00799E3 & 2) != 0 )
                *(_QWORD *)(v59 + 720) = v76;
              if ( (byte_1C00799E1 & 1) != 0 )
              {
                LOBYTE(a2) = 1;
                StorEtwIORequestServiceTimeEventData(v59, a2, v58);
              }
              v60 = *(_QWORD *)(v59 + 224);
              if ( v60 && *(_DWORD *)(v60 + 1812) && (byte_1C00799E3 & 2) != 0 )
              {
                LOBYTE(a2) = 1;
                StorEtwLogoRequestServiceTimeEventData(v59, a2, v58);
              }
            }
          }
          goto LABEL_69;
        }
        break;
      case 0x1008u:
        va_copy(v69, va1);
        if ( v4 && v76 )
        {
          v51 = (unsigned int *)(LOBYTE(v76->Number) == 40 ? v76[1].DeferredContext : v76->SystemArgument2);
          if ( v51 )
          {
            CurrentIrql = KeGetCurrentIrql();
            BugCheckParameter4 = CurrentIrql;
            if ( CurrentIrql > 2u )
            {
              v54 = *(_QWORD *)(v4 + 16);
              *(_OWORD *)BugCheckParameter2 = 0LL;
              RaidDriverGetName(v54, BugCheckParameter2);
              KeBugCheckEx(0xF0u, 5uLL, BugCheckParameter2[1], *((_QWORD *)v51 + 21), BugCheckParameter4);
            }
            if ( (*(_BYTE *)(v4 + 584) & 2) != 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 4960));
            if ( (qword_1C00793A8 & 8) != 0 )
              RaidLogMiniportCompletion(v51);
            if ( (*(_BYTE *)(v4 + 564) & 0x10) == 0 || _InterlockedExchange((volatile __int32 *)v51 + 194, 4) != 1 )
            {
              v55 = *((_QWORD *)v51 + 20);
              if ( v55 )
                *(_BYTE *)(v55 + 141) = -85;
              v56 = (*((_BYTE *)v51 + 17) & 1) == 0;
              *((_BYTE *)v51 + 16) = v51[4] & 0xE3 | 0x10;
              if ( !v56 )
              {
                RaidAdapterPoFxIdleComponentFromMiniport(v4, v51[187]);
                *((_BYTE *)v51 + 17) &= ~1u;
              }
              v57 = (void (__fastcall *)(unsigned int *))*((_QWORD *)v51 + 82);
              if ( v57 )
              {
                if ( (unsigned __int8)BugCheckParameter4 < 2u )
                {
                  LOBYTE(BugCheckParameter4) = KfRaiseIrql(2u);
                  v57 = (void (__fastcall *)(unsigned int *))*((_QWORD *)v51 + 82);
                }
                v57(v51);
                if ( (unsigned __int8)BugCheckParameter4 < 2u )
                  KeLowerIrql(BugCheckParameter4);
              }
            }
LABEL_69:
            v3 = a1;
          }
        }
        break;
      default:
        if ( (int)v3 > 4096 )
        {
          switch ( v3 )
          {
            case 0x1001u:
              v23 = v76;
              if ( v76 && v78 )
              {
                KeInitializeDpc(v76, (PKDEFERRED_ROUTINE)v78, (PVOID)v2);
                KeInitializeSpinLock((PKSPIN_LOCK)&v23[1].TargetInfoAsUlong);
              }
              goto LABEL_70;
            case 0x1003u:
              v28 = *(__int64 **)(v2 - 16);
              v29 = (int)v76;
              v30 = (PKDEFERRED_ROUTINE)v78;
              v31 = v80;
              v32 = 0LL;
              if ( !v28 )
                goto LABEL_82;
              v32 = *v28;
              if ( !*v28 )
                goto LABEL_82;
              if ( !*(_DWORD *)v32 )
                goto LABEL_83;
              v32 = 0LL;
LABEL_82:
              if ( (unsigned int)((_DWORD)v76 - 2) > 1 )
              {
LABEL_83:
                if ( v80 )
                {
                  *v80 = (_DWORD)v76;
                  v33 = v29 - 1;
                  if ( v33 )
                  {
                    v34 = v33 - 1;
                    if ( v34 )
                    {
                      if ( v34 == 1 )
                        *((_BYTE *)v31 + 24) = RaidAdapterAcquireInterruptLock(v32);
                    }
                    else if ( *(_DWORD *)(v32 + 744) )
                    {
                      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 736), (PKLOCK_QUEUE_HANDLE)(v31 + 2));
                    }
                    else
                    {
                      *((_BYTE *)v31 + 8) = RaidAdapterAcquireInterruptLock(v32);
                    }
                  }
                  else if ( v30 )
                  {
                    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v30 + 8, (PKLOCK_QUEUE_HANDLE)(v31 + 2));
                  }
                }
              }
              goto LABEL_70;
            case 0x1005u:
              if ( !v4 )
                goto LABEL_70;
              v35 = (PKDEFERRED_ROUTINE)v78;
              v36 = (__int64)v81;
              v37 = v83;
              v38 = (unsigned int)v80;
              v39 = (int)v76;
              v40 = v84;
              v68 = (unsigned int)v80;
              v70 = (__int64)v81;
              v71 = v83;
              va_copy(v69, va3);
              if ( v78 && *(_WORD *)v78 == 1 )
              {
                v41 = *(_BYTE *)(v78 + 8);
                v42 = *(_BYTE *)(v78 + 9);
                v43 = *(unsigned __int8 *)(v78 + 10);
              }
              else
              {
                v41 = -1;
                v42 = -1;
                v43 = 255;
              }
              v67 = v43;
              if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
              {
                McTemplateK0pqquuuqpp_EtwWriteTransfer(
                  v43,
                  (_DWORD)v80,
                  0,
                  v2,
                  *(_DWORD *)(v4 + 56),
                  (char)v76,
                  v41,
                  v42,
                  v43,
                  (char)v80,
                  (char)v81,
                  v83);
                v38 = v68;
                v36 = v70;
                v37 = v71;
              }
              if ( v35
                && *(_WORD *)v35 == 1
                && v41 <= *(_BYTE *)(v4 + 416)
                && ((v39 & 3) == 0 || v42 <= *(_BYTE *)(v4 + 441))
                && ((v39 & 1) == 0 || v67 <= *(_BYTE *)(v4 + 490))
                && (v39 & 7) != 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4696), 1, 0) == 1 )
                {
                  v3 = a1;
                  if ( v40 )
                    *v40 = -1056964607;
                }
                else
                {
                  _InterlockedOr(v66, 0);
                  *(_DWORD *)(v4 + 4700) = v39;
                  *(_QWORD *)(v4 + 4712) = v35;
                  *(_DWORD *)(v4 + 4704) = v38;
                  *(_QWORD *)(v4 + 4720) = v36;
                  *(_QWORD *)(v4 + 4728) = v37;
                  _InterlockedOr(v66, 0);
                  *(_BYTE *)(v4 + 104) |= 0x40u;
                  *(_BYTE *)(v4 + 105) = 1;
                  KeInsertQueueDpc((PRKDPC)(v4 + 1784), 0LL, 0LL);
                  v3 = a1;
                  if ( v40 )
                    *v40 = 0;
                }
              }
              else
              {
                v3 = a1;
                if ( v40 )
LABEL_109:
                  *v40 = -1056964602;
              }
              break;
            case 0x1007u:
              v44 = v80;
              v45 = (PKDEFERRED_ROUTINE)v78;
              va_copy(v69, va2);
              v68 = 0;
              if ( v4 && v76 && LOWORD(v76->TargetInfoAsUlong) == 1 && (v78 & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
              {
                LOWORD(v68) = v76->DpcListEntry.Next;
                BYTE2(v68) = BYTE2(v76->DpcListEntry.Next);
                v46 = v68;
                Unit = RaidAdapterFindUnit(v4, v68);
                v48 = Unit;
                if ( Unit && (*(_DWORD *)(Unit + 1824) & 4) != 0 )
                {
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1880), 1, 0) == 1 )
                  {
                    *v44 = -1056964596;
                  }
                  else if ( KeGetCurrentIrql() > 2u )
                  {
                    v49 = StorAsyncNotificationDeferred(v4, v48, v68, v45);
                    v50 = -1056964596;
                    if ( v49 )
                      v50 = 0;
                    *v44 = v50;
                  }
                  else
                  {
                    *(_QWORD *)(v48 + 1872) = v45;
                    *v44 = RaidUnitProcessAsyncNotification(v4, v46, v48 + 1864);
                  }
                }
                else
                {
                  *v44 = -1056964601;
                }
              }
              else
              {
                *v80 = -1056964602;
              }
              goto LABEL_69;
            case 0x1009u:
              v24 = v76;
              v25 = (int)v81;
              if ( !v76 )
                goto LABEL_69;
              if ( !v78 )
                goto LABEL_69;
              KeInitializeDpc(v76, (PKDEFERRED_ROUTINE)v78, v80);
              if ( v25 == LowImportance )
                goto LABEL_69;
              v26 = v25;
              goto LABEL_68;
            case 0x100Au:
              v24 = v76;
              v27 = (char)v81;
              if ( !v76 )
                goto LABEL_69;
              if ( !v78 )
                goto LABEL_69;
              KeInitializeThreadedDpc(v76, (PKDEFERRED_ROUTINE)v78, v80);
              if ( !v27 )
                goto LABEL_69;
              v26 = HighImportance;
LABEL_68:
              KeSetImportanceDpc(v24, v26);
              goto LABEL_69;
            case 0x100Bu:
              if ( v76 && v78 )
                KeSetTargetProcessorDpcEx(v76, (PPROCESSOR_NUMBER)v78);
              goto LABEL_70;
            case 0x100Cu:
              if ( v4 && v80 )
                StorpMarkDeviceFailed(v4, (_DWORD)v76, v78, 0xFFFF, (__int64)v80, 0, 0LL, 0, 0LL);
              goto LABEL_70;
            case 0x100Du:
              v2 = (unsigned __int16)v80;
              v40 = v88;
              if ( !v4 || !(_WORD)v80 || !v81 )
                goto LABEL_109;
              StorpMarkDeviceFailed(
                v4,
                (_DWORD)v76,
                v78,
                (unsigned __int16)v80,
                (__int64)v81,
                v83,
                (__int64)v84,
                v85,
                v87);
              *v40 = 0;
              break;
            case 0x100Eu:
              if ( v4 )
                _InterlockedDecrement((volatile signed __int32 *)(v4 + 5864));
              PsTerminateSystemThread(0);
              goto LABEL_70;
            default:
              goto LABEL_70;
          }
        }
        else
        {
          if ( v3 != 4096 )
          {
            switch ( v3 )
            {
              case 3u:
                if ( v4 )
                {
                  DbgLogRequest(v4, 39, v4, *(_DWORD *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 560), 0LL);
                  v10 = *(_DWORD *)(v4 + 560);
                  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                    McTemplateK0pqq_EtwWriteTransfer(
                      v8,
                      (unsigned int)&EventResetDetected,
                      v9,
                      v75,
                      *(_DWORD *)(v4 + 56),
                      *(_DWORD *)(v4 + 560));
                  if ( v10 )
                  {
                    if ( v10 > 0x3D0900 )
                      v10 = 4000000;
                    v11 = v10 / 0xF4240 + 1;
                    if ( v10 == 1000000 * (v10 / 0xF4240) )
                      v11 = v10 / 0xF4240;
                    StorPortPause(v75, v11);
                  }
                }
                goto LABEL_70;
              case 6u:
                v14 = v76;
                v15 = v78;
                if ( v4 )
                {
                  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                    McTemplateK0pqq_EtwWriteTransfer(
                      (unsigned int)va,
                      (unsigned int)&EventRequestTimerCall,
                      (_DWORD)v7,
                      v2,
                      *(_DWORD *)(v4 + 56),
                      v78);
                  if ( KeGetCurrentIrql() > 2u )
                    RaidAdapterRequestTimerDeferred(v4, v14, v15);
                  else
                    RaidAdapterRequestTimer(v4, v14, v15);
                }
                goto LABEL_69;
              case 7u:
                if ( v4 )
                {
                  DbgLogRequest(v4, 38, v4, *(_DWORD *)(v4 + 56), retaddr, *(unsigned int *)(v4 + 560), 0LL);
                  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
                    McTemplateK0pq_EtwWriteTransfer(v12, &EventBusChangeDetected, v13, v75, *(_DWORD *)(v4 + 56));
                  *(_WORD *)(v4 + 105) = 257;
                  KeInsertQueueDpc((PRKDPC)(v4 + 1784), 0LL, 0LL);
                }
                goto LABEL_70;
              case 8u:
                v16 = v78;
                v17 = 0;
                v18 = v76;
                v19 = 0;
                if ( (_BYTE)v78 != 0xFF )
                {
                  v17 = (char)v80;
                  v19 = (char)v81;
                }
                if ( v76 )
                {
                  if ( v76->TargetInfoAsUlong <= 0x80 )
                  {
                    if ( v4 )
                    {
                      v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1344));
                      v21 = v20;
                      if ( v20 )
                      {
                        LODWORD(v20[1].Next) = 134684674;
                        LOBYTE(v20[2].Next) = v16;
                        if ( v16 != -1 )
                        {
                          BYTE1(v20[2].Next) = v17;
                          BYTE2(v20[2].Next) = v19;
                        }
                        memmove(&v20[2].Next + 1, v18, v18->TargetInfoAsUlong);
                        RaidQueueDeferredItem((char *)(v4 + 1264), v21);
                      }
                    }
                  }
                }
                goto LABEL_69;
              case 0xAu:
                if ( v4 )
                  RaidpLinkUp(v4, 0x1C0000000uLL, v7, v2);
                goto LABEL_70;
              case 0xBu:
                if ( v4 )
                  RaidpLinkDown(v4, 0x1C0000000uLL, v7, v2);
                goto LABEL_70;
              case 0xCu:
                *(_QWORD *)&v76->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
                goto LABEL_70;
              case 0xDu:
                KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
              case 0xEu:
                RaidHandleTraceNotifyType((PKDPC *)va, (unsigned int)v76, v78, v2);
                goto LABEL_70;
              case 0xFu:
                StorpGetExtendedTable(v2, v76);
                goto LABEL_70;
              default:
                goto LABEL_70;
            }
          }
          v22 = (PKDEFERRED_ROUTINE)v78;
          *(_DWORD *)v22 = (unsigned __int8)StorEnablePassiveInitialization(v2, v76);
        }
        break;
    }
LABEL_70:
    va_copy(v69, va);
    if ( !DisableExtensionDriver )
    {
      if ( EnableExtensionCalls )
      {
        _InterlockedIncrement(&ExtRefCount);
        ((void (__fastcall *)(_QWORD, __int64, PKDPC *, unsigned __int64))ExtNotificationPost)(v3, v4, (PKDPC *)va, v2);
        _InterlockedDecrement(&ExtRefCount);
      }
    }
  }
}

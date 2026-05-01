/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F490
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x18000F884 (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18000F8C8 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F95C (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x180046DDC (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x180088254 (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180088464 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x180088544 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008893C (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088F88 (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x1800890BC (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180089110 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180089A6C (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008A1DC (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  __int64 v4; // rsi
  char *v5; // r15
  __int64 v6; // rsi
  DWORD CurrentThreadId; // eax
  char v8; // cl
  _QWORD *v9; // r13
  unsigned int v10; // r14d
  bool v11; // si
  _QWORD *v12; // rax
  __int64 v13; // rdi
  int v14; // r15d
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  __int64 v16; // rsi
  _QWORD *v17; // rax
  unsigned int v18; // edi
  bool v19; // r10
  unsigned int v20; // r9d
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD **v25; // r8
  char v26; // al
  _QWORD *v27; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  bool v37; // zf
  char v38; // dl
  unsigned __int64 v39; // rax
  char v40; // dl
  unsigned __int64 v41; // rcx
  char *v42; // r11
  char *i; // r10
  __int64 v44; // r10
  _QWORD *v45; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD **v46; // [rsp+38h] [rbp-C8h]
  _LIST_ENTRY v47; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+54h] [rbp-ACh]
  __int64 v50; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v52; // [rsp+70h] [rbp-90h] BYREF
  char v53[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v55; // [rsp+120h] [rbp+20h]
  int v56; // [rsp+128h] [rbp+28h]
  int v57; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+130h] [rbp+30h] BYREF
  void *v59; // [rsp+140h] [rbp+40h]
  int v60; // [rsp+148h] [rbp+48h]
  int v61; // [rsp+14Ch] [rbp+4Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v53);
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v55 = &unk_1800C4CE9;
    UserData.Reserved = 2;
    v56 = 25;
    v57 = 1;
    v48 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v4 = *(_QWORD *)a2;
  v47.Blink = &v47;
  v5 = a2 + 72;
  v6 = v4 + 592;
  v47.Flink = &v47;
  v50 = v6;
  RtlAcquireSRWLockExclusive(a2 + 72);
  CurrentThreadId = GetCurrentThreadId();
  v8 = a2[148];
  *((_DWORD *)a2 + 20) = CurrentThreadId;
  if ( (v8 & 1) != 0 )
  {
    v9 = a2 + 88;
    while ( 1 )
    {
      a2[148] = v8 & 0xF6 | (2 * (v8 & 4));
      if ( ((2 * (v8 & 4)) & 8) != 0 )
      {
        v10 = 0;
      }
      else
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive(v5);
        RtlAcquireSRWLockExclusive(v6);
        GetCurrentThreadId();
        v10 = *(_DWORD *)(v6 + 48);
        *(_DWORD *)(v6 + 56) = 0;
        RtlReleaseSRWLockExclusive(v6);
        RtlAcquireSRWLockExclusive(v5);
        *((_DWORD *)a2 + 20) = GetCurrentThreadId();
      }
      v11 = (a2[148] & 8) == 0 && *((_DWORD *)a2 + 34) != 0;
      v12 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 != v9 )
      {
        v19 = v10 != *((_DWORD *)v12 + 5) || (*((_BYTE *)v12 + 82) & 5) != 1;
        v20 = 0;
        v46 = &v45;
        v21 = a2 + 88;
        v45 = &v45;
        do
        {
          v22 = (_QWORD *)*v21;
          if ( (_QWORD *)*v21 != v21 )
          {
            if ( v19 )
            {
              if ( (_QWORD *)v22[1] != v21 )
                goto LABEL_105;
              v23 = (_QWORD *)v21[1];
              if ( (_QWORD *)*v23 != v21 )
                goto LABEL_105;
              *v23 = v22;
              v22[1] = v23;
              v24 = v45;
              v25 = v46;
              v21[1] = v21;
              *v21 = v21;
              if ( (_QWORD **)v24[1] != &v45
                || *v25 != &v45
                || *(_QWORD **)(*v22 + 8LL) != v22
                || *(_QWORD **)v22[1] != v22 )
              {
                goto LABEL_105;
              }
              *v25 = v22;
              v46 = (_QWORD **)v22[1];
              *(_QWORD *)v22[1] = &v45;
              v22[1] = v25;
            }
            else if ( v20 )
            {
              do
              {
                v26 = *((_BYTE *)v22 + 82);
                v27 = v22;
                v22 = (_QWORD *)*v22;
                if ( (v26 & 5) != 1 )
                {
                  if ( (_QWORD *)v22[1] != v27 )
                    goto LABEL_105;
                  v28 = (_QWORD *)v27[1];
                  if ( (_QWORD *)*v28 != v27 )
                    goto LABEL_105;
                  *v28 = v22;
                  v22[1] = v28;
                  v29 = v46;
                  if ( *v46 != &v45 )
                    goto LABEL_105;
                  v27[1] = v46;
                  *v27 = &v45;
                  *v29 = v27;
                  v46 = (_QWORD **)v27;
                }
              }
              while ( v22 != v21 );
            }
          }
          ++v20;
          v21 += 2;
        }
        while ( v20 < 2 );
        if ( v45 != &v45 )
        {
          *((_DWORD *)a2 + 20) = 0;
          RtlReleaseSRWLockExclusive(v5);
          while ( 1 )
          {
            v30 = v45;
            if ( v45 == &v45 )
              break;
            v31 = *v45;
            if ( *(_QWORD **)(*v45 + 8LL) != v45 )
              goto LABEL_105;
            v32 = (_QWORD *)v45[1];
            if ( (_QWORD *)*v32 != v45 )
              goto LABEL_105;
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
            *(_OWORD *)v30 = 0LL;
            RmpGameModeUnapplyAndReleaseRecipientResources(
              (struct _RM_GAME_MODE_CONTEXT *)a2,
              (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v30 - 11));
            *((_DWORD *)v30 + 4) = 2;
            RmpGameModeDereferenceRecipientProcess(v30 - 11);
          }
          RtlAcquireSRWLockExclusive(v5);
          *((_DWORD *)a2 + 20) = GetCurrentThreadId();
        }
      }
      if ( (_QWORD *)*v9 == v9 )
      {
        *((_DWORD *)a2 + 20) = 0;
        RtlReleaseSRWLockExclusive(v5);
        v37 = !_BitScanForward((unsigned int *)&v13, *((_DWORD *)a2 + 33));
        v49 = v13;
        if ( !v37 )
        {
          do
          {
            off_1800B40E0[5 * v13]((struct _RM_GAME_MODE_CONTEXT *)a2, 0LL);
            *((_DWORD *)a2 + 33) &= ~(1 << v13);
            v37 = !_BitScanForward((unsigned int *)&v13, *((_DWORD *)a2 + 33));
          }
          while ( !v37 );
          v49 = v13;
        }
        RtlAcquireSRWLockExclusive(v5);
        *((_DWORD *)a2 + 20) = GetCurrentThreadId();
      }
      RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
      if ( !v11 )
        RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, 0);
      if ( (a2[148] & 8) == 0 )
        break;
LABEL_25:
      v17 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 == v9 || (v17[7] & 0x10) != 0 )
        v18 = 0;
      else
        v18 = *((_DWORD *)v17 + 5);
      if ( v18 != *((_DWORD *)a2 + 36) )
      {
        RmpSystemPublishGlobalGameModeState(v18);
        *((_DWORD *)a2 + 36) = v18;
      }
      v8 = a2[148];
      if ( (v8 & 1) == 0 )
        goto LABEL_30;
      v6 = v50;
    }
    v14 = *((_DWORD *)a2 + 34);
    if ( (_QWORD *)*v9 == v9 )
    {
      RecipientProcessById = RmpGameModeFindRecipientProcessById((struct _RM_GAME_MODE_CONTEXT *)a2, v10);
      v16 = (__int64)RecipientProcessById;
      if ( !RecipientProcessById )
      {
LABEL_20:
        if ( v14 )
          RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, v14 != 0);
        if ( v47.Flink != &v47 )
        {
          RmpGameModeAcquireGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2, &v47);
          RmpGameModeApplyNewRecipientPolicies((struct _RM_GAME_MODE_CONTEXT *)a2, &v47);
          RmpGameModeApplyGlobalPolicies((struct _RM_GAME_MODE_CONTEXT *)a2);
          RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
        }
        v5 = a2 + 72;
        goto LABEL_25;
      }
      if ( (*((_BYTE *)RecipientProcessById + 170) & 5) != 1 || !RmpGameModeIsProcessPrimary(RecipientProcessById) )
      {
        RmpGameModeDereferenceRecipientProcess((PVOID)v16);
        goto LABEL_20;
      }
      *(_DWORD *)(v16 + 104) = 0;
      *(_BYTE *)(v16 + 171) |= 1u;
      v33 = (struct _LIST_ENTRY *)(v16 + 88);
      Blink = v47.Blink;
      if ( v47.Blink->Flink != &v47 )
LABEL_105:
        __fastfail(3u);
      *(_QWORD *)(v16 + 96) = v47.Blink;
      v33->Flink = &v47;
      Blink->Flink = v33;
      v47.Blink = (struct _LIST_ENTRY *)(v16 + 88);
    }
    else
    {
      v16 = *v9 - 88LL;
    }
    v35 = *(_QWORD *)(v16 + 72);
    if ( !v35 )
    {
LABEL_95:
      v42 = a2 + 24;
      for ( i = (char *)*((_QWORD *)a2 + 3); i != v42; i = *(char **)v44 )
      {
        if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(i - 56))
          && (*(_BYTE *)(v44 + 114) & 8) == 0 )
        {
          RmpGameModePromoteAuxiliaryProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v44 - 56), &v47);
        }
      }
      goto LABEL_20;
    }
    while ( 1 )
    {
LABEL_75:
      if ( (int)RmpGameModePromotePairedAuxiliaryNode((struct _RTL_BALANCED_NODE *)v35, &v47) < 0 )
        goto LABEL_95;
      v36 = *(_QWORD *)v35;
      if ( !*(_QWORD *)v35 )
        break;
      v37 = (*(_BYTE *)(v16 + 80) & 1) == 0;
LABEL_79:
      if ( v37 )
        v35 = v36;
      else
        v35 ^= v36;
    }
    v36 = *(_QWORD *)(v35 + 8);
    v38 = *(_BYTE *)(v16 + 80);
    if ( v36 )
    {
      v37 = (v38 & 1) == 0;
      goto LABEL_79;
    }
    v39 = v35;
    v40 = v38 & 1;
    while ( 1 )
    {
      v39 = *(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v40 )
      {
        if ( !v39 )
          goto LABEL_95;
        v39 ^= v35;
      }
      if ( !v39 )
        goto LABEL_95;
      v41 = *(_QWORD *)(v39 + 8);
      if ( v40 )
      {
        if ( !v41 )
          goto LABEL_94;
        v41 ^= v39;
      }
      if ( v41 && v41 != v35 )
      {
        v35 = v41;
        goto LABEL_75;
      }
LABEL_94:
      v35 = v39;
    }
  }
LABEL_30:
  *((_DWORD *)a2 + 20) = 0;
  a2[148] = v8 & 0xFD;
  RtlReleaseSRWLockExclusive(v5);
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 1) != 0 && (qword_1800DB1F8 & 1) == qword_1800DB1F8 )
  {
    *(_DWORD *)&v52.Level = 516;
    v58.Ptr = (ULONGLONG)off_1800DB1E8;
    *(_DWORD *)&v52.Id = 184549376;
    v52.Keyword = 1LL;
    v58.Size = *(unsigned __int16 *)off_1800DB1E8;
    v59 = &unk_1800C4FB6;
    v58.Reserved = 2;
    v60 = 25;
    v61 = 1;
    v48 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v52, 0LL, 0LL, 2u, &v58);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}

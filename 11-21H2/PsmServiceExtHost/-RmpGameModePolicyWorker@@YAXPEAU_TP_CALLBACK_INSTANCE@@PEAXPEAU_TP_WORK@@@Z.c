/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x1800083E8 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x18000847C (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800084C0 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x18004BF04 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18008A5B4 (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008A7C4 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18008A8A4 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008ACBC (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008B318 (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18008B448 (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18008B49C (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008BDF4 (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008C52C (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  __int64 v4; // rdi
  char *v5; // r15
  char v6; // al
  _QWORD *v7; // r13
  char v8; // cl
  unsigned int v9; // r14d
  DWORD CurrentThreadId; // eax
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
  struct _EVENT_DATA_DESCRIPTOR **v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v22; // rcx
  struct _EVENT_DATA_DESCRIPTOR **v23; // rax
  ULONGLONG Ptr; // rax
  struct _EVENT_DATA_DESCRIPTOR **v25; // r8
  char v26; // al
  struct _EVENT_DATA_DESCRIPTOR **v27; // r8
  struct _EVENT_DATA_DESCRIPTOR ***v28; // rax
  struct _EVENT_DATA_DESCRIPTOR ***v29; // rax
  ULONGLONG v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  bool v37; // zf
  char v38; // dl
  unsigned __int64 j; // rax
  unsigned __int64 v40; // rcx
  char *v41; // r11
  char *i; // r10
  __int64 v43; // r10
  _LIST_ENTRY v44; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-C0h]
  char v46[144]; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+E8h] [rbp-20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v46);
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DC1E0, (int)&dword_1800C4217, 0, 0, 2u, &v47);
  v4 = *(_QWORD *)a2;
  v44.Blink = &v44;
  v5 = (char *)(a2 + 18);
  v45 = v4;
  v44.Flink = &v44;
  RtlAcquireSRWLockExclusive(a2 + 18);
  a2[20] = GetCurrentThreadId();
  v6 = *((_BYTE *)a2 + 148);
  if ( (v6 & 1) != 0 )
  {
    v7 = a2 + 22;
    while ( 1 )
    {
      v8 = v6 & 0xF6 | (2 * (v6 & 4));
      *((_BYTE *)a2 + 148) = v8;
      if ( ((2 * (v6 & 4)) & 8) != 0 )
      {
        v9 = 0;
      }
      else
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(v5);
        RtlAcquireSRWLockExclusive(v4 + 592);
        GetCurrentThreadId();
        v9 = *(_DWORD *)(v4 + 640);
        *(_DWORD *)(v4 + 648) = 0;
        RtlReleaseSRWLockExclusive(v4 + 592);
        RtlAcquireSRWLockExclusive(v5);
        CurrentThreadId = GetCurrentThreadId();
        v8 = *((_BYTE *)a2 + 148);
        a2[20] = CurrentThreadId;
      }
      v11 = (v8 & 8) == 0 && a2[34] != 0;
      v12 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 != v7 )
      {
        v19 = v9 != *((_DWORD *)v12 + 5) || (*((_BYTE *)v12 + 82) & 5) != 1;
        v20 = 0;
        *(_QWORD *)&v47.Size = &v47;
        v21 = (struct _EVENT_DATA_DESCRIPTOR **)(a2 + 22);
        v47.Ptr = (ULONGLONG)&v47;
        do
        {
          v22 = *v21;
          if ( *v21 != (struct _EVENT_DATA_DESCRIPTOR *)v21 )
          {
            if ( v19 )
            {
              if ( *(struct _EVENT_DATA_DESCRIPTOR ***)&v22->Size != v21 )
                goto LABEL_105;
              v23 = (struct _EVENT_DATA_DESCRIPTOR **)v21[1];
              if ( *v23 != (struct _EVENT_DATA_DESCRIPTOR *)v21 )
                goto LABEL_105;
              *v23 = v22;
              *(_QWORD *)&v22->Size = v23;
              Ptr = v47.Ptr;
              v25 = *(struct _EVENT_DATA_DESCRIPTOR ***)&v47.Size;
              v21[1] = (struct _EVENT_DATA_DESCRIPTOR *)v21;
              *v21 = (struct _EVENT_DATA_DESCRIPTOR *)v21;
              if ( *(struct _EVENT_DATA_DESCRIPTOR **)(Ptr + 8) != &v47
                || *v25 != &v47
                || *(struct _EVENT_DATA_DESCRIPTOR **)(v22->Ptr + 8) != v22
                || **(struct _EVENT_DATA_DESCRIPTOR ***)&v22->Size != v22 )
              {
                goto LABEL_105;
              }
              *v25 = v22;
              *(_QWORD *)&v47.Size = *(_QWORD *)&v22->Size;
              **(_QWORD **)&v22->Size = &v47;
              *(_QWORD *)&v22->Size = v25;
            }
            else if ( v20 )
            {
              do
              {
                v26 = BYTE2(v22[5].Ptr);
                v27 = (struct _EVENT_DATA_DESCRIPTOR **)v22;
                v22 = (struct _EVENT_DATA_DESCRIPTOR *)v22->Ptr;
                if ( (v26 & 5) != 1 )
                {
                  if ( *(struct _EVENT_DATA_DESCRIPTOR ***)&v22->Size != v27 )
                    goto LABEL_105;
                  v28 = (struct _EVENT_DATA_DESCRIPTOR ***)v27[1];
                  if ( *v28 != v27 )
                    goto LABEL_105;
                  *v28 = (struct _EVENT_DATA_DESCRIPTOR **)v22;
                  *(_QWORD *)&v22->Size = v28;
                  v29 = *(struct _EVENT_DATA_DESCRIPTOR ****)&v47.Size;
                  if ( **(struct _EVENT_DATA_DESCRIPTOR ***)&v47.Size != &v47 )
                    goto LABEL_105;
                  v27[1] = *(struct _EVENT_DATA_DESCRIPTOR **)&v47.Size;
                  *v27 = &v47;
                  *v29 = v27;
                  *(_QWORD *)&v47.Size = v27;
                }
              }
              while ( v22 != (struct _EVENT_DATA_DESCRIPTOR *)v21 );
            }
          }
          ++v20;
          v21 += 2;
        }
        while ( v20 < 2 );
        if ( (struct _EVENT_DATA_DESCRIPTOR *)v47.Ptr != &v47 )
        {
          a2[20] = 0;
          RtlReleaseSRWLockExclusive(v5);
          while ( 1 )
          {
            v30 = v47.Ptr;
            if ( (struct _EVENT_DATA_DESCRIPTOR *)v47.Ptr == &v47 )
              break;
            v31 = *(_QWORD *)v47.Ptr;
            if ( *(_QWORD *)(*(_QWORD *)v47.Ptr + 8LL) != v47.Ptr )
              goto LABEL_105;
            v32 = *(_QWORD **)(v47.Ptr + 8);
            if ( *v32 != v47.Ptr )
              goto LABEL_105;
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
            *(_OWORD *)v30 = 0LL;
            RmpGameModeUnapplyAndReleaseRecipientResources(
              (struct _RM_GAME_MODE_CONTEXT *)a2,
              (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v30 - 88));
            *(_DWORD *)(v30 + 16) = 2;
            RmpGameModeDereferenceRecipientProcess((PVOID)(v30 - 88));
          }
          RtlAcquireSRWLockExclusive(v5);
          a2[20] = GetCurrentThreadId();
        }
      }
      if ( (_QWORD *)*v7 == v7 )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(v5);
        while ( 1 )
        {
          v37 = !_BitScanForward((unsigned int *)&v13, a2[33]);
          if ( v37 )
            break;
          off_1800B5970[5 * v13]((struct _RM_GAME_MODE_CONTEXT *)a2, 0LL);
          a2[33] &= ~(1 << v13);
        }
        RtlAcquireSRWLockExclusive(v5);
        a2[20] = GetCurrentThreadId();
      }
      RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
      if ( !v11 )
        RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, 0);
      if ( (a2[37] & 8) == 0 )
        break;
LABEL_26:
      v17 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 || (v17[7] & 0x10) != 0 )
        v18 = 0;
      else
        v18 = *((_DWORD *)v17 + 5);
      if ( v18 != a2[36] )
      {
        RmpSystemPublishGlobalGameModeState(v18);
        a2[36] = v18;
      }
      v6 = *((_BYTE *)a2 + 148);
      if ( (v6 & 1) == 0 )
        goto LABEL_31;
      v4 = v45;
    }
    v14 = a2[34];
    if ( (_QWORD *)*v7 == v7 )
    {
      RecipientProcessById = RmpGameModeFindRecipientProcessById((struct _RM_GAME_MODE_CONTEXT *)a2, v9);
      v16 = (__int64)RecipientProcessById;
      if ( !RecipientProcessById )
      {
LABEL_21:
        if ( v14 )
          RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, v14 != 0);
        if ( v44.Flink != &v44 )
        {
          RmpGameModeAcquireGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2, &v44);
          RmpGameModeApplyNewRecipientPolicies((struct _RM_GAME_MODE_CONTEXT *)a2, &v44);
          RmpGameModeApplyGlobalPolicies((struct _RM_GAME_MODE_CONTEXT *)a2);
          RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
        }
        v5 = (char *)(a2 + 18);
        goto LABEL_26;
      }
      if ( (*((_BYTE *)RecipientProcessById + 170) & 5) != 1 || !RmpGameModeIsProcessPrimary(RecipientProcessById) )
      {
        RmpGameModeDereferenceRecipientProcess((PVOID)v16);
        goto LABEL_21;
      }
      *(_DWORD *)(v16 + 104) = 0;
      *(_BYTE *)(v16 + 171) |= 1u;
      v33 = (struct _LIST_ENTRY *)(v16 + 88);
      Blink = v44.Blink;
      if ( v44.Blink->Flink != &v44 )
LABEL_105:
        __fastfail(3u);
      *(_QWORD *)(v16 + 96) = v44.Blink;
      v33->Flink = &v44;
      Blink->Flink = v33;
      v44.Blink = (struct _LIST_ENTRY *)(v16 + 88);
    }
    else
    {
      v16 = *v7 - 88LL;
    }
    v35 = *(_QWORD *)(v16 + 72);
    if ( !v35 )
    {
LABEL_95:
      v41 = (char *)(a2 + 6);
      for ( i = (char *)*((_QWORD *)a2 + 3); i != v41; i = *(char **)v43 )
      {
        if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(i - 56))
          && (*(_BYTE *)(v43 + 114) & 8) == 0 )
        {
          RmpGameModePromoteAuxiliaryProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v43 - 56), &v44);
        }
      }
      goto LABEL_21;
    }
    while ( 1 )
    {
LABEL_75:
      if ( (int)RmpGameModePromotePairedAuxiliaryNode((struct _RTL_BALANCED_NODE *)v35, &v44) < 0 )
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
    v38 = *(_BYTE *)(v16 + 80) & 1;
    if ( v36 )
    {
      v37 = v38 == 0;
      goto LABEL_79;
    }
    for ( j = v35; ; v35 = j )
    {
      j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v38 )
      {
        if ( !j )
          goto LABEL_95;
        j ^= v35;
      }
      if ( !j )
        goto LABEL_95;
      v40 = *(_QWORD *)(j + 8);
      if ( v38 )
      {
        if ( !v40 )
          continue;
        v40 ^= j;
      }
      if ( v40 && v40 != v35 )
      {
        v35 = v40;
        goto LABEL_75;
      }
    }
  }
LABEL_31:
  a2[20] = 0;
  *((_BYTE *)a2 + 148) = v6 & 0xFD;
  RtlReleaseSRWLockExclusive(v5);
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DC1E0, (int)&dword_1800C44E4, 0, 0, 2u, &v47);
  CempLockTrackerClearForThread(HampLockTrackerId);
}

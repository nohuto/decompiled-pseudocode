/*
 * XREFs of ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180081A7C
 * Callers:
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007EA88 (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DCA8 (-RmHamHostGetId@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18004EFEC (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004F088 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 *     ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800814D8 (-HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180081570 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x180081718 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 */

void __fastcall HampSlsUpdateHostBlockType(__int64 a1, struct _RM_HAM_ACTIVITY_HOST *a2, unsigned __int8 a3)
{
  __int64 Id; // rax
  int v7; // r8d
  int v8; // r8d
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v9; // rdi
  int v10; // r8d
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v11; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-40h] BYREF
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **v14; // [rsp+60h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-18h]

  P = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) == 0 && (*(_BYTE *)(a1 + 32) & 1) != 0 )
    {
      Id = RmHamHostGetId(a2);
      if ( (int)HampSlsBlockerEntryFind((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, Id, &v11) >= 0
        && (int)HampSlsBlockerEntryUpdateBlockType((__int64)v11, 0, a1, (__int64)a2) < 0
        && (unsigned int)dword_1800DB218 > 4
        && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
      {
        LODWORD(v11) = v7;
        v14 = &v11;
        v15 = 4LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DB218,
          (unsigned __int8 *)dword_1800C303D,
          0LL,
          0LL,
          3u,
          &v13);
      }
    }
    return;
  }
  if ( (int)HampSlsBlockerEntryCreate(
              (struct _HAM_SLEEP_STUDY_CONTEXT *)a1,
              a2,
              (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **)&P) >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 2) == 0 && (*(_BYTE *)(a1 + 32) & 1) != 0 )
    {
      v9 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P;
      HampSlsBlockerEntryFindOrInsert(
        (struct _HAM_SLEEP_STUDY_CONTEXT *)a1,
        (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P,
        &v11);
      if ( v11 == v9 )
        v9 = 0LL;
      P = v9;
      if ( (int)HampSlsBlockerEntryUpdateBlockType((__int64)v11, a3, a1, (__int64)a2) < 0
        && (unsigned int)dword_1800DB218 > 4
        && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
      {
        LODWORD(v11) = v10;
        v14 = &v11;
        v15 = 4LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DB218,
          (unsigned __int8 *)dword_1800C303D,
          0LL,
          0LL,
          3u,
          &v13);
      }
      goto LABEL_15;
    }
  }
  else if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    LODWORD(v11) = v8;
    v14 = &v11;
    v15 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C3001,
      0LL,
      0LL,
      3u,
      &v13);
  }
  v9 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P;
LABEL_15:
  if ( v9 )
  {
    HampSlsBlockerEntryCleanup(v9);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}

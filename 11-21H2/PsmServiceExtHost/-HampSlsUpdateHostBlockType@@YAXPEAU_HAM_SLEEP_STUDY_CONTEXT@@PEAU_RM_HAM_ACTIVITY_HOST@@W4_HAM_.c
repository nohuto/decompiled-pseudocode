/*
 * XREFs of ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180082A68
 * Callers:
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007F848 (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180082290 (-HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180082358 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180082520 (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HA.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x1800825C4 (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800826A4 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 */

void __fastcall HampSlsUpdateHostBlockType(__int64 a1, struct _RM_HAM_ACTIVITY_HOST *a2, unsigned __int8 a3)
{
  int v5; // r9d
  int v6; // r9d
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v7; // rdi
  int v8; // r9d
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v9; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-40h] BYREF
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]

  P = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1
      && (int)HampSlsBlockerEntryFind((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, a2, &v9) >= 0
      && (int)HampSlsBlockerEntryUpdateBlockType((__int64)v9, 0, a1) < 0
      && (unsigned int)dword_1800DC218 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
      {
        LODWORD(v9) = v5;
        v12 = &v9;
        v13 = 4LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DC218,
          (unsigned __int8 *)dword_1800C1E33,
          0LL,
          0LL,
          3u,
          &v11);
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
      v7 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P;
      HampSlsBlockerEntryFindOrInsert(
        (struct _HAM_SLEEP_STUDY_CONTEXT *)a1,
        (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P,
        &v9);
      if ( v9 == v7 )
        v7 = 0LL;
      P = v7;
      if ( (int)HampSlsBlockerEntryUpdateBlockType((__int64)v9, a3, a1) < 0
        && (unsigned int)dword_1800DC218 > 4
        && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
      {
        LODWORD(v9) = v8;
        v12 = &v9;
        v13 = 4LL;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DC218,
          (unsigned __int8 *)dword_1800C1E33,
          0LL,
          0LL,
          3u,
          &v11);
      }
      goto LABEL_14;
    }
  }
  else if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
  {
    LODWORD(v9) = v6;
    v12 = &v9;
    v13 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C1DF7,
      0LL,
      0LL,
      3u,
      &v11);
  }
  v7 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)P;
LABEL_14:
  if ( v7 )
  {
    HampSlsBlockerEntryCleanup(v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}

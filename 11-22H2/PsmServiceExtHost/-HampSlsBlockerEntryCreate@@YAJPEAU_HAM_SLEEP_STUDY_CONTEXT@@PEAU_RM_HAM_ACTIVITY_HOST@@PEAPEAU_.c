/*
 * XREFs of ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180081570
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180081A7C (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800814D8 (-HampSlsBlockerEntryCleanup@@YAXPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z.c)
 *     ?HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x1800817F0 (-HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x18008188C (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     ?HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@@Z @ 0x1800819EC (-HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_.c)
 */

__int64 __fastcall HampSlsBlockerEntryCreate(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *Heap; // rax
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v7; // rbx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _GUID v13; // [rsp+50h] [rbp-B0h] BYREF
  GUID v14; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v15; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  Heap = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v7 = Heap;
  if ( Heap )
  {
    HampSlsBlockerEntryInitialize(a2, Heap);
    HampSlsHostBlockerNameFromPsmKey(
      (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 + 24),
      0LL,
      (struct _HAM_SLEEP_STUDY_BLOCKER_NAME *)SourceString);
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (unsigned int)HampSlsCreateGuid(&v15) )
    {
      v8 = -1073741823;
    }
    else
    {
      v9 = *((_QWORD *)a1 + 1);
      v13 = v15;
      v14 = GUID_SLEEPSTUDY_BLOCKER_PLM_PHASE;
      v8 = ((__int64 (__fastcall *)(__int64, GUID *, struct _GUID *, struct _UNICODE_STRING *, int, __int64 *))SleepstudyHelperCreateBlockerFromGuid)(
             v9,
             &v14,
             &v13,
             &DestinationString,
             3,
             &v11);
      if ( v8 >= 0 )
      {
        v8 = SleepstudyHelperBuildBlocker(v11, (char *)v7 + 56);
        if ( v8 >= 0 )
        {
          *(struct _GUID *)((char *)v7 + 40) = v13;
          *a3 = v7;
          v7 = 0LL;
          v11 = 0LL;
          v8 = 0;
        }
      }
    }
  }
  else
  {
    v8 = -1073741801;
  }
  if ( v11 )
    SleepstudyHelperDestroyBlockerBuilder();
  if ( v7 )
  {
    HampSlsBlockerEntryCleanup(v7);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return (unsigned int)v8;
}

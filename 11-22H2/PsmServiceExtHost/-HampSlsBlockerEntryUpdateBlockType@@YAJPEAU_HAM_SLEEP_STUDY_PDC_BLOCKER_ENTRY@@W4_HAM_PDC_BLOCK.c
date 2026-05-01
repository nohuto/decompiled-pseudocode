/*
 * XREFs of ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004F088
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x180081A7C (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x18008188C (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     ?HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@@Z @ 0x1800819EC (-HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_.c)
 */

__int64 __fastcall HampSlsBlockerEntryUpdateBlockType(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v17; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v18; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[264]; // [rsp+80h] [rbp-80h] BYREF

  v14 = 0LL;
  v5 = a2;
  v7 = *(unsigned __int8 *)(a1 + 32);
  LOBYTE(v13) = v5;
  if ( (_BYTE)v7 != 5 )
  {
    v15 = *(_QWORD *)(a1 + 8 * v7 + 64);
    if ( (_BYTE)v7 )
      SleepstudyHelperBlockerActiveDereference();
  }
  if ( !(_BYTE)v5 )
    goto LABEL_13;
  v9 = *(_QWORD *)(a1 + 8 * v5 + 64);
  v15 = v9;
  if ( v9 )
  {
LABEL_12:
    SleepstudyHelperBlockerActiveReference(v9);
LABEL_13:
    v10 = 0;
    *(_BYTE *)(a1 + 32) = v5;
    goto LABEL_14;
  }
  HampSlsHostBlockerNameFromPsmKey(
    (struct _RM_PSM_KEY *)(a4 + 24),
    (enum _HAM_PDC_BLOCK_TYPE *)&v13,
    (struct _HAM_SLEEP_STUDY_BLOCKER_NAME *)SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( (unsigned int)HampSlsCreateGuid(&v17) )
  {
    v10 = -1073741823;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(a3 + 8);
  v18 = v17;
  v10 = SleepstudyHelperCreateBlockerFromGuid(v11, a1 + 40, &v18, &DestinationString, 3, &v14, v13);
  if ( v10 >= 0 )
  {
    v10 = SleepstudyHelperSetBlockerParentHandle(v14, *(_QWORD *)(a1 + 56));
    if ( v10 >= 0 )
    {
      v10 = SleepstudyHelperBuildBlocker(v14, &v15);
      if ( v10 >= 0 )
      {
        v14 = 0LL;
        *(_QWORD *)(a1 + 8 * v5 + 64) = v15;
        v9 = v15;
        goto LABEL_12;
      }
    }
  }
LABEL_14:
  if ( v14 )
    SleepstudyHelperDestroyBlockerBuilder();
  return (unsigned int)v10;
}

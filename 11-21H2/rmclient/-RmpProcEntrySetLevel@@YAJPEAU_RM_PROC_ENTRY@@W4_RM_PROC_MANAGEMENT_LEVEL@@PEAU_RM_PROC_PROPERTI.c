/*
 * XREFs of ?RmpProcEntrySetLevel@@YAJPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@PEAU_RM_PROC_PROPERTIES@@PEAW42@@Z @ 0x1800147C4
 * Callers:
 *     ?RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z @ 0x180013ACC (-RmpProcContextRundown@@YAXPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@@Z.c)
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     RmpUtilIsCompressionStoreEnabled @ 0x18000BE34 (RmpUtilIsCompressionStoreEnabled.c)
 *     ?RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z @ 0x180013F44 (-RmpProcEntryDecreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1@Z.c)
 *     ?RmpProcEntryHasCompressionStore@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x1800141F8 (-RmpProcEntryHasCompressionStore@@YAKPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z @ 0x180014264 (-RmpProcEntryIncreaseLevel@@YAXPEAU_RM_PROC_ENTRY@@W4_RM_PROC_MANAGEMENT_LEVEL@@1K@Z.c)
 *     ?RmpProcEntryIsTooLargeToSwap@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x180014454 (-RmpProcEntryIsTooLargeToSwap@@YAKPEAU_RM_PROC_ENTRY@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall RmpProcEntrySetLevel(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 v4; // rdi
  int v8; // ebx
  _DWORD *v9; // r14
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  BOOL IsCompressionStoreEnabled; // r15d
  BOOL v14; // esi
  __int64 IsTooLargeToSwap; // rdx
  __int64 v16; // r8
  char v17; // cl
  char v18; // al
  char v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // edx
  void *v23; // rcx
  _BYTE JobInformation[16]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-C8h]

  v4 = a1 + 64;
  v8 = a2;
  CempLockAcquireExclusive(a1 + 64, a2, a3);
  v9 = (_DWORD *)(a1 + 104);
  v10 = *(_DWORD *)(a1 + 104) & 7;
  *a4 = v10;
  v11 = *(_DWORD *)(a1 + 104);
  if ( (v11 & 8) != 0 )
  {
    v12 = -1073700861;
LABEL_38:
    *(_DWORD *)(v4 + 8) = 0;
    RtlReleaseSRWLockExclusive(v4);
    goto LABEL_39;
  }
  if ( v10 == v8 && (((*a3 ^ *(_QWORD *)(a1 + 112)) & 0x1C0LL) != 0 || ((*a3 ^ *(_QWORD *)(a1 + 112)) & 0x200LL) != 0) )
  {
    v12 = -1073741811;
    goto LABEL_38;
  }
  *v9 = v11 | 8;
  *(_DWORD *)(v4 + 8) = 0;
  RtlReleaseSRWLockExclusive(v4);
  if ( v8 < 2 )
  {
    IsTooLargeToSwap = 0LL;
    v14 = 0;
    IsCompressionStoreEnabled = 1;
  }
  else
  {
    IsCompressionStoreEnabled = RmpUtilIsCompressionStoreEnabled();
    v14 = IsCompressionStoreEnabled && RmpProcEntryHasCompressionStore((struct _RM_PROC_ENTRY *)a1) == 0;
    IsTooLargeToSwap = (unsigned int)RmpProcEntryIsTooLargeToSwap((HANDLE *)a1);
  }
  v16 = *a3 >> 6;
  if ( (v16 & 7) == 1 )
  {
    if ( v14 )
      goto LABEL_37;
    goto LABEL_17;
  }
  if ( ((*a3 >> 6) & 7) == 2 )
  {
LABEL_17:
    if ( !(_DWORD)IsTooLargeToSwap )
      goto LABEL_18;
LABEL_37:
    CempLockAcquireExclusive(v4, IsTooLargeToSwap, v16);
    *v9 &= ~8u;
    v12 = -1058275328;
    goto LABEL_38;
  }
LABEL_18:
  v17 = 0;
  if ( (_DWORD)IsTooLargeToSwap || v14 )
    v17 = 1;
  v18 = v17 | 2;
  if ( (v16 & 7) == 0 )
    v18 = v17;
  v19 = v18;
  if ( v8 >= 2 && IsCompressionStoreEnabled && !v14 )
    v19 = v18 | 4;
  if ( *a4 >= v8 )
  {
    if ( *a4 > v8 )
      RmpProcEntryDecreaseLevel(a1, *a4, (unsigned int)v8);
  }
  else
  {
    RmpProcEntryIncreaseLevel(a1, (unsigned int)*a4, (unsigned int)v8, v19);
  }
  NtQueryInformationJobObject(*(HANDLE *)(a1 + 48), JobObjectExtendedLimitInformation, JobInformation, 0x90u, 0LL);
  v21 = v26;
  if ( (((unsigned __int8)(v26 >> 13) ^ (unsigned __int8)(*a3 >> 10)) & 1) != 0 )
  {
    if ( (*a3 & 0x400LL) != 0 )
      v22 = v26 | 0x2000;
    else
      v22 = v26 & 0xFFFFDFFF;
    v23 = *(void **)(a1 + 48);
    v26 = v22;
    NtSetInformationJobObject(v23, JobObjectExtendedLimitInformation, JobInformation, 0x90u);
  }
  CempLockAcquireExclusive(v4, v21, v20);
  *v9 = v8 & 7 | *v9 & 0xFFFFFFF0;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)a3;
  *(_DWORD *)(v4 + 8) = 0;
  RtlReleaseSRWLockExclusive(v4);
  v12 = 0;
LABEL_39:
  RtlWakeAddressAll(a1 + 104);
  return v12;
}

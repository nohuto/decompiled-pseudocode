/*
 * XREFs of ?RmpProcContextRemediatePhysical@@YA?AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_METRICS_BUFFER@@PEA_K@Z @ 0x180013820
 * Callers:
 *     ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00 (-RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000110C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ?RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014088 (-RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 *     ?RmpProcEntryIsEmptyTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x180014430 (-RmpProcEntryIsEmptyTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryIsTrimTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z @ 0x1800144D0 (-RmpProcEntryIsTrimTarget@@YAKPEAU_RM_PROC_ENTRY@@@Z.c)
 *     ?RmpProcEntryTrimCompressionStore@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014C10 (-RmpProcEntryTrimCompressionStore@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 */

__int64 __fastcall RmpProcContextRemediatePhysical(ULONGLONG a1, __int64 a2, ULONGLONG *a3)
{
  ULONGLONG v3; // rdi
  int v4; // r13d
  ULONGLONG *v5; // rsi
  ULONGLONG v7; // r14
  __int64 v8; // rcx
  ULONGLONG TickCount64; // r12
  unsigned int v10; // r15d
  ULONGLONG v11; // rbx
  ULONGLONG v12; // rax
  int v13; // ebx
  unsigned __int64 v14; // rax
  struct _RM_PROC_ENTRY *v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // esi
  int v18; // esi
  unsigned int v19; // ebx
  __int64 result; // rax
  char v21; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-75h]
  ULONGLONG v23; // [rsp+38h] [rbp-71h] BYREF
  ULONGLONG *v24; // [rsp+40h] [rbp-69h]
  ULONGLONG v25; // [rsp+48h] [rbp-61h]
  ULONGLONG v26; // [rsp+50h] [rbp-59h] BYREF
  __int64 v27; // [rsp+58h] [rbp-51h]
  ULONGLONG v28; // [rsp+60h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-39h] BYREF
  char *v30; // [rsp+90h] [rbp-19h]
  __int64 v31; // [rsp+98h] [rbp-11h]
  __int64 *v32; // [rsp+A0h] [rbp-9h]
  __int64 v33; // [rsp+A8h] [rbp-1h]
  ULONGLONG *v34; // [rsp+B0h] [rbp+7h]
  __int64 v35; // [rsp+B8h] [rbp+Fh]

  v3 = 0LL;
  v24 = a3;
  v4 = 0;
  v27 = a2;
  v5 = a3;
  v23 = a1;
  v7 = 0LL;
  v22 = 0;
  TickCount64 = GetTickCount64();
  v25 = TickCount64;
  v10 = 0;
  v26 = TickCount64 + 5000;
  if ( !*(_DWORD *)(a2 + 12) )
  {
LABEL_28:
    v19 = 1;
    goto LABEL_29;
  }
  v11 = v23;
  v12 = v23 + 48;
  v28 = v23 + 48;
  while ( 1 )
  {
    RtlAcquireSRWLockShared(v12);
    v13 = *(_DWORD *)(v11 + 96);
    RtlReleaseSRWLockShared(v28);
    if ( (v13 & 1) != 0 )
    {
      v19 = 5;
      goto LABEL_29;
    }
    if ( v26 <= TickCount64 && v4 )
    {
      v19 = 3;
      goto LABEL_29;
    }
    v8 = v27;
    v14 = *(_QWORD *)v27 + ((unsigned __int64)v10 << 6);
    v15 = *(struct _RM_PROC_ENTRY **)(v14 + 32);
    if ( (*(_BYTE *)(v14 + 56) & 0x20) != 0 )
    {
      if ( (*(_BYTE *)(v14 + 4) & 1) == 0 )
        goto LABEL_22;
      v16 = *(_QWORD *)(v14 + 16);
      RtlAcquireSRWLockShared((char *)v15 + 64);
      if ( !RmpProcEntryIsEmptyTarget(v15) || (v17 = 1, !v16) )
        v17 = 0;
      RtlReleaseSRWLockShared((char *)v15 + 64);
      if ( !v17 )
        goto LABEL_21;
      RmpProcEntryEmpty(v15, v16);
    }
    else
    {
      if ( (*(_BYTE *)(v14 + 4) & 0x40) == 0 )
        goto LABEL_22;
      v16 = *(_QWORD *)(v14 + 48);
      RtlAcquireSRWLockShared((char *)v15 + 64);
      if ( !RmpProcEntryIsTrimTarget(v15) || (v18 = 1, !v16) )
        v18 = 0;
      RtlReleaseSRWLockShared((char *)v15 + 64);
      if ( !v18 )
      {
LABEL_21:
        TickCount64 = v25;
        v5 = v24;
        goto LABEL_22;
      }
      RmpProcEntryTrimCompressionStore(v15, v16);
    }
    v5 = v24;
    v7 += v16;
    ++v4;
    v25 = GetTickCount64();
    TickCount64 = v25;
    if ( v7 >= *v24 )
    {
      v19 = 4;
      goto LABEL_29;
    }
LABEL_22:
    v10 = v22 + 1;
    v22 = v10;
    if ( v10 >= *(_DWORD *)(v27 + 12) )
      break;
    v12 = v28;
    v11 = v23;
  }
  if ( !v4 )
    goto LABEL_28;
  v19 = 2;
LABEL_29:
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v8, 2LL) )
  {
    v26 = *v5;
    v23 = v7;
    v34 = &v26;
    v21 = v19;
    v32 = (__int64 *)&v23;
    v35 = 8LL;
    v30 = &v21;
    v33 = 8LL;
    v31 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180032000,
      (unsigned __int8 *)dword_18002B508,
      0LL,
      0LL,
      5u,
      &v29);
  }
  result = v19;
  if ( v7 <= *v5 )
    v3 = *v5 - v7;
  *v5 = v3;
  return result;
}

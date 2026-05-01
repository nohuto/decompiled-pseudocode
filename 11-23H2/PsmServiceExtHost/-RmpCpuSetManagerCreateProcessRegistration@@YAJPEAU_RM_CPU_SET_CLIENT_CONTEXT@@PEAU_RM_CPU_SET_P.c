/*
 * XREFs of ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800862D4
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180087540 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800868A0 (-RmpCpuSetManagerInitializeProcessRegistration@@YAXPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z.c)
 *     ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180086BF0 (-RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 */

__int64 __fastcall RmpCpuSetManagerCreateProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION **a4)
{
  __int64 v7; // r14
  struct _RM_CPU_SET_PROCESS_REGISTRATION *Heap; // rax
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // eax
  int v16; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-65h] BYREF
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v21; // [rsp+70h] [rbp-29h]
  int v22; // [rsp+78h] [rbp-21h]
  int v23; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  __int64 *v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  int *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]

  v7 = -1LL;
  Heap = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v10 = Heap;
  if ( Heap )
  {
    RmpCpuSetManagerInitializeProcessRegistration(Heap);
    RmpCpuSetManagerInsertProcessRegistration(a1, a2, a3, v10);
    v7 = *((_QWORD *)v10 + 4);
    *a4 = v10;
    v11 = 0;
  }
  else
  {
    v11 = -1073741801;
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v14 = *((_DWORD *)a2 + 14);
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v16 = v14;
    v18 = *((_QWORD *)a3 + 4);
    v30 = &v16;
    v27 = &v18;
    v24 = &v19;
    v21 = &v17;
    v31 = v13;
    v28 = v13 + 4;
    v25 = v13 + 4;
    v22 = v13;
    v19 = v7;
    v17 = v11;
    tlgWriteTransfer_EventWriteTransfer(v12, (unsigned __int8 *)dword_1800C491A, 0LL, 0LL, 6u, &v20);
  }
  return v11;
}

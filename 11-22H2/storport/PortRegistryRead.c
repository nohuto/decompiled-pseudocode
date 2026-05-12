/*
 * XREFs of PortRegistryRead @ 0x1C00A07E8
 * Callers:
 *     RaidRegGetDeviceDumpSupportLevel @ 0x1C00181D8 (RaidRegGetDeviceDumpSupportLevel.c)
 *     RaidRegGetDeviceDumpMaxSize @ 0x1C0018264 (RaidRegGetDeviceDumpMaxSize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall PortRegistryRead(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int *a5)
{
  __int64 v5; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  PVOID SystemRoutineAddress; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+38h] [rbp-41h] BYREF
  int v14; // [rsp+40h] [rbp-39h]
  int v15; // [rsp+44h] [rbp-35h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  void *v17; // [rsp+58h] [rbp-21h] BYREF
  int v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  __int64 *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  __int64 v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]

  v5 = *a4;
  v15 = 0;
  v13 = v5;
  v14 = *a5;
  memset_0(&v17, 0, 0x70uLL);
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  v17 = &PortpRegQueryRoutine;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  v19 = v9;
  v20 = &v13;
  v18 = 20;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  result = ((__int64 (__fastcall *)(_QWORD, __int64, void **, __int64, _QWORD))SystemRoutineAddress)(
             0LL,
             v10,
             &v17,
             4LL,
             0LL);
  *a4 = v13;
  *a5 = v14;
  return result;
}

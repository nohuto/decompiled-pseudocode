/*
 * XREFs of NdisAllocateGenericObject @ 0x1C0032B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLL @ 0x1C00184D8 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLLq @ 0x1C0032C3C (WPP_RECORDER_SF_qLLq_ea_1C0032C3C.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  __int64 Pool2; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct _NDIS_GENERIC_OBJECT *v10; // rbx
  int v12; // [rsp+20h] [rbp-58h]
  PVOID CallersCaller; // [rsp+50h] [rbp-28h] BYREF
  PVOID CallersAddress; // [rsp+98h] [rbp+20h] BYREF

  CallersAddress = 0LL;
  CallersCaller = 0LL;
  if ( traceInited && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Tag,
      0x15u,
      0x89u,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)DriverObject,
      Tag);
  RtlGetCallersAddress(&CallersAddress, &CallersCaller);
  if ( Size >= 0xFFE0u )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, (unsigned __int16)(Size + 32), Tag);
  v10 = (struct _NDIS_GENERIC_OBJECT *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = CallersAddress;
    *(_QWORD *)(Pool2 + 16) = CallersCaller;
    *(_WORD *)Pool2 = 257;
    *(_WORD *)(Pool2 + 2) = Size + 32;
    *(_QWORD *)(Pool2 + 24) = DriverObject;
  }
  if ( traceInited )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, v8, v9, v12, (char)DriverObject, Tag, Size, Pool2);
  }
  return v10;
}

/*
 * XREFs of NdisAllocateGenericObject @ 0x1C0031D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDL @ 0x1C0018A58 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qLLq @ 0x1C0031E60 (WPP_RECORDER_SF_qLLq_ea_1C0031E60.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  __int64 Pool2; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct _NDIS_GENERIC_OBJECT *v10; // rbx
  int v12; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( traceInited && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Tag,
      0x15u,
      0x89u,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)DriverObject,
      Tag);
  if ( Size >= 0xFFE0u )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, (unsigned __int16)(Size + 32), Tag);
  v10 = (struct _NDIS_GENERIC_OBJECT *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 8) = retaddr;
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

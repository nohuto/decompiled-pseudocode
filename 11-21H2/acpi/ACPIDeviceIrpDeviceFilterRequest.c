/*
 * XREFs of ACPIDeviceIrpDeviceFilterRequest @ 0x1C002E3E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000575C (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000D718 (WPP_RECORDER_SF_qdqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceFilterRequest(ULONG_PTR a1, __int64 a2, _SLIST_ENTRY *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char v7; // r8
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // ebp
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  int v15; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = 0;
  v8 = DeviceExtension;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)&unk_1C006FB8B;
  v12 = (const char *)&unk_1C006FB8B;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v8 + 608);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v8 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v12,
      0xAu,
      0x1Eu,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a2,
      v9 - 1,
      v7,
      v11,
      v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 < 0 )
  {
    ACPIInternalDecrementIrpReferenceCount(v8);
    return (unsigned int)v14;
  }
  else if ( v9 != 1 && _bittest64((const signed __int64 *)(v8 + 1000), 0x24u) )
  {
    if ( a3 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(v8, a2, (unsigned int)v14);
    return 3221225494LL;
  }
  else
  {
    if ( (unsigned int)(v10 - 4) <= 1 || (v15 = 0, v10 == 6) )
      v15 = 1;
    return ACPIDeviceInitializePowerRequest(v8, v9, a3, a2, v10, 0, 8 * v15);
  }
}

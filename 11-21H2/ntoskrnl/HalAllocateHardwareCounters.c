/*
 * XREFs of HalAllocateHardwareCounters @ 0x1409084C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140505998 @ 0x140505998 (sub_140505998.c)
 */

NTSTATUS __stdcall HalAllocateHardwareCounters(
        PGROUP_AFFINITY GroupAffinty,
        ULONG GroupCount,
        PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
        PHANDLE CounterSetHandle)
{
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 Group; // rcx
  KAFFINITY Mask; // r8
  unsigned int v12; // ebx
  ULONG ActiveProcessorCount; // edi
  _DWORD v14[68]; // [rsp+20h] [rbp-148h] BYREF

  v5 = GroupCount;
  memset(&v14[2], 0, 0x100uLL);
  if ( !CounterSetHandle )
    return -1073741811;
  *CounterSetHandle = 0LL;
  if ( !GroupAffinty && !ResourceList )
    return sub_140505998((__int64 *)CounterSetHandle);
  v14[0] = 2097153;
  memset(&v14[1], 0, 0x104uLL);
  if ( GroupAffinty )
  {
    if ( (_DWORD)v5 )
    {
      v9 = v5;
      while ( 1 )
      {
        Group = GroupAffinty->Group;
        Mask = GroupAffinty->Mask;
        if ( LOWORD(v14[0]) > (unsigned __int16)Group )
          goto LABEL_11;
        if ( HIWORD(v14[0]) > (unsigned __int16)Group )
          break;
LABEL_12:
        ++GroupAffinty;
        if ( !--v9 )
          goto LABEL_16;
      }
      LOWORD(v14[0]) = Group + 1;
LABEL_11:
      *(_QWORD *)&v14[2 * Group + 2] |= Mask;
      goto LABEL_12;
    }
  }
  else
  {
    v12 = 0;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      do
        KeAddProcessorAffinityEx((unsigned __int16 *)v14, v12++);
      while ( v12 < ActiveProcessorCount );
    }
  }
LABEL_16:
  if ( off_140C02520[14] )
    return sub_14042A5E0(v14, ResourceList);
  else
    return -1073741670;
}

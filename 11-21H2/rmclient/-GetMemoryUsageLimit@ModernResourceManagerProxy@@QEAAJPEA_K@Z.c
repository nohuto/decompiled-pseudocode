/*
 * XREFs of ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180006B30
 * Callers:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180006C04 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180006390 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLimit(
        ModernResourceManagerProxy *this,
        unsigned __int64 *a2)
{
  signed int v4; // ebx
  NTSTATUS v5; // eax
  signed int v7; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[4]; // [rsp+34h] [rbp-44h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-38h]

  RtlAcquireSRWLockExclusive((char *)this + 96);
  *((_DWORD *)this + 26) = GetCurrentThreadId();
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 >= 0 )
  {
    v8 = 24;
    v5 = NtQueryWnfStateData((char *)this + 48, 0LL, 0LL, v9, v10, &v8);
    if ( v5 < 0 )
    {
      v7 = RtlNtStatusToDosError(v5);
      v4 = v7;
      if ( v7 > 0 )
        v4 = (unsigned __int16)v7 | 0x80070000;
    }
    else
    {
      v4 = 0;
      *a2 = v11;
    }
  }
  *((_DWORD *)this + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 96);
  return (unsigned int)v4;
}

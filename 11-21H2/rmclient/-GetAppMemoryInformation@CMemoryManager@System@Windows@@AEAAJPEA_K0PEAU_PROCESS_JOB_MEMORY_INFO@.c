/*
 * XREFs of ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180006C04
 * Callers:
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180006D20 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 *     ?get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18001B3A0 (-get_ExpectedAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180004620 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     ?GetExpectedMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180006A54 (-GetExpectedMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180006B30 (-GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

signed int __fastcall Windows::System::CMemoryManager::GetAppMemoryInformation(
        Windows::System::CMemoryManager *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        struct _PROCESS_JOB_MEMORY_INFO *a4)
{
  int InformationProcess; // eax
  signed int result; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int128 v11; // xmm1
  unsigned __int64 v12; // xmm0_8
  ULONG ReturnLength; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-1h]
  char SystemInformation[16]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+80h] [rbp+17h]

  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess >= 0 )
  {
    if ( (int)Windows::System::CMemoryManager::Init() < 0 )
    {
      v9 = v17;
      v10 = v17;
    }
    else
    {
      result = ModernResourceManagerProxy::GetMemoryUsageLimit(Windows::System::CMemoryManager::s_pProxy, &v14);
      if ( result < 0 )
        return result;
      result = ModernResourceManagerProxy::GetExpectedMemoryUsageLimit(Windows::System::CMemoryManager::s_pProxy, &v15);
      if ( result < 0 )
        return result;
      v9 = v14;
      v10 = v15;
    }
    if ( ((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_9;
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           SystemInformation,
                           0x20u,
                           &ReturnLength);
    if ( InformationProcess >= 0 )
    {
      v9 = v19 * RmpPageSize;
LABEL_9:
      if ( a2 )
        *a2 = v9;
      if ( a3 )
        *a3 = v10;
      if ( a4 )
      {
        v11 = ProcessInformation[1];
        *(_OWORD *)a4 = ProcessInformation[0];
        v12 = v17;
        *((_OWORD *)a4 + 1) = v11;
        *((_QWORD *)a4 + 4) = v12;
      }
      return 0;
    }
  }
  result = RtlNtStatusToDosError(InformationProcess);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}

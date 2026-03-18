/*
 * XREFs of ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027B68
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x1C0027A6C (FxRegisterBugCheckCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WdmlibProcgrpInitialize @ 0x1C00BD61C (WdmlibProcgrpInitialize.c)
 */

__int64 __fastcall _FX_DRIVER_TRACKER_CACHE_AWARE::Register(
        _FX_DRIVER_TRACKER_CACHE_AWARE *this,
        _FX_DRIVER_GLOBALS *__formal)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *SystemRoutineAddress)(__int64); // rax
  unsigned int m_Number; // eax
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 Pool2; // rax
  void *v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // rax
  _UNICODE_STRING funcName; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  funcName = 0LL;
  if ( this->m_PoolToFree )
    return v2;
  WdmlibProcgrpInitialize();
  RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCountEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64))MmGetSystemRoutineAddress(&funcName);
  if ( SystemRoutineAddress )
  {
    m_Number = SystemRoutineAddress(0xFFFFLL);
  }
  else
  {
    RtlInitUnicodeString(&funcName, L"KeQueryMaximumProcessorCount");
    v18 = (__int64 (__fastcall *)(__int64, __int64))MmGetSystemRoutineAddress(&funcName);
    if ( v18 )
    {
      m_Number = v18(v20, v19);
    }
    else
    {
      if ( (FxLibraryGlobals.OsVersionInfo.dwMajorVersion != 5 || !FxLibraryGlobals.OsVersionInfo.dwMinorVersion)
        && (FxLibraryGlobals.OsVersionInfo.dwMajorVersion != 6 || FxLibraryGlobals.OsVersionInfo.dwMinorVersion) )
      {
        return (unsigned int)-1073741637;
      }
      v21 = *(char **)&KeNumberProcessors;
      m_Number = *v21;
    }
  }
  this->m_Number = m_Number;
  if ( m_Number > 0x100 )
    return (unsigned int)-1073741637;
  if ( m_Number > 1 )
  {
    RtlInitUnicodeString(&funcName, L"KeGetRecommendedSharedDataAlignment");
    v7 = (__int64 (__fastcall *)(__int64, __int64))MmGetSystemRoutineAddress(&funcName);
    if ( v7 )
    {
      v10 = v7(v9, v8);
      m_Number = this->m_Number;
      goto LABEL_9;
    }
    return (unsigned int)-1073741637;
  }
  v10 = 8;
LABEL_9:
  this->m_EntrySize = v10;
  Pool2 = ExAllocatePool2(64LL, v10 * m_Number, 1917089862LL);
  v12 = (void *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v13 = this->m_Number;
  if ( v13 > 1 )
  {
    v14 = v10 - 1;
    if ( (v14 & Pool2) != 0 )
    {
      ExFreePoolWithTag((PVOID)Pool2, 0);
      v15 = ExAllocatePool2(64LL, v10 * (this->m_Number + 1), 1917089862LL);
      v12 = (void *)v15;
      if ( v15 )
      {
        v13 = this->m_Number;
        Pool2 = ~v14 & (v14 + v15);
        goto LABEL_14;
      }
      return (unsigned int)-1073741670;
    }
  }
LABEL_14:
  this->m_PoolToFree = v12;
  v16 = 0;
  this->m_DriverUsage = (_FX_DRIVER_TRACKER_CACHE_AWARE::_FX_DRIVER_TRACKER_ENTRY *)Pool2;
  if ( v13 )
  {
    do
    {
      v17 = v16 * this->m_EntrySize;
      ++v16;
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&this->m_DriverUsage->FxDriverGlobals + v17) = 0LL;
    }
    while ( v16 < this->m_Number );
  }
  return v2;
}

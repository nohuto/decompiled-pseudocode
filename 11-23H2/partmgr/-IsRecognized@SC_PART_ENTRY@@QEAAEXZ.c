/*
 * XREFs of ?IsRecognized@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0010C88
 * Callers:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 * Callees:
 *     <none>
 */

char __fastcall SC_PART_ENTRY::IsRecognized(SC_PART_ENTRY *this)
{
  char v1; // dl
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // r8
  __int64 v16; // rcx

  v1 = 0;
  if ( *(_DWORD *)this )
  {
    if ( *(_DWORD *)this != 1 )
      return v1;
    v2 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_BSP_GUID.Data1;
    if ( !v2 )
      v2 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_BSP_GUID.Data4;
    if ( !v2 )
      return 1;
    v3 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_DPP_GUID.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_DPP_GUID.Data4;
    if ( !v3 )
      return 1;
    v4 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_BASIC_DATA_GUID.Data1;
    if ( !v4 )
      v4 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_BASIC_DATA_GUID.Data4;
    if ( !v4 )
      return 1;
    v5 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_MAIN_OS_GUID.Data1;
    if ( !v5 )
      v5 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_MAIN_OS_GUID.Data4;
    if ( !v5 )
      return 1;
    v6 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_MSFT_RECOVERY_GUID.Data1;
    if ( !v6 )
      v6 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_MSFT_RECOVERY_GUID.Data4;
    if ( !v6 )
      return 1;
    v7 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_OS_DATA_GUID.Data1;
    if ( !v7 )
      v7 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_OS_DATA_GUID.Data4;
    if ( !v7 )
      return 1;
    v8 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_PRE_INSTALLED_GUID.Data1;
    if ( !v8 )
      v8 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_PRE_INSTALLED_GUID.Data4;
    if ( !v8 )
      return 1;
    v9 = *((_QWORD *)this + 4) - PARTITION_SERVICING_FILES_GUID;
    if ( !v9 )
      v9 = *((_QWORD *)this + 5) - 0x6A00C0A9EA8D4CAELL;
    if ( !v9 )
      return 1;
    v10 = *((_QWORD *)this + 4) - PARTITION_SERVICING_METADATA_GUID;
    if ( !v10 )
      v10 = *((_QWORD *)this + 5) + 0x31D62D50C28FB145LL;
    if ( !v10 )
      return 1;
    v11 = *((_QWORD *)this + 4) - PARTITION_SERVICING_RESERVE_GUID;
    if ( !v11 )
      v11 = *((_QWORD *)this + 5) - 0x146D13FEB6FF19A3LL;
    if ( !v11 )
      return 1;
    v12 = *((_QWORD *)this + 4) - PARTITION_SERVICING_STAGING_ROOT_GUID;
    if ( !v12 )
      v12 = *((_QWORD *)this + 5) + 0x2046FB4244130C56LL;
    if ( !v12 )
      return 1;
    v13 = *((_QWORD *)this + 4) - *(_QWORD *)&PARTITION_WINDOWS_SYSTEM_GUID.Data1;
    if ( !v13 )
      v13 = *((_QWORD *)this + 5) - *(_QWORD *)PARTITION_WINDOWS_SYSTEM_GUID.Data4;
    v14 = v13 == 0;
  }
  else
  {
    v15 = *((unsigned __int8 *)this + 32);
    if ( (unsigned __int8)v15 <= 0x2Du )
    {
      v16 = 0x3F80000058D2LL;
      if ( _bittest64(&v16, v15) )
        return 1;
    }
    v14 = (_BYTE)v15 == 0xEF;
  }
  if ( v14 )
    return 1;
  return v1;
}

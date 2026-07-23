/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x14068C0AC
 * Callers:
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpOpenHiveFiles @ 0x14068B784 (CmpOpenHiveFiles.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     CmpStartRMLog @ 0x140872DD8 (CmpStartRMLog.c)
 * Callees:
 *     CmSiAllocateMemory @ 0x1402089E0 (CmSiAllocateMemory.c)
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ZwQuerySecurityObject @ 0x14041DDB0 (ZwQuerySecurityObject.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, struct _PRIVILEGE_SET **a2)
{
  struct _PRIVILEGE_SET *Memory; // rdi
  NTSTATUS v5; // ebx
  __int64 result; // rax
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  Memory = 0LL;
  Length = 0;
  v5 = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, &Length);
  if ( v5 == -1073741789 )
  {
    Memory = (struct _PRIVILEGE_SET *)CmSiAllocateMemory(Length, 0x64734D43u);
    if ( Memory )
    {
      v5 = ZwQuerySecurityObject(Handle, 4u, Memory, Length, &Length);
      if ( v5 < 0 )
      {
        CmSiFreeMemory(Memory);
        Memory = 0LL;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else if ( !v5 )
  {
    v5 = -1073741823;
  }
  result = (unsigned int)v5;
  *a2 = Memory;
  return result;
}

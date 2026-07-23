/*
 * XREFs of SiQuerySystemInformationString @ 0x140804974
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x140804918 (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x140A5F37C (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SiQuerySystemInformationString(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  NTSTATUS SystemInformation; // eax
  NTSTATUS v9; // ebx
  const void **Pool2; // rax
  const void **v11; // rdi
  unsigned int v12; // eax
  ULONG ReturnLength[10]; // [rsp+20h] [rbp-28h] BYREF

  ReturnLength[0] = 0;
  SystemInformation = ZwQuerySystemInformation(SystemInformationClass, 0LL, 0, ReturnLength);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    Pool2 = (const void **)ExAllocatePool2(256LL, ReturnLength[0], 1263556947LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      v9 = ZwQuerySystemInformation(SystemInformationClass, Pool2, ReturnLength[0], ReturnLength);
      if ( v9 >= 0 )
      {
        v12 = *(unsigned __int16 *)v11 + 2;
        *a4 = v12;
        if ( v12 <= a3 )
          memmove(a2, v11[1], v12);
        else
          v9 = -1073741789;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemInformation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}

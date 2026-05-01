/*
 * XREFs of SdbpGetMergeSdbsDisabled @ 0x180052484
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x180052070 (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     AslRegistryGetUInt32 @ 0x1800533B0 (AslRegistryGetUInt32.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslRegistryGetKey @ 0x180098ACC (AslRegistryGetKey.c)
 */

__int64 __fastcall SdbpGetMergeSdbsDisabled(_DWORD *a1)
{
  int Key; // eax
  char *v3; // rdi
  unsigned int v4; // ebx
  int UInt32; // eax
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  Key = AslRegistryGetKey(
          &Handle,
          L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
          2147483904LL);
  v3 = (char *)Handle;
  v4 = Key;
  if ( Key >= 0 )
  {
    UInt32 = AslRegistryGetUInt32(&Handle, Handle);
    v4 = UInt32;
    if ( UInt32 == -1073741772 )
    {
      v4 = 0;
      *a1 = 0;
    }
    else if ( UInt32 >= 0 )
    {
      v4 = 0;
      *a1 = (_DWORD)Handle != 0;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpGetMergeSdbsDisabled", 974, (unsigned int)"Failed to query reg value.");
    }
  }
  else if ( Key != -1073741772 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMergeSdbsDisabled",
      962,
      (unsigned int)"AslRegistryGetKey failed to open SdbUpdates key [%x]",
      Key);
  }
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(v3);
  return v4;
}

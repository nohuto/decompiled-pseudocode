/*
 * XREFs of sub_18000715C @ 0x18000715C
 * Callers:
 *     HamQueryPackageUsageInfo @ 0x180007090 (HamQueryPackageUsageInfo.c)
 *     HamQueryApplicationUsageInfo @ 0x18001E060 (HamQueryApplicationUsageInfo.c)
 * Callees:
 *     sub_180007638 @ 0x180007638 (sub_180007638.c)
 */

__int64 __fastcall sub_18000715C(__int64 a1, __int64 a2, unsigned int a3, HKEY *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  PVOID Heap; // rax
  void *v8; // rsi
  int v9; // r9d
  signed int LastError; // ebx
  HKEY v11; // rax
  HKEY v13; // [rsp+30h] [rbp-10h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+30h] BYREF

  v15 = a3;
  hKey = 0LL;
  v13 = 0LL;
  v5 = OpenStateExplicitForUserSid(a2, a1);
  v6 = v5;
  if ( v5 )
  {
    v15 = 0;
    GetSystemAppDataKey(v5, 0LL, 0LL, &v15);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v15);
    v8 = Heap;
    if ( Heap )
    {
      if ( (unsigned int)GetSystemAppDataKey(v6, &hKey, Heap, &v15) )
      {
        LastError = sub_180007638((_DWORD)hKey, (_DWORD)v8, 0, v9, (__int64)&v13);
        if ( LastError >= 0 )
        {
          v11 = v13;
          v13 = 0LL;
          LastError = 0;
          *a4 = v11;
        }
      }
      else if ( (int)GetLastError() > 0 )
      {
        LastError = (unsigned __int16)GetLastError() | 0xC0070000;
      }
      else
      {
        LastError = GetLastError();
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    }
    else
    {
      LastError = -1073741801;
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( v13 )
    RegCloseKey(v13);
  if ( hKey )
    RegCloseKey(hKey);
  if ( v6 )
    CloseState(v6);
  return (unsigned int)LastError;
}

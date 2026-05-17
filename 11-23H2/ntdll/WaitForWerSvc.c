/*
 * XREFs of WaitForWerSvc @ 0x1800E8D44
 * Callers:
 *     SendMessageToWERService @ 0x1800E8A8C (SendMessageToWERService.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1800A0F30 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenEvent @ 0x1800A16B0 (NtOpenEvent.c)
 */

__int64 __fastcall WaitForWerSvc(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  char v3; // dl
  LARGE_INTEGER *v4; // r8
  unsigned int v5; // ebx
  int v6; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-38h]
  int v8; // [rsp+30h] [rbp-30h]
  __int64 v9; // [rsp+38h] [rbp-28h]
  int *v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+48h] [rbp-18h]
  __int128 v12; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+78h] [rbp+18h]
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v7 = L"\\KernelObjects\\SystemErrorPortReady";
  v6 = 4718662;
  v10 = &v6;
  v8 = 48;
  v9 = 0LL;
  v11 = 0;
  v12 = 0LL;
  result = NtOpenEvent();
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v1 == -1 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      v14 = -10000 * v1;
    }
    v4 = (LARGE_INTEGER *)&v14;
    if ( v3 )
      v4 = 0LL;
    v5 = NtWaitForSingleObject(Handle, 0, v4);
    NtClose(Handle);
    return v5;
  }
  return result;
}

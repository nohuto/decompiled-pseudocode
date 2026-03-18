/*
 * XREFs of NtUserSetInformationThread @ 0x1C0069890
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetInformationThread @ 0x1C00699B0 (xxxSetInformationThread.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserSetInformationThread(__int64 a1, unsigned int a2, volatile void *a3, unsigned int a4)
{
  SIZE_T v4; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  _BYTE Src[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  memset(Src, 0, 32);
  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcess(v9, v8, v10) == gpepCSRSS || a2 == 1 )
  {
    if ( (unsigned int)v4 > 0x20 )
    {
      v15 = -1073741811;
    }
    else
    {
      if ( (_DWORD)v4 )
      {
        ProbeForRead(a3, v4, 4u);
        memmove(Src, (const void *)a3, v4);
      }
      v15 = xxxSetInformationThread(a1, a2, Src, (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        ProbeForWrite(a3, v4, 4u);
        memmove((void *)a3, Src, v4);
      }
    }
  }
  else
  {
    v15 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}

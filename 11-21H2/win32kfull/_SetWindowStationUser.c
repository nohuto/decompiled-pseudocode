/*
 * XREFs of _SetWindowStationUser @ 0x1C011932C
 * Callers:
 *     NtUserSetWindowStationUser @ 0x1C0119200 (NtUserSetWindowStationUser.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall SetWindowStationUser(_QWORD *a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v11; // rax
  __int64 v12; // rcx

  v4 = a4;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( a1[7] == gTermIO[0] )
      CitUserChange(*a2);
    v9 = a1[24];
    if ( v9 )
      Win32FreePool(v9);
    if ( !a3 )
    {
      a1[24] = 0LL;
LABEL_8:
      a1[23] = *a2;
      return 1LL;
    }
    v11 = (void *)Win32AllocPoolWithQuotaZInit(v4, 1702064981LL);
    a1[24] = v11;
    if ( v11 )
    {
      memmove(v11, a3, v4);
      goto LABEL_8;
    }
    v12 = 14LL;
  }
  else
  {
    v12 = 5LL;
  }
  UserSetLastError(v12, v8);
  return 0LL;
}

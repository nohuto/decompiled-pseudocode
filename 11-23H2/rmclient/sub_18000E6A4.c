/*
 * XREFs of sub_18000E6A4 @ 0x18000E6A4
 * Callers:
 *     sub_180010EF0 @ 0x180010EF0 (sub_180010EF0.c)
 * Callees:
 *     sub_1800103D4 @ 0x1800103D4 (sub_1800103D4.c)
 *     sub_1800103F4 @ 0x1800103F4 (sub_1800103F4.c)
 */

__int64 __fastcall sub_18000E6A4(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v8; // rdx
  DWORD v9; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v6 = 149LL;
    return sub_1800103D4(retaddr, v6);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v12 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v12) )
      {
        v6 = 173LL;
        return sub_1800103D4(retaddr, v6);
      }
      if ( v12 )
      {
        v8 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v8 = 177LL;
        goto LABEL_25;
      }
      v9 = WaitForSingleObject(hHandle, 0);
      if ( v9 == -1 )
      {
        v6 = 180LL;
        return sub_1800103D4(retaddr, v6);
      }
      if ( v9 )
      {
        v8 = 181LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v6 = 158LL;
        return sub_1800103D4(retaddr, v6);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v8 = 163LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v8 = 150LL;
LABEL_25:
  sub_1800103F4(retaddr, v8, v5, 2147549183LL);
  return 2147549183LL;
}

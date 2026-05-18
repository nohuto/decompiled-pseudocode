/*
 * XREFs of sub_18000E6AC @ 0x18000E6AC
 * Callers:
 *     sub_18000FEFC @ 0x18000FEFC (sub_18000FEFC.c)
 * Callees:
 *     sub_18000F344 @ 0x18000F344 (sub_18000F344.c)
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 */

__int64 __fastcall sub_18000E6AC(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  __int64 v5; // rdx
  __int64 v7; // rdx
  DWORD v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v5 = 149LL;
    return sub_18000F344(retaddr, v5);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v11 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v11) )
      {
        v5 = 173LL;
        return sub_18000F344(retaddr, v5);
      }
      if ( v11 )
      {
        v7 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 177LL;
        goto LABEL_25;
      }
      v8 = WaitForSingleObject(hHandle, 0);
      if ( v8 == -1 )
      {
        v5 = 180LL;
        return sub_18000F344(retaddr, v5);
      }
      if ( v8 )
      {
        v7 = 181LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v5 = 158LL;
        return sub_18000F344(retaddr, v5);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v7 = 163LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v7 = 150LL;
LABEL_25:
  sub_18000F364(retaddr, v7, "wil", 2147549183LL);
  return 2147549183LL;
}

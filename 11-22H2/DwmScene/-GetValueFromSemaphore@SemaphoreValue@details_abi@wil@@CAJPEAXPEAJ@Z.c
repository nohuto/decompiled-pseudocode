/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18000E3DC
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z @ 0x18000F82C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEB_W_NPEA_KPEA_N@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000F004 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  unsigned int v5; // r8d
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v9; // rdx
  DWORD v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v7 = 149LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, v5, v6);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v14 = 0;
      if ( !ReleaseSemaphore(hHandle, 1, &v14) )
      {
        v7 = 173LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, v5, v6);
      }
      if ( v14 )
      {
        v9 = 174LL;
        goto LABEL_25;
      }
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v9 = 177LL;
        goto LABEL_25;
      }
      v10 = WaitForSingleObject(hHandle, 0);
      if ( v10 == -1 )
      {
        v7 = 180LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, v5, v6);
      }
      if ( v10 )
      {
        v9 = 181LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( !ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        v7 = 158LL;
        return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v7, v5, v6);
      }
      ++PreviousCount;
      if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
      {
        v9 = 163LL;
        goto LABEL_25;
      }
    }
    *a2 = PreviousCount;
    return 0LL;
  }
  v9 = 150LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v9, (unsigned int)"wil", (const char *)0x8000FFFFLL, v11);
  return 2147549183LL;
}

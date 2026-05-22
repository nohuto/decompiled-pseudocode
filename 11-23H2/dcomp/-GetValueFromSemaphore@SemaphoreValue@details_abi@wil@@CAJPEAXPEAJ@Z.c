/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180069308
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180068F28 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(HANDLE hHandle, int *a2)
{
  DWORD v4; // eax
  const char *v5; // r9
  DWORD v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int PreviousCount; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = WaitForSingleObject(hHandle, 0);
  if ( v4 == -1 )
  {
    v8 = 149LL;
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  if ( !v4 || v4 == 258 )
  {
    PreviousCount = 0;
    if ( v4 )
    {
      v12 = 0;
      if ( ReleaseSemaphore(hHandle, 1, &v12) )
      {
        if ( v12 )
        {
          v9 = 174LL;
          goto LABEL_25;
        }
        if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
        {
          v9 = 177LL;
          goto LABEL_25;
        }
        v7 = WaitForSingleObject(hHandle, 0);
        if ( v7 != -1 )
        {
          if ( v7 )
          {
            v9 = 181LL;
            goto LABEL_25;
          }
LABEL_7:
          *a2 = PreviousCount;
          return 0LL;
        }
        v8 = 180LL;
      }
      else
      {
        v8 = 173LL;
      }
    }
    else
    {
      if ( ReleaseSemaphore(hHandle, 1, &PreviousCount) )
      {
        ++PreviousCount;
        if ( ReleaseSemaphore(hHandle, 1, 0LL) || GetLastError() != 298 )
        {
          v9 = 163LL;
          goto LABEL_25;
        }
        goto LABEL_7;
      }
      v8 = 158LL;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v8, (unsigned int)"wil", v5);
  }
  v9 = 150LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v9, (int)"wil", (const char *)0x8000FFFFLL);
  return 2147549183LL;
}

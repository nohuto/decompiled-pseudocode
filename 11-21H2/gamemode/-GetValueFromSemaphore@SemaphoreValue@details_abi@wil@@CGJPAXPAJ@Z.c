/*
 * XREFs of ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CGJPAXPAJ@Z @ 0x100035BC
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z @ 0x100036DA (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CGJPB_W_NPA_KPA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x100033B5 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YGJPAXIPBD@Z @ 0x100033D4 (-Return_GetLastError@in1diag3@details@wil@@YGJPAXIPBD@Z.c)
 */

int __fastcall wil::details_abi::SemaphoreValue::GetValueFromSemaphore(void *a1, int *a2)
{
  DWORD v4; // eax
  wil::details::in1diag3 *v5; // ecx
  DWORD v7; // eax
  void *v8; // [esp+0h] [ebp-14h]
  const char *v9; // [esp+4h] [ebp-10h]
  const char *v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+Ch] [ebp-8h] BYREF
  int PreviousCount; // [esp+10h] [ebp-4h] BYREF
  int retaddr; // [esp+18h] [ebp+4h]

  v4 = WaitForSingleObject(a1, 0);
  if ( v4 == -1 )
    return wil::details::in1diag3::Return_GetLastError(retaddr, v5, v8, (unsigned int)v9, v10);
  if ( v4 && v4 != 258 )
    goto LABEL_17;
  PreviousCount = 0;
  if ( !v4 )
  {
    if ( ReleaseSemaphore(a1, 1, &PreviousCount) )
    {
      ++PreviousCount;
      if ( ReleaseSemaphore(a1, 1, 0) || GetLastError() != 298 )
        goto LABEL_17;
LABEL_16:
      *a2 = PreviousCount;
      return 0;
    }
    return wil::details::in1diag3::Return_GetLastError(retaddr, v5, v8, (unsigned int)v9, v10);
  }
  v11 = 0;
  if ( !ReleaseSemaphore(a1, 1, &v11) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, v5, v8, (unsigned int)v9, v10);
  if ( v11 || ReleaseSemaphore(a1, 1, 0) || GetLastError() != 298 )
    goto LABEL_17;
  v7 = WaitForSingleObject(a1, 0);
  if ( v7 == -1 )
    return wil::details::in1diag3::Return_GetLastError(retaddr, v5, v8, (unsigned int)v9, v10);
  if ( !v7 )
    goto LABEL_16;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (wil::details::in1diag3 *)"wil",
    (void *)0x8000FFFF,
    (unsigned int)v8,
    v9,
    (int)v10);
  return -2147418113;
}

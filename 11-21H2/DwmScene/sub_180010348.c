/*
 * XREFs of sub_180010348 @ 0x180010348
 * Callers:
 *     sub_18000EDBC @ 0x18000EDBC (sub_18000EDBC.c)
 * Callees:
 *     sub_18000D464 @ 0x18000D464 (sub_18000D464.c)
 *     sub_18000E350 @ 0x18000E350 (sub_18000E350.c)
 */

__int64 __fastcall sub_180010348(__int64 *a1, LONG a2, LONG a3, const WCHAR *a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // edi
  HANDLE Semaphore; // rbp
  DWORD LastError; // ebx
  BOOL (__fastcall *v11)(void *); // [rsp+30h] [rbp-18h] BYREF

  v7 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
  {
    if ( *a1 )
    {
      a6 = *a1;
      LastError = GetLastError();
      v11 = sub_18000DD30;
      sub_18000D464((__int64 (__fastcall **)(_QWORD))&v11, &a6);
      SetLastError(LastError);
    }
    *a1 = (__int64)Semaphore;
  }
  else
  {
    return (unsigned int)sub_18000E350();
  }
  return v7;
}

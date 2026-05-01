/*
 * XREFs of sub_180011890 @ 0x180011890
 * Callers:
 *     sub_18000D65C @ 0x18000D65C (sub_18000D65C.c)
 * Callees:
 *     sub_18000E2D0 @ 0x18000E2D0 (sub_18000E2D0.c)
 *     sub_180011ACC @ 0x180011ACC (sub_180011ACC.c)
 */

__int64 __fastcall sub_180011890(__int64 a1, LONG a2, LONG a3, const WCHAR *a4)
{
  unsigned int v5; // ebx
  HANDLE Semaphore; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = 0;
  Semaphore = CreateSemaphoreExW(0LL, a2, a3, a4, 0, 0x1F0003u);
  if ( Semaphore )
    sub_180011ACC(a1, Semaphore);
  else
    return (unsigned int)sub_18000E2D0(v8, v7, v9, v10);
  return v5;
}

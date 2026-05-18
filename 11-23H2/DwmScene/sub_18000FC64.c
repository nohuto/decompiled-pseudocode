/*
 * XREFs of sub_18000FC64 @ 0x18000FC64
 * Callers:
 *     sub_18000D988 @ 0x18000D988 (sub_18000D988.c)
 * Callees:
 *     sub_18000E040 @ 0x18000E040 (sub_18000E040.c)
 *     sub_18000FD54 @ 0x18000FD54 (sub_18000FD54.c)
 */

__int64 __fastcall sub_18000FC64(__int64 a1, LONG a2, LONG a3, const WCHAR *a4)
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
    sub_18000FD54(a1, Semaphore);
  else
    return (unsigned int)sub_18000E040(v8, v7, v9, v10);
  return v5;
}

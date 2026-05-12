/*
 * XREFs of sub_1C0040410 @ 0x1C0040410
 * Callers:
 *     sub_1C003AC60 @ 0x1C003AC60 (sub_1C003AC60.c)
 * Callees:
 *     sub_1C0058E18 @ 0x1C0058E18 (sub_1C0058E18.c)
 */

__int64 __fastcall sub_1C0040410(_DWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  int v9; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a1[2] )
  {
    do
    {
      v7 = &a1[16 * v6 + 16];
      KeAcquireInStackQueuedSpinLock(v7 + 5, &LockHandle);
      v8 = (_QWORD *)*v7;
      while ( v8 != v7 )
      {
        v9 = (int)v8;
        v8 = (_QWORD *)*v8;
        ++v3;
        sub_1C0058E18((_DWORD)v7, a3, *a1, v9, (__int64)sub_1C0040590);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ++v6;
    }
    while ( v6 < a1[2] );
  }
  return v3;
}

/*
 * XREFs of sub_1407A28C0 @ 0x1407A28C0
 * Callers:
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406A6C04 @ 0x1406A6C04 (sub_1406A6C04.c)
 */

__int64 __fastcall sub_1407A28C0(__int64 a1, _QWORD *a2)
{
  char v2; // al
  unsigned int LockArray_high; // r15d
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 result; // rax
  unsigned int v14; // eax
  char v15; // di
  unsigned int v16; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 44);
  if ( (v2 & 4) == 0 )
  {
    if ( (v2 & 1) != 0 )
      LockArray_high = 0;
    else
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v6 = dword_140D3CA8C;
    do
    {
      v7 = 0;
      v16 = *(_DWORD *)a1;
      v8 = LockArray_high;
      do
      {
        v9 = a1 + ((v8 + 1LL) << 6);
        if ( *(_QWORD *)(v9 + 8) )
        {
          ExAcquirePushLockExclusiveEx(a1 + ((v8 + 1LL) << 6), 0LL);
          v10 = *(_QWORD *)(v9 + 8);
          if ( v10 )
          {
            v11 = *(_QWORD *)(v10 + 8);
            *(_QWORD *)(v9 + 8) = v11;
            if ( !v11 )
              *(_QWORD *)(v9 + 16) = 0LL;
            v12 = ++*(_DWORD *)(v9 + 24);
            if ( v12 > *(_DWORD *)(v9 + 28) )
              *(_DWORD *)(v9 + 28) = v12;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(a1 + ((v8 + 1LL) << 6));
          sub_1402AFC00(a1 + ((v8 + 1LL) << 6));
          if ( v10 )
          {
            result = v10;
            *a2 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)(v10 - (v10 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            return result;
          }
        }
        v14 = v8 + 1;
        ++v7;
        v8 = 0;
        if ( v14 != v6 )
          v8 = v14;
      }
      while ( v7 < v6 );
      v15 = 1;
      ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
      if ( v16 == *(_DWORD *)a1 )
        v15 = sub_1406A6C04((unsigned int *)a1, a1 + ((LockArray_high + 1LL) << 6));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 56);
      sub_1402AFC00(a1 + 56);
    }
    while ( v15 );
  }
  return 0LL;
}

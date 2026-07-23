/*
 * XREFs of sub_1409E959C @ 0x1409E959C
 * Callers:
 *     sub_1406EDD54 @ 0x1406EDD54 (sub_1406EDD54.c)
 *     sub_1406F120C @ 0x1406F120C (sub_1406F120C.c)
 *     sub_1406F1AC4 @ 0x1406F1AC4 (sub_1406F1AC4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406F1F80 @ 0x1406F1F80 (sub_1406F1F80.c)
 */

__int64 __fastcall sub_1409E959C(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v4; // esi
  int v5; // r12d
  __int64 *v8; // rdi
  __int64 v9; // r12
  int v10; // r14d
  unsigned int v11; // ebp
  _DWORD *v12; // rax
  _DWORD *v15; // [rsp+88h] [rbp+10h]
  unsigned int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h]

  v16 = 0;
  v4 = a3 - *(_DWORD *)(a2 + 48);
  v5 = a4 & 2;
  v17 = v5;
  if ( (a4 & 2) != 0 )
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  v8 = *(__int64 **)(a1 + 1040);
  if ( v8 != (__int64 *)(a1 + 1040) )
  {
    v9 = a2;
    v10 = a4 & 4;
    do
    {
      if ( v10 )
        v11 = *((_DWORD *)v8 + 6);
      else
        v11 = *((_DWORD *)v8 + 5);
      if ( v11 )
      {
        v12 = (_DWORD *)sub_1406F1F80(v9, 67, (_QWORD *)(v9 + 88), 0LL, 16 * v11 + 4 + *((_DWORD *)v8 + 4), v4, &v16);
        if ( !v12 )
          break;
        *v12 = v11;
        v15 = v12 + 1;
        memmove(v12 + 1, (char *)&v8[2 * (*((_DWORD *)v8 + 5) - v11) + 3] + 4, 16LL * v11);
        memmove(&v15[4 * v11], (char *)&v8[2 * *((unsigned int *)v8 + 5) + 3] + 4, *((unsigned int *)v8 + 4));
        if ( v10 )
          *((_DWORD *)v8 + 6) = 0;
        v4 -= v16;
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 != (__int64 *)(a1 + 1040) );
    v5 = v17;
  }
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 688);
    sub_1402AFC00(a1 + 688);
  }
  return 0LL;
}

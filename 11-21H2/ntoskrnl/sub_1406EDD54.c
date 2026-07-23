/*
 * XREFs of sub_1406EDD54 @ 0x1406EDD54
 * Callers:
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406EDE54 @ 0x1406EDE54 (sub_1406EDE54.c)
 *     sub_1406EDEC8 @ 0x1406EDEC8 (sub_1406EDEC8.c)
 *     sub_1406F1DF8 @ 0x1406F1DF8 (sub_1406F1DF8.c)
 *     sub_140798F44 @ 0x140798F44 (sub_140798F44.c)
 *     sub_1409E959C @ 0x1409E959C (sub_1409E959C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406EDD54(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned int v3; // eax
  unsigned int v4; // r14d
  __int64 Pool2; // rax
  _DWORD *v6; // rdi
  __int64 *i; // rsi
  __int64 *j; // rax
  __int64 **v9; // rbx
  __int64 *k; // rax
  unsigned int v11; // ebx
  char v12; // al
  unsigned int v14; // r12d

  v1 = (volatile signed __int64 *)(a1 + 688);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  v3 = sub_1406EDE54(a1);
  v4 = v3;
  if ( v3 )
  {
    Pool2 = ExAllocatePool2(256LL, v3, 1651995717LL);
    v6 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      sub_1406EDEC8(a1, Pool2, v4);
      for ( i = *(__int64 **)(a1 + 328); i != (__int64 *)(a1 + 328); i = (__int64 *)*i )
      {
        v14 = (*((_BYTE *)i + 90) & 8) != 0 ? 4 : 1;
        sub_1406F1DF8(a1, (_DWORD)v6, v4, 0, v14);
        if ( *(_QWORD *)(a1 + 1040) != a1 + 1040 && (*(_DWORD *)(a1 + 816) & 0x2000000) != 0 )
          sub_1409E959C(a1, v6, v4, v14);
        *((_BYTE *)i + 90) |= 8u;
        if ( v6[12] > 0x48u )
        {
          sub_140798F44(a1, i, v6);
          v6[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 112); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v9 = (__int64 **)(a1 + 96);
      for ( k = *v9; k != (__int64 *)v9; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
      v11 = 0;
    }
    else
    {
      v11 = -1073741801;
    }
  }
  else
  {
    v6 = 0LL;
    v11 = -2147483622;
  }
  v12 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  sub_1402AFC00((ULONG_PTR)v1);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v11;
}

/*
 * XREFs of sub_1407D9124 @ 0x1407D9124
 * Callers:
 *     sub_1406ADBC8 @ 0x1406ADBC8 (sub_1406ADBC8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140988980 @ 0x140988980 (sub_140988980.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407D9124(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v5; // r13d
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rbp
  unsigned int v9; // r12d
  __int64 *v10; // r14
  int v13; // r15d
  PVOID v14; // rcx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r11d
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // r10
  __int64 v24; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v27; // [rsp+68h] [rbp+10h]
  __int64 v28; // [rsp+68h] [rbp+10h]
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  v6 = a1;
  v7 = *(_DWORD *)(a2 + 8);
  P = 0LL;
  v8 = (unsigned __int64)a4 + ((unsigned __int64)a5 << v7);
  v9 = 1 << v7;
  v10 = a4;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  }
  if ( (unsigned __int64)v10 < v8 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(2 * *(_DWORD *)(a2 + 16)) >= *(_DWORD *)(a2 + 12) )
      {
        if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a3);
        sub_1402AFC00((ULONG_PTR)a3);
        KeLeaveCriticalRegion();
        v13 = sub_140988980(v6, a2, a3, &P);
        if ( v13 < 0 )
          goto LABEL_6;
      }
      v16 = *v10;
      v17 = *(_DWORD *)(a2 + 12);
      if ( !v17 )
        break;
      v18 = *(_DWORD *)(a2 + 8);
      v19 = (unsigned int)(v17 - 1);
      v27 = *v10;
      v20 = (HIBYTE(v27)
           + 37
           * (BYTE6(v27)
            + 37
            * (BYTE5(v27)
             + 37
             * (BYTE4(v27)
              + 37 * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v16 + 11623883)))))))) & (unsigned int)v19;
      v28 = v19;
      v21 = 0LL;
      v22 = (__int64 *)(*(_QWORD *)a2 + (v20 << v18));
      if ( !*v22 )
        goto LABEL_25;
      v23 = *v22;
      do
      {
        v24 = v23;
        if ( v23 == v16 )
          break;
        if ( !v21 )
        {
          v21 = 2654435761LL * v16 + 1;
          if ( ((-79 * (_BYTE)v16) & 1) != 0 )
            v21 = 2654435761LL * v16;
        }
        v20 = v28 & (v21 + v20);
        v22 = (__int64 *)(*(_QWORD *)a2 + (v20 << v18));
        v24 = *v22;
        v23 = *v22;
      }
      while ( *v22 );
      v5 = a5;
      if ( !v24 )
        goto LABEL_25;
LABEL_16:
      v10 = (__int64 *)((char *)v10 + v9);
      if ( (unsigned __int64)v10 >= v8 )
        goto LABEL_4;
      v6 = a1;
    }
    v22 = 0LL;
LABEL_25:
    memmove(v22, v10, v9);
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_16;
  }
LABEL_4:
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a3);
    sub_1402AFC00((ULONG_PTR)a3);
    KeLeaveCriticalRegion();
  }
  v13 = 0;
LABEL_6:
  while ( 1 )
  {
    v14 = P;
    if ( !P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v13;
}

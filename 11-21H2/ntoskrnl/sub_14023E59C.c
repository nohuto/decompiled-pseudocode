/*
 * XREFs of sub_14023E59C @ 0x14023E59C
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14023E59C(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned int v2; // r13d
  struct _KTHREAD *CurrentThread; // r15
  __int64 v4; // rbx
  ULONG_PTR v5; // rsi
  unsigned int *v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned __int64 *v9; // rax
  unsigned int v10; // r13d
  char v11; // di
  struct _KTHREAD *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  char *v15; // rbx
  int v16; // edx
  unsigned __int64 v19; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = *(_QWORD *)(a1 + 48);
  v20 = *(_QWORD *)(a1 + 40);
  v1 = -1;
  if ( v20 - v19 >= 0xFFFFFFFF )
    return 3221225621LL;
  v2 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  v4 = *((_QWORD *)CurrentThread + 68);
  --*((_WORD *)CurrentThread + 243);
  v5 = v4 + 2128;
  ExAcquirePushLockExclusiveEx(v4 + 2128, 0LL);
  v6 = *(unsigned int **)(v4 + 2120);
  if ( v6 )
  {
    v7 = *v6;
    v8 = 1;
    if ( *v6 > 1 )
    {
      v9 = (unsigned __int64 *)(v6 + 12);
      while ( *v9 < v19 )
      {
        ++v8;
        v9 += 3;
        if ( v8 >= v7 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)&v6[6 * v8 + 6] == v19 && v6[6 * v8 + 8] == (_DWORD)v20 - (_DWORD)v19 )
      {
        v10 = v7 - 1;
        if ( v8 != v7 - 1 )
          memmove(&v6[6 * v8 + 4], &v6[4 * v8 + 10 + 2 * v8], 24LL * (v7 - v8 - 1));
        *v6 = v10;
        v2 = 0;
      }
    }
  }
LABEL_15:
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  v12 = KeGetCurrentThread();
  if ( v5 - qword_140C50630 < 0x8000000000LL )
    v1 = sub_140287F30(*((_QWORD *)v12 + 23));
  _disable();
  v13 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  v14 = 0;
  v15 = (char *)v12 + 1696;
  do
  {
    if ( (*(_QWORD *)v15 & 0x7FFFFFFFFFFFFFFCLL) == v13
      && v15[18]
      && (*(_DWORD *)v15 & 1) == 0
      && *((_DWORD *)v15 + 2) == v1 )
    {
      v15[18] = 0;
      goto LABEL_24;
    }
    ++v14;
    v15 += 96;
  }
  while ( v14 < 6 );
  v15 = 0LL;
LABEL_24:
  if ( v15 )
  {
    if ( *(__int64 *)v15 < 0 )
    {
      *v15 |= 2u;
      _enable();
      sub_14034EE30(v15, v13, 0x7FFFFFFFFFFFFFFCLL);
      _disable();
    }
    v16 = *((_DWORD *)v15 + 22);
    *((_DWORD *)v15 + 22) = 0;
    v15[17] = 0;
    *(_QWORD *)v15 = 0LL;
    *((_BYTE *)v12 + 792) |= 1 << v15[16];
    _enable();
    if ( v16 )
      sub_14022B568((ULONG_PTR)v12, v5, v16);
  }
  else
  {
    if ( (*((_DWORD *)v12 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v12, v5, v1, 0LL);
    _enable();
  }
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
    && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
  {
    KiCheckForKernelApcDelivery();
  }
  return v2;
}

/*
 * XREFs of sub_140285FE0 @ 0x140285FE0
 * Callers:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     sub_14026D460 @ 0x14026D460 (sub_14026D460.c)
 *     sub_140285D90 @ 0x140285D90 (sub_140285D90.c)
 *     sub_1402D9A54 @ 0x1402D9A54 (sub_1402D9A54.c)
 *     sub_1402ED750 @ 0x1402ED750 (sub_1402ED750.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_1406EB5A4 @ 0x1406EB5A4 (sub_1406EB5A4.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_14075F4A4 @ 0x14075F4A4 (sub_14075F4A4.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140285FE0(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rsi
  ULONG_PTR v8; // rbp
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KTHREAD *v16; // rsi
  struct _KTHREAD *v17; // rdi
  __int64 v18; // rdx
  char *v19; // rbx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 result; // rax
  int v23; // r9d

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --*((_WORD *)CurrentThread + 243);
  v8 = v5 + 104;
  ExAcquirePushLockExclusiveEx(v5 + 104, 0LL);
  v9 = a3 - 1;
  if ( !v9 )
  {
    v14 = a1[10];
    v15 = a1 + 10;
    if ( *(__int64 **)(v14 + 8) != a1 + 10 )
      goto LABEL_17;
    goto LABEL_11;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_6;
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
      goto LABEL_12;
    v14 = *(_QWORD *)(v5 + 8);
    v15 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v14 + 8) != v5 + 8 )
LABEL_17:
      __fastfail(3u);
LABEL_11:
    *a2 = v14;
    a2[1] = v15;
    *(_QWORD *)(v14 + 8) = a2;
    *v15 = a2;
    goto LABEL_12;
  }
  if ( v11 != 1 || (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
    goto LABEL_12;
LABEL_6:
  v12 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 )
    goto LABEL_17;
  v13 = (_QWORD *)a2[1];
  if ( (_QWORD *)*v13 != a2 )
    goto LABEL_17;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
LABEL_12:
  v16 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v17 = KeGetCurrentThread();
  if ( v8 - qword_140C50630 >= 0x8000000000LL )
    v18 = 0xFFFFFFFFLL;
  else
    v18 = (unsigned int)sub_140287F30(*((_QWORD *)v17 + 23));
  _disable();
  v19 = (char *)v17 + 1696;
  v20 = v8 & 0x7FFFFFFFFFFFFFFCLL;
  v21 = 0;
  while ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) != v20
       || !v19[18]
       || (*(_DWORD *)v19 & 1) != 0
       || *((_DWORD *)v19 + 2) != (_DWORD)v18 )
  {
    ++v21;
    v19 += 96;
    if ( v21 >= 6 )
    {
      result = *((unsigned int *)v17 + 30);
      if ( (result & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, v8, (unsigned int)v18, 0LL);
      _enable();
      goto LABEL_31;
    }
  }
  v19[18] = 0;
  if ( *(__int64 *)v19 < 0 )
  {
    *v19 |= 2u;
    _enable();
    sub_14034EE30(v19, v18, v20);
    _disable();
  }
  v23 = *((_DWORD *)v19 + 22);
  *((_DWORD *)v19 + 22) = 0;
  v19[17] = 0;
  *(_QWORD *)v19 = 0LL;
  result = (unsigned __int8)v19[16];
  *((_BYTE *)v17 + 792) |= 1 << result;
  _enable();
  if ( v23 )
    result = sub_14022B568((ULONG_PTR)v17, v8, v23);
LABEL_31:
  if ( (*((_WORD *)v16 + 243))++ == 0xFFFF )
  {
    result = (__int64)v16 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}

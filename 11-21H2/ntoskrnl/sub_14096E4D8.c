/*
 * XREFs of sub_14096E4D8 @ 0x14096E4D8
 * Callers:
 *     sub_14059A1A0 @ 0x14059A1A0 (sub_14059A1A0.c)
 *     sub_14096DF60 @ 0x14096DF60 (sub_14096DF60.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x14025D2A0 (KeExpandKernelStackAndCallout.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140599E60 @ 0x140599E60 (sub_140599E60.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     sub_14085BC40 @ 0x14085BC40 (sub_14085BC40.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14096E4D8(__int64 a1, _OWORD *a2)
{
  HANDLE v5; // r14
  void *v6; // r15
  __int64 v7; // rdi
  volatile signed __int64 *v8; // rbx
  int v9; // esi
  _QWORD *v10; // rax
  char *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r13
  ULONG_PTR v15; // rax
  __int128 v16; // xmm1
  _QWORD *v17; // rax
  __int64 *v18; // [rsp+40h] [rbp-29h] BYREF
  __int128 Parameter; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+58h] [rbp-11h]
  int v21[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp-1h]
  __int64 v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+7Ch] [rbp+13h]
  __int128 v26; // [rsp+80h] [rbp+17h]
  void *v27; // [rsp+E0h] [rbp+77h] BYREF
  ULONG_PTR v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v25 = 0;
  v21[1] = 0;
  Parameter = 0LL;
  v20 = 0LL;
  if ( sub_140599E60(a1, a2) )
    return 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( (ULONG_PTR *)a1 != &StartContext )
  {
    v7 = **(_QWORD **)(*(_QWORD *)(a1 + 176) + 56LL);
    v8 = (volatile signed __int64 *)(v7 + 16672);
    ExAcquirePushLockExclusiveEx(v7 + 16672, 0LL);
    v20 = 0LL;
    *(_QWORD *)&Parameter = v7;
    *((_QWORD *)&Parameter + 1) = a2;
    v9 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)sub_14059A1A0, &Parameter, 0x2000uLL);
    if ( v9 >= 0 )
    {
      v9 = v20;
      if ( (int)v20 >= 0 )
      {
        v10 = sub_140599E60(v7, a2);
        v9 = ObDuplicateObject(
               (ULONG_PTR)PsInitialSystemProcess,
               (void *)v10[7],
               0LL,
               (unsigned __int64 *)&v27,
               0,
               512,
               2,
               0);
        if ( v9 >= 0 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v7 + 16672);
          sub_1402AFC00(v7 + 16672);
          v5 = (HANDLE)v28;
          v6 = v27;
          goto LABEL_10;
        }
        v6 = v27;
      }
    }
    v11 = 0LL;
    if ( !v8 )
      goto LABEL_18;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    sub_1402AFC00((ULONG_PTR)v8);
    v6 = v27;
LABEL_17:
    v5 = (HANDLE)v28;
    goto LABEL_18;
  }
LABEL_10:
  v11 = (char *)sub_1402828F0(64, 0x58uLL, 0x744D694Du);
  if ( v11 )
  {
    v22 = 0LL;
    v23 = 0LL;
    v21[0] = 48;
    v24 = 512;
    v26 = 0LL;
    v9 = sub_14085BC40((ULONG_PTR)v6, (HANDLE *)&v28, 2031619, (int)v21, 0, 2);
    if ( v9 >= 0 )
    {
      v5 = (HANDLE)v28;
      v9 = sub_1407DE8D0(v28, 2031619, 0, 0x4D536D4Du, &v18);
      if ( v9 >= 0 )
      {
        v12 = *v18;
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 176), 0x72536D4Du);
        v13 = *(_QWORD *)(a1 + 176);
        v27 = 0LL;
        *(_QWORD *)(v12 + 16624) = v13;
        *(_QWORD *)(v12 + 16632) = v6;
        *(_OWORD *)(v12 + 16640) = *a2;
        *(_OWORD *)(v12 + 16656) = a2[1];
        v14 = a1 + 16624;
        *((_QWORD *)v11 + 2) = _InterlockedIncrement64(&qword_140C51858);
        v15 = v28;
        *(_OWORD *)(v11 + 24) = *a2;
        v16 = a2[1];
        *((_QWORD *)v11 + 8) = v12;
        *((_QWORD *)v11 + 7) = v15;
        *(_OWORD *)(v11 + 40) = v16;
        v17 = *(_QWORD **)(v14 + 8);
        if ( *v17 != v14 )
          __fastfail(3u);
        v6 = v27;
        v5 = 0LL;
        *(_QWORD *)v11 = v14;
        v9 = 0;
        *((_QWORD *)v11 + 1) = v17;
        *v17 = v11;
        *(_QWORD *)(v14 + 8) = v11;
        v11 = 0LL;
      }
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v9 = -1073741670;
LABEL_18:
  if ( v6 )
    ZwClose(v6);
  if ( v5 )
    ZwClose(v5);
  if ( v18 )
    sub_1403606C4((__int64)v18);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v9;
}

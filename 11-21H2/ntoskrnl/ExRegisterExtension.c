/*
 * XREFs of ExRegisterExtension @ 0x1408484A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14084881C @ 0x14084881C (sub_14084881C.c)
 *     sub_140A0282C @ 0x140A0282C (sub_140A0282C.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  PVOID v14; // rdx
  char v15; // bl
  _QWORD *v16; // rcx
  unsigned int v18; // ebx

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) && a3[2] )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v6 = sub_140347C10((__int64)&qword_140D3CCA0, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3CCA0, 17LL, 0LL) )
    sub_14029F350((signed __int64 *)&qword_140D3CCA0, 0, v6, (__int64)&qword_140D3CCA0);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = sub_14084881C(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3CCA0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140D3CCA0);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CCA0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( !v7 )
    return 3221226021LL;
  v8 = a3[2];
  if ( (unsigned __int16)v8 < *(_WORD *)(v7 + 28) )
  {
    v18 = -1073741811;
LABEL_40:
    sub_140A0282C(v7);
    return v18;
  }
  v9 = 0;
  if ( a3[2] )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v9) )
    {
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
    v18 = -1073741790;
    goto LABEL_40;
  }
LABEL_14:
  v10 = KeGetCurrentThread();
  --*((_WORD *)v10 + 242);
  v11 = (volatile signed __int64 *)(v7 + 72);
  v12 = sub_140347C10(v7 + 72, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 72), 0LL) )
    sub_14029F120((unsigned __int64 *)(v7 + 72), v12, v7 + 72);
  if ( v13 )
    *(_BYTE *)(v13 + 18) = 1;
  if ( *(_QWORD *)(v7 + 80) || (*(_BYTE *)(v7 + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7 + 72);
    sub_1402AFC00(v7 + 72);
    sub_1402F9540((__int64)KeGetCurrentThread());
    v18 = -1073741771;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(v7 + 48) )
    sub_14042A5E0(0LL, *(_QWORD *)(v7 + 56));
  v14 = (PVOID)*((_QWORD *)a3 + 1);
  if ( !v14 )
    v14 = MmBadPointer;
  *(_QWORD *)(v7 + 80) = v14;
  _InterlockedExchange64((volatile __int64 *)(v7 + 64), 0LL);
  if ( *(_QWORD *)(v7 + 48) )
    sub_14042A5E0(1LL, *(_QWORD *)(v7 + 56));
  v15 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock(v7 + 72);
  sub_1402AFC00(v7 + 72);
  sub_1402F9540((__int64)KeGetCurrentThread());
  v16 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v16 )
    *v16 = *(_QWORD *)(v7 + 40);
  *a1 = v7;
  return 0LL;
}

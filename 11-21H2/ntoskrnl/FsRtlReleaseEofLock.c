/*
 * XREFs of FsRtlReleaseEofLock @ 0x140358CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 *     FsRtlReleaseHeaderMutex @ 0x1402AE130 (FsRtlReleaseHeaderMutex.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140359548 @ 0x140359548 (sub_140359548.c)
 *     sub_1403595B4 @ 0x1403595B4 (sub_1403595B4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall FsRtlReleaseEofLock(__int64 a1, volatile signed __int32 *a2)
{
  _QWORD *v3; // r14
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int8 CurrentIrql; // bp
  bool v11; // zf
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  int v14; // eax
  ULONG_PTR v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int32 v17; // eax
  _QWORD *v18; // rbx
  _QWORD *result; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // r8
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  _QWORD *v25; // r8
  _QWORD *v26; // r8
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  _QWORD *v31; // [rsp+30h] [rbp-48h] BYREF
  _QWORD **v32; // [rsp+38h] [rbp-40h]

  v32 = &v31;
  v31 = &v31;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  _disable();
  v7 = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792)
    || (v7 = sub_14029F6A8(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward((unsigned int *)&v8, v7);
    *((_BYTE *)CurrentThread + 792) = v7 & ~(1 << v8);
    _enable();
    v5 = (__int64)CurrentThread + 96 * v8 + 1696;
    if ( (unsigned __int64)(v6 - qword_140C50630) < 0x8000000000LL )
      v9 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v9 = -1;
    *(_DWORD *)(v5 + 8) = v9;
    *(_QWORD *)v5 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v6, 0) )
    sub_14029EF4C(v6, v5);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v6 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  v11 = (*(_WORD *)(a1 + 38))-- == 1;
  if ( !v11 )
    return (_QWORD *)FsRtlReleaseHeaderMutex(a1, a2);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  if ( *(_BYTE *)(a1 + 36) )
  {
    sub_1402ACD80(*(_QWORD *)a1, 1, 0, 0LL);
    *(_BYTE *)(a1 + 36) = 0;
  }
  v13 = *(_QWORD **)(a1 + 8);
  if ( v13 == (_QWORD *)(a1 + 8) )
    goto LABEL_15;
  do
  {
    v20 = v13;
    v13 = (_QWORD *)*v13;
    v21 = v20[5];
    if ( v21 < 0 || v21 > v12 )
    {
      if ( !v3 )
      {
        v22 = (_QWORD *)v20[1];
        if ( (_QWORD *)v13[1] != v20 )
          goto LABEL_41;
        if ( (_QWORD *)*v22 != v20 )
          goto LABEL_41;
        *v22 = v13;
        v13[1] = v22;
        v23 = v31;
        if ( (_QWORD **)v31[1] != &v31 )
          goto LABEL_41;
        *v20 = v31;
        v20[1] = &v31;
        v3 = v20;
        v23[1] = v20;
        v31 = v20;
      }
    }
    else
    {
      v25 = (_QWORD *)v20[1];
      if ( (_QWORD *)v13[1] != v20 || (_QWORD *)*v25 != v20 || (*v25 = v13, v13[1] = v25, v26 = v32, *v32 != &v31) )
LABEL_41:
        __fastfail(3u);
      v20[1] = v32;
      *v20 = &v31;
      *v26 = v20;
      v32 = (_QWORD **)v20;
    }
  }
  while ( v13 != (_QWORD *)(a1 + 8) );
  if ( !v3 )
  {
LABEL_15:
    *(_QWORD *)a1 = 0LL;
    v14 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_QWORD *)a1 = v3[6];
    *(_WORD *)(a1 + 38) = 1;
    v14 = *((_DWORD *)v3 + 14);
  }
  *(_DWORD *)(a1 + 32) = v14;
  if ( a2 )
    _InterlockedIncrement(a2);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v16 = *(unsigned __int8 *)(v15 + 48);
  *(_QWORD *)(v15 + 8) = 0LL;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)v15, 1, 0);
  if ( v17 )
    sub_140359548(v15, v17);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v27 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v29 = *((_QWORD *)CurrentPrcb + 4375);
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
        v11 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
        *(_DWORD *)(v29 + 20) &= v30;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v16);
  sub_1402AFC00(v15);
  v18 = v31;
  for ( result = &v31; v18 != &v31; result = &v31 )
  {
    v24 = v18;
    v18 = (_QWORD *)*v18;
    sub_1403595B4(v24 + 2, 1, 0);
  }
  return result;
}

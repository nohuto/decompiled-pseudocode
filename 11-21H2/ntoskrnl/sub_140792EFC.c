/*
 * XREFs of sub_140792EFC @ 0x140792EFC
 * Callers:
 *     sub_140792DB0 @ 0x140792DB0 (sub_140792DB0.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407938B0 @ 0x1407938B0 (sub_1407938B0.c)
 *     sub_1407944BC @ 0x1407944BC (sub_1407944BC.c)
 */

__int64 __fastcall sub_140792EFC(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r14
  unsigned int v4; // r13d
  signed __int64 *v5; // r12
  __int64 v6; // rsi
  volatile signed __int64 *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rsi
  int *v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  _OWORD *v16; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  ULONG_PTR v22; // r14
  signed __int64 *v23; // r14
  int v24; // [rsp+34h] [rbp-94h]
  int v25; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-8Ch]
  _QWORD *v27; // [rsp+40h] [rbp-88h]
  __int64 v28; // [rsp+48h] [rbp-80h]
  int *v29; // [rsp+50h] [rbp-78h]
  _DWORD *v30; // [rsp+58h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-60h]
  ULONG_PTR v32; // [rsp+70h] [rbp-58h]
  _QWORD *v33; // [rsp+78h] [rbp-50h]
  int v36; // [rsp+E0h] [rbp+18h]
  int v37; // [rsp+E8h] [rbp+20h] BYREF

  v3 = (_QWORD *)a1;
  v25 = 0;
  v4 = -2147483622;
  v36 = -2147483622;
  v24 = 0;
  v37 = 0;
  v26 = a3 - 48;
LABEL_2:
  v5 = v3 + 10;
  v32 = (ULONG_PTR)(v3 + 10);
  v6 = sub_140347C10((__int64)(v3 + 10), 0LL);
  if ( _InterlockedCompareExchange64(v3 + 10, 17LL, 0LL) )
    sub_14029F350(v3 + 10, 0, v6, (__int64)(v3 + 10));
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v7 = v3 + 13;
  BugCheckParameter2 = (ULONG_PTR)(v3 + 13);
  v8 = sub_140347C10((__int64)(v3 + 13), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3 + 26, 0LL) )
    sub_14029F120(v3 + 13, v8, (__int64)(v3 + 13));
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = v3 + 14;
  v27 = v3 + 14;
  v11 = (_QWORD *)v3[14];
  while ( 1 )
  {
    v33 = v11;
    if ( v11 == v10 )
      break;
    v30 = v11 + 2;
    if ( *((_DWORD *)v11 + 4) != 1 )
      goto LABEL_36;
    v12 = *(v11 - 7);
    v28 = v12;
    if ( v12 )
    {
      v12 &= -(__int64)(sub_140347810((struct _EX_RUNDOWN_REF *)(v12 + 8)) != 0);
      v28 = v12;
    }
    v13 = (int *)v11 + 5;
    v29 = (int *)v11 + 5;
    v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1) & 0xFFFFFFFE;
    if ( v12 )
      v14 = *((_DWORD *)v11 + 5) & *((_DWORD *)v11 - 1);
    if ( !v14 )
      goto LABEL_40;
    v15 = a2;
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 8) = *(v11 - 6) ^ 0x41C64E6DA3BC0074LL;
    *(_QWORD *)a2 = *(v11 - 11);
    if ( (v14 & 1) != 0 )
    {
      v16 = *(_OWORD **)(v12 + 64);
      if ( v16 )
        *(_OWORD *)(a2 + 28) = *v16;
      v24 = sub_1407944BC(v12, &v37, a2 + 48, v26, &v25);
      if ( v24 < 0 )
        goto LABEL_24;
      v15 = a2;
      *(_DWORD *)(a2 + 16) = v37;
      *(_DWORD *)(a2 + 20) = v25;
    }
    *(_DWORD *)(v15 + 44) = 48;
    *(_DWORD *)(v15 + 24) = v14;
LABEL_24:
    if ( v12 )
    {
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(v12 + 8));
      v12 = 0LL;
    }
    if ( v24 < 0 )
    {
      v4 = v36;
      if ( v36 == -2147483622 )
      {
        v4 = v24;
        v36 = v24;
      }
      goto LABEL_36;
    }
    if ( !v37 )
      v14 &= ~1u;
    if ( v14 )
    {
      *((_DWORD *)v11 + 6) = v14;
      *v29 = 0;
      *v30 = 2;
      v4 = 0;
      break;
    }
    v13 = v29;
LABEL_40:
    v18 = (_QWORD *)v11[1];
    v11 = v18;
    v19 = v33;
    v20 = *v33;
    if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v18 != v33 )
      __fastfail(3u);
    *v18 = v20;
    *(_QWORD *)(v20 + 8) = v18;
    *v30 = 0;
    v21 = *v13;
    *v13 = 0;
    *((_DWORD *)v19 + 6) = 0;
    if ( v12 )
    {
      if ( (v21 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 164), 0xFFFFFFFF) == 1 )
      {
        v22 = a1 + 104;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        sub_1402AFC00(v22);
        v23 = (signed __int64 *)(a1 + 80);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v23);
        sub_1402AFC00((ULONG_PTR)v23);
        sub_1407938B0(v12, 8LL, 1LL, 1LL);
        sub_1402AD030((struct _EX_RUNDOWN_REF *)(v12 + 8));
        v4 = v36;
        v3 = (_QWORD *)a1;
        goto LABEL_2;
      }
      sub_1402AD030((struct _EX_RUNDOWN_REF *)(v12 + 8));
    }
    v4 = v36;
LABEL_36:
    v11 = (_QWORD *)*v11;
    v10 = v27;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  sub_1402AFC00((ULONG_PTR)v7);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  return v4;
}

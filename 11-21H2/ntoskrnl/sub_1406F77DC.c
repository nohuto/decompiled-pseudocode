/*
 * XREFs of sub_1406F77DC @ 0x1406F77DC
 * Callers:
 *     sub_1406F7664 @ 0x1406F7664 (sub_1406F7664.c)
 * Callees:
 *     sub_1402810B0 @ 0x1402810B0 (sub_1402810B0.c)
 *     sub_140281A3C @ 0x140281A3C (sub_140281A3C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140700460 @ 0x140700460 (sub_140700460.c)
 */

__int64 __fastcall sub_1406F77DC(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG_PTR v8; // r12
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  volatile signed __int64 *v11; // rdi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  int v19; // eax
  unsigned __int64 v20; // rsi
  int v21; // ebp
  __int64 v23; // r8
  unsigned int v24; // eax
  int v25; // [rsp+50h] [rbp-78h] BYREF
  int v26; // [rsp+54h] [rbp-74h] BYREF
  __int64 v27; // [rsp+58h] [rbp-70h]
  __int64 v28; // [rsp+60h] [rbp-68h]
  _QWORD *v29; // [rsp+68h] [rbp-60h]
  __int128 v30; // [rsp+70h] [rbp-58h] BYREF
  int v31; // [rsp+80h] [rbp-48h]

  v25 = 0;
  v3 = a1;
  v26 = 0;
  v29 = a1;
  v4 = *(__int64 **)(a3 + 72);
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v27 = v5;
  v6 = sub_140281A3C(*v4);
  v8 = v3[2];
  v9 = (unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32;
  v10 = (unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32;
  v28 = *(_QWORD *)(v6 + 8);
  v11 = (volatile signed __int64 *)(v8 + 40);
  v12 = (*(unsigned int *)(v7 + 24) | v10) << 12;
  v13 = 2 * (((((*(unsigned int *)(v7 + 28) | v9) + 1) << 12) - v12) >> 4);
  v14 = *v3 + ((2 * (v12 >> 4)) >> 3);
  v15 = v13 >> 3;
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  if ( (unsigned int)sub_14030EB80(v8) )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 40);
    sub_1402AFC00(v8 + 40);
    return 3221225738LL;
  }
  v16 = v15 + v14;
  v31 = 0;
  v17 = (v15 + v14 - 1) | 0xFFF;
  v18 = v14 & 0xFFFFFFFFFFFFF000uLL;
  v30 = 0LL;
  while ( v18 <= v17 )
  {
    v19 = sub_1402810B0(v18, v8);
    if ( v19 == 2 )
    {
      v20 = v18 | 0xFFF;
      goto LABEL_6;
    }
    if ( v19 != 1 )
    {
      if ( v19 == 3 )
      {
        v20 = v17;
        if ( (v18 | 0x1FFFFF) <= v17 )
          v20 = v18 | 0x1FFFFF;
LABEL_6:
        v21 = sub_14032D1C0(v5, v8, v18, v20, 2u, 0, &v26, (__int64)&v25);
        if ( v21 < 0 )
          goto LABEL_11;
        v18 = v20 - 4095;
        v3 = v29;
      }
      else
      {
        if ( v18 < v14 )
          v23 = (unsigned int)(v14 - v18);
        else
          v23 = 0LL;
        if ( v18 + 4096 <= v16 )
        {
          v24 = 4096 - v23;
        }
        else
        {
          v24 = v16 - v18 - v23;
          if ( (_DWORD)v16 - (_DWORD)v18 == (_DWORD)v23 )
            break;
        }
        v21 = sub_140700460(
                v3,
                v28,
                v23,
                0LL,
                v18 + (unsigned int)v23,
                v8,
                (unsigned int)(v23 + v18 - v14) >> 1 << 7,
                &v30,
                v24);
        if ( v21 < 0 )
          goto LABEL_11;
      }
      v5 = v27;
    }
    v18 += 4096LL;
  }
  v21 = 0;
LABEL_11:
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8 + 40);
  sub_1402AFC00(v8 + 40);
  return (unsigned int)v21;
}

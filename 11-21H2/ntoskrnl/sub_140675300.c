/*
 * XREFs of sub_140675300 @ 0x140675300
 * Callers:
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140675168 @ 0x140675168 (sub_140675168.c)
 *     RtlUpcaseUnicodeChar @ 0x1407CD620 (RtlUpcaseUnicodeChar.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140675300(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r14d
  int v4; // ebx
  int v5; // eax
  void *v8; // r12
  PVOID v9; // r13
  _QWORD *v10; // rdi
  struct _EX_RUNDOWN_REF *v11; // rbp
  unsigned int v12; // eax
  WCHAR *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  WCHAR *i; // rbp
  struct _KTHREAD *CurrentThread; // rax
  int v18; // r11d
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // r10d
  unsigned __int64 v22; // r9
  _QWORD *v23; // rcx
  unsigned __int64 v25; // r10
  _QWORD *j; // rdx
  _QWORD *v27; // rcx
  void *v28; // rcx
  _QWORD *P; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+28h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v31; // [rsp+30h] [rbp-68h]
  WCHAR v32; // [rsp+A0h] [rbp+8h]
  unsigned int v33; // [rsp+A8h] [rbp+10h]
  PVOID Pool2; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v30 = *(_QWORD *)(a2 + 16);
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 152);
  P = 0LL;
  Pool2 = 0LL;
  v8 = 0LL;
  v33 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (v5 & 1) == 0 )
    return 3221225600LL;
  v11 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  v31 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  if ( !sub_140347810((struct _EX_RUNDOWN_REF *)(a1 + 136)) )
    return 3221225600LL;
  if ( !v4 )
  {
    v15 = 0LL;
    goto LABEL_10;
  }
  P = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1262904912LL);
  v8 = P;
  if ( P )
  {
    v12 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
    if ( *(_DWORD *)a1 >= v12 )
    {
      v33 = 2 * (*(_DWORD *)(a1 + 4) >> 5);
      if ( !v12 )
      {
        v12 = 64;
        v33 = 64;
      }
      Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * v12, 1212573264LL);
      v9 = Pool2;
      if ( !Pool2 )
        v33 = 0;
    }
    v13 = *(WCHAR **)(a2 + 24);
    v14 = *(unsigned __int16 *)(a2 + 34);
    v15 = 314159LL;
    for ( i = &v13[v14]; v13 < i; v15 = HIBYTE(v32) + 37 * ((unsigned __int8)v32 + 37 * v15) )
      v32 = RtlUpcaseUnicodeChar(*v13++);
    if ( !v15 )
    {
      v3 = -1073741747;
      sub_1402AD030(v31);
LABEL_36:
      ExFreePoolWithTag(v8, 0);
LABEL_21:
      while ( v10 )
      {
        v28 = v10;
        v10 = (_QWORD *)*v10;
        ExFreePoolWithTag(v28, 0);
      }
      goto LABEL_22;
    }
    v4 = a3;
LABEL_10:
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
    if ( v4 )
    {
      v18 = *(_DWORD *)(a1 + 4) >> 5;
      v19 = v30 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
      if ( v18 )
      {
        v20 = *(_QWORD *)(a1 + 8)
            + 8
            * ((HIBYTE(v19)
              + 37
              * (BYTE6(v19)
               + 37
               * (BYTE5(v19)
                + 37
                * (BYTE4(v19)
                 + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & (unsigned int)(v18 - 1));
        while ( 1 )
        {
          v20 = *(_QWORD *)v20;
          if ( (v20 & 1) != 0 )
            break;
          if ( v19 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v20 + 8)) )
          {
            v8 = P;
            *(_QWORD *)(v20 + 16) = v15;
            goto LABEL_18;
          }
        }
      }
      v8 = P;
      *P = 0LL;
      P[1] = v30;
      P[2] = v15;
      if ( (unsigned int)sub_140675168(a1, &Pool2, v33) )
      {
        v21 = *(_DWORD *)(a1 + 4);
        v22 = P[1] & (-1LL << (v21 & 0x1F));
        v23 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8
                       * ((HIBYTE(v22)
                         + 37
                         * (BYTE6(v22)
                          + 37
                          * (BYTE5(v22)
                           + 37
                           * (BYTE4(v22)
                            + 37
                            * ((((_DWORD)P[1] & (unsigned int)(-1 << (v21 & 0x1F))) >> 24)
                             + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))) & ((v21 >> 5) - 1)));
        *P = *v23;
        *v23 = P;
        v8 = 0LL;
        ++*(_DWORD *)a1;
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else
    {
LABEL_25:
      if ( *(_DWORD *)a1 )
      {
        v25 = v30 & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
        for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8
                           * ((37
                             * (BYTE6(v25)
                              + 37
                              * (BYTE5(v25)
                               + 37
                               * (BYTE4(v25)
                                + 37
                                * ((((unsigned int)v30 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
                                 + 37
                                 * ((unsigned __int8)(((unsigned int)v30 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
                                  + 37
                                  * (37 * ((unsigned __int8)v25 + 11623883)
                                   + (unsigned __int8)((unsigned __int16)(v30 & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)))))))
                             + HIBYTE(v25)) & ((*(_DWORD *)(a1 + 4) >> 5) - 1))); ; j = (_QWORD *)*j )
        {
          v27 = (_QWORD *)*j;
          if ( (*j & 1) != 0 )
            break;
          if ( ((-1LL << (*(_DWORD *)(a1 + 4) & 0x1F)) & v27[1]) == v25 )
          {
            *j = *v27;
            --*(_DWORD *)a1;
            *v27 |= 0x8000000000000002uLL;
            if ( *(_QWORD **)(a1 + 16) == v27 )
              *(_QWORD *)(a1 + 16) = a1 + 24;
            *v27 = v10;
            v10 = v27;
            goto LABEL_25;
          }
        }
      }
    }
LABEL_18:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 48);
    sub_1402AFC00(a1 + 48);
    KeLeaveCriticalRegion();
    sub_1402AD030(v31);
    v9 = Pool2;
    if ( !v8 )
      goto LABEL_21;
    goto LABEL_36;
  }
  v3 = -1073741670;
  sub_1402AD030(v11);
LABEL_22:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v3;
}

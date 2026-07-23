/*
 * XREFs of sub_1409D8E00 @ 0x1409D8E00
 * Callers:
 *     sub_14062AE30 @ 0x14062AE30 (sub_14062AE30.c)
 * Callees:
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14062908C @ 0x14062908C (sub_14062908C.c)
 *     sub_14062A42C @ 0x14062A42C (sub_14062A42C.c)
 *     sub_14062A570 @ 0x14062A570 (sub_14062A570.c)
 *     sub_1409DA3EC @ 0x1409DA3EC (sub_1409DA3EC.c)
 */

__int64 __fastcall sub_1409D8E00(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v7; // rbx
  unsigned __int64 *v10; // r15
  unsigned __int64 *v11; // rsi
  int v12; // edi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 *v16; // rcx
  unsigned __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r10d
  unsigned __int64 *v21; // r14
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  int v28; // [rsp+40h] [rbp-388h]
  char *v29; // [rsp+48h] [rbp-380h]
  unsigned __int64 v30; // [rsp+50h] [rbp-378h]
  unsigned __int64 *v31; // [rsp+58h] [rbp-370h]
  volatile LONG *SpinLock; // [rsp+60h] [rbp-368h]
  char v33; // [rsp+70h] [rbp-358h] BYREF

  v7 = 0LL;
  v31 = a2;
  v10 = a2;
  v11 = a1;
  if ( (a4 & 0xFFFFFF80) != 0 )
    __int2c();
  if ( (a5 & 0xFFFFFFFD) != 0 )
    __int2c();
  SpinLock = *(volatile LONG **)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL);
  if ( SpinLock )
  {
    if ( (a4 & 0x38) == 0x20 )
      sub_1409DA3EC(a1);
    v13 = 0LL;
    v29 = &v33;
    v28 = 16;
    if ( a3 > 0x10 || v11[1] > 0x10 )
    {
      ++dword_140CF93D4;
      v7 = (__int64)ExpInterlockedPopEntrySList(&stru_140CF93C0);
      if ( !v7 )
      {
        ++dword_140CF93D8;
        v7 = sub_14042A5E0((unsigned int)dword_140CF93E4, (unsigned int)dword_140CF93EC);
      }
      if ( v7 )
      {
        *(_DWORD *)(v7 + 4) = 0;
        v29 = (char *)(v7 + 32);
        *(_QWORD *)(v7 + 16) = v7 + 24608;
        *(_QWORD *)(v7 + 24) = v7 + 24608;
        v28 = 512;
        *(_DWORD *)v7 = 512;
        *(_QWORD *)(v7 + 8) = v7 + 32;
      }
    }
    if ( qword_140C18EA0 && *(_DWORD *)qword_140C18EA0 && sub_1402A2000(qword_140C18EA0, 8LL) )
    {
      v15 = 0LL;
      v16 = v11;
      v17 = &v11[2 * a3];
      if ( v11 < v17 )
      {
        do
        {
          v15 += v16[1];
          v16 += 2;
        }
        while ( v16 < v17 );
      }
      if ( sub_1402A2000(qword_140C18EA0, v14) )
        sub_14062A42C(v18, a4, a5, a6, a3, v19, v20);
    }
    v21 = &v11[2 * a3];
    if ( v11 >= v21 )
      goto LABEL_38;
    do
    {
      v22 = *v11;
      v23 = *v10;
      v30 = v11[1] + *v11;
      if ( qword_140C18EA0 && *(_DWORD *)qword_140C18EA0 && sub_1402A2000(qword_140C18EA0, 16LL) )
        sub_14062A570(v24, v23, v22, v25, a4, a5, a6, a3);
      while ( v22 < v30 )
      {
        if ( v23 > 0x7FFFFFFEFLL )
          __int2c();
        v26 = 6 * v13;
        v13 = (unsigned int)(v13 + 1);
        *(_QWORD *)&v29[8 * v26 + 24] = v23 & 0xFFFFFFFFFFFFFLL;
        *(_QWORD *)&v29[8 * v26 + 32] = v22 & 0xFFFFFFFFFFFFFLL;
        if ( (_DWORD)v13 == v28 )
        {
          v12 = sub_14062908C(SpinLock, (unsigned __int64)v29, v13, v7, a4, a5, a6, a7);
          if ( v12 < 0 )
            goto LABEL_39;
          v13 = 0LL;
        }
        ++v22;
        ++v23;
      }
      v11 += 2;
      v10 = ++v31;
    }
    while ( v11 < v21 );
    if ( !(_DWORD)v13 || (v12 = sub_14062908C(SpinLock, (unsigned __int64)v29, v13, v7, a4, a5, a6, a7), v12 >= 0) )
LABEL_38:
      v12 = 0;
LABEL_39:
    if ( v7 )
    {
      ++dword_140CF93DC;
      if ( LOWORD(stru_140CF93C0.Alignment) < (unsigned __int16)word_140CF93D0 )
      {
        ExpInterlockedPushEntrySList(&stru_140CF93C0, (PSLIST_ENTRY)v7);
      }
      else
      {
        ++dword_140CF93E0;
        sub_14042A5E0(v7, &stru_140CF93C0);
      }
    }
  }
  else
  {
    __int2c();
    return (unsigned int)-1073741688;
  }
  return (unsigned int)v12;
}

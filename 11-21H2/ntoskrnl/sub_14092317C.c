/*
 * XREFs of sub_14092317C @ 0x14092317C
 * Callers:
 *     sub_140911544 @ 0x140911544 (sub_140911544.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C77D4 @ 0x1403C77D4 (sub_1403C77D4.c)
 *     sub_1403C78DC @ 0x1403C78DC (sub_1403C78DC.c)
 *     sub_1403C7984 @ 0x1403C7984 (sub_1403C7984.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140832C70 @ 0x140832C70 (sub_140832C70.c)
 *     sub_140832CF4 @ 0x140832CF4 (sub_140832CF4.c)
 *     sub_140833110 @ 0x140833110 (sub_140833110.c)
 *     sub_140923614 @ 0x140923614 (sub_140923614.c)
 *     sub_1409BF948 @ 0x1409BF948 (sub_1409BF948.c)
 *     sub_1409BFC00 @ 0x1409BFC00 (sub_1409BFC00.c)
 */

__int64 __fastcall sub_14092317C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // r14
  int v13; // edi
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR *v18; // rbx
  __int64 v20; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v21; // [rsp+38h] [rbp-A1h] BYREF
  PVOID Object; // [rsp+40h] [rbp-99h]
  __int64 v23; // [rsp+48h] [rbp-91h]
  __int64 v24; // [rsp+50h] [rbp-89h] BYREF
  LARGE_INTEGER v25; // [rsp+58h] [rbp-81h] BYREF
  __int64 v26; // [rsp+60h] [rbp-79h]
  __int64 v27; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v28[10]; // [rsp+70h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C0h] [rbp-19h] BYREF
  __int64 *v30; // [rsp+E0h] [rbp+7h]
  int v31; // [rsp+E8h] [rbp+Fh]
  int v32; // [rsp+ECh] [rbp+13h]

  v3 = a3;
  v24 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  v23 = 0LL;
  memset(v28, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49450, 0LL);
  sub_1403C7984((__int64)qword_140C494B0, (__int64)&v24, &v20);
  v7 = v20;
  v8 = v24 + 1;
  v25.QuadPart = 0LL;
  if ( v24 == -1 )
    v8 = 1LL;
  v26 = v3;
  v9 = *(_QWORD *)(v20 + 56);
  v10 = v8;
  v21 = v8;
  v28[6] = v8;
  v11 = sub_1409BF948(v9, v6, a2, (unsigned int)v3, 0LL, &v25);
  v12 = 3LL;
  v13 = v11;
  if ( v11 < 0 )
  {
    if ( v11 != -2147483643
      || (v13 = sub_140832CF4(v25, v8, (void *)qword_140C49440[0], &v21), v13 < 0)
      || (v13 = sub_140832C70(&v21, &v28[6]), v13 < 0)
      || (v13 = sub_1409BF948(*(_QWORD *)(v7 + 56), v14, a2, v26, v28[7], &v28[8]), v13 < 0) )
    {
LABEL_13:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&stru_140C49450);
      sub_1402AFC00((ULONG_PTR)&stru_140C49450);
      if ( v20 )
        sub_1403C78DC((__int64)qword_140C494B0, v20);
      goto LABEL_23;
    }
    if ( (int)sub_1409BFC00(v28[7], v28[8]) < 0 )
    {
      if ( (unsigned int)dword_140C063C0 > 5 && sub_1402A2000((__int64)&dword_140C063C0, 0x400000000001LL) )
      {
        v32 = 0;
        v30 = &v27;
        v27 = 0x1000000LL;
        v31 = 8;
        sub_14020A9C4((__int64)&dword_140C063C0, (unsigned __int8 *)&word_14002A16E, 0LL, 0LL, 3u, &v29);
      }
      v13 = -1073741595;
      goto LABEL_13;
    }
    v10 = v21;
  }
  sub_1403C78DC((__int64)qword_140C494B0, v7);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49448, 0LL);
  v15 = (void *)qword_140C494A0;
  qword_140C494A0 = (__int64)Object;
  Object = v15;
  qword_140C494A8 = v23;
  qword_140C49498 = v10;
  sub_140833110(qword_140C494B0, v8, (__int64)v28);
  sub_1403C77D4((__int64)&qword_140C49458, v8);
  sub_1403C77D4(0xFFFFF78000000720uLL, v16);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49448);
  sub_1402AFC00((ULONG_PTR)&stru_140C49448);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49450);
  sub_1402AFC00((ULONG_PTR)&stru_140C49450);
  sub_140923614(v17, v8);
  v13 = 0;
LABEL_23:
  v18 = &v28[1];
  do
  {
    if ( *v18 )
      sub_14026D048(*v18, 1);
    v18 += 3;
    --v12;
  }
  while ( v12 );
  if ( Object )
    ObfDereferenceObject(Object);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}

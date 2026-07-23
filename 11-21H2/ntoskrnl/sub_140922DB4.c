/*
 * XREFs of sub_140922DB4 @ 0x140922DB4
 * Callers:
 *     sub_1409113B4 @ 0x1409113B4 (sub_1409113B4.c)
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
 *     sub_1409BF744 @ 0x1409BF744 (sub_1409BF744.c)
 *     sub_1409BFB48 @ 0x1409BFB48 (sub_1409BFB48.c)
 */

__int64 __fastcall sub_140922DB4(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r12
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // rsi
  PVOID v16; // r15
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  PVOID v21; // rax
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG_PTR *v25; // rbx
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-C8h]
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  _DWORD v31[2]; // [rsp+58h] [rbp-A8h]
  _DWORD v32[2]; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v38[10]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]

  v33 = 0LL;
  v27 = 0LL;
  v5 = a3;
  v35 = a4;
  v30 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset(v38, 0, 0x48uLL);
  v32[0] = 0;
  v31[0] = 0;
  v32[1] = 1;
  v7 = (unsigned int)v32[v5];
  v31[1] = 1;
  v28 = v31[v5];
  v8 = 3 * v7;
  CurrentThread = KeGetCurrentThread();
  v36 = v8;
  v10 = &v38[v8];
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49450, 0LL);
  sub_1403C7984((__int64)qword_140C494B0, (__int64)&v33, &v27);
  v12 = 3LL;
  if ( a2 && v33 != a2 )
  {
    v13 = -1073741823;
LABEL_4:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&stru_140C49450);
    sub_1402AFC00((ULONG_PTR)&stru_140C49450);
    if ( v27 )
      sub_1403C78DC((__int64)qword_140C494B0, v27);
    goto LABEL_26;
  }
  v14 = v35;
  v15 = v33 + 1;
  if ( v33 == -1 )
    v15 = 1LL;
  v34.QuadPart = 0LL;
  v16 = (PVOID)v15;
  v17 = *(_QWORD *)(v27 + 8 * v8 + 8);
  Object[0] = (PVOID)v15;
  *v10 = v15;
  v18 = sub_1409BF744(v17, v11, v14, a5, 0LL, &v34);
  v13 = v18;
  if ( v18 < 0 )
  {
    if ( v18 != -2147483643 )
      goto LABEL_4;
    v13 = sub_140832CF4(v34, v15, (void *)qword_140C49440[0], Object);
    if ( v13 < 0 )
      goto LABEL_4;
    v13 = sub_140832C70(Object, v10);
    if ( v13 < 0 )
      goto LABEL_4;
    v13 = sub_1409BF744(*(_QWORD *)(v27 + 8 * v36 + 8), v19, v35, a5, v10[1], v10 + 2);
    if ( v13 < 0 )
      goto LABEL_4;
    if ( (int)sub_1409BFB48(v10[1], v10[2]) < 0 )
    {
      if ( (unsigned int)dword_140C063C0 > 5 && sub_1402A2000((__int64)&dword_140C063C0, 0x400000000001LL) )
      {
        v42 = 0;
        v40 = &v37;
        v37 = 0x1000000LL;
        v41 = 8;
        sub_14020A9C4((__int64)&dword_140C063C0, (unsigned __int8 *)byte_14002A1B5, 0LL, 0LL, 3u, &v39);
      }
      v13 = -1073741595;
      goto LABEL_4;
    }
    v16 = Object[0];
  }
  sub_1403C78DC((__int64)qword_140C494B0, v27);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49448, 0LL);
  v20 = 3LL * v28;
  v21 = Object[1];
  qword_140C49440[v20 + 5] = (__int64)v16;
  v22 = (void *)qword_140C49440[v20 + 6];
  qword_140C49440[v20 + 6] = (__int64)v21;
  qword_140C49440[v20 + 7] = v30;
  Object[1] = v22;
  sub_140833110(qword_140C494B0, v15, (__int64)v38);
  sub_1403C77D4((__int64)&qword_140C49458, v15);
  sub_1403C77D4(0xFFFFF78000000720uLL, v23);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49448);
  sub_1402AFC00((ULONG_PTR)&stru_140C49448);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49450);
  sub_1402AFC00((ULONG_PTR)&stru_140C49450);
  sub_140923614(v24, v15);
  v13 = 0;
LABEL_26:
  v25 = &v38[1];
  do
  {
    if ( *v25 )
      sub_14026D048(*v25, 1);
    v25 += 3;
    --v12;
  }
  while ( v12 );
  if ( Object[1] )
    ObfDereferenceObject(Object[1]);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}

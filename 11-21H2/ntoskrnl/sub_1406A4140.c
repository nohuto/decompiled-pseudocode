/*
 * XREFs of sub_1406A4140 @ 0x1406A4140
 * Callers:
 *     sub_1406A3E60 @ 0x1406A3E60 (sub_1406A3E60.c)
 *     MmCommitSessionMappedView @ 0x1406A3F90 (MmCommitSessionMappedView.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140700A40 @ 0x140700A40 (sub_140700A40.c)
 * Callees:
 *     sub_14022CF58 @ 0x14022CF58 (sub_14022CF58.c)
 *     sub_14026E548 @ 0x14026E548 (sub_14026E548.c)
 *     sub_14026EC38 @ 0x14026EC38 (sub_14026EC38.c)
 *     sub_14027D890 @ 0x14027D890 (sub_14027D890.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405C4980 @ 0x1405C4980 (sub_1405C4980.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 *     sub_1406A43A4 @ 0x1406A43A4 (sub_1406A43A4.c)
 */

__int64 __fastcall sub_1406A4140(__int64 *a1, __int64 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rsi
  __int64 v12; // r9
  volatile signed __int64 *v13; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  bool v22; // zf
  __int64 v24; // rdx
  __int64 *v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int *v30; // [rsp+20h] [rbp-78h]
  _QWORD *v31; // [rsp+28h] [rbp-70h]
  _QWORD *v33; // [rsp+38h] [rbp-60h]
  struct _KTHREAD *v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+A0h] [rbp+8h]
  int v36; // [rsp+A8h] [rbp+10h]
  __int64 v37; // [rsp+B0h] [rbp+18h]
  __int64 v38; // [rsp+B8h] [rbp+20h]

  v35 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  v33 = (_QWORD *)*a1;
  v38 = *(_QWORD *)*a1;
  v6 = sub_14030EC14(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v37 = v6;
  v9 = a2;
  v31 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --*((_WORD *)CurrentThread + 243);
  v30 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  v36 = sub_14022CF58(v35);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    v20 = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      v20 = sub_14027D890((unsigned __int64)v9, *v9);
      v16 = v35;
    }
    v21 = v15 + 1;
    if ( v20 )
      v21 = v15;
    ++v17;
    ++v9;
    v15 = v21;
    if ( v17 == a3 )
      break;
    if ( v9 == v11 )
    {
      v16 = *(_QWORD *)(v16 + 16);
      v35 = v16;
      v9 = *(__int64 **)(v16 + 8);
      v11 = &v9[*(unsigned int *)(v16 + 44)];
    }
  }
  if ( !v21 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    sub_1402AFC00((ULONG_PTR)v13);
    v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( !v22 || *((struct _KTHREAD **)CurrentThread + 19) == (struct _KTHREAD *)((char *)CurrentThread + 152) )
      return 1LL;
    goto LABEL_29;
  }
  if ( !(unsigned int)sub_14032A4B0(v37, v21, 0) )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    sub_1402AFC00((ULONG_PTR)v13);
    v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( !v22 || *((struct _KTHREAD **)CurrentThread + 19) == (struct _KTHREAD *)((char *)CurrentThread + 152) )
      return 0LL;
    goto LABEL_40;
  }
  if ( !v36 || (int)sub_1405C4980(v35, v15) >= 0 )
  {
    v25 = a1;
    v26 = sub_14026E548((*(_BYTE *)(v38 + 14) >> 1) & 0x1F, v24);
    v27 = *v31 + 8LL * *v30;
    while ( 1 )
    {
      if ( !sub_140317A10((unsigned __int64)a2) )
        *a2 = v26;
      ++v14;
      ++a2;
      if ( v14 == a3 )
        break;
      if ( a2 == (__int64 *)v27 )
      {
        v25 = (__int64 *)v25[2];
        a2 = (__int64 *)v25[1];
        v27 = (__int64)&a2[*((unsigned int *)v25 + 11)];
      }
    }
    sub_1406A43A4(v33, v15);
    v29 = sub_14026EC38((__int64)v33, v28);
    if ( v36 && !v29 )
      sub_1405C4B8C(v37, 0, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    sub_1402AFC00((ULONG_PTR)v13);
    v22 = (*((_WORD *)v34 + 243))++ == 0xFFFF;
    if ( !v22 || *((struct _KTHREAD **)v34 + 19) == (struct _KTHREAD *)((char *)v34 + 152) )
      return 1LL;
LABEL_29:
    KiCheckForKernelApcDelivery();
    return 1LL;
  }
  sub_14028CE10(v37, v15);
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  sub_1402AFC00((ULONG_PTR)v13);
  v22 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v22 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
LABEL_40:
    KiCheckForKernelApcDelivery();
  return 0LL;
}

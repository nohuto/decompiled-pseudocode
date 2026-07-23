/*
 * XREFs of sub_14058D310 @ 0x14058D310
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_140232694 @ 0x140232694 (sub_140232694.c)
 *     sub_14026EC38 @ 0x14026EC38 (sub_14026EC38.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_140287C30 @ 0x140287C30 (sub_140287C30.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406B85C8 @ 0x1406B85C8 (sub_1406B85C8.c)
 *     sub_1406F3884 @ 0x1406F3884 (sub_1406F3884.c)
 *     sub_1406F39F8 @ 0x1406F39F8 (sub_1406F39F8.c)
 *     sub_1406F48DC @ 0x1406F48DC (sub_1406F48DC.c)
 */

__int64 __fastcall sub_14058D310(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v9; // eax
  int v10; // esi
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // r14
  unsigned __int64 v22; // r12
  ULONG_PTR v23; // r14
  struct _KTHREAD *v24; // rsi
  unsigned int v25; // ecx
  unsigned int v26; // edx
  __int64 v27; // rbx
  int v28; // edx
  bool v29; // zf
  unsigned __int8 v30; // [rsp+30h] [rbp-128h]
  __int64 v31; // [rsp+38h] [rbp-120h]
  unsigned __int64 v33; // [rsp+50h] [rbp-108h]
  __int64 v34; // [rsp+58h] [rbp-100h]
  int v35; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v37; // [rsp+70h] [rbp-E8h]
  __int64 v38; // [rsp+78h] [rbp-E0h]
  _QWORD v39[5]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v41; // [rsp+B0h] [rbp-A8h]
  __int64 v42; // [rsp+B8h] [rbp-A0h]
  __int64 v43; // [rsp+C0h] [rbp-98h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-90h]
  unsigned __int64 v45; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD v46[10]; // [rsp+E0h] [rbp-78h] BYREF

  v45 = 0LL;
  memset(v46, 0, sizeof(v46));
  v4 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v43 = v4;
  v39[4] = v4;
  v38 = *(_QWORD *)a1;
  v39[2] = v38;
  v5 = *(unsigned int *)(v38 + 8);
  v39[3] = v5;
  if ( !(unsigned int)sub_14032A4B0(v4, (unsigned int)v5, 0) )
    return 3221225773LL;
  v7 = *(_QWORD *)(a1 + 136);
  v37 = v7;
  v40 = v7;
  v44 = v7 + 8 * v5;
  CurrentThread = KeGetCurrentThread();
  v39[1] = CurrentThread;
  v9 = sub_1402E670C((__int64)CurrentThread);
  if ( v9 > 5 )
    v9 = 5;
  sub_1406B85C8(a1, 0, 0, v9, 0, a2);
  v10 = sub_1406F3884(a1, 3LL, v46);
  if ( v10 >= 0 )
  {
    v31 = v46[3];
    v34 = v46[0];
    v11 = ((v46[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v42 = v46[0];
    v12 = 0LL;
    v36 = 0LL;
    while ( 1 )
    {
      v41 = v11;
      if ( v7 >= v44 )
        break;
      v39[0] = sub_140317A10(v7);
      if ( v39[0] )
      {
        while ( 1 )
        {
          v30 = sub_1402CF4F0(v31);
          v13 = sub_14027D6E0(v31, v11, &v45);
          v33 = v13;
          if ( v13 == ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && (*(_BYTE *)v11 & 1) != 0 )
            break;
          sub_14020D8D0(v31, v13);
          sub_1402B0CE0(v31, v30);
        }
        v36 = ++v12;
        v39[0] = sub_140317A10(v11);
        v16 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)v39) >> 12) & 0xFFFFFFFFFFLL);
        if ( *(__int64 *)(v16 - 0x220000000000LL + 40) < 0 )
        {
          v17 = 0LL;
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 - 0x220000000000LL + 24), 0x3FuLL) )
          {
            do
              sub_1402F32E0(&v35, v14, v15, 0xFFFFDE0000000000uLL);
            while ( *(__int64 *)(v16 - 0x220000000000LL + 24) < 0 );
          }
          v18 = *(_BYTE *)(v16 - 0x220000000000LL + 34);
          if ( (((*(_QWORD *)(v16 - 0x21FFFFFFFFF0LL) & 0x400LL) == 0) & (unsigned __int8)~(v18 >> 3)) != 0 )
          {
            v17 = sub_140232694((unsigned __int64 *)(v16 - 0x21FFFFFFFFF0LL), 1, 0);
            v18 = *(_BYTE *)(v16 - 0x220000000000LL + 34);
          }
          *(_BYTE *)(v16 - 0x220000000000LL + 34) = v18 | 0x10;
          _InterlockedAnd64((volatile signed __int64 *)(v16 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v17 )
            sub_1402E20D0(
              *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v16 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
              v17,
              1);
          v7 = v37;
        }
        sub_14020D8D0(v31, v33);
        sub_1402B0CE0(v31, v30);
      }
      v7 += 8LL;
      v37 = v7;
      v40 = v7;
      v11 += 8LL;
      v34 += 4096LL;
      v42 = v34;
    }
    v19 = v43;
    sub_1406F39F8(v46);
    v20 = sub_140287C30((_QWORD *)a1);
    v21 = v20 - v12 + v5;
    if ( v21 )
      sub_14028CE10(v19, v21);
    v22 = v12 - v20;
    if ( v22 )
    {
      --*((_WORD *)CurrentThread + 243);
      v23 = v38 + 40;
      ExAcquirePushLockExclusiveEx(v38 + 40, 0LL);
      sub_14026EC38(a1, v22);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23);
      v24 = KeGetCurrentThread();
      if ( v23 - qword_140C50630 >= 0x8000000000LL )
        v25 = -1;
      else
        v25 = sub_140287F30(*((_QWORD *)v24 + 23));
      _disable();
      v26 = 0;
      v27 = (__int64)v24 + 1696;
      while ( (*(_QWORD *)v27 & 0x7FFFFFFFFFFFFFFCLL) != (v23 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v27 + 18)
           || (*(_DWORD *)v27 & 1) != 0
           || *(_DWORD *)(v27 + 8) != v25 )
      {
        ++v26;
        v27 += 96LL;
        if ( v26 >= 6 )
        {
          v27 = 0LL;
          goto LABEL_40;
        }
      }
      *(_BYTE *)(v27 + 18) = 0;
LABEL_40:
      if ( v27 )
      {
        if ( *(__int64 *)v27 < 0 )
        {
          *(_BYTE *)v27 |= 2u;
          _enable();
          sub_14034EE30(v27);
          _disable();
        }
        v28 = *(_DWORD *)(v27 + 88);
        *(_DWORD *)(v27 + 88) = 0;
        *(_BYTE *)(v27 + 17) = 0;
        *(_QWORD *)v27 = 0LL;
        *((_BYTE *)v24 + 792) |= 1 << *(_BYTE *)(v27 + 16);
        _enable();
        if ( v28 )
          sub_14022B568((ULONG_PTR)v24, v23, v28);
      }
      else
      {
        if ( (*((_DWORD *)v24 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, v25, 0LL);
        _enable();
      }
      v29 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v29 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
    }
    sub_1406F48DC(a1);
    return 0LL;
  }
  else
  {
    sub_14028CE10(v4, v5);
    return (unsigned int)v10;
  }
}

/*
 * XREFs of sub_140979A34 @ 0x140979A34
 * Callers:
 *     sub_140979918 @ 0x140979918 (sub_140979918.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140313CA0 @ 0x140313CA0 (sub_140313CA0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14056D710 @ 0x14056D710 (sub_14056D710.c)
 *     sub_14058DE04 @ 0x14058DE04 (sub_14058DE04.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 *     sub_1405A95FC @ 0x1405A95FC (sub_1405A95FC.c)
 *     sub_1405A9E34 @ 0x1405A9E34 (sub_1405A9E34.c)
 *     sub_1409614F8 @ 0x1409614F8 (sub_1409614F8.c)
 */

__int64 __fastcall sub_140979A34(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  int v13; // ebx
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  int v20; // r13d
  int v21; // eax
  __int64 v22; // r11
  unsigned int v23; // ecx
  __int16 v24; // ax
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  int v28; // [rsp+20h] [rbp-58h]
  int v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+84h] [rbp+Ch]
  __int64 v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  v8 = *((_QWORD *)CurrentThread + 23);
  v9 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
  v11 = sub_14058DE04(v8 + 1664);
  if ( !sub_140347810(&stru_140C53428) )
    return 3221225738LL;
  if ( !a3 || (v13 = sub_1405A9E34(a2, v11, (a3 >> 12) + ((a3 & 0xFFF) != 0)), v13 >= 0) )
  {
    v14 = sub_14056D710((__int64)KeGetCurrentThread());
    v15 = sub_1405A828C(v11, v14, 0, 1LL);
    v16 = v15;
    if ( !v15 )
    {
      v13 = -1073741801;
      goto LABEL_32;
    }
    sub_140313CA0(v15, 0LL, 0);
    v17 = *(_QWORD *)(a2 + 80);
    v18 = 0xAAAAAAAAAAAAAAABuLL * ((v16 + 0x220000000000LL) >> 4);
    sub_1405A95FC(v18, v17, 4);
    v19 = sub_1402CBD10(v17, v18, -1610612732);
    v20 = 0;
    if ( sub_140317A80(v17) )
    {
      v21 = sub_140229550();
      v22 = 1LL;
      if ( v21 )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C51864) )
          goto LABEL_10;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
LABEL_10:
        if ( (v19 & 1) != 0 )
          v19 |= 0x8000000000000000uLL;
      }
    }
    else
    {
      v22 = 1LL;
    }
    *(_QWORD *)v17 = v19;
    if ( v20 )
      sub_1402294F0(v17, v19);
    v23 = ((unsigned int)v22 & *(_DWORD *)(a2 + 72)) << 8;
    if ( !*(_QWORD *)(v8 + 1408) || (v24 = *(_WORD *)(v8 + 2412), v24 != 332) && v24 != 452 )
      LOWORD(v23) = v22 | v23;
    v13 = sub_1409614F8((__int64)(v17 << 25) >> 16, v9, v22 + v10 - v9, v31, v28, v23, &v29, a5);
    if ( v13 >= 0 )
    {
      if ( (v29 & 2) != 0 )
        *(_DWORD *)(a2 + 64) |= 4u;
      *(_QWORD *)(a2 + 112) = v8;
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53420, 0LL);
      v25 = (_QWORD *)qword_140C53418;
      v26 = (_QWORD *)(a2 + 120);
      if ( *(__int64 **)qword_140C53418 != &qword_140C53410 )
        __fastfail(3u);
      *v26 = &qword_140C53410;
      v26[1] = v25;
      *v25 = v26;
      qword_140C53418 = (__int64)v26;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C53420);
      sub_1402AFC00((ULONG_PTR)&qword_140C53420);
      if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
        && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      {
        KiCheckForKernelApcDelivery();
      }
      v13 = 0;
    }
  }
LABEL_32:
  sub_1402AD030(&stru_140C53428);
  return (unsigned int)v13;
}

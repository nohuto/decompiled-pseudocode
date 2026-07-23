/*
 * XREFs of sub_14082A644 @ 0x14082A644
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     sub_140A5A148 @ 0x140A5A148 (sub_140A5A148.c)
 * Callees:
 *     sub_140258680 @ 0x140258680 (sub_140258680.c)
 *     sub_14026DFF0 @ 0x14026DFF0 (sub_14026DFF0.c)
 *     sub_14026E158 @ 0x14026E158 (sub_14026E158.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     sub_14027D03C @ 0x14027D03C (sub_14027D03C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C25CC @ 0x1403C25CC (sub_1403C25CC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14082A864 @ 0x14082A864 (sub_14082A864.c)
 */

__int64 __fastcall sub_14082A644(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD **v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 *v13; // rdx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v16; // rdi
  struct _KPROCESS *v17; // r15
  char v18; // si
  bool v19; // zf
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[46]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v23[3]; // [rsp+1B0h] [rbp+B0h] BYREF
  char v24; // [rsp+1E0h] [rbp+E0h] BYREF

  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  memset(v22, 0, 0x168uLL);
  v4 = a2 + a1 - 1;
  sub_14026E1F4(v22);
  LODWORD(v22[15]) = 12;
  v22[12] = &StartContext;
  LODWORD(v22[16]) = 1;
  sub_14026E158(a1, 0LL, (__int64)&v22[42], v5);
  v6 = sub_1403C25CC(a1, v4);
  if ( (int)sub_14027D03C((__int64)v22, v6, 0, &v21) < 0 )
    return 0LL;
  v7 = v21;
  if ( v21 )
  {
    do
    {
      v8 = sub_140258680(v7);
      if ( *v9 != &v22[9] )
        __fastfail(3u);
      v10[1] = v9;
      *v10 = &v22[9];
      *v9 = v10;
      ++v22[11];
      v22[10] = v10;
      v7 = v8;
    }
    while ( v8 );
  }
  do
  {
    a1 = sub_140313C70(a1);
    v11 = sub_140313C70(v4);
    *v13 = v11;
    v4 = v11;
    *(v13 - 1) = a1;
  }
  while ( v14 != 1 );
  CurrentThread = KeGetCurrentThread();
  v16 = PsInitialSystemProcess;
  v17 = (struct _KPROCESS *)*((_QWORD *)CurrentThread + 23);
  if ( v17 != PsInitialSystemProcess )
    sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v23, v12);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
  sub_14082A864(a1, v4, (unsigned int)&v24, 3, (__int64)v22);
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C50628);
  sub_1402AFC00((ULONG_PTR)&qword_140C50628);
  v19 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v19 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v17 != v16 )
    sub_1402D0930((__int64)v23, 0LL);
  sub_14026DFF0((__int64)v22);
  return 1LL;
}

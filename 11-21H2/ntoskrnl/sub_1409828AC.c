/*
 * XREFs of sub_1409828AC @ 0x1409828AC
 * Callers:
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409828AC(__int64 a1, unsigned int *a2, char a3)
{
  void *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  SIZE_T v8; // r15
  PVOID v9; // rax
  _QWORD *v10; // r13
  _QWORD *v11; // r12
  _QWORD *v12; // r14
  unsigned int v13; // r15d
  signed __int64 *v14; // rcx
  bool v15; // zf
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  PVOID v20; // [rsp+98h] [rbp+20h]

  v5 = 0LL;
  v20 = 0LL;
  if ( a2[1] || (v7 = *a2, (_DWORD)v7 != (unsigned __int16)word_140D05000) )
  {
    v6 = -1073741811;
    goto LABEL_23;
  }
  v8 = 72 * v7;
  v18 = 72 * v7;
  if ( a3 )
  {
    v9 = sub_1402828F0(64, 72 * v7, 0x694E694Du);
    v5 = v9;
    v20 = v9;
    if ( !v9 )
    {
      v6 = -1073741670;
      goto LABEL_23;
    }
    v10 = v9;
    LODWORD(v7) = *a2;
  }
  else
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
  }
  CurrentThread = KeGetCurrentThread();
  v11 = *(_QWORD **)(*(_QWORD *)a1 + 16LL);
  if ( (_DWORD)v7 )
  {
    v12 = v10 + 7;
    v13 = 0;
    do
    {
      memset(v12 - 7, 0, 0x48uLL);
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v11 + 2850), 0LL);
      *(v12 - 7) = v11[2826];
      *(v12 - 5) = v11[2820];
      *(v12 - 6) = v11[2821];
      *(v12 - 3) = v11[268];
      *(v12 - 4) = v11[269];
      *(v12 - 1) = v11[134];
      *(v12 - 2) = v11[135];
      v12[1] = *v11;
      *v12 = v11[1];
      v14 = v11 + 2850;
      if ( _InterlockedCompareExchange64(v11 + 2850, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared(v14);
        v14 = v11 + 2850;
      }
      sub_1402AFC00((ULONG_PTR)v14);
      v15 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v15 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
      if ( (unsigned __int64)(*(v12 - 5)
                            + ((*v12 + v12[1]) << 18)
                            + *(v12 - 6)
                            + 16 * (*(v12 - 3) + *(v12 - 4) + 32LL * (*(v12 - 1) + *(v12 - 2)))) <= *(v12 - 7) )
      {
        ++v13;
        v11 += 3064;
        v12 += 9;
      }
    }
    while ( v13 < *a2 );
    v5 = v20;
    v8 = v18;
  }
  if ( a3 )
  {
    ProbeForWrite(*((volatile void **)a2 + 1), v8, 8u);
    memmove(*((void **)a2 + 1), v10, v8);
  }
  v6 = 0;
LABEL_23:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}

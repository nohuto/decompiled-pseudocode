/*
 * XREFs of sub_1407DECE0 @ 0x1407DECE0
 * Callers:
 *     sub_1407DE98C @ 0x1407DE98C (sub_1407DE98C.c)
 *     sub_14082BB8C @ 0x14082BB8C (sub_14082BB8C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14036071C @ 0x14036071C (sub_14036071C.c)
 *     sub_1403608C0 @ 0x1403608C0 (sub_1403608C0.c)
 *     sub_140360A00 @ 0x140360A00 (sub_140360A00.c)
 */

char __fastcall sub_1407DECE0(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v5; // ebp
  __int64 v9; // r15
  unsigned int v10; // edx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  bool v13; // zf
  unsigned int v15; // ecx
  unsigned __int8 *v16; // r8
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v9 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  *a4 = 40LL * (unsigned int)dword_140D05004;
  sub_140360A00(a1, (__int64)CurrentThread);
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx(v9 + 22800, 0LL);
  v10 = dword_140D05004;
  if ( dword_140D05004 )
  {
    v11 = a3 + 4;
    do
    {
      *(_DWORD *)(v11 - 4) = v5;
      if ( (*(_DWORD *)(v9 + 22784) & 1) != 0 )
      {
        v15 = 0;
        if ( v10 )
        {
          v16 = (unsigned __int8 *)(v9 + 22817);
          while ( *v16 != v5 )
          {
            ++v15;
            ++v16;
            if ( v15 >= v10 )
              goto LABEL_5;
          }
          *(_DWORD *)v11 = v15;
        }
      }
      else
      {
        *(_DWORD *)v11 = -1;
      }
LABEL_5:
      *(_QWORD *)(v11 + 4) = *(_QWORD *)(v9 + 8LL * v5 + 22576);
      sub_1403608C0(a1, a2, v5, &v17, &v18, &v19);
      *(_QWORD *)(v11 + 12) = v17;
      *(_QWORD *)(v11 + 20) = v18;
      v12 = v19;
      *(_QWORD *)(v11 + 28) = v19;
      if ( v12 == -1LL )
        *(_QWORD *)(v11 + 28) = -1LL;
      v10 = dword_140D05004;
      ++v5;
      v11 += 40LL;
    }
    while ( v5 < dword_140D05004 );
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 22800), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v9 + 22800));
  sub_1402AFC00(v9 + 22800);
  v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return sub_14036071C(a1, (__int64)CurrentThread);
}

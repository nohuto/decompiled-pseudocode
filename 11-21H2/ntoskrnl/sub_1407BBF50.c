/*
 * XREFs of sub_1407BBF50 @ 0x1407BBF50
 * Callers:
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 * Callees:
 *     sub_14027D890 @ 0x14027D890 (sub_14027D890.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1407BBF50(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // r15d
  __int64 v9; // rdi
  signed __int64 *v10; // rdi
  __int64 v11; // r11
  __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v5 = (__int64 *)sub_140319600(a1, a2 >> 12, 2, &v17);
  if ( !v5 )
    return 0LL;
  v6 = sub_140319600(a1, a3 >> 12, 2, &v18);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --*((_WORD *)CurrentThread + 243);
  v10 = (signed __int64 *)(v9 + 40);
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  v11 = v18;
  v12 = v17;
  while ( 1 )
  {
    if ( v12 == v11 )
      v13 = v6;
    else
      v13 = *(_QWORD *)(v12 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 44) - 1);
    if ( (unsigned __int64)v5 <= v13 )
    {
      while ( 1 )
      {
        v14 = *v5;
        if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
          v14 = sub_14027D890((unsigned __int64)v5, *v5);
        if ( !v14 )
          break;
        if ( (unsigned __int64)++v5 > v13 )
          goto LABEL_12;
      }
      v8 = 0;
    }
LABEL_12:
    if ( v12 == v11 )
      break;
    v12 = *(_QWORD *)(v12 + 16);
    v17 = v12;
    v5 = *(__int64 **)(v12 + 8);
    if ( !v5 )
    {
      v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  sub_1402AFC00((ULONG_PTR)v10);
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
    && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}

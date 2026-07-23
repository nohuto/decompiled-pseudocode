/*
 * XREFs of sub_1407B67A0 @ 0x1407B67A0
 * Callers:
 *     sub_1406CD9E0 @ 0x1406CD9E0 (sub_1406CD9E0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068A6EC @ 0x14068A6EC (sub_14068A6EC.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 */

LONG_PTR __fastcall sub_1407B67A0(char a1)
{
  LONG_PTR result; // rax
  LONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // r14
  _DWORD Buffer[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9[8]; // [rsp+50h] [rbp-78h] BYREF

  memset(v9, 0, sizeof(v9));
  _InterlockedIncrement(&dword_140D3B110);
  if ( !a1 && qword_140D3B140 )
  {
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&stru_140037860, Buffer, 4u, 0LL, 0LL, 0, 0);
    ObfDereferenceObjectWithTag(qword_140D3B140, 0x624A7350u);
    qword_140D3B140 = 0LL;
  }
  result = (LONG_PTR)sub_14068A6EC(0LL);
  v3 = result;
  if ( result )
  {
    do
    {
      if ( !*(_QWORD *)(v3 + 1264) && (!a1 || (*(_DWORD *)(v3 + 1512) & 0x100000) != 0) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v3 + 1512), 0xFFEFFFFF);
        memset(v9, 0, sizeof(v9));
        sub_1406FF880((_QWORD *)v3, (int)sub_140685680, (int)sub_1406FFA80, (int)sub_140700200, (__int64)v9, 6);
      }
      CurrentThread = KeGetCurrentThread();
      v5 = 0LL;
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3B148, 0LL);
      v6 = *(__int64 **)(v3 + 24);
      if ( v6 != &qword_140D3B2F0 )
      {
        while ( !ObReferenceObjectSafeWithTag((__int64)(v6 - 3)) )
        {
          v6 = (__int64 *)*v6;
          if ( v6 == &qword_140D3B2F0 )
            goto LABEL_9;
        }
        v5 = v6 - 3;
      }
LABEL_9:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3B148, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140D3B148);
      sub_1402AFC00((ULONG_PTR)&qword_140D3B148);
      if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
        && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      {
        KiCheckForKernelApcDelivery();
      }
      result = ObfDereferenceObjectWithTag((PVOID)v3, 0x6E457350u);
      v3 = (LONG_PTR)v5;
    }
    while ( v5 );
  }
  return result;
}

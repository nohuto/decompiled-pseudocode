/*
 * XREFs of sub_140980DD8 @ 0x140980DD8
 * Callers:
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_1405A44FC @ 0x1405A44FC (sub_1405A44FC.c)
 *     sub_1407B88C0 @ 0x1407B88C0 (sub_1407B88C0.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 */

__int64 __fastcall sub_140980DD8(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // rbp
  const signed __int32 *v8; // rsi
  signed __int32 v9; // eax
  void *v10; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // rcx
  bool v13; // zf
  bool v14; // cf
  _OWORD v16[3]; // [rsp+20h] [rbp-68h] BYREF

  v6 = 0;
  memset(v16, 0, sizeof(v16));
  sub_14030D5C0(a1, 0LL, (__int64)v16, a4);
  v7 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v8 = (const signed __int32 *)(a2 + 48);
      if ( !_bittest((const signed __int32 *)(a2 + 48), 0x15u) )
      {
        v6 = sub_14058C330(a2, 1);
        if ( v6 < 0 )
          break;
      }
      v6 = sub_1405A44FC(a2);
      if ( v6 < 0 )
      {
        v14 = _bittest(v8, 0x15u);
LABEL_20:
        if ( !v14 )
          sub_14058C330(a2, 0);
        break;
      }
      v6 = sub_1407B88C0(a2, a1);
      v9 = *v8;
      if ( v6 < 0 )
      {
        v14 = (v9 & 0x200000) != 0;
        goto LABEL_20;
      }
      a2 = *(_QWORD *)a2;
      if ( (v9 & 0x200000) == 0 )
      {
        v10 = *(void **)(v7 + 128);
        if ( v10 )
        {
          ObfReferenceObject(v10);
          v9 = *v8;
        }
      }
      if ( (v9 & 0x200000) == 0 && *(__int64 *)(v7 + 120) < 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 243);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F110, 0LL);
        v12 = *(_QWORD *)(***(_QWORD ***)(v7 + 72) + 32LL);
        ++*(_DWORD *)(v12 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140C4F110);
        sub_1402AFC00((ULONG_PTR)&qword_140C4F110);
        v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
        if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
          KiCheckForKernelApcDelivery();
      }
      *(_QWORD *)(v7 + 16) = -2LL;
      sub_14030E390(v7, a1, 0);
      v7 = a2;
      if ( !a2 )
        goto LABEL_23;
    }
    sub_140980B94((_QWORD *)a2);
  }
LABEL_23:
  sub_1402D0930((__int64)v16, 0LL);
  return (unsigned int)v6;
}

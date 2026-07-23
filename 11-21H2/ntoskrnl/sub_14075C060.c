/*
 * XREFs of sub_14075C060 @ 0x14075C060
 * Callers:
 *     sub_1407614BC @ 0x1407614BC (sub_1407614BC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14029C6C4 @ 0x14029C6C4 (sub_14029C6C4.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D7FF8 @ 0x1402D7FF8 (sub_1402D7FF8.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_14075C060(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  v11 = 0;
  v6 = *(_QWORD *)(v4 + 32);
  v8 = (unsigned __int64)sub_1404192C0 & -(__int64)sub_14029C6C4();
  result = sub_1402D7FF8(*(char **)(v7 + 48), *(_QWORD *)(v7 + 48), *(unsigned int *)(a1 + 64), v8, 0LL, &v11);
  if ( (int)result >= 0 )
    goto LABEL_5;
  if ( (_DWORD)result == -1073741789 )
  {
    v3 = sub_1402828F0(256, v11, 0x69526D4Du);
    if ( !v3 )
      return 3221225495LL;
    result = sub_1402D7FF8(*(char **)(a1 + 48), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v8, v3, &v11);
    if ( (int)result >= 0 )
    {
LABEL_5:
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx(v6 + 24, 0LL);
      *(_QWORD *)(*(_QWORD *)(v6 + 88) + 16LL) = v3;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6 + 24);
      sub_1402AFC00(v6 + 24);
      if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
        && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      {
        KiCheckForKernelApcDelivery();
      }
      return 0LL;
    }
  }
  return result;
}

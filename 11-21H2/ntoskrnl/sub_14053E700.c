/*
 * XREFs of sub_14053E700 @ 0x14053E700
 * Callers:
 *     <none>
 * Callees:
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1403C4AE0 @ 0x1403C4AE0 (sub_1403C4AE0.c)
 */

char __fastcall sub_14053E700(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // r14
  _QWORD *v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  bool v11; // cc
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = *(unsigned int *)(a1 + 36);
  v4 = *(_QWORD **)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = v4[29] + 16 * v2;
  if ( *(_DWORD *)(a1 + 32) == 3 )
  {
    v8 = v4[35] + 404 * v2;
    *(_DWORD *)(v8 + 4LL * *(unsigned int *)(a1 + 40)) = 0;
    sub_1403C4AE0((_DWORD *)a1);
    *(_DWORD *)(v8 + 4LL * *(unsigned int *)(a1 + 40)) = -1;
    ExAcquirePushLockExclusiveEx(v5 + 1160, 0LL);
    v9 = *(_QWORD **)(v7 + 8);
    if ( *v9 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v9;
    *v9 = a1;
    *(_QWORD *)(v7 + 8) = a1;
    --*(_DWORD *)(v4[30] + 4 * v2);
    ExReleasePushLockEx(v5 + 1160, 0LL);
    LOBYTE(v1) = sub_140276728(v5);
    if ( v6 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v11 = v10 <= 1;
      v1 = (_UNKNOWN **)(v10 - 1);
      if ( v11 )
      {
        if ( v1 )
          __fastfail(0xEu);
        LOBYTE(v1) = KeSetEvent((PRKEVENT)(v6 + 1200), 0, 0);
      }
    }
  }
  return (char)v1;
}

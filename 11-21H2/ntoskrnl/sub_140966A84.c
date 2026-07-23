/*
 * XREFs of sub_140966A84 @ 0x140966A84
 * Callers:
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7850 @ 0x1407A7850 (sub_1407A7850.c)
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AACC0 @ 0x1407AACC0 (sub_1407AACC0.c)
 *     sub_1407AC930 @ 0x1407AC930 (sub_1407AC930.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 *     sub_1407B0A20 @ 0x1407B0A20 (sub_1407B0A20.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_140966840 @ 0x140966840 (sub_140966840.c)
 *     sub_140966C34 @ 0x140966C34 (sub_140966C34.c)
 */

__int64 __fastcall sub_140966A84(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A110, 0LL);
  v2 = sub_140966C34(*(unsigned int *)(a1 + 264));
  v3 = v2;
  if ( v2 )
  {
    v4 = (_QWORD *)(v2 + 48);
    if ( (_QWORD *)*v4 == v4
      || (v5 = *(_QWORD *)(v2 + 56)) == 0
      || *(_DWORD *)(v5 + 16) != *(_DWORD *)(a1 + 40)
      || *(_QWORD *)(v5 + 24) != *(_QWORD *)(a1 + 24)
      || *(_QWORD *)(v5 + 32) != *(_QWORD *)(a1 + 16)
      || *(_QWORD *)(v5 + 48) != *(_QWORD *)(a1 + 32)
      || *(_QWORD *)(v5 + 40) != *(_QWORD *)(a1 + 64)
      || *(_QWORD *)(v5 + 56) != *(_QWORD *)(a1 + 104)
      || *(_QWORD *)(v5 + 64) != *(_QWORD *)(a1 + 112)
      || memcmp((const void *)(v5 + 80), (const void *)(a1 + 240), 0x28uLL) )
    {
      v6 = sub_140966840();
      v7 = v6;
      if ( !*(_DWORD *)(v3 + 44) )
      {
        v8 = (__int64 *)qword_140C2A148;
        if ( *(__int64 **)qword_140C2A148 == &qword_140C2A140 )
        {
          *(_QWORD *)v7 = &qword_140C2A140;
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
          qword_140C2A148 = v7;
          goto LABEL_18;
        }
LABEL_16:
        __fastfail(3u);
      }
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(a1 + 40);
      *(_QWORD *)(v6 + 24) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(v6 + 32) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v6 + 40) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(v6 + 48) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(a1 + 104);
      v9 = *(_QWORD *)(a1 + 112);
      *(_DWORD *)(v7 + 20) = 0;
      *(_QWORD *)(v7 + 64) = v9;
      *(_QWORD *)(v7 + 72) = retaddr;
      *(_OWORD *)(v7 + 80) = *(_OWORD *)(a1 + 240);
      *(_OWORD *)(v7 + 96) = *(_OWORD *)(a1 + 256);
      *(_QWORD *)(v7 + 112) = *(_QWORD *)(a1 + 272);
      v10 = (__int64 *)v4[1];
      if ( (_QWORD *)*v10 != v4 )
        goto LABEL_16;
      *(_QWORD *)v7 = v4;
      *(_QWORD *)(v7 + 8) = v10;
      *v10 = v7;
      v4[1] = v7;
    }
  }
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A110);
  return sub_1402AFC00((ULONG_PTR)&qword_140C2A110);
}

/*
 * XREFs of sub_1409B41CC @ 0x1409B41CC
 * Callers:
 *     sub_140A6A73C @ 0x140A6A73C (sub_140A6A73C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140882604 @ 0x140882604 (sub_140882604.c)
 */

void __fastcall sub_1409B41CC(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v4; // rdi
  __int64 v5; // r11
  _QWORD *i; // r8
  __int64 v7; // [rsp+38h] [rbp+10h]

  if ( !*((_BYTE *)a2 + 76) )
  {
    v4 = (volatile signed __int64 *)(a1 + 2264);
    ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
    v5 = *(_QWORD *)(a1 + 2248);
    v7 = a2[1] & (-1LL << (*(_DWORD *)(v5 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(v5 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v7)
                          + 37
                          * (BYTE5(v7)
                           + 37
                           * (BYTE4(v7)
                            + 37
                            * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                         + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(v5 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == a2 )
      {
        *i = *a2;
        --*(_DWORD *)v5;
        *a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    sub_1402AFC00((ULONG_PTR)v4);
  }
  sub_140882604(a2);
}

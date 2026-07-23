/*
 * XREFs of sub_1403D5614 @ 0x1403D5614
 * Callers:
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140274C80 @ 0x140274C80 (sub_140274C80.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 */

__int64 __fastcall sub_1403D5614(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v6; // r13d
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 v11; // bl
  __int64 v12; // r9
  unsigned __int64 v14; // [rsp+70h] [rbp+8h]

  v6 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v14 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = a1 + 1664;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *((_BYTE *)CurrentThread + 1384) |= 0x80u;
  sub_14030E390(a2, a1, 0);
  v11 = sub_1402CF4F0(v10);
  if ( v7 > v14 )
    goto LABEL_8;
  do
  {
    if ( !v9 )
      goto LABEL_9;
    if ( (v7 & 0xFFF) == 0 )
    {
      sub_14020D8D0(v10, v9);
LABEL_9:
      LOBYTE(v12) = v11;
      sub_14032CE60(v7, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v12, 0);
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    sub_140213558((__int64 *)v7, a3, v6);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0 && (sub_1403531F0(v10) || (unsigned int)sub_140274C80(v10, v9) || KeShouldYieldProcessor()) )
    {
      sub_14020D8D0(v10, v9);
      sub_1402B0CE0(v10, v11);
      v9 = 0LL;
      sub_1402CF4F0(v10);
    }
    ++a3;
  }
  while ( v7 <= v14 );
  if ( v9 )
    sub_14020D8D0(v10, v9);
LABEL_8:
  sub_1402B0CE0(v10, v11);
  return sub_140281C44((__int64)CurrentThread, a2);
}

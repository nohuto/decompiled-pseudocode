/*
 * XREFs of sub_140B0A680 @ 0x140B0A680
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140262490 @ 0x140262490 (sub_140262490.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140B0A680(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 *v12; // r14
  char v13; // di
  int v14; // r15d
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r9
  int v22; // eax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h]
  unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v23[0] = 0xFFFFF78000000000uLL;
  v2 = 1LL;
  v3 = (unsigned __int64)sub_140262490(a1, a2);
  v23[1] = v3;
  if ( v3 )
  {
    v24 = sub_140317A10(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v24 & 1) != 0 )
    {
      v4 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v24) >> 12) & 0xFFFFFFFFFFLL;
      if ( v4 <= qword_140C50840 && (*(_QWORD *)(48 * v4 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
      {
        v2 = 2LL;
        v5 = sub_140363220(1) & 0xF;
        v6 = 15LL;
        if ( v5 )
          v6 = v5;
        qword_140C50678 = (v6 + 524256) << 12;
      }
    }
  }
  result = (__int64)sub_1402828F0(274, 8 * v2, 0x74536D4Du);
  v8 = result;
  if ( result )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = ((v23[v9] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = ((unsigned __int64)sub_140317A10(v10) >> 12) & 0xFFFFFFFFFFLL;
      v24 = sub_1402CBD10(v10, v11, 536870913);
      v12 = (__int64 *)(v8 + 8 * v9);
      v13 = v24;
      v14 = 0;
      v15 = v24;
      if ( sub_140317A80((unsigned __int64)v12) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v14 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v18 = (v13 & 1) == 0;
            goto LABEL_22;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v18 = (v13 & 1) == 0;
LABEL_22:
          if ( !v18 )
            v15 |= 0x8000000000000000uLL;
        }
      }
      *v12 = v15;
      if ( v14 )
        sub_1402294F0(v8 + 8 * v9, v15);
      qword_140C50668[v9] = (__int64)v12;
      v16 = 48 * v11 - 0x220000000000LL;
      v17 = (unsigned __int8)sub_1402F2700(v16);
      *(_QWORD *)(v16 + 16) = sub_1402CCC50(128LL);
      *(_QWORD *)(v16 + 40) |= 0x8000000000000000uLL;
      *(_QWORD *)(v16 + 8) = v12;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
            v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v18 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v17);
      if ( ++v9 >= v2 )
        return 1LL;
    }
  }
  return result;
}

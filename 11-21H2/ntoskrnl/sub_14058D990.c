/*
 * XREFs of sub_14058D990 @ 0x14058D990
 * Callers:
 *     sub_1406F3A44 @ 0x1406F3A44 (sub_1406F3A44.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_1402393AC @ 0x1402393AC (sub_1402393AC.c)
 *     sub_1402C6AA0 @ 0x1402C6AA0 (sub_1402C6AA0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14058D990(__int64 a1, unsigned __int64 a2, int a3)
{
  char v3; // bl
  unsigned __int64 v4; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // r14
  _QWORD *v14; // rbp
  int v15; // r12d
  unsigned __int64 v16; // rbx
  bool v17; // zf
  unsigned __int64 v18; // r12
  __int64 v19; // rdx
  char v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+10h]
  unsigned __int64 v25; // [rsp+98h] [rbp+20h]

  v24 = a2;
  v3 = a3;
  v4 = a2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v7 = sub_1402CBD10(0LL, v6, a3 | 0x80000000);
  v8 = sub_1402CCC50(32LL * (v3 & 0x1F));
  v9 = sub_140235E10(a1);
  v10 = -1LL;
  v25 = v4 + 8 * qword_14001C780[v9];
  v11 = v25;
  result = sub_1402C6AA0(a1, v9, 0, 1, 0LL, 0LL, 0LL);
  v13 = v4;
  if ( v4 < v11 )
  {
    v14 = (_QWORD *)(a1 + 40);
    do
    {
      if ( v10 == -1LL || (v13 & 0xFFF) == 0 )
      {
        v23 = sub_140317A10(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
      }
      v15 = 0;
      v7 ^= (v7 ^ (v6 << 12)) & 0xFFFFFFFFFF000LL;
      v16 = v7;
      if ( !sub_140317A80(v13) )
        goto LABEL_14;
      if ( (unsigned int)sub_140229550() )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v17 = (v7 & 1) == 0;
          goto LABEL_12;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v17 = (v7 & 1) == 0;
LABEL_12:
        if ( !v17 )
          v16 = v7 | 0x8000000000000000uLL;
      }
LABEL_14:
      *(_QWORD *)v13 = v16;
      if ( v15 )
        sub_1402294F0(v13, v16);
      v18 = (unsigned __int8)sub_1402F2700((__int64)(v14 - 5));
      sub_14033C33C((__int64)(v14 - 5), 0, 1);
      sub_1402393AC((__int64)(v14 - 5), 0);
      v19 = *(v14 - 2);
      *(v14 - 5) = 0LL;
      *(v14 - 3) = v8;
      *(v14 - 2) = v19 & 0xC000000000000000uLL | 1;
      *((_WORD *)v14 - 4) = 2;
      *v14 |= 0x8000000000000000uLL;
      sub_14033C3E0((__int64)(v14 - 5), v10);
      v20 = *((_BYTE *)v14 - 6) & 0xFE;
      *(v14 - 4) = v13;
      *((_BYTE *)v14 - 6) = v20 | 6;
      _InterlockedAnd64(v14 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = *((_QWORD *)CurrentPrcb + 4375);
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
            v17 = ((unsigned int)result & *(_DWORD *)(v22 + 20)) == 0;
            *(_DWORD *)(v22 + 20) &= result;
            if ( v17 )
              result = sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v18);
      v4 = v24;
      ++v6;
      v14 += 6;
      v13 += 8LL;
    }
    while ( v13 < v25 );
  }
  return result;
}

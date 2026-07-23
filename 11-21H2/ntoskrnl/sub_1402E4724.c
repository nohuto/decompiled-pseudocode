/*
 * XREFs of sub_1402E4724 @ 0x1402E4724
 * Callers:
 *     sub_140243208 @ 0x140243208 (sub_140243208.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402E5708 @ 0x1402E5708 (sub_1402E5708.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_14033C3E0 @ 0x14033C3E0 (sub_14033C3E0.c)
 *     sub_14033D7D0 @ 0x14033D7D0 (sub_14033D7D0.c)
 */

__int64 __fastcall sub_1402E4724(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  char v10; // al
  char v11; // al
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rbx
  int v15; // esi
  __int64 v16; // rbx
  __int64 result; // rax
  bool v18; // zf

  v6 = 48 * a1 - 0x220000000000LL;
  v7 = sub_14033AC10(a2);
  *(_QWORD *)v6 = 0LL;
  v8 = v7;
  v9 = sub_140317A10(a2);
  if ( (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
    v9 = *(_QWORD *)(48 * a3 - 0x21FFFFFFFFF0LL);
  *(_QWORD *)(v6 + 16) = v9;
  *(_QWORD *)(v6 + 40) |= 0x8000000000000000uLL;
  sub_14033C3E0(v6, v8);
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  v10 = *(_BYTE *)(v6 + 34);
  if ( (v10 & 0x10) != 0 )
    v11 = v10 & 0xF8 | 3;
  else
    v11 = v10 & 0xF8 | 2;
  *(_BYTE *)(v6 + 34) = v11;
  v12 = ((unsigned __int64)sub_140317A10(a2) >> 5) & 0x1F;
  v13 = sub_14033D7D0(v12);
  sub_1402E5708(v6, v13, 1LL);
  *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
  if ( a3 == -1 )
  {
    v14 = sub_1402E4D28(a1, (unsigned int)v12);
    v15 = 0;
    if ( !(unsigned int)sub_140317A80(a2) )
      goto LABEL_6;
    if ( (unsigned int)sub_140229550() )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v18 = (v14 & 1) == 0;
        goto LABEL_17;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      v18 = (v14 & 1) == 0;
LABEL_17:
      if ( !v18 )
        v14 |= 0x8000000000000000uLL;
    }
LABEL_6:
    *a2 = v14;
    if ( v15 )
      sub_1402294F0((__int64)a2, v14);
  }
  v16 = 48 * v8 - 0x220000000000LL;
  sub_140239060(v16);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

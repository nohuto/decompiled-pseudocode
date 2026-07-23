/*
 * XREFs of sub_140339240 @ 0x140339240
 * Callers:
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232E74 @ 0x140232E74 (sub_140232E74.c)
 *     sub_140234EB4 @ 0x140234EB4 (sub_140234EB4.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140337EA0 @ 0x140337EA0 (sub_140337EA0.c)
 *     sub_140337F60 @ 0x140337F60 (sub_140337F60.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_140595FBC @ 0x140595FBC (sub_140595FBC.c)
 */

void __fastcall sub_140339240(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  char v5; // al
  _DWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rax

  v2 = *a1;
  if ( !(unsigned int)sub_140337EA0(a2) || (unsigned int)sub_140337F60(a2, 3) )
    ++*(_WORD *)(a2 + 32);
  v5 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ (*(_QWORD *)(a2 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(a2 + 34) = v5 & 0xF8 | 6;
  sub_140336AD8(a2);
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
  {
    v10 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
    if ( (unsigned int)sub_140232E74(v10, *(_QWORD *)(a2 + 16)) )
    {
      v11 = sub_14033C2A0(a2);
      if ( v11 )
        sub_1402E20D0(v10, v11, 0);
    }
  }
  if ( *(__int64 *)(a2 + 40) < 0 )
  {
    v6 = *(_DWORD **)(v2 + 232);
    if ( ((*v6 >> 5) & 0x1F) == 0x18 )
      sub_140595FBC(v6, a2);
    v7 = sub_140234EB4((__int64)v6);
    v8 = v7;
    if ( sub_140317A80((unsigned __int64)v6) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v7 & 1) != 0 )
          v8 = v7 | 0x8000000000000000uLL;
        *(_QWORD *)v6 = v8;
        sub_1402294F0((__int64)v6, v8);
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v7 & 1) != 0 )
        v8 = v7 | 0x8000000000000000uLL;
    }
    *(_QWORD *)v6 = v8;
LABEL_9:
    v9 = (__int64 *)a1[6];
    if ( v9 )
      *v9 = v7;
  }
}

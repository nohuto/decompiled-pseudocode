/*
 * XREFs of sub_14033A5B0 @ 0x14033A5B0
 * Callers:
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 * Callees:
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 */

void __fastcall sub_14033A5B0(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a1;
  if ( sub_140317A80(a1)
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8 * ((a1 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        v2 |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        v2 |= 0x42uLL;
    }
  }
  v15 = v2;
  v5 = sub_140317A10((unsigned __int64)&v15);
  v15 = v2 & 0xFFFFFFFFFFFFFFBDuLL;
  v6 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  sub_14033DBC0(a1, v2 & 0xFFFFFFFFFFFFFFBDuLL);
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v14, v7, v8, v9);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  v10 = sub_14033C2A0(v6);
  if ( v10 )
  {
    v13 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v6 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    sub_1402E20D0(v13, v10, 1);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x600000) == 0x600000 )
      sub_1402358D4(*((_QWORD *)KeGetCurrentThread() + 23), (__int64)(a1 << 25) >> 16, a2);
  }
}

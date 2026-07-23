/*
 * XREFs of sub_140276C78 @ 0x140276C78
 * Callers:
 *     sub_140276D2C @ 0x140276D2C (sub_140276D2C.c)
 * Callees:
 *     sub_140231A68 @ 0x140231A68 (sub_140231A68.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_14028C9B4 @ 0x14028C9B4 (sub_14028C9B4.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403365F0 @ 0x1403365F0 (sub_1403365F0.c)
 *     sub_140338500 @ 0x140338500 (sub_140338500.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_140591E04 @ 0x140591E04 (sub_140591E04.c)
 *     sub_140595E34 @ 0x140595E34 (sub_140595E34.c)
 */

__int64 __fastcall sub_140276C78(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v3; // ebp
  __int64 v7; // rbx
  int v8; // ecx
  __int64 result; // rax
  __int64 i; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a1 + 24);
  v7 = 48 * a3 - 0x220000000000LL;
  if ( v3 == 3 )
    goto LABEL_2;
  for ( i = *a1; i; i = *a1 )
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      goto LABEL_7;
    sub_140338660(a1, 0LL);
  }
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v16);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
LABEL_7:
  if ( !v3 )
  {
    v12 = sub_140591E04(a2, v7);
LABEL_26:
    v8 = v12;
    if ( v12 )
      goto LABEL_3;
LABEL_27:
    if ( v3 == 1 )
      sub_14028C9B4(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)), 1LL, 1LL);
    goto LABEL_35;
  }
  if ( v3 == 2 )
  {
    v12 = sub_140595E34(a2, v7);
    goto LABEL_26;
  }
  *(_BYTE *)(v7 + 34) &= ~8u;
  if ( (*(_BYTE *)a2 & 0x42) != 0 )
    *(_BYTE *)(v7 + 34) |= 0x10u;
  if ( (*(_WORD *)(v7 + 32))-- != 1 )
    goto LABEL_27;
  if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 || (*(_BYTE *)(v7 + 35) & 0x50) != 0 )
  {
    v8 = 2;
    goto LABEL_3;
  }
LABEL_2:
  v8 = 1;
LABEL_3:
  if ( !*a1 )
    *((_DWORD *)a1 + 2) = (*(_BYTE *)(v7 + 34) & 0x10 | 0x20u) >> 4;
  if ( v8 == 1 )
    return sub_1403365F0(a1, a3);
  sub_140338660(a1, 1LL);
  if ( v3 )
  {
    if ( v3 == 2 )
    {
      sub_140231A68(a2, v7);
    }
    else
    {
      sub_14028C9B4(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)), 1LL, 1LL);
      sub_140338500(v7, a3);
    }
  }
  else
  {
    sub_140273FD0(v7, v13, v14, v15);
  }
LABEL_35:
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

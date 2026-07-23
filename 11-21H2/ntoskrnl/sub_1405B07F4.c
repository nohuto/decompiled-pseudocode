/*
 * XREFs of sub_1405B07F4 @ 0x1405B07F4
 * Callers:
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140232154 @ 0x140232154 (sub_140232154.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402D03D0 @ 0x1402D03D0 (sub_1402D03D0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403C2C58 @ 0x1403C2C58 (sub_1403C2C58.c)
 *     sub_1405AA614 @ 0x1405AA614 (sub_1405AA614.c)
 */

void __fastcall sub_1405B07F4(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v7; // r15d
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 i; // rcx
  BOOL v18; // r15d
  ULONG_PTR v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // [rsp+20h] [rbp-48h]
  __int16 v24; // [rsp+70h] [rbp+8h]
  int v25; // [rsp+80h] [rbp+18h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v23 = v3;
  v7 = *(_DWORD *)(v3 + 104);
  v24 = v7;
  v26 = sub_140317A10(a2);
  v9 = v26;
  v10 = v26 & 1;
  if ( (v26 & 1) != 0 )
  {
    v9 = sub_140317A10((unsigned __int64)&v26);
  }
  else if ( qword_140C50780 )
  {
    if ( (v26 & 0x10) != 0 )
      v9 = v26 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v9 = ~qword_140C50780 & v26;
  }
  v11 = (v9 >> 12) & 0xFFFFFFFFFFLL;
  v12 = (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v13 = v7 & 0x10;
  v25 = v13;
  if ( v13 )
  {
    sub_1405AA614(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 40LL), a2, (__int64 *)(v3 + 112));
    goto LABEL_22;
  }
  if ( !a3 )
  {
    for ( i = 0LL; i < v12; ++i )
      *(_QWORD *)(a2 + 8 * i) = 0LL;
LABEL_21:
    v19 = sub_1402D03D0((__int64)(a2 << 25) >> 16);
    sub_140232154(v19, (unsigned int)v12);
    goto LABEL_22;
  }
  if ( v10 )
  {
    sub_1403C2C58(*(_QWORD *)(a1 + 24), (volatile __int64 *)a2, 0LL, v8);
  }
  else
  {
    v18 = 0;
    if ( sub_140317A80(a2) )
      v18 = sub_140229550() != 0;
    *(_QWORD *)a2 = 0LL;
    if ( v18 )
      sub_1402294F0(a2, 0LL);
    v13 = v25;
  }
  if ( a3 != 3 )
    goto LABEL_21;
LABEL_22:
  v20 = 48 * v11 - 0x220000000000LL;
  if ( v10 )
  {
    v21 = *(_QWORD *)(a1 + 16);
    if ( a3 )
      sub_1402285E8(v21, a3, a2);
    else
      sub_1402CF280(v21, (__int64)(a2 << 25) >> 16, v12, 0);
  }
  if ( !v13 && *(__int64 *)(v20 + 40) >= 0 )
  {
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v25, v14, v15, v16);
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    v22 = *(_BYTE *)(v20 + 34);
    *(_BYTE *)(v20 + 34) = v22 & 0xF8 | 5;
    *(_QWORD *)v20 ^= (*(_QWORD *)v20 ^ (*(_QWORD *)(*(_QWORD *)(v23 + 16) + 48LL) >> 3)) & 0xFFFFFFFFFFELL;
    *(_QWORD *)(*(_QWORD *)(v23 + 16) + 48LL) = v20;
    *(_BYTE *)(v20 + 34) ^= (*(_BYTE *)(v20 + 34) ^ v22) & 7;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( (v24 & 0x800) != 0 && !a3 )
    *(_DWORD *)(a1 + 8) = 15;
}

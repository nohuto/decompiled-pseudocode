/*
 * XREFs of sub_14038E94C @ 0x14038E94C
 * Callers:
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 * Callees:
 *     sub_1402E8AA0 @ 0x1402E8AA0 (sub_1402E8AA0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_14038EA8C @ 0x14038EA8C (sub_14038EA8C.c)
 */

__int64 __fastcall sub_14038E94C(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  int v4; // r14d
  int v5; // r12d
  unsigned int v6; // ebp
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v15; // [rsp+60h] [rbp+8h]
  int v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h]

  v17 = 88LL * a3 + a1 + 2880;
  v4 = 0;
  v15 = ((unsigned __int64)a3 << 9) + a1 + 7232;
  v5 = 0;
  v6 = 0;
  v8 = sub_14038EA8C();
  while ( 1 )
  {
    v12 = *(_QWORD *)(v10 + 8LL * v8);
    if ( v12 != -1 )
      break;
LABEL_12:
    ++v6;
    v8 = ((_BYTE)v8 + 1) & 0x3F;
    if ( v6 >= 0x40 )
      return -1LL;
  }
  v16 = 0;
  v13 = 48 * v12 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
    {
      do
        sub_1402F32E0(&v16, v7, v9, v10);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
    v10 = v15;
    v11 = v17;
  }
  if ( *(_QWORD *)(v10 + 8LL * v8) != v12 )
  {
LABEL_11:
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v11 = v17;
    --v6;
    LOBYTE(v8) = v8 - 1;
    goto LABEL_12;
  }
  if ( !(unsigned int)sub_1403277D0(v11, 48 * v12 - 0x220000000000LL, v4, (__int64)a2) )
  {
    v10 = v15;
    if ( ++v5 == 8 )
      v4 = 1;
    goto LABEL_11;
  }
  sub_1402E8AA0(v12, -1LL, *a2);
  return v12;
}

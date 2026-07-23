/*
 * XREFs of sub_140573898 @ 0x140573898
 * Callers:
 *     sub_14056C444 @ 0x14056C444 (sub_14056C444.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 *     sub_1402EF710 @ 0x1402EF710 (sub_1402EF710.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_140573898(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rbp
  int v6; // r12d
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char result; // al
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v6 = a4;
  v9 = 0;
  sub_1402F3290((volatile signed __int32 *)(a1 + 736), a2, a3, a4);
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    result = sub_1402EE4D4(a1, a2, v11);
    if ( !result )
      goto LABEL_29;
    v9 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  while ( 1 )
  {
    v15 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v15 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v16 = *(_DWORD *)(v15 + 24);
        *(_DWORD *)(v15 + 24) = v16 + 1;
        if ( v16 == -1 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v17 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v17 + 24) - 1;
        *(_DWORD *)(v17 + 24) = v18;
        if ( !v18 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v21, v10, v11, v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x60000) == 0x60000 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 && v19 - a3 < v19 )
        v19 -= a3;
    }
    else
    {
      v20 = v19 - a3;
      v19 = 0LL;
      if ( v20 <= 0 )
        v19 = v20;
    }
    *(_QWORD *)(a1 + 280) = v19;
  }
  *(_DWORD *)(a1 + 952) = v6;
  result = sub_140224100(a1);
  if ( v9 )
    result = sub_1402EF710(a1, a2, 0);
LABEL_29:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}

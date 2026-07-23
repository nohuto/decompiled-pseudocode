/*
 * XREFs of sub_140259330 @ 0x140259330
 * Callers:
 *     sub_14033D110 @ 0x14033D110 (sub_14033D110.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 *     sub_1402F3290 @ 0x1402F3290 (sub_1402F3290.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140259330(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    sub_1402EE104(a1, a3, a1 + 520);
  sub_1402F3290(a2);
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v12 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v12 + 1;
        if ( v12 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v11 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v11 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v13 = *(_DWORD *)(v11 + 24) - 1;
        *(_DWORD *)(v11 + 24) = v13;
        if ( !v13 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v14);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_QWORD *)(a1 + 232) = a2;
  v8 = *(char *)(a1 + 563);
  *(_DWORD *)(a1 + 540) = v8;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v8 + 536));
  sub_140224100(a1);
  result = a2 + 672;
  v10 = *(_QWORD **)(a2 + 680);
  if ( *v10 != a2 + 672 )
    __fastfail(3u);
  *v3 = result;
  v3[1] = v10;
  *v10 = v3;
  *(_QWORD *)(a2 + 680) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}

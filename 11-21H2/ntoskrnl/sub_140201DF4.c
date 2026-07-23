/*
 * XREFs of sub_140201DF4 @ 0x140201DF4
 * Callers:
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140578704 @ 0x140578704 (sub_140578704.c)
 */

char __fastcall sub_140201DF4(__int64 a1, _QWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  char result; // al
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( *(_UNKNOWN **)(a1 + 544) == &unk_140D32B00 )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    v5 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v5 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v9 = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(v5 + 24) = v9 + 1;
        if ( v9 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v11;
        if ( !v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = sub_140344DD0(a1, &v13, &v14);
  if ( v6 <= 4u )
  {
LABEL_6:
    sub_14035D0F8(v7, v13, v14);
    sub_140224100(a1);
    return 0;
  }
  if ( v6 == 5 )
  {
    if ( !(unsigned int)sub_140578704(a1) )
      goto LABEL_6;
    LOBYTE(v7) = *(_BYTE *)(a1 + 113);
    if ( (_BYTE)v7 )
      goto LABEL_6;
  }
  else if ( v6 == 7 || v6 == 9 )
  {
    goto LABEL_6;
  }
  result = 1;
  *a2 = v13;
  return result;
}

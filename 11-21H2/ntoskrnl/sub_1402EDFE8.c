/*
 * XREFs of sub_1402EDFE8 @ 0x1402EDFE8
 * Callers:
 *     sub_140290B9C @ 0x140290B9C (sub_140290B9C.c)
 *     sub_140291C10 @ 0x140291C10 (sub_140291C10.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402ECA00 @ 0x1402ECA00 (sub_1402ECA00.c)
 * Callees:
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402EE784 @ 0x1402EE784 (sub_1402EE784.c)
 *     sub_1402EE894 @ 0x1402EE894 (sub_1402EE894.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402EDFE8(__int64 a1, __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2 + 648;
  v13 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v11 + 1;
        if ( v11 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
      break;
    v10 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v10 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v12 = *(_DWORD *)(v10 + 24) - 1;
        *(_DWORD *)(v10 + 24) = v12;
        if ( !v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v13);
    while ( *(_QWORD *)(a2 + 64) );
  }
  if ( (*(_DWORD *)(a2 + 116) & 0x4000) != 0 && !*(_BYTE *)(v6 + 82) )
  {
    *(_BYTE *)(v6 + 82) = 1;
    sub_1402EE784(v6);
    LOBYTE(v8) = 2;
    sub_1402EE894(a1, v6, v8);
  }
  return sub_140224100(a2);
}

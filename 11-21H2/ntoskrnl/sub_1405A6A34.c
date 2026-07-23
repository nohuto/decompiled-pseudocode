/*
 * XREFs of sub_1405A6A34 @ 0x1405A6A34
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14032E680 @ 0x14032E680 (sub_14032E680.c)
 */

__int64 __fastcall sub_1405A6A34(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // r9
  unsigned int v8; // r10d
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  v4 = a3;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v11, a2, a3, a4);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  v8 = sub_14032E680(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1F, v4);
  v9 = 32LL * (v8 & 0x1F);
  if ( v7 )
    *(_QWORD *)(a2 + 16) = v9 | v7 & 0xFFFFFFFFFFFFFC1FuLL;
  else
    *(_QWORD *)(a2 + 16) = sub_1402CCC50(v9);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v8;
}

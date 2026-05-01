/*
 * XREFs of HamPopulateActivityProperties @ 0x180006CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010A58 @ 0x180010A58 (sub_180010A58.c)
 *     sub_180010B18 @ 0x180010B18 (sub_180010B18.c)
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall HamPopulateActivityProperties(_WORD *a1, _WORD *a2, __int64 a3)
{
  __int64 v6; // r8
  _WORD *v7; // rax
  __int64 v8; // rcx
  _WORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax

  if ( !a1 )
    return 3221225711LL;
  v6 = 64LL;
  v7 = a1;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v8 = 64LL;
  v9 = a2;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  if ( !v8 )
    return 3221225712LL;
  memset((void *)(a3 + 4), 0, 0x184uLL);
  *(_DWORD *)a3 = 8397888;
  sub_180010A58(a3 + 12, 64LL, v10, a1);
  if ( (int)sub_180010B18(v11, 64LL) < 0 )
    *(_WORD *)(a3 + 140) = 0;
  else
    sub_180010A58(a3 + 140, 64LL, v12, a2);
  *(_DWORD *)(a3 + 268) = 5;
  *(_DWORD *)(a3 + 276) = -1;
  result = 0LL;
  *(_OWORD *)(a3 + 280) = 0LL;
  *(_OWORD *)(a3 + 296) = 0LL;
  *(_OWORD *)(a3 + 312) = 0LL;
  *(_OWORD *)(a3 + 328) = 0LL;
  *(_OWORD *)(a3 + 344) = 0LL;
  *(_OWORD *)(a3 + 360) = 0LL;
  *(_QWORD *)(a3 + 376) = 0LL;
  *(_OWORD *)(a3 + 320) = 0LL;
  *(_OWORD *)(a3 + 336) = 0LL;
  *(_OWORD *)(a3 + 352) = 0LL;
  *(_QWORD *)(a3 + 368) = 0LL;
  *(_QWORD *)(a3 + 352) = -1LL;
  *(_QWORD *)(a3 + 344) = -1LL;
  *(_QWORD *)(a3 + 336) = -1LL;
  *(_QWORD *)(a3 + 328) = -1LL;
  *(_QWORD *)(a3 + 320) |= 0x80uLL;
  *(_DWORD *)(a3 + 368) = 33;
  return result;
}

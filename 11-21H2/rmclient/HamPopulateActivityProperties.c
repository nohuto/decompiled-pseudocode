/*
 * XREFs of HamPopulateActivityProperties @ 0x180007700
 * Callers:
 *     <none>
 * Callees:
 *     StringCopyWorkerW @ 0x180010FF8 (StringCopyWorkerW.c)
 *     StringValidateDestW @ 0x1800110B8 (StringValidateDestW.c)
 *     memset_0 @ 0x18001570E (memset_0.c)
 */

__int64 __fastcall HamPopulateActivityProperties(STRSAFE_PCNZWCH pszSrc, STRSAFE_PCNZWCH a2, __int64 a3)
{
  __int64 v6; // r8
  STRSAFE_PCNZWCH v7; // rax
  __int64 v8; // rcx
  STRSAFE_PCNZWCH v9; // rax
  size_t *v10; // r8
  STRSAFE_PCNZWCH v11; // rcx
  size_t v12; // r8
  size_t *v13; // r8
  __int64 result; // rax
  size_t v15; // [rsp+20h] [rbp-18h]
  size_t v16; // [rsp+20h] [rbp-18h]

  if ( !pszSrc )
    return 3221225711LL;
  v6 = 64LL;
  v7 = pszSrc;
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
  memset_0((void *)(a3 + 4), 0, 0x184uLL);
  *(_DWORD *)a3 = 8397888;
  StringCopyWorkerW((STRSAFE_LPWSTR)(a3 + 12), 0x40uLL, v10, pszSrc, v15);
  if ( StringValidateDestW(v11, 0x40uLL, v12) < 0 )
    *(_WORD *)(a3 + 140) = 0;
  else
    StringCopyWorkerW((STRSAFE_LPWSTR)(a3 + 140), 0x40uLL, v13, a2, v16);
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

/*
 * XREFs of AVrfpFindClosestThunkDuplicate @ 0x1800E4FE8
 * Callers:
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800E4A4C (AVrfpChainDuplicateVerificationLayers.c)
 * Callees:
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     _stricmp @ 0x18008FFD0 (_stricmp.c)
 *     _wcsicmp @ 0x1800906B0 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpFindClosestThunkDuplicate(__int64 a1, const wchar_t *a2, const char *a3)
{
  __int64 *v3; // rdi
  const wchar_t *v5; // r14
  __int64 *v6; // rbx
  _QWORD *v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // r15

  v3 = *(__int64 **)(a1 + 8);
  v5 = a2;
  do
  {
LABEL_15:
    if ( v3 == &AVrfpVerifierProvidersList )
      return 0LL;
    v6 = v3;
    v3 = (__int64 *)v3[1];
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: searching in %ws\n", v6[3]);
    v7 = (_QWORD *)v6[5];
    v8 = 0;
  }
  while ( !*v7 );
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: dll: %ws\n", v7[4 * v8]);
    v9 = 4LL * v8;
    if ( wcsicmp((const wchar_t *)v7[v9], v5) )
      goto LABEL_14;
    v10 = (_QWORD *)v7[v9 + 3];
    v11 = 0LL;
    if ( *v10 )
      break;
LABEL_13:
    v5 = a2;
LABEL_14:
    if ( !v7[4 * ++v8] )
      goto LABEL_15;
  }
  while ( 1 )
  {
    if ( (AVrfpDebug & 0x20) != 0 )
      DbgPrint("AVRF: chain: thunk: %s == %s ?\n", (const char *)v10[3 * v11], a3);
    if ( !stricmp((const char *)v10[3 * v11], a3) )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( !v10[3 * v11] )
      goto LABEL_13;
  }
  if ( (AVrfpDebug & 0x20) != 0 )
    DbgPrint("AVRF: Found duplicate for (%ws: %s) in %ws\n", a2, a3, v7[v9]);
  return v10[3 * v11 + 2];
}

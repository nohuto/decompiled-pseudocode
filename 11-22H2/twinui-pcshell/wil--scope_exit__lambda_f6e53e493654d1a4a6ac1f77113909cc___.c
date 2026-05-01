/*
 * XREFs of wil::scope_exit__lambda_f6e53e493654d1a4a6ac1f77113909cc___ @ 0x18024F46C
 * Callers:
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1806A0AB4 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_f6e53e493654d1a4a6ac1f77113909cc___(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  v2 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a1 + 32) = v2;
  result = a1;
  *(_BYTE *)(a1 + 40) = 1;
  return result;
}

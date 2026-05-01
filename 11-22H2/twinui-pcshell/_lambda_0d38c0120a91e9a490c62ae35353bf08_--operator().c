/*
 * XREFs of _lambda_0d38c0120a91e9a490c62ae35353bf08_::operator() @ 0x1801F7984
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0d38c0120a91e9a490c62ae35353bf08___::Run @ 0x1801F97D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_0d38c0120a91e9a490c62ae35353bf08___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800C2CB4 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_0d38c0120a91e9a490c62ae35353bf08_::operator()(int **a1)
{
  int v2; // r8d
  int *v3; // rcx
  __int16 v4; // dx

  v2 = **a1;
  v3 = a1[1];
  if ( v2 == 1 )
    v3[45] |= 0x100u;
  else
    v3[45] &= ~0x100u;
  if ( (v3[45] & 0x40) == 0 )
  {
    v4 = 0;
    if ( v2 == 1 )
      v4 = 64;
    *((_WORD *)v3 + 126) = v3[63] & 0xFFBF | v4;
    goto LABEL_10;
  }
  if ( !v2 )
  {
    *((_WORD *)v3 + 126) &= ~0x80u;
    UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v3);
    v3 = a1[1];
    *((_WORD *)v3 + 126) |= 0x80u;
LABEL_10:
    UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v3);
  }
  return 0LL;
}

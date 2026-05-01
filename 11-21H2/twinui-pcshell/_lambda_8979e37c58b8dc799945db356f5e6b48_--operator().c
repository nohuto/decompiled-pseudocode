/*
 * XREFs of _lambda_8979e37c58b8dc799945db356f5e6b48_::operator() @ 0x1800265B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8979e37c58b8dc799945db356f5e6b48___::Run @ 0x180026590 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8979e37c58b8dc799945db356f5e6b48___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180090920 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_8979e37c58b8dc799945db356f5e6b48_::operator()(int **a1)
{
  int v2; // edx
  int *v3; // rcx
  __int16 v4; // ax

  v2 = **a1;
  v3 = a1[1];
  if ( v2 == 1 )
    v3[45] |= 0x100u;
  else
    v3[45] &= ~0x100u;
  if ( (v3[45] & 0x40) != 0 )
  {
    if ( v2 )
      return 0LL;
    *((_WORD *)v3 + 126) &= ~0x80u;
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v3);
    v3 = a1[1];
    v4 = 128;
  }
  else
  {
    *((_WORD *)v3 + 126) &= ~0x40u;
    v4 = 0;
    if ( v2 == 1 )
      v4 = 64;
  }
  *((_WORD *)v3 + 126) |= v4;
  WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v3);
  return 0LL;
}

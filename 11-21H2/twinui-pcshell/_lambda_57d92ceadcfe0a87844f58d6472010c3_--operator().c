/*
 * XREFs of _lambda_57d92ceadcfe0a87844f58d6472010c3_::operator() @ 0x180411FA4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_57d92ceadcfe0a87844f58d6472010c3___::Run @ 0x180416870 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_57d92ceadcfe0a87844f58d6472010c3___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x180414714 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_57d92ceadcfe0a87844f58d6472010c3_::operator()(int **a1)
{
  int v2; // edx
  int *v3; // rcx
  __int16 v4; // ax

  v2 = **a1;
  v3 = a1[1];
  if ( v2 == 1 )
    v3[43] |= 0x100u;
  else
    v3[43] &= ~0x100u;
  if ( (v3[43] & 0x40) == 0 )
  {
    *((_WORD *)v3 + 122) &= ~0x40u;
    v4 = 0;
    if ( v2 == 1 )
      v4 = 64;
    goto LABEL_10;
  }
  if ( !v2 )
  {
    *((_WORD *)v3 + 122) &= ~0x80u;
    UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v3);
    v3 = a1[1];
    v4 = 128;
LABEL_10:
    *((_WORD *)v3 + 122) |= v4;
    UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v3);
  }
  return 0LL;
}

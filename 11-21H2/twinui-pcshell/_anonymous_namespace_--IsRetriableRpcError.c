/*
 * XREFs of _anonymous_namespace_::IsRetriableRpcError @ 0x18003AEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall anonymous_namespace_::IsRetriableRpcError(int a1)
{
  int v1; // edx
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  bool result; // al

  result = 1;
  if ( a1 != -2147417848 )
  {
    if ( (unsigned int)(a1 + 2147418110) > 0x10 || (v1 = 65569, !_bittest(&v1, a1 + 2147418110)) )
    {
      v2 = (unsigned int)(a1 + 2147023179);
      if ( (unsigned int)v2 > 0x24 )
        return 0;
      v3 = 0x1000000621LL;
      if ( !_bittest64(&v3, v2) )
        return 0;
    }
  }
  return result;
}

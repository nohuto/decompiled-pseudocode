/*
 * XREFs of _lambda_f5bb936b1b8c681d3e903b0b9fce9520_::operator() @ 0x180083E40
 * Callers:
 *     ?IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180082C2C (-IsExpandedResources@BroadcastDVRComponent@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall lambda_f5bb936b1b8c681d3e903b0b9fce9520_::operator()(void ***a1)
{
  void **v1; // rdx
  void *v3; // rcx
  __int64 v4; // rsi
  HLOCAL result; // rax

  v1 = *a1;
  v3 = **a1;
  if ( v3 )
  {
    v4 = 0LL;
    if ( *(_DWORD *)a1[1] )
    {
      do
      {
        LocalFree(*((HLOCAL *)*v1 + v4));
        v1 = *a1;
        *((_QWORD *)**a1 + v4) = 0LL;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)a1[1] );
      v3 = *v1;
    }
    return LocalFree(v3);
  }
  return result;
}

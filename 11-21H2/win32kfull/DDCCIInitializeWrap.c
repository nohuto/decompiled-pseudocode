/*
 * XREFs of DDCCIInitializeWrap @ 0x1C0120F90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMonitorAPI@@QEAA@PEAJ@Z @ 0x1C0120FF8 (--0CMonitorAPI@@QEAA@PEAJ@Z.c)
 */

__int64 DDCCIInitializeWrap()
{
  unsigned int v0; // ebx
  CMonitorAPI *Pool2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v3 = 0;
  Pool2 = (CMonitorAPI *)ExAllocatePool2(258LL, 40LL, 1664248135LL);
  if ( !Pool2 )
  {
    P = 0LL;
    return (unsigned int)-1073741801;
  }
  P = CMonitorAPI::CMonitorAPI(Pool2, &v3);
  if ( !P )
    return (unsigned int)-1073741801;
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v0;
}

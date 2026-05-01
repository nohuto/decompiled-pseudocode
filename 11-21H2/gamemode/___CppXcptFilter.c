/*
 * XREFs of ___CppXcptFilter @ 0x10006A2C
 * Callers:
 *     __DllMainCRTStartup @ 0x10006A52 (__DllMainCRTStartup.c)
 * Callees:
 *     __XcptFilter @ 0x10006FC8 (__XcptFilter.c)
 */

int __cdecl __CppXcptFilter(int a1, int a2)
{
  if ( a1 == -529697949 )
    return _XcptFilter(-529697949, a2);
  else
    return 0;
}

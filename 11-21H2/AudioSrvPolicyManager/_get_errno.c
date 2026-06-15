/*
 * XREFs of _get_errno @ 0x18000340E
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180044118 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl get_errno(int *Value)
{
  return _o__get_errno(Value);
}

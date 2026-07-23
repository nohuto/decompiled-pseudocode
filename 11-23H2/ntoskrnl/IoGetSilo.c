/*
 * XREFs of IoGetSilo @ 0x140302DE0
 * Callers:
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767B30 (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 && v1 != IopRevocationExtension && (v2 = v1[8]) != 0 )
    return *(_QWORD *)(v2 + 8);
  else
    return 0LL;
}

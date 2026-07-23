/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140559250
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 */

__int64 __fastcall IoClearAdapterCryptoEngineExtension(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _WORD *v6; // rax

  if ( !sub_14020C0F0(a1, 7u) )
    return 3221226021LL;
  v6 = sub_14020C420(v3, v2, v4, v5);
  if ( !v6 )
    return 3221226021LL;
  *(_OWORD *)(v6 + 20) = 0LL;
  sub_14020B888(a1, 7, 0);
  return 0LL;
}

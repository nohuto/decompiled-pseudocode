/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C007B23C
 * Callers:
 *     NtUserSetProp @ 0x1C00791E0 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C010AE8C (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 664LL);
  if ( result )
    return *(_QWORD *)(result + 168);
  return result;
}

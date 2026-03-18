/*
 * XREFs of XmAccumRegister @ 0x14039A4E0
 * Callers:
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 * Callees:
 *     XmSetSourceValue @ 0x1403B8E60 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B8F08 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmAccumRegister(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  XmSetSourceValue(a1, a1 + 4 * (v1 + 6LL));
  XmSetDestinationValue(v2, v2 + 24);
  return 1LL;
}

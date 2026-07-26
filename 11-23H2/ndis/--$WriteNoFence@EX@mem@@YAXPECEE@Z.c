/*
 * XREFs of ??$WriteNoFence@EX@mem@@YAXPECEE@Z @ 0x1C0006DD0
 * Callers:
 *     ndisReadCtaPolicy @ 0x1C0121118 (ndisReadCtaPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall mem::WriteNoFence<unsigned char,void>(_BYTE *a1, char a2)
{
  *a1 = a2;
}

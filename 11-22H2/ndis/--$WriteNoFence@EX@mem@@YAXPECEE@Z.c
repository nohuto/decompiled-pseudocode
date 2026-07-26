/*
 * XREFs of ??$WriteNoFence@EX@mem@@YAXPECEE@Z @ 0x1C0006C40
 * Callers:
 *     ndisReadCtaPolicy @ 0x1C0121158 (ndisReadCtaPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall mem::WriteNoFence<unsigned char,void>(_BYTE *a1, char a2)
{
  *a1 = a2;
}

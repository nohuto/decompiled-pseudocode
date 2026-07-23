/*
 * XREFs of sub_14053F16C @ 0x14053F16C
 * Callers:
 *     sub_140721910 @ 0x140721910 (sub_140721910.c)
 * Callees:
 *     sub_1409196DC @ 0x1409196DC (sub_1409196DC.c)
 */

__int64 __fastcall sub_14053F16C(char a1)
{
  struct _KTRANSACTION *v2; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)sub_1409196DC() == 0;
  v2 = (struct _KTRANSACTION *)sub_1409196DC();
  return TmIsTransactionActive_0(v2);
}

/*
 * XREFs of sub_1406B75F0 @ 0x1406B75F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140882EB0 @ 0x140882EB0 (sub_140882EB0.c)
 */

void __fastcall sub_1406B75F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( a4 == 1 )
  {
    if ( (*(_BYTE *)(a2 + 98) & 2) != 0 )
    {
      if ( EtwEventEnabled(qword_140C15FA8, &stru_14000EA00) )
        sub_140882EB0(v5, &stru_14000EA00, v6, 1LL, 0LL, *(_QWORD *)(a2 + 32) + 40LL);
    }
    _InterlockedOr16((volatile signed __int16 *)(a2 + 98), 0x40u);
  }
}

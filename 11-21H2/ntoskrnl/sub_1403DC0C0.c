/*
 * XREFs of sub_1403DC0C0 @ 0x1403DC0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1403DC0C0(__int64 a1)
{
  signed __int32 v2; // eax

  do
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(a1 + 40);
      if ( (v2 & 2) == 0 )
        break;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 40), 1u);
      sub_14042A5E0(a1, *(_QWORD *)(a1 + 56));
    }
  }
  while ( v2 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v2 & 0xFFFFFFFE, v2) );
  sub_1402AD030((struct _EX_RUNDOWN_REF *)(a1 + 32));
}

/*
 * XREFs of sub_140506BF4 @ 0x140506BF4
 * Callers:
 *     HalHandleMcheck @ 0x1405095D0 (HalHandleMcheck.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050770C @ 0x14050770C (sub_14050770C.c)
 *     sub_1405079C8 @ 0x1405079C8 (sub_1405079C8.c)
 */

void __fastcall sub_140506BF4(__int64 a1)
{
  __int64 i; // rbx
  __int64 v3; // rdx

  _InterlockedIncrement(&dword_140CE21C0);
  if ( byte_140C549A0 )
  {
    for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; ; i = *(_QWORD *)(i + 184) )
    {
      if ( !i )
      {
        sub_1405079C8(a1);
        goto LABEL_11;
      }
      if ( (sub_14042A5E0(*(_QWORD *)(i + 172), 378LL) & 8) != 0 )
        break;
    }
    while ( !sub_1402DA448((volatile signed __int32 *)&qword_140D01590) )
      _mm_pause();
    LOBYTE(v3) = 1;
    sub_14050770C(a1, v3);
    KeReleaseSpinLockFromDpcLevel(&qword_140D01590);
  }
  else
  {
    sub_14050770C(a1, 0LL);
  }
LABEL_11:
  _InterlockedDecrement(&dword_140CE21C0);
}

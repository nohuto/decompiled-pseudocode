/*
 * XREFs of sub_1403D93F4 @ 0x1403D93F4
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     PoFxSetDeviceIdleTimeout @ 0x1403D9370 (PoFxSetDeviceIdleTimeout.c)
 * Callees:
 *     sub_14035489C @ 0x14035489C (sub_14035489C.c)
 *     sub_140354FB4 @ 0x140354FB4 (sub_140354FB4.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1403D93F4(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int64 v4; // rdx

  _m_prefetchw((const void *)(a1 + 32));
  v2 = *(_DWORD *)(a1 + 32);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2, v2);
  }
  while ( v3 != v2 );
  if ( (v2 & 4) != 0 )
  {
    if ( KeCancelTimer((PKTIMER)(a1 + 368)) )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFB);
      if ( !sub_14035489C(a1) )
      {
        sub_140354FB4(*(_QWORD *)(a1 + 48), 0, 0);
        sub_14042A5E0(*(_QWORD *)(a1 + 192), v4);
        _InterlockedOr((volatile signed __int32 *)(a1 + 32), 0x40u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF) != 1 )
          sub_140355058(*(_QWORD *)(a1 + 48), 0, 17, 0LL);
      }
    }
  }
}

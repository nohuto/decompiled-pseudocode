/*
 * XREFs of sub_140230680 @ 0x140230680
 * Callers:
 *     sub_14023C1EC @ 0x14023C1EC (sub_14023C1EC.c)
 *     sub_140248C10 @ 0x140248C10 (sub_140248C10.c)
 *     sub_1402598CC @ 0x1402598CC (sub_1402598CC.c)
 *     sub_140275338 @ 0x140275338 (sub_140275338.c)
 *     sub_140276BF8 @ 0x140276BF8 (sub_140276BF8.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_140288760 @ 0x140288760 (sub_140288760.c)
 *     sub_140289D20 @ 0x140289D20 (sub_140289D20.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1402D9E3C @ 0x1402D9E3C (sub_1402D9E3C.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 *     sub_1403AE0B0 @ 0x1403AE0B0 (sub_1403AE0B0.c)
 *     sub_1403AE198 @ 0x1403AE198 (sub_1403AE198.c)
 *     sub_1403AE50C @ 0x1403AE50C (sub_1403AE50C.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1406FAEA0 @ 0x1406FAEA0 (sub_1406FAEA0.c)
 * Callees:
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall sub_140230680(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  v3 = *a1;
  if ( (a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, a3);
  }
  else
  {
    while ( 1 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64(a1, v3 + 1, v3);
      if ( v4 == v3 )
        break;
      if ( (a2 ^ v3) >= 0xF )
        goto LABEL_4;
    }
    sub_140347B50(a2 - 48, 1LL);
  }
}

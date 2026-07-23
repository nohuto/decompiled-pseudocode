/*
 * XREFs of sub_1406E25B0 @ 0x1406E25B0
 * Callers:
 *     sub_140661090 @ 0x140661090 (sub_140661090.c)
 *     sub_1406A0010 @ 0x1406A0010 (sub_1406A0010.c)
 *     sub_1406E2590 @ 0x1406E2590 (sub_1406E2590.c)
 *     sub_14091BC64 @ 0x14091BC64 (sub_14091BC64.c)
 * Callees:
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     sub_1406E2624 @ 0x1406E2624 (sub_1406E2624.c)
 */

__int64 __fastcall sub_1406E25B0(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)v5 = 0LL;
  sub_140347770((__int64)v5);
  v2 = _InterlockedCompareExchange(a1, 3, 0);
  LODWORD(v6) = v2;
  if ( v2 == 1 )
  {
    LODWORD(v6) = _InterlockedCompareExchange(a1, 4, 1);
    if ( (_DWORD)v6 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_4;
    }
    v3 = 0;
    LODWORD(v6) = 4;
    ExBlockOnAddressPushLock((__int64)(a1 + 2), a1, &v6, 4uLL, 0LL);
    goto LABEL_3;
  }
  v3 = 0;
  if ( !v2 )
  {
LABEL_3:
    sub_1406E2624(a1);
    goto LABEL_4;
  }
  v3 = -1072103421;
  if ( v2 == 3 )
    v3 = -1072103403;
LABEL_4:
  sub_14022EA30(v5);
  return v3;
}

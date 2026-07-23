/*
 * XREFs of sub_14077BCA0 @ 0x14077BCA0
 * Callers:
 *     sub_14077BC30 @ 0x14077BC30 (sub_14077BC30.c)
 * Callees:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     sub_1406BA8F4 @ 0x1406BA8F4 (sub_1406BA8F4.c)
 *     sub_1406CFE50 @ 0x1406CFE50 (sub_1406CFE50.c)
 *     sub_1406DB388 @ 0x1406DB388 (sub_1406DB388.c)
 *     sub_1406DC724 @ 0x1406DC724 (sub_1406DC724.c)
 *     sub_140778DA4 @ 0x140778DA4 (sub_140778DA4.c)
 *     sub_14077BF70 @ 0x14077BF70 (sub_14077BF70.c)
 *     sub_140788300 @ 0x140788300 (sub_140788300.c)
 *     sub_140789AEC @ 0x140789AEC (sub_140789AEC.c)
 *     sub_140789CFC @ 0x140789CFC (sub_140789CFC.c)
 *     sub_140789E04 @ 0x140789E04 (sub_140789E04.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_140806A24 @ 0x140806A24 (sub_140806A24.c)
 *     sub_14081C354 @ 0x14081C354 (sub_14081C354.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140954BA8 @ 0x140954BA8 (sub_140954BA8.c)
 *     sub_140954D10 @ 0x140954D10 (sub_140954D10.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955184 @ 0x140955184 (sub_140955184.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 *     sub_1409554B0 @ 0x1409554B0 (sub_1409554B0.c)
 *     sub_140955628 @ 0x140955628 (sub_140955628.c)
 *     sub_140955BAC @ 0x140955BAC (sub_140955BAC.c)
 *     sub_140955CA4 @ 0x140955CA4 (sub_140955CA4.c)
 *     sub_140955EF8 @ 0x140955EF8 (sub_140955EF8.c)
 *     sub_14095618C @ 0x14095618C (sub_14095618C.c)
 *     sub_140956298 @ 0x140956298 (sub_140956298.c)
 *     sub_14095644C @ 0x14095644C (sub_14095644C.c)
 */

__int64 __fastcall sub_14077BCA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *P,
        unsigned int a6,
        int a7)
{
  *P = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return sub_1406DB388(a1, a2, a3, a4, a7, P);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return sub_14078A748(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470827u:
          return sub_140789CFC(a1);
        case 0x47082Bu:
          return sub_140955BAC(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47082Fu:
          return sub_14095618C(a1, a2, a3, a4);
        case 0x470833u:
          return sub_14065F7D4(a1, a2, a3, a4, a7, P);
        case 0x470837u:
          return sub_140955EF8(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47083Bu:
          return sub_14095644C(a1, a2, a3, a4, a7, (__int64)P);
      }
    }
    else
    {
      switch ( a6 )
      {
        case 0x47081Fu:
          return sub_140956298(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470803u:
          return sub_1406CFE50(a1, a2, a3, a4, a7, P);
        case 0x470807u:
          return sub_140788300(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47080Bu:
          return sub_140955628(a1, a2, a3, a4);
        case 0x47080Fu:
          return sub_140955CA4(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470813u:
          return sub_14077BF70(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470817u:
          return sub_1406DC724(a1, a2, a3, a4, a7, P);
        case 0x47081Bu:
          return sub_140778DA4(a1, a2, a3, a4, a7, P);
      }
    }
    return 3221225659LL;
  }
  if ( a6 <= 0x47085F )
  {
    switch ( a6 )
    {
      case 0x47085Fu:
        return sub_140955274(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470843u:
        return sub_140789AEC(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470847u:
        return sub_140954434(a1, a2, a3, a4, a7, (__int64)P);
      case 0x47084Bu:
        return sub_140954E2C(a1, a2, a3, a4, a7, P);
      case 0x47084Fu:
        return sub_14065F3BC(a1, a2, a3, a4, a7, P);
      case 0x470853u:
        return sub_140806A24(a1, a2, a3, a4, a7, P);
      case 0x470857u:
        return sub_140955184(a1, a2, a3, a4, a7, (__int64)P);
      case 0x47085Bu:
        return sub_1406BA720(a1, a2, a3, a4, a7, P);
    }
    return 3221225659LL;
  }
  switch ( a6 )
  {
    case 0x470863u:
      return sub_14081C354(a1, a2, a3, a4, a7, P);
    case 0x470867u:
      return sub_140954D10(a1, a2, a3, a4, a7, P);
    case 0x47086Bu:
      return sub_1406BA8F4(a1, a2, a3, a4, a7, P);
    case 0x47086Fu:
      return sub_140954BA8(a1, a2, a3, a4, a7, (__int64)P);
  }
  if ( a6 != 4655219 )
  {
    if ( a6 == 4655223 )
      return sub_140789E04(a1, a2, a3, a4, a7, (__int64)P);
    return 3221225659LL;
  }
  return sub_1409554B0(a1, a2, a3, a4, a7, (__int64)P);
}

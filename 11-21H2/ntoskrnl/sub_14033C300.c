/*
 * XREFs of sub_14033C300 @ 0x14033C300
 * Callers:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14024A0FC @ 0x14024A0FC (sub_14024A0FC.c)
 *     sub_1402655A0 @ 0x1402655A0 (sub_1402655A0.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_14029A2A0 @ 0x14029A2A0 (sub_14029A2A0.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E8154 @ 0x1402E8154 (sub_1402E8154.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EB8BC @ 0x1402EB8BC (sub_1402EB8BC.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_14033B770 @ 0x14033B770 (sub_14033B770.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 *     sub_14033FAA4 @ 0x14033FAA4 (sub_14033FAA4.c)
 *     sub_1403B770C @ 0x1403B770C (sub_1403B770C.c)
 *     sub_1403C2D6C @ 0x1403C2D6C (sub_1403C2D6C.c)
 *     sub_1403C3290 @ 0x1403C3290 (sub_1403C3290.c)
 *     sub_140589CEC @ 0x140589CEC (sub_140589CEC.c)
 *     sub_14058A2D8 @ 0x14058A2D8 (sub_14058A2D8.c)
 *     sub_140590A18 @ 0x140590A18 (sub_140590A18.c)
 *     sub_140591040 @ 0x140591040 (sub_140591040.c)
 *     sub_14059DA64 @ 0x14059DA64 (sub_14059DA64.c)
 *     sub_1405A511C @ 0x1405A511C (sub_1405A511C.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 *     sub_1405B0E30 @ 0x1405B0E30 (sub_1405B0E30.c)
 *     sub_1405B1D98 @ 0x1405B1D98 (sub_1405B1D98.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405C30B0 @ 0x1405C30B0 (sub_1405C30B0.c)
 *     sub_1405C4C94 @ 0x1405C4C94 (sub_1405C4C94.c)
 *     sub_140B5273C @ 0x140B5273C (sub_140B5273C.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14033C300(__int64 a1, char a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // rdx
  signed __int64 result; // rax
  signed __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int64)(a2 & 7) << 60;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v3 | v2 & 0x8FFFFFFFFFFFFFFFuLL, v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 | result & 0x8FFFFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}

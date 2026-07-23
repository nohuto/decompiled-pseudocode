/*
 * XREFs of sub_1407A5A54 @ 0x1407A5A54
 * Callers:
 *     sub_1406633A8 @ 0x1406633A8 (sub_1406633A8.c)
 *     sub_140664220 @ 0x140664220 (sub_140664220.c)
 *     sub_14066AD78 @ 0x14066AD78 (sub_14066AD78.c)
 *     sub_14066BAB0 @ 0x14066BAB0 (sub_14066BAB0.c)
 *     sub_14066BC7C @ 0x14066BC7C (sub_14066BC7C.c)
 *     sub_14066C3C0 @ 0x14066C3C0 (sub_14066C3C0.c)
 *     sub_14066C5B0 @ 0x14066C5B0 (sub_14066C5B0.c)
 *     sub_14066E830 @ 0x14066E830 (sub_14066E830.c)
 *     sub_1406A1CC0 @ 0x1406A1CC0 (sub_1406A1CC0.c)
 *     sub_1406A61B0 @ 0x1406A61B0 (sub_1406A61B0.c)
 *     sub_1406BC370 @ 0x1406BC370 (sub_1406BC370.c)
 *     sub_1406BE210 @ 0x1406BE210 (sub_1406BE210.c)
 *     sub_1406C31C0 @ 0x1406C31C0 (sub_1406C31C0.c)
 *     sub_1406CBB84 @ 0x1406CBB84 (sub_1406CBB84.c)
 *     sub_1406D7014 @ 0x1406D7014 (sub_1406D7014.c)
 *     sub_1406F6A30 @ 0x1406F6A30 (sub_1406F6A30.c)
 *     sub_14074D800 @ 0x14074D800 (sub_14074D800.c)
 *     sub_14074DC30 @ 0x14074DC30 (sub_14074DC30.c)
 *     sub_14074E060 @ 0x14074E060 (sub_14074E060.c)
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 *     sub_1407A4774 @ 0x1407A4774 (sub_1407A4774.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 *     sub_1407A56B0 @ 0x1407A56B0 (sub_1407A56B0.c)
 *     sub_1407A58A4 @ 0x1407A58A4 (sub_1407A58A4.c)
 *     sub_1407A58E0 @ 0x1407A58E0 (sub_1407A58E0.c)
 *     sub_1407A6660 @ 0x1407A6660 (sub_1407A6660.c)
 *     sub_1407A66CC @ 0x1407A66CC (sub_1407A66CC.c)
 *     sub_1407A717C @ 0x1407A717C (sub_1407A717C.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 *     sub_1407A817C @ 0x1407A817C (sub_1407A817C.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407A98B0 @ 0x1407A98B0 (sub_1407A98B0.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     sub_1407E0D28 @ 0x1407E0D28 (sub_1407E0D28.c)
 *     sub_140881980 @ 0x140881980 (sub_140881980.c)
 *     sub_140965B94 @ 0x140965B94 (sub_140965B94.c)
 *     AlpcCreateSecurityContext @ 0x1409662A0 (AlpcCreateSecurityContext.c)
 *     sub_140966620 @ 0x140966620 (sub_140966620.c)
 *     sub_140967328 @ 0x140967328 (sub_140967328.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407A5A90 @ 0x1407A5A90 (sub_1407A5A90.c)
 */

unsigned __int64 __fastcall sub_1407A5A54(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rdx

  result = -a2;
  BugCheckParameter4 = result + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    return sub_1407A5A90(BugCheckParameter2, 0LL);
  }
  return result;
}

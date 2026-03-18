/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x1409BAE40
 * Callers:
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140735270 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB4F0 (RtlpAddKnownObjectAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedObjectAce(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        PSID Src)
{
  if ( a5 || a6 )
    return RtlpAddKnownObjectAce(a1, a2, a3, a4, a5, a6, Src, 6);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, (unsigned __int8 *)Src, 1);
}

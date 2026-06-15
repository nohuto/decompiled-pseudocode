/*
 * XREFs of sub_1800C8CC8 @ 0x1800C8CC8
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18005F2A0 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 */

void __fastcall sub_1800C8CC8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void **a12)
{
  a12 = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear((PSECURITY_DESCRIPTOR *)&a12);
  JUMPOUT(0x18005EB21LL);
}

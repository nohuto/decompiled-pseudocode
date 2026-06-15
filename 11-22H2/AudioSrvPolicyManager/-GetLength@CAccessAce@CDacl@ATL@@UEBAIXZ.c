/*
 * XREFs of ?GetLength@CAccessAce@CDacl@ATL@@UEBAIXZ @ 0x180045A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessAce::GetLength(ATL::CDacl::CAccessAce *this)
{
  return GetLengthSid((char *)this + 16) + 8;
}

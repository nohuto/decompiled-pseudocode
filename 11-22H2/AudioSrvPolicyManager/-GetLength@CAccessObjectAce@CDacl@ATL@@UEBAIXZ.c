/*
 * XREFs of ?GetLength@CAccessObjectAce@CDacl@ATL@@UEBAIXZ @ 0x180045A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CDacl::CAccessObjectAce::GetLength(ATL::CDacl::CAccessObjectAce *this)
{
  __int64 v1; // rbx
  int v2; // edi
  DWORD LengthSid; // eax
  int v4; // ecx

  v1 = *((_QWORD *)this + 20);
  v2 = *((_QWORD *)this + 19) != 0LL ? 44 : 28;
  LengthSid = GetLengthSid((char *)this + 16);
  v4 = v2 - 16;
  if ( v1 )
    v4 = v2;
  return v4 + LengthSid;
}

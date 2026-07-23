/*
 * XREFs of sub_1409C6518 @ 0x1409C6518
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1409C6518(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rdx
  unsigned __int16 *v4; // rcx

  result = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 140) += 4 * *(unsigned __int8 *)(result + 1) + 8;
  v3 = *(unsigned __int16 **)(a1 + 184);
  if ( v3 )
  {
    v4 = *(unsigned __int16 **)(a1 + 176);
    if ( v4 != v3 )
    {
      memmove(v4, v3, v3[1]);
      result = *(_QWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 184) = result;
    }
  }
  return result;
}

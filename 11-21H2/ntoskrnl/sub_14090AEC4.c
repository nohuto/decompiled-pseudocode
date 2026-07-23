/*
 * XREFs of sub_14090AEC4 @ 0x14090AEC4
 * Callers:
 *     sub_14090AC50 @ 0x14090AC50 (sub_14090AC50.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14090AF30 @ 0x14090AF30 (sub_14090AF30.c)
 */

__int64 __fastcall sub_14090AEC4(unsigned __int16 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = a1;
  result = sub_14090AF30();
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(qword_140C4A0C0 + 12) = v3;
    *(_DWORD *)qword_140C4A0C0 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 4) == 2 )
      *(_DWORD *)(qword_140C4A0C0 + 8) = *(_DWORD *)(a2 + 16);
    LOBYTE(v5) = 3;
    return sub_14042A5E0(*((_QWORD *)&xmmword_140C4A070 + 1), v5);
  }
  return result;
}

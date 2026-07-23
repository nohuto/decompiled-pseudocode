/*
 * XREFs of sub_1407532AC @ 0x1407532AC
 * Callers:
 *     sub_140257C7C @ 0x140257C7C (sub_140257C7C.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1407532AC(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 *v3; // rcx
  unsigned __int8 *v4; // rdx

  result = *(_QWORD *)(a1 + 184);
  if ( result )
  {
    result = *(unsigned __int16 *)(result + 2);
    *(_DWORD *)(a1 + 140) += result;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  v3 = *(unsigned __int8 **)(a1 + 176);
  v4 = *(unsigned __int8 **)(a1 + 168);
  if ( v3 != v4 )
  {
    memmove(v3, v4, 4LL * v4[1] + 8);
    result = *(_QWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 168) = result;
  }
  return result;
}

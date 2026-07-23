/*
 * XREFs of sub_1403DD420 @ 0x1403DD420
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403DD4C8 @ 0x1403DD4C8 (sub_1403DD4C8.c)
 */

__int64 __fastcall sub_1403DD420(__int64 a1)
{
  ULONG_PTR v1; // r9
  _DWORD *v3; // rdx
  char v4; // cl
  __int64 *v5; // rbx
  __int64 result; // rax

  v1 = qword_140C4E4B0;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  v3 = (_DWORD *)(v1 + 224);
  if ( *(_DWORD *)(v1 + 228) != 8 && (v4 = 0, (*v3 & 1) != 0) || (v4 = 2, *(_BYTE *)a1 = 2, (*v3 & 1) != 0) )
  {
    v4 |= 4u;
    *(_BYTE *)a1 = v4;
  }
  if ( qword_140C4E4C8 )
  {
    v4 |= 1u;
    *(_BYTE *)a1 = v4;
  }
  if ( (*v3 & 0x20) != 0 )
    *(_BYTE *)a1 = v4 | 8;
  v5 = (__int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v1 + 228);
  *(_DWORD *)(a1 + 8) = *v3;
  result = sub_1403DD4C8(v1, a1 + 16, a1 + 24);
  if ( !qword_140C54B78 )
  {
    result = *v5;
    qword_140C54B78 = *v5;
  }
  return result;
}

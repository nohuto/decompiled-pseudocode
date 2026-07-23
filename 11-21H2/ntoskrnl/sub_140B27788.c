/*
 * XREFs of sub_140B27788 @ 0x140B27788
 * Callers:
 *     sub_140A5B590 @ 0x140A5B590 (sub_140A5B590.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 */

__int64 __fastcall sub_140B27788(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r10
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx

  v2 = sub_140213A40(a1, 1413567059, 0, 0);
  v3 = sub_140213A40(a1, 1413698381, 0, 0);
  if ( v2 )
  {
    v5 = v2 + 48;
    v6 = v2 + *(unsigned int *)(v2 + 4);
    if ( v2 + 50 <= v6 )
    {
      do
      {
        v7 = *(unsigned __int8 *)(v5 + 1);
        if ( (unsigned __int8)v7 < 2u )
          break;
        v8 = v5 + v7;
        if ( v5 + v7 > v6 )
          break;
        if ( *(_BYTE *)v5 == 1 && (unsigned __int8)v7 >= 0x28u )
        {
          v9 = *(_QWORD *)(v5 + 16);
          if ( (*(_BYTE *)(v5 + 28) & 3) == 3 && v9 && v9 + *(_QWORD *)(v5 + 8) - 1LL > qword_140C4D0E8 )
            qword_140C4D0E8 = v9 + *(_QWORD *)(v5 + 8) - 1LL;
        }
        v5 = v8;
      }
      while ( v8 + 2 <= v6 );
    }
    if ( v3 && *(_QWORD *)(v3 + 48) > qword_140C4D0E8 )
      qword_140C4D0E8 = *(_QWORD *)(v3 + 48);
  }
  result = qword_140C4D0E8;
  if ( qword_140C4D0E8 > (unsigned __int64)qword_140C4E038 )
    qword_140C4E038 = qword_140C4D0E8;
  return result;
}

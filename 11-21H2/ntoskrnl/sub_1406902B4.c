/*
 * XREFs of sub_1406902B4 @ 0x1406902B4
 * Callers:
 *     sub_140690198 @ 0x140690198 (sub_140690198.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x140212060 (RtlCompareAltitudes.c)
 *     sub_1406930D4 @ 0x1406930D4 (sub_1406930D4.c)
 *     sub_140693288 @ 0x140693288 (sub_140693288.c)
 */

__int64 __fastcall sub_1406902B4(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  LONG v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rcx

  v4 = 0;
  sub_140693288();
  *(_QWORD *)(a1 + 24) = ++qword_140C49808;
  v5 = qword_140C497F0;
  if ( (__int64 *)qword_140C497F0 != &qword_140C497F0 )
  {
    do
    {
      v6 = RtlCompareAltitudes((PCUNICODE_STRING)(v5 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v6 )
      {
        if ( v6 < 0 )
          goto LABEL_6;
      }
      else if ( !a2 )
      {
        goto LABEL_12;
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (__int64 *)v5 != &qword_140C497F0 );
    if ( !v6 && !a2 )
    {
LABEL_12:
      v4 = -1071906799;
      goto LABEL_8;
    }
  }
LABEL_6:
  v7 = *(__int64 **)(v5 + 8);
  v8 = *v7;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    __fastfail(3u);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(v8 + 8) = a1;
  *v7 = a1;
  _InterlockedIncrement(&dword_140C54CA8);
LABEL_8:
  sub_1406930D4();
  return v4;
}

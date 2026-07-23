/*
 * XREFs of sub_140A5B6E0 @ 0x140A5B6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A5B6E0(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v3 = a1 - 1;
  if ( !v3 )
  {
    qword_140C4BF58 = a3;
    return 0LL;
  }
  v4 = v3 - 6;
  if ( !v4 )
  {
    qword_140C4A260 = 0LL;
    qword_140C4A248 = (__int64)&qword_140C4A240;
    qword_140C4A240 = (__int64)&qword_140C4A240;
    qword_140C4A258 = (__int64)&qword_140C4A250;
    qword_140C4A250 = (__int64)&qword_140C4A250;
    return 0LL;
  }
  v5 = v4 - 8;
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 - 2;
  if ( !v6 )
    goto LABEL_10;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_11:
    dword_140C54B8C = 2;
    return 0LL;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    qword_140C4BF58 = 0LL;
    return 0LL;
  }
  if ( v8 == 1 )
LABEL_10:
    dword_140C54B8C = 1;
  return 0LL;
}

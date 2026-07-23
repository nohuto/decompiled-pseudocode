/*
 * XREFs of sub_140A5A5D0 @ 0x140A5A5D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403CE36C @ 0x1403CE36C (sub_1403CE36C.c)
 *     sub_140B1D7D0 @ 0x140B1D7D0 (sub_140B1D7D0.c)
 *     sub_140B1D878 @ 0x140B1D878 (sub_140B1D878.c)
 *     sub_140B1DF88 @ 0x140B1DF88 (sub_140B1DF88.c)
 */

__int64 __fastcall sub_140A5A5D0(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v3 = 0;
  v4 = a1 - 4;
  if ( !v4 )
    return v3;
  v5 = v4 - 3;
  if ( !v5 )
  {
    qword_140C4E280 = 0LL;
    qword_140C4BC98 = (__int64)&qword_140C4BC90;
    qword_140C4BC90 = (__int64)&qword_140C4BC90;
    qword_140C4E278 = (__int64)&qword_140C4E270;
    qword_140C4E270 = (__int64)&qword_140C4E270;
    qword_140C4E258 = (__int64)&qword_140C4E250;
    qword_140C4E250 = (__int64)&qword_140C4E250;
    qword_140C4BD50 = 0LL;
    dword_140C4BD58 = 0;
    return v3;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return (unsigned int)sub_140B1D7D0(a3);
  v7 = v6 - 1;
  if ( !v7 )
    return v3;
  v8 = v7 - 16;
  if ( !v8 )
    return (unsigned int)sub_140B1D878();
  v9 = v8 - 2;
  if ( !v9 )
  {
    sub_140B1DF88();
    return v3;
  }
  if ( v9 == 2 )
    return (unsigned int)sub_1403CE36C();
  return v3;
}

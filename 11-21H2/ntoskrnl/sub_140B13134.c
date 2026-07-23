/*
 * XREFs of sub_140B13134 @ 0x140B13134
 * Callers:
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140B13134(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    do
    {
      v4 = v2[16];
      v5 = (_QWORD *)*v2;
      if ( v4 )
        sub_14042A5E0(v4, *((unsigned __int16 *)v2 + 60));
      v6 = v2[5];
      if ( v6 )
        sub_14042A5E0(v6, *((unsigned __int16 *)v2 + 17));
      v7 = v2[3];
      if ( v7 )
        sub_14042A5E0(v7, *((unsigned __int16 *)v2 + 9));
      result = sub_14042A5E0(v2, 144LL);
      v2 = v5;
    }
    while ( v5 != a2 );
  }
  return result;
}

/*
 * XREFs of sub_140A862F0 @ 0x140A862F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A83778 @ 0x140A83778 (sub_140A83778.c)
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 */

__int64 __fastcall sub_140A862F0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v5; // rsi
  unsigned int v6; // ebp
  int v7; // edi
  int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rax

  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( !qword_140D57758 )
    return 3221225473LL;
  v8 = sub_14042A5E0(a1, a2);
  if ( v8 >= 0 )
  {
    v9 = sub_140A88430(v7);
    if ( v9 )
    {
      if ( (_DWORD)v5 )
      {
        do
        {
          if ( *(_BYTE *)(v9 + 33) || (v10 = sub_140A872C8(v9, v6)) == 0 )
          {
            if ( !*a4 )
              *a4 = -559026163LL;
          }
          else
          {
            *(_QWORD *)(v10 + 48) = *a4;
            *a4 = v10;
          }
          sub_140A83778(v9, v6, 1);
          a4 += 2;
          --v5;
        }
        while ( v5 );
      }
    }
  }
  return (unsigned int)v8;
}

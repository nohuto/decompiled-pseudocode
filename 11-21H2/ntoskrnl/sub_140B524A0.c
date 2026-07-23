/*
 * XREFs of sub_140B524A0 @ 0x140B524A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140248F48 @ 0x140248F48 (sub_140248F48.c)
 */

__int64 __fastcall sub_140B524A0(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // edi
  int v7; // eax
  __int64 v8; // rax

  if ( (a2[1] & 1) != 0 )
  {
    v4 = *a2;
    if ( !*a2 )
      return 0LL;
    v5 = (unsigned __int64)a2 ^ v4;
  }
  else
  {
    v5 = *a2;
    v4 = *a2;
  }
  if ( v5 )
  {
    if ( (a2[1] & 1) != 0 && v4 )
      v4 ^= (unsigned __int64)a2;
    v6 = a2[1] & 1;
    if ( v4 )
    {
      do
      {
        v7 = sub_140248F48(a3, v4);
        if ( v7 >= 0 )
        {
          if ( v7 <= 0 )
            break;
          v8 = *(_QWORD *)(v4 + 8);
        }
        else
        {
          v8 = *(_QWORD *)v4;
        }
        if ( v6 && v8 )
          v4 ^= v8;
        else
          v4 = v8;
      }
      while ( v4 );
      if ( v4 )
      {
        a3[1] = v4;
        return 1LL;
      }
    }
  }
  return 0LL;
}

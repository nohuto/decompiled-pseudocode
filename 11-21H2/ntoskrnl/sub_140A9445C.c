/*
 * XREFs of sub_140A9445C @ 0x140A9445C
 * Callers:
 *     sub_140A94324 @ 0x140A94324 (sub_140A94324.c)
 * Callees:
 *     sub_140590A00 @ 0x140590A00 (sub_140590A00.c)
 */

__int64 __fastcall sub_140A9445C(__int64 **a1, _QWORD *a2)
{
  __int64 *i; // rax
  unsigned int v4; // r9d
  _QWORD *v5; // rdx
  int v6; // r8d
  unsigned int v7; // r8d

  for ( i = *a1; ; i = (__int64 *)*i )
  {
    v7 = 0;
    if ( i == (__int64 *)a1 )
      break;
    v4 = *((_DWORD *)i + 6);
    v5 = i + 4;
    v6 = 0;
    if ( v4 )
    {
      while ( *a2 != *v5 )
      {
        v5 += 2;
        if ( ++v6 >= v4 )
          goto LABEL_5;
      }
      sub_140590A00((ULONG_PTR)a2, v5[1]);
      return 1;
    }
LABEL_5:
    ;
  }
  return v7;
}

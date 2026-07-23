/*
 * XREFs of sub_14080D110 @ 0x14080D110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409994F8 @ 0x1409994F8 (sub_1409994F8.c)
 */

__int64 __fastcall sub_14080D110(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // eax
  bool v7; // zf

  v3 = 0x47A0704A6FE69556LL - *a1;
  if ( *a1 == 0x47A0704A6FE69556LL )
    v3 = 0x47DA6F938DC2248FLL - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( byte_140C5AC3C )
    {
      if ( byte_140C23FA8 )
      {
        byte_140C23FA8 = 0;
        v7 = v5 == 0;
        if ( v5 )
          return v4;
      }
      else
      {
        if ( (_DWORD)qword_140C227C4 || byte_140C547B8 )
        {
          byte_140C23FA8 = 1;
          return v4;
        }
        v7 = v5 == 0;
      }
      LOBYTE(a1) = !v7;
      sub_1409994F8(a1);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v4;
}

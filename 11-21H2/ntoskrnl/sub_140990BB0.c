/*
 * XREFs of sub_140990BB0 @ 0x140990BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140253DB4 @ 0x140253DB4 (sub_140253DB4.c)
 *     sub_1409909A4 @ 0x1409909A4 (sub_1409909A4.c)
 */

__int64 sub_140990BB0()
{
  unsigned __int16 *v0; // rbx
  unsigned __int16 *i; // rax
  unsigned __int16 *v2; // rax

  _InterlockedExchange(&dword_140C22040, 0);
  sub_140253DB4(1);
  v0 = (unsigned __int16 *)qword_140C46278;
  for ( i = (unsigned __int16 *)*((_QWORD *)qword_140C46278 + 1); i; i = (unsigned __int16 *)*((_QWORD *)i + 1) )
    v0 = i;
  while ( v0 != qword_140C46278 )
  {
    sub_1409909A4((__int64)v0, v0 + 20, v0 + 28, *((_DWORD *)v0 + 39));
    v2 = *(unsigned __int16 **)v0;
    if ( *(_QWORD *)v0 )
    {
      do
      {
        v0 = v2;
        v2 = (unsigned __int16 *)*((_QWORD *)v2 + 1);
      }
      while ( v2 );
    }
    else
    {
      v0 = (unsigned __int16 *)*((_QWORD *)v0 + 2);
    }
  }
  return sub_140253DB4(0);
}

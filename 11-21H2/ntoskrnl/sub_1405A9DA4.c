/*
 * XREFs of sub_1405A9DA4 @ 0x1405A9DA4
 * Callers:
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PMDL __fastcall sub_1405A9DA4(__int64 a1)
{
  PMDL result; // rax
  _QWORD *p_Next; // rbx
  _QWORD *v4; // rcx
  struct _MDL *Next; // rcx

  result = MemoryDescriptorList;
  p_Next = 0LL;
  while ( result )
  {
    p_Next = &result->Next;
    result = result->Next;
  }
  while ( p_Next )
  {
    sub_14042A5E0(a1, p_Next[3]);
    result = (PMDL)p_Next[1];
    v4 = p_Next;
    if ( result )
    {
      Next = result->Next;
      p_Next = (_QWORD *)p_Next[1];
      if ( result->Next )
      {
        do
        {
          result = Next->Next;
          p_Next = &Next->Next;
          Next = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        p_Next = (_QWORD *)(p_Next[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !p_Next || (_QWORD *)*p_Next == v4 )
          break;
        v4 = p_Next;
      }
    }
  }
  return result;
}

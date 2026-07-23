/*
 * XREFs of sub_140A6A8C0 @ 0x140A6A8C0
 * Callers:
 *     sub_14038A168 @ 0x14038A168 (sub_14038A168.c)
 * Callees:
 *     sub_14038F830 @ 0x14038F830 (sub_14038F830.c)
 */

PMDL __fastcall sub_140A6A8C0(__int64 a1)
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
    sub_14038F830(a1, p_Next[3], p_Next[4]);
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

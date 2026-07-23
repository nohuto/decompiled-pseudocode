/*
 * XREFs of sub_1409DB3FC @ 0x1409DB3FC
 * Callers:
 *     sub_1409DA868 @ 0x1409DA868 (sub_1409DA868.c)
 * Callees:
 *     sub_140816288 @ 0x140816288 (sub_140816288.c)
 */

__int64 sub_1409DB3FC()
{
  __int64 v0; // rbx
  __int32 v1; // esi
  __int32 i; // ebp
  __int64 v3; // rdi
  __int64 result; // rax

  v0 = 0LL;
  v1 = _InterlockedExchange(&dword_140C18E94, dword_140C18E94);
  for ( i = _InterlockedExchange(&dword_140C18E98, dword_140C18E98);
        (unsigned int)v0 < dword_140C18E80;
        v0 = (unsigned int)(v0 + 1) )
  {
    v3 = qword_140C16E80[v0];
    if ( *(_BYTE *)(v3 + 37) && v1 )
      result = sub_140816288(v1, v3, 0, 0LL, 0, 0);
    if ( *(_BYTE *)(v3 + 69) )
    {
      if ( i )
        result = sub_140816288(i, v3, 0, 0LL, 0, 0);
    }
  }
  return result;
}

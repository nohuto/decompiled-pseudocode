/*
 * XREFs of sub_14090985C @ 0x14090985C
 * Callers:
 *     sub_14051D9E4 @ 0x14051D9E4 (sub_14051D9E4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14090985C(__int64 a1)
{
  char v1; // r8
  int v2; // eax
  unsigned int v3; // r9d

  v1 = 0;
  if ( *(_WORD *)(a1 + 2) == 1 )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        if ( *(_QWORD *)(a1 + 48) )
        {
          if ( *(_QWORD *)(a1 + 56) )
          {
            if ( *(_QWORD *)(a1 + 64) )
            {
              if ( *(_QWORD *)(a1 + 24) )
              {
                v2 = *(unsigned __int16 *)(a1 + 20);
                if ( (_WORD)v2 )
                {
                  v3 = *(_DWORD *)(a1 + 16);
                  if ( v3 >= dword_140C4B06C )
                    return v3 + v2 <= dword_140C4B0F8 + dword_140C4B06C;
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}

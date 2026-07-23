/*
 * XREFs of sub_140B0D254 @ 0x140B0D254
 * Callers:
 *     sub_140B0CFC8 @ 0x140B0CFC8 (sub_140B0CFC8.c)
 * Callees:
 *     sub_140B0D360 @ 0x140B0D360 (sub_140B0D360.c)
 */

__int64 __fastcall sub_140B0D254(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v4; // bl
  __int64 v5; // r11
  unsigned int v6; // eax
  unsigned __int8 **v7; // rdx
  unsigned __int8 *v8; // rcx
  int v9; // r10d
  int v10; // r8d

  v4 = 0;
  v5 = sub_140B0D360(a1, "Strings", a2);
  if ( v5 )
  {
    v6 = 0;
    if ( dword_140C54CF0 )
    {
      v7 = (unsigned __int8 **)qword_140C54D00;
      while ( 1 )
      {
        v8 = *v7;
        do
        {
          v9 = v8[v5 - (_QWORD)*v7];
          v10 = *v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ++v6;
        ++v7;
        if ( v6 >= dword_140C54CF0 )
          goto LABEL_11;
      }
      v4 = 1;
    }
LABEL_11:
    *a3 = v6;
  }
  return v4 == 0 ? 0xC0000225 : 0;
}

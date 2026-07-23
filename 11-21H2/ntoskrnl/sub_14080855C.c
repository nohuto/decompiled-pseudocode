/*
 * XREFs of sub_14080855C @ 0x14080855C
 * Callers:
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 *     sub_140790B38 @ 0x140790B38 (sub_140790B38.c)
 * Callees:
 *     sub_1409F4CD8 @ 0x1409F4CD8 (sub_1409F4CD8.c)
 *     sub_1409F4DA0 @ 0x1409F4DA0 (sub_1409F4DA0.c)
 */

char __fastcall sub_14080855C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r11
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _DWORD *v12; // rcx
  unsigned int v13; // edx

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    v9 = 0;
    if ( !*a4 || (v4 = sub_1409F4CD8(a1, *a4)) != 0 )
    {
      v10 = a4[1];
      if ( v10 || a4[2] )
        v4 = sub_1409F4DA0(a1, v10, a4[2]);
      if ( v4 )
      {
        if ( a3 )
        {
          v4 = 0;
          v12 = (_DWORD *)(a2 + *(_QWORD *)a3);
          v13 = *(_DWORD *)(a3 + 8) >> 2;
          if ( v13 )
          {
            while ( *v12 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 1088LL) )
            {
              ++v9;
              ++v12;
              if ( v9 >= v13 )
                return v4;
            }
            return 1;
          }
        }
      }
    }
  }
  return v4;
}

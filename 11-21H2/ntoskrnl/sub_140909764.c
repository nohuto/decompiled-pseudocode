/*
 * XREFs of sub_140909764 @ 0x140909764
 * Callers:
 *     sub_140909800 @ 0x140909800 (sub_140909800.c)
 * Callees:
 *     sub_1403B4C50 @ 0x1403B4C50 (sub_1403B4C50.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 *     sub_14051D24C @ 0x14051D24C (sub_14051D24C.c)
 */

__int64 __fastcall sub_140909764(int *a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx

  if ( byte_140C54BB0 )
  {
    v2 = a1[14];
    if ( sub_1403B4C50(*a1, v2) )
    {
      v3 = sub_14051D24C(v2);
      if ( v3 )
      {
        v1 = sub_14042A5E0(*(_QWORD *)(v3 + 32), v2);
        if ( v1 == -1073741802 )
          v1 = 0;
        LOBYTE(v4) = 1;
        sub_1404593D2(v3, v4);
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v1;
}

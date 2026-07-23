/*
 * XREFs of sub_14051DAC0 @ 0x14051DAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 *     sub_14051D114 @ 0x14051D114 (sub_14051D114.c)
 *     sub_14051D320 @ 0x14051D320 (sub_14051D320.c)
 */

__int64 __fastcall sub_14051DAC0(int a1, int a2, __int64 a3)
{
  void *v3; // rax
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx

  v3 = (void *)sub_14051D320(a3, a1, a2);
  v4 = (__int64)v3;
  if ( v3 )
  {
    v5 = sub_14051D114(v3);
    if ( v5 < 0 )
    {
      LOBYTE(v6) = 1;
      sub_1404593D2(v4, v6);
    }
  }
  else
  {
    return (unsigned int)-1073700575;
  }
  return (unsigned int)v5;
}

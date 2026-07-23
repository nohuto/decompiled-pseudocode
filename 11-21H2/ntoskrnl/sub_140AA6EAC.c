/*
 * XREFs of sub_140AA6EAC @ 0x140AA6EAC
 * Callers:
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 * Callees:
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140AA71A0 @ 0x140AA71A0 (sub_140AA71A0.c)
 */

__int64 __fastcall sub_140AA6EAC(int a1, ULONG_PTR a2, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // r11d
  __int64 v6; // rbx
  ULONG_PTR v9; // r11
  __int64 result; // rax
  ULONG_PTR v11; // rdx

  v4 = *a3;
  v6 = a1;
  if ( *a3 )
  {
    if ( v4 == 541542722 )
    {
      if ( (dword_140C29FC0 & 1) != 0 )
        sub_140A8C924(0xC2u, 0x9CuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4);
      *a3 = 828662082;
    }
    else if ( !(unsigned int)sub_140AA71A0(v4) )
    {
      if ( (dword_140C29FC0 & 1) != 0 )
        sub_140A8C924(0xC2u, 0x9DuLL, v9, v6 & 0xFFFFFFFFFFFFFF7FuLL, a4);
      *a3 = 845439298;
    }
  }
  else
  {
    if ( (dword_140C29FC0 & 1) != 0 )
      sub_140A8C924(0xC2u, 0x9BuLL, a1 & 0xFFFFFFFFFFFFFF7FuLL, a2, a4);
    *a3 = 811884866;
  }
  if ( !a2 && (dword_140C29FC0 & 1) != 0 )
    sub_140A8C924(0xC4u, 0LL, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, 0LL);
  result = KeGetCurrentIrql();
  if ( (v6 & 1) != 0 )
  {
    if ( (unsigned __int8)result > 1u )
    {
      result = (unsigned int)dword_140C29FC0;
      if ( (dword_140C29FC0 & 1) != 0 )
      {
        v11 = 1LL;
        return sub_140A8C924(0xC4u, v11, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, a2);
      }
    }
  }
  else
  {
    v11 = 2LL;
    if ( (unsigned __int8)result > 2u )
    {
      result = (unsigned int)dword_140C29FC0;
      if ( (dword_140C29FC0 & 1) != 0 )
        return sub_140A8C924(0xC4u, v11, KeGetCurrentIrql(), v6 & 0xFFFFFFFFFFFFFF7FuLL, a2);
    }
  }
  return result;
}

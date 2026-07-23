/*
 * XREFs of sub_140863DD8 @ 0x140863DD8
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_14091191C @ 0x14091191C (sub_14091191C.c)
 */

__int64 __fastcall sub_140863DD8(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  unsigned int v4; // ebx

  if ( qword_140C02770 )
  {
    HIDWORD(a2) = 0;
    v3 = *(_DWORD *)(*(_QWORD *)(qword_140C02770 + 64) + 40LL) + 4096;
    LODWORD(a2) = 100 * v3 % (unsigned int)dword_140C54CC8;
    v4 = 100 * v3 / (unsigned int)dword_140C54CC8;
  }
  else
  {
    v4 = 0;
  }
  if ( !qword_140C54CB0 )
  {
    dword_140C54CC4 = 80;
    qword_140C54CB0 = (__int64)sub_140946B60;
    dword_140C54CC0 = 90;
    qword_140C54CB8 = a3;
    byte_140C54CAD = 1;
    if ( v4 >= 0x5A && (byte_140C54CAC = 1, (unsigned __int8)sub_14091191C(v4, a2)) )
      byte_140C54CAD = 0;
    else
      byte_140C54CAC = 0;
  }
  return v4;
}

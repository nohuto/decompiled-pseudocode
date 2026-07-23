/*
 * XREFs of sub_14090A644 @ 0x14090A644
 * Callers:
 *     sub_1407F8580 @ 0x1407F8580 (sub_1407F8580.c)
 * Callees:
 *     sub_14051D9E4 @ 0x14051D9E4 (sub_14051D9E4.c)
 *     sub_14090AC50 @ 0x14090AC50 (sub_14090AC50.c)
 */

__int64 __fastcall sub_14090A644(int a1, __int64 a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx

  v3 = a1 - 11;
  if ( !v3 )
    return (unsigned int)-1073741637;
  v4 = v3 - 2;
  if ( !v4 )
  {
    if ( (unsigned int)a2 < 0x58 )
      return (unsigned int)-1073741820;
    return (unsigned int)sub_14051D9E4();
  }
  v5 = v4 - 1;
  if ( !v5 )
    return (unsigned int)sub_14090AC50(a3, a2, 0LL);
  v6 = v5 - 2;
  if ( !v6 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      v7 = 0;
      dword_140C0CA30 = *a3 != 0;
      return v7;
    }
    return (unsigned int)-1073741820;
  }
  if ( v6 == 2 )
  {
    if ( (_DWORD)a2 == 4 )
    {
      v7 = 0;
      byte_140C4A1B0 = *a3 != 0;
      return v7;
    }
    return (unsigned int)-1073741820;
  }
  return (unsigned int)-1073741496;
}

/*
 * XREFs of sub_14054A8D0 @ 0x14054A8D0
 * Callers:
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 * Callees:
 *     sub_14054EB44 @ 0x14054EB44 (sub_14054EB44.c)
 */

__int64 __fastcall sub_14054A8D0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // r10d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  bool v10; // zf

  if ( (dword_140D068B8 & 2) == 0 )
    return 3221225659LL;
  v6 = 0;
  if ( !qword_140C48908 || !qword_140D05328 )
    return 3221225659LL;
  v7 = *(_QWORD *)(qword_140D05328 + 24);
  if ( (a1 & 2) == 0 )
  {
    v8 = *(_QWORD *)(qword_140D05328 + 88);
    if ( v7 <= v8 )
      return 3221225473LL;
    v7 -= v8;
  }
  v10 = byte_140D06888 == 0;
  *a2 = (v7
       + ((((v7 + 767) >> 9) + 511) >> 9)
       + ((v7 + 767) >> 9)
       + ((((((v7 + 767) >> 9) + 511) >> 9) + 511) >> 9)
       + 257) << 12;
  if ( v10 )
  {
    *a4 = (unsigned __int64)(unsigned int)dword_140C48918 << 12;
    *a3 = 0LL;
  }
  else
  {
    return (unsigned int)sub_14054EB44(a1, a3, a4);
  }
  return v6;
}

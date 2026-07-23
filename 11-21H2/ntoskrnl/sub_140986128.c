/*
 * XREFs of sub_140986128 @ 0x140986128
 * Callers:
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140986128(__int64 a1)
{
  int v1; // edx
  int v2; // ecx
  _DWORD *i; // rax

  v1 = 0;
  if ( !a1 )
    return 0;
  if ( (dword_140D05010 & 0x10) != 0 )
  {
    v2 = *(_DWORD *)(qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)]
                   + 192);
    for ( i = (_DWORD *)qword_140C25260; v2 != *i; ++i )
    {
      if ( (unsigned int)++v1 >= 0x10 )
        return 0;
    }
  }
  return 1;
}

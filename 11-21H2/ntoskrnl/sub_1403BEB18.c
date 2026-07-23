/*
 * XREFs of sub_1403BEB18 @ 0x1403BEB18
 * Callers:
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 */

__int64 sub_1403BEB18()
{
  char v0; // di
  __int64 v1; // rbx
  ULONG_PTR *v2; // rax
  int v3; // ecx

  v0 = byte_140C4E4B8;
  v1 = 0LL;
  if ( !byte_140C4E4B8 )
  {
    v2 = sub_1403ACEFC(8, 96, 24576, 3840, 0);
    if ( v2 )
      goto LABEL_8;
  }
  v2 = sub_1403ACEFC(11, 544, 0, 80, 0);
  if ( v2 )
    goto LABEL_8;
  if ( !v0 && !byte_140C4C679 && off_140C02520 != &off_1400032A0 )
  {
    v2 = sub_1403ACEFC(0, 33, 24576, 3840, 0);
    if ( v2 )
      goto LABEL_8;
  }
  v2 = sub_1403ACEFC(3, 352, 0, 0, 0);
  if ( v2 )
    goto LABEL_8;
  v2 = sub_1403ACEFC(3, 48, 0, 256, 0);
  if ( v2 )
    goto LABEL_8;
  v2 = sub_1403ACEFC(3, 96, 0, 3840, 0);
  if ( v2 )
    goto LABEL_8;
  v2 = sub_1403ACEFC(3, 48, 0, 3840, 0);
  if ( v2 )
    goto LABEL_8;
  v2 = sub_1403ACEFC(2, 304, 0, 0, 0);
  if ( v2 )
    goto LABEL_8;
  v2 = sub_1403ACEFC(6, 96, 0, 3840, 0);
  if ( v2 )
    goto LABEL_8;
  v2 = sub_1403ACEFC(0, 32864, 24576, 3840, 0);
  if ( v2 )
  {
    if ( v2[24] >= 0x7D0 )
      goto LABEL_8;
  }
  if ( (v2 = sub_1403ACEFC(0, 32816, 24576, 3840, 0)) != 0LL && v2[24] >= 0x7D0
    || (v2 = sub_1403ACEFC(0, 608, 57344, 0, 0)) != 0LL && v2[24] >= 0x7D0
    || (v2 = sub_1403ACEFC(0, 96, 57344, 3840, 0)) != 0LL && v2[24] >= 0x7D0
    || (v2 = sub_1403ACEFC(0, 48, 57344, 3840, 0)) != 0LL && v2[24] >= 0x7D0 )
  {
LABEL_8:
    v3 = *((_DWORD *)v2 + 56);
    if ( (v3 & 0x50) != 0 )
      return (unsigned __int64)v2 & -(__int64)((v3 & 0x20) != 0);
  }
  return v1;
}

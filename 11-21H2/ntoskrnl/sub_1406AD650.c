/*
 * XREFs of sub_1406AD650 @ 0x1406AD650
 * Callers:
 *     sub_14053E93C @ 0x14053E93C (sub_14053E93C.c)
 *     sub_1406C9FA0 @ 0x1406C9FA0 (sub_1406C9FA0.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14079B758 @ 0x14079B758 (sub_14079B758.c)
 *     sub_140914214 @ 0x140914214 (sub_140914214.c)
 *     sub_140B15E34 @ 0x140B15E34 (sub_140B15E34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406AD650(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 v2; // r8
  unsigned int v3; // r9d

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 >> 1;
  if ( v3 )
  {
    while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v2) <= 0xFFu )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v1 >>= 1;
  }
  return v1;
}

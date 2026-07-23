/*
 * XREFs of sub_140AA0E80 @ 0x140AA0E80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A8AD1C @ 0x140A8AD1C (sub_140A8AD1C.c)
 */

__int64 __fastcall sub_140AA0E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  int v5; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  v5 = sub_14042A5E0(a1, a2);
  if ( v5 >= 0 )
    sub_140A8AD1C(*a5, retaddr);
  return (unsigned int)v5;
}

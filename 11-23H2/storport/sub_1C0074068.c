/*
 * XREFs of sub_1C0074068 @ 0x1C0074068
 * Callers:
 *     sub_1C0073CD4 @ 0x1C0073CD4 (sub_1C0073CD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0074068(_BYTE *a1)
{
  _BYTE *v1; // rdx
  __int64 v2; // r8
  char *v3; // rcx
  char v4; // al
  _BYTE *v5; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = 16LL;
  v3 = (char *)("storport.sys" - a1);
  do
  {
    if ( v2 == -2147483630 )
      break;
    v4 = v1[(_QWORD)v3];
    if ( !v4 )
      break;
    *v1++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = v1 - 1;
  result = v2 == 0 ? 0x80000005 : 0;
  if ( v2 )
    v5 = v1;
  *v5 = 0;
  return result;
}

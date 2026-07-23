/*
 * XREFs of sub_1403D06E8 @ 0x1403D06E8
 * Callers:
 *     sub_14084D204 @ 0x14084D204 (sub_14084D204.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403D06E8(_WORD *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // r8
  char *v3; // rcx
  __int16 v4; // ax
  _WORD *v5; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = 31LL;
  v3 = (char *)((char *)L"\\DosDevices\\A:" - (char *)a1);
  do
  {
    if ( v2 == -2147483615 )
      break;
    v4 = *(_WORD *)((char *)v1 + (_QWORD)v3);
    if ( !v4 )
      break;
    *v1++ = v4;
    --v2;
  }
  while ( v2 );
  v5 = v1 - 1;
  result = v2 == 0 ? 0x8007007A : 0;
  if ( v2 )
    v5 = v1;
  *v5 = 0;
  return result;
}

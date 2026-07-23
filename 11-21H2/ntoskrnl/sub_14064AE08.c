/*
 * XREFs of sub_14064AE08 @ 0x14064AE08
 * Callers:
 *     sub_140218F84 @ 0x140218F84 (sub_140218F84.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14064AE08(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v2; // r10d
  int v3; // r11d
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // r9
  __int64 v7; // rcx
  int v8; // edx
  int v9; // r8d

  v2 = *a1;
  v3 = *a2;
  v4 = *a1;
  v5 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int16)v2 >= (unsigned __int16)v3 )
    v4 = *a2;
  v6 = (unsigned __int16 *)((char *)v5 + v4);
  if ( v5 >= v6 )
    return (unsigned int)(v2 - v3);
  v7 = *((_QWORD *)a2 + 1) - (_QWORD)v5;
  while ( 1 )
  {
    v8 = *v5;
    v9 = *(unsigned __int16 *)((char *)v5 + v7);
    if ( (_WORD)v8 != (_WORD)v9 )
      break;
    if ( ++v5 >= v6 )
      return (unsigned int)(v2 - v3);
  }
  return (unsigned int)(v8 - v9);
}

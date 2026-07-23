/*
 * XREFs of sub_140A339DC @ 0x140A339DC
 * Callers:
 *     sub_140A33D28 @ 0x140A33D28 (sub_140A33D28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A339DC(_DWORD *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // eax
  unsigned __int8 v6; // al
  int v7; // edx
  int v8; // r8d
  unsigned __int8 *v9; // r11
  int v10; // eax

  v3 = 1;
  if ( !a3 )
    return (unsigned int)-2;
  v5 = *a2;
  if ( (_BYTE)v5 == 0x80 )
    return (unsigned int)-3;
  if ( (v5 & 0x80u) == 0 )
  {
    *a1 = v5;
    return v3;
  }
  v6 = v5 & 0x7F;
  if ( v6 > 4u )
    return (unsigned int)-1;
  v7 = v6;
  if ( v6 >= a3 )
    return (unsigned int)-2;
  *a1 = 0;
  v8 = v6;
  v9 = a2 + 1;
  if ( v6 )
  {
    do
    {
      --v8;
      v10 = *v9++;
      *a1 = v10 + (*a1 << 8);
    }
    while ( v8 > 0 );
  }
  return (unsigned int)(v7 + 1);
}

/*
 * XREFs of sub_140AA71A0 @ 0x140AA71A0
 * Callers:
 *     sub_140AA6EAC @ 0x140AA6EAC (sub_140AA6EAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AA71A0(unsigned int a1)
{
  unsigned int v1; // r8d
  char *v2; // r9
  unsigned int v4; // ecx
  unsigned int v5; // edx
  char v7; // [rsp+10h] [rbp+10h] BYREF

  v1 = 0;
  v2 = &v7;
  v4 = 0;
  while ( 1 )
  {
    v5 = a1 >> v4;
    if ( (unsigned __int8)((a1 >> v4) - 97) <= 0x19u )
      LOBYTE(v5) = v5 - 32;
    if ( (unsigned __int8)(v5 - 48) <= 9u || (unsigned __int8)(v5 - 65) <= 0x19u )
      break;
    v4 += 8;
    ++v2;
    if ( v4 >= 0x20 )
      return v1;
  }
  return 1;
}

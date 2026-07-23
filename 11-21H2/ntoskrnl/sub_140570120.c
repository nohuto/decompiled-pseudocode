/*
 * XREFs of sub_140570120 @ 0x140570120
 * Callers:
 *     sub_14029B210 @ 0x14029B210 (sub_14029B210.c)
 *     sub_14038C0C8 @ 0x14038C0C8 (sub_14038C0C8.c)
 *     sub_140570220 @ 0x140570220 (sub_140570220.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140570120(unsigned __int64 *a1)
{
  char v1; // r10
  int v2; // r9d
  unsigned __int64 *v3; // r8
  unsigned __int64 *v4; // r8
  unsigned int i; // r11d
  unsigned __int64 result; // rax

  v1 = 0;
  if ( dword_140D050FC )
  {
    v2 = dword_140D06964;
    v3 = a1 + 1;
    if ( (dword_140D06964 & 2) != 0 )
    {
      __writemsr(0x560u, *v3);
      v3 = a1 + 2;
    }
    if ( (dword_140D06964 & 4) != 0 )
      __writemsr(0x561u, *v3++);
    __writemsr(0x571u, *v3);
    v4 = v3 + 1;
    if ( (dword_140D06964 & 0x10) != 0 )
      __writemsr(0x572u, *v4++);
    for ( i = 1409; i < 0x589; i += 2 )
    {
      if ( !_bittest(&v2, (unsigned __int8)(v1 + 5)) )
        break;
      __writemsr(i - 1, *v4);
      __writemsr(i, v4[1]);
      v4 += 2;
      ++v1;
    }
    result = *a1;
    __writemsr(0x570u, *a1);
  }
  return result;
}

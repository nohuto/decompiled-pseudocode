/*
 * XREFs of RtlpSanitizeContext @ 0x180020430
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E1EC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E680 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x18001FF80 (RtlUnwindEx.c)
 *     RtlVirtualUnwind2 @ 0x180111010 (RtlVirtualUnwind2.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpSanitizeContext(_DWORD *a1)
{
  int v1; // r8d
  __int64 v3; // rax
  int v4; // r9d
  unsigned int v5; // r11d
  unsigned int v6; // r10d
  signed int v7; // ecx

  v1 = a1[12];
  if ( (v1 & 0x27FFFF80) != 0x10000
    && (v1 & 0x7FFFF20) != 0x100000
    && (v1 & 0x7FFFFF0) != 0x200000
    && (v1 & 0x7FFFFE0) != 0x400000 )
  {
    goto LABEL_18;
  }
  LOBYTE(v3) = (v1 & 0x10040) != 65600;
  if ( (((v1 & 0x100040) != 1048640) & (unsigned __int8)v3) == 0 && !MEMORY[0x7FFE03D8]
    || (LOBYTE(v3) = v1 & 0x80, (v1 & 0x100080) == 0x100080) )
  {
    a1[12] = 1048587;
    return v3;
  }
  if ( (v1 & 0x100000) == 0 )
LABEL_18:
    a1[12] = v1 & 0xF800001F | 0x100000;
  LODWORD(v3) = a1[12] & 0x100040;
  if ( (_DWORD)v3 == 1048640 )
  {
    LODWORD(v3) = a1[308];
    v4 = a1[312];
    if ( (int)v3 > v4
      || (v5 = a1[309], v6 = a1[313], v7 = v5 + v3, LOBYTE(v3) = v6 + v4, v7 < (int)(v6 + v4))
      || v5 < 0x530
      || a1[311] != 1232
      || v6 < 0x40
      || (v3 = (int)a1[310], (_DWORD *)((char *)a1 + v3 + 1232) != a1) )
    {
      a1[12] &= ~0x40u;
    }
  }
  return v3;
}

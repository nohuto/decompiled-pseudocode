/*
 * XREFs of ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01EA564
 * Callers:
 *     xxxKELocaleProcs @ 0x1C00AF9AC (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x1C003D9F0 (xxxKeyEventEx.c)
 */

void __fastcall xxxAltGr(struct tagKE *a1)
{
  __int16 v2; // cx
  unsigned int v3; // r10d
  unsigned __int16 v4; // cx

  v2 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v2 == 0xA5 )
  {
    v3 = (unsigned __int16)(*((_WORD *)a1 + 8) + 3) <= 1u;
    if ( v2 < 0 )
    {
      gbAltGrDown = 0;
      if ( (byte_1C0295788 & 0x10) != 0 )
        return;
      v4 = -32606;
    }
    else
    {
      if ( (byte_1C0295764 & 4) != 0 )
        return;
      gbAltGrDown = 1;
      v4 = 162;
    }
    xxxKeyEventEx(v4, 0x21Du, *((_DWORD *)a1 + 1), 0LL, *((void **)a1 + 1), (unsigned __int16 *)a1 + 8, v3, 0, 0LL, 0LL);
  }
}

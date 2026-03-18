/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x1800EA408
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  char v4; // dl
  char v5; // r9
  char v6; // dl
  char v7; // cl
  char v8; // dl
  char v9; // cl
  int v10; // eax

  v4 = *((_BYTE *)this + 192) & 0xFE | (*((_BYTE *)a3 + 8) != 0);
  *((_BYTE *)this + 192) = v4;
  v5 = v4 & 0xFB | (*((_BYTE *)a3 + 9) != 0 ? 4 : 0);
  *((_BYTE *)this + 192) = v5;
  v6 = v5 & 0xF7 | (*((_BYTE *)a3 + 10) != 0 ? 8 : 0);
  *((_BYTE *)this + 192) = v6;
  v7 = v6 & 0xEF | (*((_BYTE *)a3 + 11) != 0 ? 0x10 : 0);
  v8 = v7 ^ (v7 ^ (2 * v7)) & 0x20;
  *((_BYTE *)this + 192) = v8;
  *((_BYTE *)this + 192) = v8 & 0xBF | (*((_BYTE *)a3 + 12) != 0 ? 0x40 : 0);
  v9 = *((_BYTE *)this + 1616) & 0xFB | (*((_BYTE *)a3 + 13) != 0 ? 4 : 0);
  *((_BYTE *)this + 1616) = v9;
  v10 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 49) = v10;
  *((_DWORD *)this + 424) = v10;
  *((_BYTE *)this + 1616) = v9 & 0xF7 | (v10 != 2 ? 0 : 8);
  return 0LL;
}

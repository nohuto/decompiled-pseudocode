/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x1C029F7CC
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009050C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C010C8C8 (UpdateSpriteArea.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00907C4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00920F0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // r8
  __int64 v5; // rax
  __int64 *v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  v4 = v7[0];
  if ( v7[0] )
  {
    if ( !*((_DWORD *)v7[0] + 8) )
    {
      v5 = v7[0][6];
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2096) & 0x400) != 0 )
        {
          *((_DWORD *)v7[0] + 9) &= ~0x4000u;
          v3 = 1;
          *((_DWORD *)v7[0] + 9) &= ~1u;
          *((_DWORD *)v7[0] + 8) = 1;
          if ( a2 )
            *(_DWORD *)(v7[0][62] + 112) &= ~0x800u;
          v4 = v7[0];
        }
      }
    }
    if ( v4 )
      XDCOBJ::vAltUnlockFast(v7);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  return v3;
}

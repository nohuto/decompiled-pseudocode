/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C00A672C
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00103C8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x1C00A6444 (UpdateSpriteArea.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00A6820 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // edi
  __int64 *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 *v10; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)&v10, a1);
  v4 = v10;
  *a2 = 0;
  if ( v4 )
  {
    if ( *((_DWORD *)v4 + 8) == 1 )
    {
      v5 = v4[6];
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2096) & 0x400) != 0 )
        {
          *((_DWORD *)v4 + 9) |= 0x4000u;
          v3 = 1;
          *((_DWORD *)v10 + 9) |= 1u;
          *((_DWORD *)v10 + 8) = 0;
          v4 = v10;
          v6 = v10[62];
          v7 = *(_DWORD *)(v6 + 112);
          if ( (v7 & 0x800) == 0 && !*(_WORD *)(v6 + 100) )
          {
            *a2 = 1;
            *(_DWORD *)(v6 + 112) = v7 | 0x800;
            v4 = v10;
          }
        }
      }
    }
    if ( v4 )
    {
      v12 = 0;
      v8 = *v4;
      HmgDecrementShareReferenceCountEx(v4, &v12);
      if ( v12 )
        GrepDeleteDC(v8, 0x2000000LL);
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v11);
  return v3;
}

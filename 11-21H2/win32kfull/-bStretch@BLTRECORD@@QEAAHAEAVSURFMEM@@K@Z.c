/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028DB08
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C008DA00 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C008E7D8 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bStretch(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  unsigned int v3; // ebx
  int v7; // edx
  int v8; // ecx
  LONG v9; // edx
  LONG v10; // r8d
  struct SURFACE *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  POINTL pptlHTOrg; // [rsp+60h] [rbp-9h] BYREF
  int v16; // [rsp+68h] [rbp-1h] BYREF
  __int64 v17; // [rsp+6Ch] [rbp+3h]
  int v18; // [rsp+74h] [rbp+Bh]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  int v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+84h] [rbp+1Bh]
  RECTL prclDest; // [rsp+88h] [rbp+1Fh] BYREF

  v3 = 0;
  v16 = 1;
  v17 = 0LL;
  v7 = this[10].top - this[9].bottom;
  LODWORD(v17) = this[10].left - this[9].right;
  HIDWORD(v17) = v7;
  v18 = 0;
  v21 = 0;
  v19 = 0LL;
  v8 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  prclDest.bottom = v9;
  v20 = v8;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.right = v10;
  BLTRECORD::vMirror((BLTRECORD *)this, (struct ERECTL *)&prclDest);
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)&v16, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    pptlHTOrg = 0LL;
    v11 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    if ( EngStretchBlt(
           (SURFOBJ *)(v12 + 24),
           (SURFOBJ *)(((unsigned __int64)v11 + 24) & -(__int64)(v11 != 0LL)),
           0LL,
           0LL,
           0LL,
           0LL,
           &pptlHTOrg,
           &prclDest,
           this + 12,
           0LL,
           a3) )
    {
      this[13].bottom &= ~0x20000u;
      v13 = *(_QWORD *)&this[5].left;
      this[12].left = 0;
      this[12].top = 0;
      if ( v13 )
        DEC_SHARE_REF_CNT(v13);
      v3 = 1;
      *(_QWORD *)&this[5].left = *(_QWORD *)a2;
    }
  }
  return v3;
}

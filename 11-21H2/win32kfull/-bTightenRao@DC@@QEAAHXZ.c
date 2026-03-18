/*
 * XREFs of ?bTightenRao@DC@@QEAAHXZ @ 0x1C008DC2C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C008DA1C (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0138E34 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C0148150 (NtGdiOffsetClipRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bTightenRao(DC *this)
{
  unsigned int v1; // edi
  struct _RECTL *v3; // rsi
  _DWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _BOOL8 v10; // rcx
  _BOOL8 v11; // rax
  int v12; // r14d
  int v13; // eax
  _DWORD *v14; // rdx
  _DWORD *v15; // rcx
  _DWORD *v16; // [rsp+28h] [rbp-29h] BYREF
  __int64 v17; // [rsp+30h] [rbp-21h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-19h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-9h] BYREF
  __int128 v20; // [rsp+50h] [rbp-1h] BYREF
  _DWORD *v21; // [rsp+60h] [rbp+Fh] BYREF
  int v22; // [rsp+68h] [rbp+17h]
  __int64 v23; // [rsp+70h] [rbp+1Fh]
  __int128 v24; // [rsp+78h] [rbp+27h]

  v1 = 0;
  if ( !*((_QWORD *)this + 143) )
    return v1;
  v3 = (struct _RECTL *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  v1 = 1;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  v4 = (_DWORD *)*((_QWORD *)this + 143);
  v5 = *((_QWORD *)this + 141);
  v6 = *((_QWORD *)this + 21);
  v7 = *((_QWORD *)this + 20);
  v19 = v4;
  if ( !(v5 | v6 | v7) )
  {
    if ( *((_QWORD *)this + 144) )
    {
      v16 = (_DWORD *)*((_QWORD *)this + 144);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
      *((_QWORD *)this + 144) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v19, v3);
    goto LABEL_6;
  }
  v23 = v7;
  v24 = 0LL;
  v10 = v7 != 0;
  v11 = v10 + 1;
  *(&v23 + v10) = v6;
  if ( !v6 )
    v11 = v10;
  v12 = v11 + 1;
  *(&v23 + v11) = v5;
  if ( !v5 )
    v12 = v11;
  v16 = (_DWORD *)*((_QWORD *)this + 144);
  if ( !v16 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v21);
    v15 = 0LL;
    if ( v21 )
      v15 = v21;
    v16 = v15;
    if ( v22 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
  }
  if ( !v16 )
    goto LABEL_47;
  if ( v12 == 1 )
  {
    v17 = v23;
    v13 = RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v17);
  }
  else
  {
    if ( v12 != 2 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
      v17 = v23;
      v20 = v24;
      if ( !v18[0]
        || !RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v20, 1)
        || !RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)v18, (struct RGNOBJ *)((char *)&v20 + 8), 1) )
      {
        v1 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
      if ( !v1 )
        goto LABEL_48;
      goto LABEL_20;
    }
    *(_QWORD *)&v20 = v23;
    v17 = v24;
    v13 = RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v17, 1);
  }
  if ( !v13 )
  {
LABEL_47:
    v1 = 0;
    goto LABEL_48;
  }
LABEL_20:
  v14 = v16;
  v14[7] = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v16, (struct _POINTL *)this + 129) )
    goto LABEL_47;
  if ( v19[20] == 56 && v19[24] <= v16[24] && v19[26] >= v16[26] && v19[25] <= v16[25] && v19[27] >= v16[27] )
  {
    *((_QWORD *)this + 144) = v16;
    RGNOBJ::vGetSubRect((RGNOBJ *)&v16, v3);
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
    if ( v18[0]
      && RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v16, 1)
      && RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)v18) )
    {
      *((_QWORD *)this + 144) = v16;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v16, v3);
    }
    else
    {
      v1 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
  }
  if ( !v1 )
  {
LABEL_48:
    *((_QWORD *)this + 144) = 0LL;
    if ( v16 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  }
LABEL_6:
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 143));
  v8 = *((_QWORD *)this + 62);
  if ( v8 && (*(_DWORD *)(v8 + 116) & 0x800) != 0 )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  return v1;
}

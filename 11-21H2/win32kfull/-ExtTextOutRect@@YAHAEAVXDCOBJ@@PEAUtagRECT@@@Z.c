/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C002CA18
 * Callers:
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C002C7F8 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     GreExtTextOutRect @ 0x1C008AD4C (GreExtTextOutRect.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C002CDE8 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *this, struct tagRECT *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  LONG left; // edx
  LONG top; // r9d
  LONG right; // r8d
  LONG bottom; // r10d
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r12
  BOOL v17; // r15d
  int v18; // edx
  int v19; // r9d
  __int64 v20; // rcx
  int v21; // eax
  struct REGION *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  struct ECLIPOBJ *v26; // rdx
  LONG v29; // eax
  LONG v30; // eax
  __int128 *v31; // r13
  __int128 v32; // [rsp+60h] [rbp-19h] BYREF
  __int64 v33; // [rsp+70h] [rbp-9h] BYREF
  int v34; // [rsp+7Ch] [rbp+3h]
  __int128 v35; // [rsp+80h] [rbp+7h] BYREF

  if ( !*(_QWORD *)this || (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x10000) != 0 )
    return 0;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v33, this, 0x80000204);
  v4 = 1;
  v5 = *(_DWORD *)(v33 + 32);
  if ( (v5 & 1) == 0 )
    return (unsigned int)GreExtTextOutWLocked(
                           this,
                           0,
                           0,
                           2u,
                           a2,
                           0LL,
                           0,
                           0LL,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 213LL),
                           0LL,
                           0);
  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  LODWORD(v35) = a2->left;
  *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(right, top);
  HIDWORD(v35) = bottom;
  if ( (v5 & 0x43) != 0x43 )
  {
    bCvtPts1(v33, &v35, 2LL);
    bottom = HIDWORD(v35);
    right = DWORD2(v35);
    top = DWORD1(v35);
    left = v35;
  }
  if ( v34 )
  {
    ++left;
    ++right;
    LODWORD(v35) = left;
    DWORD2(v35) = right;
  }
  if ( left > right )
  {
    v29 = left;
    left = right;
    LODWORD(v35) = right;
    right = v29;
    DWORD2(v35) = v29;
  }
  if ( top > bottom )
  {
    v30 = top;
    DWORD1(v35) = bottom;
    top = bottom;
    HIDWORD(v35) = v30;
    bottom = v30;
  }
  if ( left == right || top == bottom )
    return v4;
  v10 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate(this, (struct ERECTL *)&v35);
    v10 = *(_QWORD *)this;
  }
  v11 = *(_QWORD *)(v10 + 496);
  if ( !v11 )
    return v4;
  if ( ((*(_DWORD *)(v11 + 116) & 8) != 0 || *(_QWORD *)(v11 + 224))
    && _bittest16((const signed __int16 *)(v11 + 102), 9u)
    || !(unsigned int)_SurfaceAccessCheck((struct SURFACE *)v11) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v12 = *(_QWORD *)this;
  v13 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1LL;
  v14 = *(int *)(*(_QWORD *)this + 8 * v13 + 1016);
  if ( (unsigned __int64)(v14 + (int)v35 + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v14 + SDWORD2(v35) + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v15 = *(int *)(v12 + 8 * v13 + 1020);
    if ( (unsigned __int64)(v15 + SDWORD1(v35) + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v15 + SHIDWORD(v35) + 0x80000000LL) <= 0xFFFFFFFF )
    {
      *(_QWORD *)&v32 = 0LL;
      LODWORD(v35) = v14 + v35;
      v16 = 0LL;
      v17 = 0;
      v18 = DWORD2(v35) + *(_DWORD *)(v12 + 8 * v13 + 1016);
      v19 = *(_DWORD *)(v12 + 8 * v13 + 1020) + DWORD1(v35);
      *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(v18, v19);
      v20 = (unsigned int)(HIDWORD(v35) + *(_DWORD *)(v12 + 8 * v13 + 1020));
      HIDWORD(v35) = v20;
      if ( (int)v35 >= *(_DWORD *)(v12 + 1000) && v18 <= *(_DWORD *)(v12 + 1008) && v19 >= *(_DWORD *)(v12 + 1004) )
        v17 = (int)v20 <= *(_DWORD *)(v12 + 1012);
      v21 = *(_DWORD *)(v12 + 520);
      if ( (v21 & 1) != 0 && (v21 & 2) == 0 )
      {
        v31 = &v35;
        do
        {
          if ( !(unsigned int)bFToL(v20, (char *)&v35 + 4 * (unsigned int)v16, 6LL) )
            break;
          LODWORD(v16) = v16 + 1;
          v31 = (__int128 *)((char *)v31 + 4);
        }
        while ( (unsigned int)v16 < 4 );
        v16 = v32;
      }
      if ( !v17 )
      {
        v16 = v12 + 1768;
        v22 = XDCOBJ::prgnEffRao(this);
        XCLIPOBJ::vSetup((XCLIPOBJ *)(v12 + 1768), v22, (struct ERECTL *)&v35, 2);
        v35 = *(_OWORD *)(v12 + 1772);
        if ( ERECTL::bEmpty((ERECTL *)&v35) )
          return v4;
      }
      v23 = *(_QWORD *)this;
      v24 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      v25 = *(_QWORD *)this + 1608LL;
      v26 = (struct ECLIPOBJ *)*(unsigned int *)(v24 + 152);
      if ( (((unsigned __int8)v26 | *(_BYTE *)(*(_QWORD *)this + 316LL)) & 8) != 0 )
      {
        *(_DWORD *)(v24 + 152) = (unsigned int)v26 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~8u;
        EBRUSHOBJ::vInitBrush(
          v25,
          *(_QWORD *)this,
          gpbrBackground,
          *(_QWORD *)(*(_QWORD *)this + 88LL),
          *(_QWORD *)(v11 + 128),
          v11,
          (*(_DWORD *)(*(_QWORD *)this + 72LL) >> 15) & 1);
        v23 = *(_QWORD *)this;
      }
      if ( (*(_DWORD *)(v23 + 36) & 0xE0) != 0 && (*(_DWORD *)(v25 + 120) & 0x100) == 0 )
      {
        v32 = v35;
        XDCOBJ::vAccumulateTight(this, v26, (struct ERECTL *)&v32);
      }
      ++*(_DWORD *)(v11 + 92);
      if ( (*(_DWORD *)(v11 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v11 + 48) + 2808LL))(
                               v11 + 24,
                               0LL,
                               0LL,
                               v16,
                               0LL,
                               &v35,
                               0LL,
                               0LL,
                               v25,
                               *(_QWORD *)this + 1192LL,
                               61680);
      else
        return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                               v11 + 24,
                               0LL,
                               0LL,
                               v16,
                               0LL,
                               &v35,
                               0LL,
                               0LL,
                               v25,
                               *(_QWORD *)this + 1192LL,
                               61680);
    }
  }
  return 0LL;
}

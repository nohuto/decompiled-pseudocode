/*
 * XREFs of GreSetBoundsRect @ 0x1C008BB64
 * Callers:
 *     NtGdiSetBoundsRect @ 0x1C008BB00 (NtGdiSetBoundsRect.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C008E110 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C008E834 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  unsigned int v5; // ebx
  int v6; // r12d
  ERECTL *v7; // rsi
  int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  int v13; // eax
  int v14; // r13d
  __int128 v15; // xmm0
  LONG v16; // ecx
  LONG v17; // eax
  LONG v18; // edx
  LONG v19; // r8d
  LONG v20; // eax
  LONG v21; // r9d
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // edx
  LONG v28; // ecx
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // r9d
  LONG v32; // eax
  LONG v33; // eax
  int v34; // eax
  LONG v35; // eax
  int v36; // eax
  _QWORD v38[2]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v40[32]; // [rsp+40h] [rbp-29h] BYREF
  struct _POINTL v41[2]; // [rsp+60h] [rbp-9h] BYREF
  LONG x; // [rsp+70h] [rbp+7h]
  unsigned int y; // [rsp+74h] [rbp+Bh]
  LONG v44; // [rsp+78h] [rbp+Fh]
  LONG v45; // [rsp+7Ch] [rbp+13h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  if ( !v39[0] )
    goto LABEL_91;
  v6 = 0;
  if ( a3 < 0 )
  {
    v7 = (ERECTL *)(v39[0] + 1064LL);
    v8 = 32;
  }
  else if ( (a3 & 0x4000) != 0 )
  {
    v7 = (ERECTL *)(v39[0] + 1080LL);
    v8 = 64;
  }
  else
  {
    v7 = (ERECTL *)(v39[0] + 1096LL);
    v8 = 128;
  }
  v9 = ERECTL::bWrapped(v7);
  if ( (_DWORD)v11 )
    v13 = v9 != 0 ? 5 : 7;
  else
    v13 = v9 != 0 ? 9 : 11;
  v14 = v13 | v12;
  if ( (a3 & 1) != 0 )
  {
    *((_DWORD *)v7 + 1) = 0x7FFFFFFF;
    *(_DWORD *)v7 = 0x7FFFFFFF;
    *((_DWORD *)v7 + 3) = 0x80000000;
    *((_DWORD *)v7 + 2) = 0x80000000;
    v10 = v39[0];
  }
  if ( (a3 & 2) != 0 )
  {
    if ( !v12 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v39, 0x204u);
      if ( (*(_DWORD *)(v38[0] + 32LL) & 1) == 0 )
      {
        v15 = *(_OWORD *)&a2->x;
        x = a2->x;
        y = a2[1].y;
        v44 = a2[1].x;
        v45 = a2->y;
        *(_OWORD *)&v41[0].x = v15;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, v41, 4LL) )
        {
          v16 = v41[1].x;
          v17 = v41[1].x;
          v18 = v41[0].x;
          v19 = x;
          if ( v41[0].x < v41[1].x )
            v17 = v41[0].x;
          if ( v17 >= x )
          {
            v20 = x;
          }
          else
          {
            v20 = v41[1].x;
            if ( v41[0].x < v41[1].x )
              v20 = v41[0].x;
          }
          v21 = v44;
          if ( v20 >= v44 )
          {
            v23 = v44;
          }
          else
          {
            v22 = v41[1].x;
            if ( v41[0].x < v41[1].x )
              v22 = v41[0].x;
            if ( v22 >= x )
            {
              v23 = x;
            }
            else
            {
              v23 = v41[1].x;
              if ( v41[0].x < v41[1].x )
                v23 = v41[0].x;
            }
          }
          a2->x = v23;
          v24 = v16;
          if ( v18 > v16 )
            v24 = v18;
          if ( v24 <= v19 )
          {
            v25 = v19;
          }
          else
          {
            v25 = v16;
            if ( v18 > v16 )
              v25 = v18;
          }
          if ( v25 <= v21 )
          {
            v16 = v21;
          }
          else
          {
            v26 = v16;
            if ( v18 > v16 )
              v26 = v18;
            if ( v26 <= v19 )
            {
              v16 = v19;
            }
            else if ( v18 > v16 )
            {
              v16 = v18;
            }
          }
          v27 = v41[0].y;
          v11 = y;
          a2[1].x = v16;
          v28 = v41[1].y;
          v29 = v41[1].y;
          if ( v27 < v41[1].y )
            v29 = v27;
          if ( v29 >= (int)v11 )
          {
            v30 = v11;
          }
          else
          {
            v30 = v41[1].y;
            if ( v27 < v41[1].y )
              v30 = v27;
          }
          v31 = v45;
          if ( v30 >= v45 )
          {
            v33 = v45;
          }
          else
          {
            v32 = v41[1].y;
            if ( v27 < v41[1].y )
              v32 = v27;
            if ( v32 >= (int)v11 )
            {
              v33 = v11;
            }
            else
            {
              v33 = v41[1].y;
              if ( v27 < v41[1].y )
                v33 = v27;
            }
          }
          a2->y = v33;
          v34 = v28;
          if ( v27 > v28 )
            v34 = v27;
          if ( v34 <= (int)v11 )
          {
            v35 = v11;
          }
          else
          {
            v35 = v28;
            if ( v27 > v28 )
              v35 = v27;
          }
          if ( v35 <= v31 )
          {
            v28 = v31;
          }
          else
          {
            v36 = v28;
            if ( v27 > v28 )
              v36 = v27;
            if ( v36 <= (int)v11 )
            {
              v28 = v11;
            }
            else if ( v27 > v28 )
            {
              v28 = v27;
            }
          }
          a2[1].y = v28;
          goto LABEL_84;
        }
        goto LABEL_18;
      }
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, a2, 2LL) )
LABEL_18:
        v6 = 1;
    }
LABEL_84:
    ERECTL::operator|=(v7, a2, v11);
    if ( v6 )
      goto LABEL_91;
    v10 = v39[0];
  }
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)(v10 + 36) |= v8;
    v10 = v39[0];
  }
  if ( (a3 & 8) != 0 )
    *(_DWORD *)(v10 + 36) &= ~v8;
  v5 = v14;
LABEL_91:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v39);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v40);
  return v5;
}

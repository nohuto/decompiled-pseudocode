/*
 * XREFs of GreGetAppClipBox @ 0x1C00889A8
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C0088940 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, struct _POINTL *a2)
{
  unsigned int v3; // esi
  int v5; // ebx
  __int64 v6; // rdx
  LONG x; // r9d
  LONG y; // r10d
  char *v9; // rcx
  LONG v10; // r8d
  LONG v11; // r9d
  LONG v12; // r10d
  LONG v13; // ecx
  int v14; // eax
  LONG v15; // edx
  LONG v16; // eax
  LONG v17; // r9d
  LONG v18; // r11d
  LONG v19; // eax
  LONG v20; // ebx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // ecx
  LONG v24; // r8d
  bool v25; // cc
  LONG v26; // r10d
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // ecx
  __int64 v40; // [rsp+30h] [rbp-D0h] BYREF
  int v41; // [rsp+3Ch] [rbp-C4h]
  DC *v42[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v43[32]; // [rsp+50h] [rbp-B0h] BYREF
  struct REGION *v44; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v45[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v46[80]; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v47; // [rsp+F0h] [rbp-10h] BYREF
  LONG v48; // [rsp+F8h] [rbp-8h]
  LONG v49; // [rsp+FCh] [rbp-4h]
  LONG v50; // [rsp+100h] [rbp+0h]
  LONG v51; // [rsp+104h] [rbp+4h]
  LONG v52; // [rsp+108h] [rbp+8h]
  LONG v53; // [rsp+10Ch] [rbp+Ch]

  v3 = 0;
  v42[0] = 0LL;
  v42[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v43);
  XDCOBJ::vLock((XDCOBJ *)v42, a1);
  if ( !v42[0] )
  {
    EngSetLastError(6u);
    v5 = 0;
    goto LABEL_92;
  }
  if ( *((_WORD *)v42[0] + 6) == 1 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v46);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v45, (struct XDCOBJ *)v42, 1);
    if ( (v45[24] & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v42) )
      {
        *a2 = 0LL;
        v5 = 3;
        a2[1] = 0LL;
LABEL_90:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v45);
LABEL_92:
        v3 = v5;
        goto LABEL_93;
      }
LABEL_85:
      v5 = 0;
      goto LABEL_90;
    }
    v44 = XDCOBJ::prgnEffRao(v42);
    *(_OWORD *)&a2->x = *((_OWORD *)v44 + 6);
    if ( a2->x >= a2[1].x || a2->y >= a2[1].y )
    {
      *a2 = 0LL;
      v5 = 1;
      a2[1] = 0LL;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v40, (struct XDCOBJ *)v42, 0x80000402);
      v6 = v40;
      if ( !v40 )
        goto LABEL_85;
      x = a2[1].x;
      y = a2->y;
      v9 = (char *)v42[0] + 1024;
      if ( (*((_DWORD *)v42[0] + 10) & 1) == 0 )
        v9 = (char *)v42[0] + 1016;
      v10 = a2->x - *(_DWORD *)v9;
      a2->x = v10;
      v11 = x - *(_DWORD *)v9;
      a2[1].x = v11;
      v12 = y - *((_DWORD *)v9 + 1);
      a2->y = v12;
      v13 = a2[1].y - *((_DWORD *)v9 + 1);
      a2[1].y = v13;
      if ( (*(_DWORD *)(v6 + 32) & 1) != 0 )
      {
        v14 = EXFORMOBJ::bXform((EXFORMOBJ *)&v40, a2, 2uLL);
        if ( v41 )
        {
          ++a2->x;
          ++a2[1].x;
        }
        if ( v14 )
          v5 = RGNOBJ::iComplexity((RGNOBJ *)&v44);
        else
          v5 = 0;
      }
      else
      {
        v47.x = v10;
        v50 = v10;
        v51 = v13;
        v53 = v13;
        v47.y = v12;
        v48 = v11;
        v49 = v12;
        v52 = v11;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v40, &v47, 4uLL);
        v15 = v48;
        v16 = v48;
        v17 = v47.x;
        v18 = v50;
        if ( v47.x < v48 )
          v16 = v47.x;
        if ( v16 >= v50 )
        {
          v19 = v50;
        }
        else
        {
          v19 = v48;
          if ( v47.x < v48 )
            v19 = v47.x;
        }
        v20 = v52;
        if ( v19 >= v52 )
        {
          v22 = v52;
        }
        else
        {
          v21 = v48;
          if ( v47.x < v48 )
            v21 = v47.x;
          if ( v21 >= v50 )
          {
            v22 = v50;
          }
          else
          {
            v22 = v48;
            if ( v47.x < v48 )
              v22 = v47.x;
          }
        }
        v23 = v49;
        v24 = v47.y;
        v25 = v47.y < v49;
        v26 = v51;
        a2->x = v22;
        v27 = v23;
        if ( v25 )
          v27 = v24;
        if ( v27 >= v26 )
        {
          v28 = v26;
        }
        else
        {
          v28 = v23;
          if ( v24 < v23 )
            v28 = v24;
        }
        if ( v28 >= v53 )
        {
          v30 = v53;
        }
        else
        {
          v29 = v23;
          if ( v24 < v23 )
            v29 = v24;
          if ( v29 >= v26 )
          {
            v30 = v26;
          }
          else
          {
            v30 = v23;
            if ( v24 < v23 )
              v30 = v24;
          }
        }
        a2->y = v30;
        v31 = v15;
        if ( v17 > v15 )
          v31 = v17;
        if ( v31 <= v18 )
        {
          v32 = v18;
        }
        else
        {
          v32 = v15;
          if ( v17 > v15 )
            v32 = v17;
        }
        if ( v32 <= v20 )
        {
          v15 = v20;
        }
        else
        {
          v33 = v15;
          if ( v17 > v15 )
            v33 = v17;
          if ( v33 <= v18 )
          {
            v15 = v18;
          }
          else if ( v17 > v15 )
          {
            v15 = v17;
          }
        }
        a2[1].x = v15;
        v34 = v23;
        if ( v24 > v23 )
          v34 = v24;
        if ( v34 <= v26 )
        {
          v35 = v26;
        }
        else
        {
          v35 = v23;
          if ( v24 > v23 )
            v35 = v24;
        }
        if ( v35 <= v53 )
        {
          v23 = v53;
        }
        else
        {
          v36 = v23;
          if ( v24 > v23 )
            v36 = v24;
          if ( v36 <= v26 )
          {
            v23 = v26;
          }
          else if ( v24 > v23 )
          {
            v23 = v24;
          }
        }
        a2[1].y = v23;
        v5 = 3;
      }
      if ( !v5 )
        goto LABEL_90;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v42[0] + 122) + 108LL) & 1) != 0 )
    {
      v37 = a2->x;
      v38 = a2[1].x;
      if ( a2->x > v38 )
      {
        a2->x = v38;
        a2[1].x = v37;
      }
    }
    goto LABEL_90;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v42[0] + 6));
  EngSetLastError(6u);
LABEL_93:
  DCOBJ::~DCOBJ((DCOBJ *)v42);
  return v3;
}

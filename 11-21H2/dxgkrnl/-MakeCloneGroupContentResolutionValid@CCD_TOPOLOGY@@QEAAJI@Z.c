/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01D774C
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01D7494 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01D4710 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r13
  _DWORD *v3; // rbx
  char v4; // r15
  unsigned int v6; // r12d
  UINT v7; // edi
  UINT cy; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v10; // r8d
  _DWORD *v11; // rcx
  int v12; // ecx
  unsigned int v14; // r12d
  UINT cx; // r13d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rbx
  struct _LUID *v18; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v19; // r11
  int IsVirtualizationDisabledForTarget; // eax
  unsigned int v21; // r15d
  unsigned int v22; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned int v28; // ebx
  int *v29; // rax
  int *v30; // rcx
  signed int v31; // r9d
  __int64 v32; // r8
  __int128 v33; // rax
  __int64 v34; // rax
  UINT v35; // edx
  UINT v36; // eax
  struct _D3DKMDT_2DREGION v37; // [rsp+98h] [rbp+58h] BYREF

  v2 = 1;
  v3 = 0LL;
  v4 = 1;
  v6 = 0;
  v37.cx = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v7 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_46;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( *((_DWORD *)PathDescriptor + 46) == v37.cx )
      break;
LABEL_12:
    if ( ++v6 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      if ( !v2 )
        return 0LL;
LABEL_46:
      v27 = 0x3FFFFFFF00000001LL;
      v28 = 0;
      if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
        goto LABEL_63;
      cx = v37.cx;
      while ( 1 )
      {
        v29 = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, v28);
        v30 = v29;
        if ( v29[46] == cx )
        {
          if ( v4 )
          {
            v31 = v29[40];
            v32 = v29[41];
            v33 = v29[38] * (__int64)v29[39] - v32 * v31;
            v34 = (*((_QWORD *)&v33 + 1) ^ v33) - *((_QWORD *)&v33 + 1);
            if ( v34 < v27 )
            {
              v7 = v31;
              cy = v32;
              v27 = v34;
            }
          }
          else
          {
            v35 = v29[40];
            if ( v29[38] == v35 )
            {
              v36 = v29[41];
              if ( v30[39] == v36 )
              {
                v7 = v35;
                cy = v36;
                goto LABEL_25;
              }
            }
          }
        }
        if ( ++v28 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_25;
      }
    }
  }
  if ( (*(_QWORD *)PathDescriptor & 0x20000LL) == 0 )
    goto LABEL_15;
  v10 = *((_DWORD *)PathDescriptor + 38);
  v11 = (_DWORD *)((char *)PathDescriptor + 152);
  if ( v3 )
    v11 = v3;
  v3 = v11;
  if ( v10 )
  {
    v12 = *((_DWORD *)PathDescriptor + 39);
    if ( v12 )
    {
      if ( *v3 == v10 && v3[1] == v12 )
      {
        if ( (*(_QWORD *)PathDescriptor & 0x20000000000000LL) != 0 )
        {
          if ( v10 == *((_DWORD *)PathDescriptor + 40) && v12 == *((_DWORD *)PathDescriptor + 41) )
            v4 = 0;
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_12;
      }
    }
  }
  *((_DWORD *)PathDescriptor + 65) |= 0x400u;
LABEL_15:
  v14 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_63;
  cx = v37.cx;
  while ( 2 )
  {
    v16 = CCD_TOPOLOGY::GetPathDescriptor(this, v14);
    v17 = v16;
    if ( *((_DWORD *)v16 + 46) != cx )
    {
LABEL_24:
      if ( ++v14 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        goto LABEL_25;
      continue;
    }
    break;
  }
  v37 = 0LL;
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v16, 1, &v37);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        v18[2],
                                        v18[3].HighPart,
                                        (__int64)v19,
                                        v19,
                                        v19,
                                        (__int64)v19);
  v21 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    WdLogSingleEntry1(2LL, IsVirtualizationDisabledForTarget);
    return v21;
  }
  if ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v17 + 22)) )
  {
    if ( v37.cx < v7 )
    {
      v7 = v37.cx;
      *((_DWORD *)v17 + 65) |= 0x4000u;
    }
    if ( v37.cy < cy )
    {
      cy = v37.cy;
      *((_DWORD *)v17 + 65) |= 0x4000u;
    }
    goto LABEL_24;
  }
  if ( (*(_DWORD *)v17 & 0x20000) != 0 )
  {
    v7 = *((_DWORD *)v17 + 38);
    cy = *((_DWORD *)v17 + 39);
  }
  else
  {
    v7 = v37.cx;
    cy = v37.cy;
  }
LABEL_25:
  if ( !v7 || !cy || v7 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_63;
  v22 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v23 = CCD_TOPOLOGY::GetPathDescriptor(this, v22);
    v24 = v23;
    if ( *((_DWORD *)v23 + 46) != cx
      || (v25 = *(_QWORD *)v23, (*(_QWORD *)v23 & 0x20000LL) != 0)
      && *((_DWORD *)v23 + 38) == v7
      && *((_DWORD *)v23 + 39) == cy )
    {
LABEL_35:
      if ( ++v22 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v23 + 2) & 0x20000) == 0 )
  {
    v26 = *((_QWORD *)v23 + 31);
    *((_DWORD *)v24 + 38) = v7;
    *((_DWORD *)v24 + 39) = cy;
    *(_QWORD *)v24 = v25 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v26 )
    {
      *(_DWORD *)(v26 + 172) = v7;
      *(_DWORD *)(*((_QWORD *)v24 + 31) + 176LL) = cy;
    }
    goto LABEL_35;
  }
  if ( (*(_QWORD *)v23 & 0x20000LL) == 0 )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)v24 + 65) |= 0x80000000;
LABEL_63:
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), v7, cy);
  return 3221225473LL;
}

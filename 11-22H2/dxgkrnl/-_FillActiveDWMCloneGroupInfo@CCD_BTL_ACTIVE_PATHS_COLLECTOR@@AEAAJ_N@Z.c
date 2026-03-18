/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C017F9FC
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C017F8E8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01E872C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0003930 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0180FCC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C019F020 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // r13
  unsigned int i; // edi
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v11; // rax
  unsigned int v12; // eax
  SESSION_VIEW *v14; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v16; // rdx
  unsigned int j; // ebp
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rdx
  __int64 v21; // rax
  unsigned int k; // ebp
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct _LUID *v25; // rax
  __int64 v26; // r9
  CCD_TOPOLOGY *v27; // rdi
  __int64 v28; // rbx
  __int64 CurrentProcess; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( !v4 || !*(_WORD *)(v4 + 20) )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v6 = *((_QWORD *)Current + 11);
    if ( v6 )
    {
      for ( i = 0; ; ++i )
      {
        v8 = *((_QWORD *)*this + 8);
        if ( v8 )
          v9 = *(_WORD *)(v8 + 20);
        else
          v9 = 0;
        if ( i >= v9 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v11 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v11 | 0x4000000000000LL;
          if ( (v11 & 0x1000000000LL) != 0 )
          {
            v12 = i | 0xFE5A0000;
            goto LABEL_13;
          }
          if ( v11 >= 0 )
          {
            v12 = i | 0xFE580000;
LABEL_13:
            *((_DWORD *)PathDescriptor + 46) = v12;
            continue;
          }
          v14 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 35);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v14 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v14);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v16 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v6 + 296))(
                      (__int64)PathDescriptor + 16,
                      v16,
                      (__int64)PathDescriptor + 144) )
                WdLogSingleEntry5(
                  2LL,
                  *((int *)PathDescriptor + 5),
                  *((unsigned int *)PathDescriptor + 4),
                  *((unsigned int *)PathDescriptor + 6),
                  *this,
                  *((_QWORD *)*this + 8));
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v18 = *((_QWORD *)*this + 8);
                v19 = v18 ? *(_WORD *)(v18 + 20) : 0;
                if ( j >= v19 )
                  break;
                v20 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v21 = *(_QWORD *)v20;
                if ( (*(_QWORD *)v20 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 35) == *((_QWORD *)v20 + 35) )
                {
                  *((_DWORD *)v20 + 46) = i | 0xFE590000;
                  *(_QWORD *)v20 = v21 | 0x4000000000800LL;
                  *((_QWORD *)v20 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( a2 )
          {
            for ( k = i; ; ++k )
            {
              v23 = *((_QWORD *)*this + 8);
              v24 = v23 ? *(_WORD *)(v23 + 20) : 0;
              if ( k >= v24 )
                break;
              v25 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v25 + 2, v25[3].LowPart) )
              {
                *(_QWORD *)v26 |= 0x4000000000000uLL;
                *(_DWORD *)(v26 + 184) = i | 0xFE580000;
              }
            }
          }
          else
          {
            WdLogSingleEntry4(
              2LL,
              *((int *)PathDescriptor + 5),
              *((unsigned int *)PathDescriptor + 4),
              *((unsigned int *)PathDescriptor + 6),
              *((unsigned int *)PathDescriptor + 7));
          }
        }
      }
    }
  }
  v27 = *this;
  v28 = *((_QWORD *)*this + 8);
  CurrentProcess = PsGetCurrentProcess();
  WdLogSingleEntry3(2LL, CurrentProcess, v27, v28);
  return 3221225473LL;
}

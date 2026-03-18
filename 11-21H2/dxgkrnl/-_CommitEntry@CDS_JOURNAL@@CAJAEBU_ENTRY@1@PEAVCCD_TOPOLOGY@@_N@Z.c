/*
 * XREFs of ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01D6840
 * Callers:
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C01B8454 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01D3EC0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01EE858 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0019D70 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C0019E30 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D5B10 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C03A9CF8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03AC838 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_CommitEntry(const struct CDS_JOURNAL::_ENTRY *a1, struct CCD_TOPOLOGY *this)
{
  char IsPrimaryClonePathByModality; // bp
  int v3; // r12d
  unsigned int v4; // r14d
  unsigned int i; // esi
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  unsigned int v11; // esi
  unsigned int j; // ebp
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // r15
  char v17; // al
  char v18; // r11
  __int64 result; // rax

  IsPrimaryClonePathByModality = 0;
  v3 = -1;
  v4 = -1;
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(_WORD *)(v8 + 20) : 0;
    if ( i >= v9 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 7) == *((_DWORD *)a1 + 8)
      && *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a1 + 5)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a1 + 6) )
    {
      v4 = *((_DWORD *)PathDescriptor + 6);
      v3 = *((_DWORD *)PathDescriptor + 46);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
      break;
    }
  }
  v11 = 0;
  if ( CDS_JOURNAL::_IsUnextend(a1) )
  {
    if ( v4 == -1 || !IsPrimaryClonePathByModality )
    {
LABEL_28:
      WdLogSingleEntry5(
        3LL,
        *((int *)a1 + 6),
        *((unsigned int *)a1 + 5),
        *((unsigned int *)a1 + 8),
        this,
        *((_QWORD *)this + 8));
      return 0LL;
    }
    result = CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a1 + 20), v4);
  }
  else
  {
    if ( v4 != -1 )
    {
      if ( IsPrimaryClonePathByModality )
      {
        for ( j = 0; ; ++j )
        {
          v13 = *((_QWORD *)this + 8);
          v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
          if ( j >= v14 )
            break;
          v15 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
          v16 = v15;
          if ( v3 == *((_DWORD *)v15 + 46) )
          {
            CCD_TOPOLOGY::IsMatchingSource(v15, (const struct _LUID *)((char *)a1 + 20), v4);
            v17 = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
            CDS_JOURNAL::_FillPathDescriptor(v16, a1, v17, v18, 0LL);
          }
        }
        return v11;
      }
      goto LABEL_28;
    }
    result = CDS_JOURNAL::_ExtendTopology(this, a1);
  }
  v11 = result;
  if ( (int)result >= 0 )
    return v11;
  return result;
}

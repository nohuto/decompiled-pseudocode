/*
 * XREFs of ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C01B8454
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C0019E30 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C01C2D34 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01D6840 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::CommitTo(CDS_JOURNAL *this, struct CCD_TOPOLOGY *a2, __int64 a3, unsigned __int16 *a4)
{
  const struct CDS_JOURNAL::_ENTRY **v4; // r14
  __int64 v9; // rdi
  const struct CDS_JOURNAL::_ENTRY *i; // rbx
  __int64 v11; // rsi
  const struct CDS_JOURNAL::_ENTRY *v12; // rcx
  bool v13; // r8
  const struct CDS_JOURNAL::_ENTRY *v14; // rcx
  bool v15; // r8
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  __int16 v19; // r9
  const struct CDS_JOURNAL::_ENTRY *v20; // r11
  __int16 v21; // r10
  bool IsUnextend; // al
  __int16 v23; // r10
  const struct CDS_JOURNAL::_ENTRY **v24; // r11
  __int16 v25; // cx
  unsigned __int16 v26; // r9
  __int64 v27; // r8
  unsigned __int16 v28; // ax

  v4 = (const struct CDS_JOURNAL::_ENTRY **)((char *)this + 24);
  if ( *v4 == (const struct CDS_JOURNAL::_ENTRY *)v4 )
    return 0LL;
  LODWORD(v9) = -1073741823;
  if ( *(_DWORD *)this == 1 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this);
    if ( (_DWORD)v9 == -1073741266 )
    {
      WdLogSingleEntry3(3LL, this, a2, *((_QWORD *)a2 + 8));
      return 0LL;
    }
  }
  i = *v4;
  v11 = 0LL;
  if ( *v4 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
  {
    do
    {
      if ( CDS_JOURNAL::_IsUnextend(i) )
      {
        v17 = CDS_JOURNAL::_CommitEntry(v12, a2, v13);
        v9 = v17;
        if ( v17 < 0 )
        {
LABEL_17:
          WdLogSingleEntry4(2LL, v9, i, a2, *((_QWORD *)a2 + 8));
          return (unsigned int)v9;
        }
      }
      i = *(const struct CDS_JOURNAL::_ENTRY **)i;
    }
    while ( i != (const struct CDS_JOURNAL::_ENTRY *)v4 );
    for ( i = *v4; i != (const struct CDS_JOURNAL::_ENTRY *)v4; i = *(const struct CDS_JOURNAL::_ENTRY **)i )
    {
      if ( !CDS_JOURNAL::_IsUnextend(i) )
      {
        v16 = CDS_JOURNAL::_CommitEntry(v14, a2, v15);
        v9 = v16;
        if ( v16 == -1073741789 )
        {
          v18 = *((_QWORD *)a2 + 8);
          if ( v18 )
            v19 = *(_WORD *)(v18 + 20);
          else
            v19 = 0;
          v20 = *v4;
          v21 = 0;
          while ( v20 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
          {
            IsUnextend = CDS_JOURNAL::_IsUnextend(v20);
            v20 = *v24;
            v25 = v23 + 1;
            if ( IsUnextend )
              v25 = v23;
            v21 = v25;
          }
          v26 = v21 + v19;
          if ( a4 )
            *a4 = v26;
          v27 = *((_QWORD *)a2 + 8);
          if ( v27 )
          {
            v28 = *(_WORD *)(v27 + 20);
            v11 = *(unsigned __int16 *)(v27 + 22);
          }
          else
          {
            v28 = 0;
          }
          WdLogSingleEntry5(3LL, a2, v27, v28, v11, v26);
          return 3221225507LL;
        }
        if ( v16 < 0 )
          goto LABEL_17;
      }
    }
  }
  return (unsigned int)v9;
}

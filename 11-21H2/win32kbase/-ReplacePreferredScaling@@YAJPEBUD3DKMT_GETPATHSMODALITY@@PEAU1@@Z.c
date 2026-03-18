/*
 * XREFs of ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C0172724
 * Callers:
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C017318C (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0170504 (-ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall ReplacePreferredScaling(
        const struct D3DKMT_GETPATHSMODALITY *a1,
        struct D3DKMT_GETPATHSMODALITY *a2)
{
  unsigned int i; // esi
  char *v5; // rbx
  unsigned int v6; // edx
  char *v7; // rdi
  __int64 v9; // rax

  for ( i = 0; i < *((unsigned __int16 *)a2 + 10); ++i )
  {
    v5 = (char *)a2 + 296 * i;
    if ( (*((_DWORD *)v5 + 14) & 0x10000) == 0 )
      WdLogSingleEntry0(1LL);
    if ( *((_DWORD *)v5 + 48) == 253 )
    {
      if ( _bittest64((const signed __int64 *)v5 + 7, 0x24u) )
      {
        ConvertPathPreferredScalingToAdapterDefault((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v5 + 56));
      }
      else
      {
        if ( v5 == (char *)-72LL )
          goto LABEL_14;
        if ( !a1 )
          goto LABEL_14;
        v6 = 0;
        if ( !*((_WORD *)a1 + 10) )
          goto LABEL_14;
        while ( 1 )
        {
          v7 = (char *)a1 + 296 * v6 + 56;
          if ( *((_DWORD *)v7 + 7) == *((_DWORD *)v5 + 21)
            && *((_DWORD *)v7 + 4) == *((_DWORD *)v5 + 18)
            && *((_DWORD *)v7 + 5) == *((_DWORD *)v5 + 19) )
          {
            break;
          }
          if ( ++v6 >= *((unsigned __int16 *)a1 + 10) )
            goto LABEL_14;
        }
        if ( !v7 )
        {
LABEL_14:
          WdLogSingleEntry2(2LL, *((unsigned int *)v5 + 20), *((unsigned int *)v5 + 21));
          return 3221225473LL;
        }
        v9 = *(_QWORD *)v7;
        if ( (*(_QWORD *)v7 & 0x40000000000LL) == 0 )
        {
          WdLogSingleEntry0(1LL);
          v9 = *(_QWORD *)v7;
        }
        if ( (v9 & 0x10000) == 0 )
          WdLogSingleEntry0(1LL);
        *((_DWORD *)v5 + 48) = *((_DWORD *)v7 + 34);
        *((_DWORD *)v5 + 49) = *((_DWORD *)v7 + 35);
        *((_QWORD *)v5 + 7) |= 0x40000010000uLL;
      }
    }
  }
  return 0LL;
}

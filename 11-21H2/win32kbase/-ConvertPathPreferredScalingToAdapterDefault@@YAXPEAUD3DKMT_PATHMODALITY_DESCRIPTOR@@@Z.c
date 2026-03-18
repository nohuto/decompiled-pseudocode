/*
 * XREFs of ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0170504
 * Callers:
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01705B4 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C0172724 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPathPreferredScalingToAdapterDefault(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  signed __int64 v1; // rax

  v1 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x40000000000LL) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v1 = *(_QWORD *)a1;
  }
  if ( (v1 & 0x10000) == 0 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)a1 + 35) == 253 )
  {
    if ( !_bittest64((const signed __int64 *)a1, 0x2Cu) )
      WdLogSingleEntry0(1LL);
    ((void (__fastcall *)(char *, char *))qword_1C0296798)((char *)a1 + 16, (char *)a1 + 140);
  }
  *(_QWORD *)a1 |= 0x40000000000uLL;
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
}

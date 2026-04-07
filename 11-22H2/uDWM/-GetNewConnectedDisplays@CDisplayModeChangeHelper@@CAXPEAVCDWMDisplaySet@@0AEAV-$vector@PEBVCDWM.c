/*
 * XREFs of ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800BD928
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054830 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@QEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800BCC20 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 */

void *__fastcall CDisplayModeChangeHelper::GetNewConnectedDisplays(CDWMDisplaySet *this, __int64 a2, void **a3)
{
  void *result; // rax
  __int64 v4; // rdi
  const struct CDWMDisplay *v8; // rbp
  _BYTE *v9; // rdx
  const struct CDWMDisplay *v10; // [rsp+48h] [rbp+10h] BYREF

  result = *a3;
  v4 = 0LL;
  for ( a3[1] = *a3; (unsigned int)v4 < *(_DWORD *)(a2 + 64); v4 = (unsigned int)(v4 + 1) )
  {
    v10 = *(const struct CDWMDisplay **)(*(_QWORD *)(a2 + 40) + 8 * v4);
    v8 = v10;
    result = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(this, v10);
    if ( !result )
    {
      v9 = a3[1];
      if ( v9 == a3[2] )
      {
        result = std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(a3, v9, &v10);
      }
      else
      {
        *(_QWORD *)v9 = v8;
        a3[1] = (char *)a3[1] + 8;
      }
    }
  }
  return result;
}

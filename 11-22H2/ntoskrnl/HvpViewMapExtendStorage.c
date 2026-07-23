/*
 * XREFs of HvpViewMapExtendStorage @ 0x140687A54
 * Callers:
 *     HvpAddBin @ 0x14074F684 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x14080093C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x140206E20 (CmSiExtendSection.c)
 *     HvpViewMapGetLastView @ 0x140687AFC (HvpViewMapGetLastView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140689AA4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140689C78 (HvpViewMapCreateViewsForRegion.c)
 */

NTSTATUS __fastcall HvpViewMapExtendStorage(__int64 a1, int a2)
{
  __int64 v2; // rdi
  NTSTATUS result; // eax
  __int64 LastView; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx

  v2 = (unsigned int)(a2 + 4096);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return 0;
  if ( v2 <= *(_QWORD *)(a1 + 16)
    || (result = CmSiExtendSection(*(void **)a1, (LARGE_INTEGER)(unsigned int)v2), result >= 0) )
  {
    LastView = HvpViewMapGetLastView(a1);
    if ( LastView )
    {
      v6 = *(_QWORD *)(LastView + 48);
      v7 = *(_QWORD *)(LastView + 32);
      if ( v6 < v7 )
      {
        if ( v7 > v2 )
          v7 = v2;
        result = HvpViewMapMakeViewRangeValid(a1, LastView, v6, v7, 0);
        if ( result < 0 )
          return result;
        *(_QWORD *)(a1 + 8) = v7;
      }
    }
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 >= v2 )
      return 0;
    result = HvpViewMapCreateViewsForRegion(a1, v8, v2, 0LL);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v2;
      return 0;
    }
  }
  return result;
}

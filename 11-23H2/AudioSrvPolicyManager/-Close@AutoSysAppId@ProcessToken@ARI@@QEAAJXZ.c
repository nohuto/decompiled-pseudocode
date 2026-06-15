/*
 * XREFs of ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x180045A30
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180045CA0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180045A84 (-Free@ARI@@YAXPEAX@Z.c)
 */

__int64 __fastcall ARI::ProcessToken::AutoSysAppId::Close(ARI::ProcessToken::AutoSysAppId *this, void *a2)
{
  void *v3; // rcx

  v3 = *(void **)this;
  if ( v3 )
  {
    ARI::Free(v3, a2);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return 0LL;
}

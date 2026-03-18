/*
 * XREFs of ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800F922C
 * Callers:
 *     ?GetUniqueId@BamoDataProviderProxy@@UEAAAEBU_LUID@@XZ @ 0x1800F9200 (-GetUniqueId@BamoDataProviderProxy@@UEAAAEBU_LUID@@XZ.c)
 *     ?GetRestrictToProcessIds@BamoDataSourceProxy@@UEAAPEAVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@XZ @ 0x1801E2B30 (-GetRestrictToProcessIds@BamoDataSourceProxy@@UEAAPEAVBamoList_uint_Proxy@dataprovider_AutoBamos.c)
 *     ?GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ @ 0x1801E2B60 (-GetUniqueId@BamoDataSourceProxy@@UEAAAEBU_LUID@@XZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B7200 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this)
{
  DWORD CurrentThreadId; // edi
  const char *v3; // r9
  int v4; // eax
  int v5; // eax
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 8) )
  {
    CurrentThreadId = GetCurrentThreadId();
    if ( *((_DWORD *)this + 46) != CurrentThreadId )
    {
      v4 = *((_DWORD *)this + 6);
      if ( v4 )
      {
        if ( v4 != CurrentThreadId )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x8F5,
            (unsigned int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v3);
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 7) + 88LL))(*((_QWORD *)this + 7), &v9);
        if ( v5 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8FF,
            (unsigned int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v5,
            v7);
        if ( CurrentThreadId != v9 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x901,
            (unsigned int)"g:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v6);
      }
    }
  }
}

/*
 * XREFs of ?ReleaseLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ @ 0x18016DEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::ReleaseLock(Microsoft::Bamo::BaseBamoConnection *this)
{
  __int64 v1; // rax
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)this + 56LL))(this);
  if ( *(_BYTE *)(v1 + 216) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2409LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 144));
}

/*
 * XREFs of ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x180087A80
 * Callers:
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180088350 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z @ 0x180086E8C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAPEAIQEAIAEBI@Z.c)
 *     ?CurrentThreadIsDispatcher@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180087924 (-CurrentThreadIsDispatcher@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x180088680 (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(const void **this, unsigned int a2)
{
  const char *v4; // r9
  _BYTE *v5; // rdx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  if ( Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadIsDispatcher((Microsoft::BamoImpl::BaseBamoConnectionImpl *)this) )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
      (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
      a2);
  }
  else
  {
    try
    {
      v5 = this[25];
      if ( v5 == this[26] )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(this + 24, v5, &v9);
      }
      else
      {
        *(_DWORD *)v5 = a2;
        this[25] = (char *)this[25] + 4;
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4AD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v4);
    }
    if ( !*((_BYTE *)this + 219) )
    {
      _InterlockedIncrement((volatile signed __int32 *)this[12] + 2);
      v6 = (*(__int64 (__fastcall **)(const void *, __int64 (__fastcall *)(Microsoft::BamoImpl::BaseBamoConnectionImpl *), const void **, __int64))(*(_QWORD *)this[6] + 152LL))(
             this[6],
             Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback,
             this,
             4LL);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4B8,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v6,
          v7);
      *((_BYTE *)this + 219) = 1;
    }
  }
}

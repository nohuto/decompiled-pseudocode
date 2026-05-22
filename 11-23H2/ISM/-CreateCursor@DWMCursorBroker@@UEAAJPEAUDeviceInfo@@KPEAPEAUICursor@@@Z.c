/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x1800495B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x18003BC94 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ??$_Find_last@UCursorId@@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@PEAX@std@@@1@AEBUCursorId@@_K@Z @ 0x1800498B8 (--$_Find_last@UCursorId@@@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UC.c)
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180049904 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x18004F7A0 (--$_Try_emplace@AEBW4InputType@@$$V@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_co.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  struct ICursor *v14; // rsi
  int v16; // eax
  __int64 (__fastcall *v17)(DWMCursorBroker *, __int64 *); // rbx
  int v18; // eax
  _DWORD *v19; // rbx
  int v20; // eax
  int v21; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  int v26; // eax
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  struct ICursor *v28; // [rsp+28h] [rbp-50h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+38h] [rbp-40h] BYREF
  void *v31; // [rsp+40h] [rbp-38h]
  _BYTE v32[16]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v33[16]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v31 = &DWMCursorBroker::s_lock;
  v8 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v8 )
  {
    std::_Throw_C_error(v8);
    goto LABEL_26;
  }
  *a4 = 0LL;
  v28 = 0LL;
  v9 = *((_DWORD *)a2 + 1);
  if ( (v9 & 8) != 0 )
  {
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL);
    _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
    return 2147942487LL;
  }
  if ( (v9 & 2) != 0 )
  {
    v9 = 64;
    if ( (*((_DWORD *)a2 + 1) & 0x40) != 0 )
    {
      v27 = 2LL;
    }
    else
    {
      v9 = 2;
      v27 = 1LL;
    }
  }
  else
  {
    LODWORD(v27) = *((_DWORD *)this + 114);
    *((_DWORD *)this + 114) = v27 + 1;
    HIDWORD(v27) = 0;
  }
  v10 = v27;
  v11 = 0LL;
  v12 = 0xCBF29CE484222325uLL;
  do
    v12 = 0x100000001B3LL * (*((unsigned __int8 *)&v27 + v11++) ^ (unsigned __int64)v12);
  while ( v11 < 4 );
  v13 = *(_QWORD *)(std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::_Find_last<CursorId>(
                      (char *)this + 48,
                      v33,
                      &v27,
                      v12)
                  + 8);
  if ( !v13 )
    v13 = *((_QWORD *)this + 7);
  if ( v13 == *((_QWORD *)this + 7) )
  {
    v16 = DWMCursor::Create((__int64)this, v10, v9, (__int64 *)&v28);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x231,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v16,
        v27);
    v29 = 0LL;
    v17 = *(__int64 (__fastcall **)(DWMCursorBroker *, __int64 *))(*(_QWORD *)this + 40LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v29);
    v18 = v17(this, &v29);
    v14 = v28;
    if ( v18 >= 0 )
    {
      v19 = (_DWORD *)(*(__int64 (__fastcall **)(struct ICursor *, int *))(*(_QWORD *)v28 + 48LL))(v28, &v30);
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 48LL))(v29, v32) == *v19 )
      {
        v28 = *(struct ICursor **)((char *)this + 460);
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(__int64, struct ICursor **, char *))(*(_QWORD *)v29 + 40LL))(
                v29,
                &v28,
                (char *)&v28 + 4);
        if ( v26 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x241,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v26,
            v27);
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 104LL))(v29, v33);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x243,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v20,
          v27);
      v21 = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
              v14,
              (unsigned int)v28,
              HIDWORD(v28));
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x245,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v21,
          v27);
      BamoServerConnection = ISMStatics::GetBamoServerConnection();
      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 232LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
      if ( v23 )
      {
        v30 = 2;
        v24 = (__int64)v28;
        *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Try_emplace<enum InputType const &,>(
                                 v23 + 96,
                                 v32,
                                 &v30)
                  + 20LL) = v24;
      }
      v25 = (*(__int64 (__fastcall **)(struct ICursor *, _BYTE *))(*(_QWORD *)v14 + 96LL))(v14, v33);
      if ( v25 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x253,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v25,
          v27);
    }
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v29);
  }
  else
  {
    v14 = *(struct ICursor **)(v13 + 24);
    (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  if ( *(_DWORD *)a2 )
  {
    LODWORD(v29) = *(_DWORD *)a2;
    HIDWORD(v29) = a3;
    std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>(
      (char *)this + 112,
      v33,
      &v29,
      &v27);
  }
  *a4 = v14;
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}

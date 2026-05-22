/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180028F10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800293AC (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ??$_Find_last@UDWMPointerMapping@@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@std@@@1@AEBUDWMPointerMapping@@_K@Z @ 0x18004445C (--$_Find_last@UDWMPointerMapping@@@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uh.c)
 *     ??$_Try_emplace@AEBW4InputType@@$$V@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@std@@_N@1@AEBW4InputType@@@Z @ 0x180044588 (--$_Try_emplace@AEBW4InputType@@$$V@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_co.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1801CF2B4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPoin.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  int v5; // ebx
  int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 i; // rdx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rdx
  char *v24; // rax
  __int64 v25; // r13
  _QWORD *v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  float v29; // xmm0_4
  __int64 v30; // rcx
  float v31; // xmm1_4
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  int v37; // eax
  __int64 (__fastcall *v38)(DWMCursorBroker *, __int64 *); // rbx
  int v39; // eax
  struct ICursor *v40; // r12
  _DWORD *v41; // rbx
  int v42; // eax
  int v43; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v45; // rax
  struct ICursor *v46; // rbx
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // [rsp+20h] [rbp-59h] BYREF
  struct ICursor *v51; // [rsp+28h] [rbp-51h] BYREF
  int v52; // [rsp+30h] [rbp-49h]
  int v53; // [rsp+38h] [rbp-41h]
  int v54; // [rsp+40h] [rbp-39h] BYREF
  struct ICursor *v55; // [rsp+48h] [rbp-31h]
  char *v56; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v57; // [rsp+58h] [rbp-21h]
  struct ICursor **v58; // [rsp+60h] [rbp-19h]
  void *v59; // [rsp+68h] [rbp-11h]
  __int128 v60; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v58 = a4;
  v5 = a3;
  v53 = a3;
  v52 = a3;
  v59 = &DWMCursorBroker::s_lock;
  v8 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v8 )
  {
    std::_Throw_C_error(v8);
    goto LABEL_43;
  }
  v9 = 0;
  *a4 = 0LL;
  v51 = 0LL;
  v10 = *((unsigned int *)a2 + 1);
  if ( (v10 & 8) != 0 )
  {
LABEL_43:
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x211,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL,
      v50);
    goto LABEL_29;
  }
  if ( (v10 & 2) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
    {
      v10 = 64LL;
      v50 = 2LL;
    }
    else
    {
      v10 = 2LL;
      v50 = 1LL;
    }
  }
  else
  {
    LODWORD(v50) = *((_DWORD *)this + 114);
    *((_DWORD *)this + 114) = v50 + 1;
    HIDWORD(v50) = 0;
  }
  v11 = v50;
  v12 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v12 = 0x100000001B3LL * (*((unsigned __int8 *)&v50 + i) ^ (unsigned __int64)v12);
  v14 = 2 * (v12 & *((_QWORD *)this + 12));
  v15 = *((_QWORD *)this + 9);
  v16 = *(_QWORD *)(v15 + 16 * (v12 & *((_QWORD *)this + 12)) + 8);
  v17 = *((_QWORD *)this + 7);
  if ( v16 == v17 )
    goto LABEL_30;
  while ( (_DWORD)v50 != *(_DWORD *)(v16 + 16) )
  {
    if ( v16 == *(_QWORD *)(v15 + 8 * v14) )
      goto LABEL_30;
    v16 = *(_QWORD *)(v16 + 8);
  }
  if ( !v16 )
    v16 = *((_QWORD *)this + 7);
  if ( v16 == v17 )
  {
LABEL_30:
    v37 = DWMCursor::Create(this, v50, v10, &v51);
    if ( v37 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x231,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v37,
        v50);
    v50 = 0LL;
    v38 = *(__int64 (__fastcall **)(DWMCursorBroker *, __int64 *))(*(_QWORD *)this + 40LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v50);
    v39 = v38(this, &v50);
    v40 = v51;
    v55 = v51;
    if ( v39 >= 0 )
    {
      v41 = (_DWORD *)(*(__int64 (__fastcall **)(struct ICursor *, int *))(*(_QWORD *)v51 + 48LL))(v51, &v54);
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v50 + 48LL))(v50, &v56) == *v41 )
      {
        v51 = *(struct ICursor **)((char *)this + 460);
      }
      else
      {
        v49 = (*(__int64 (__fastcall **)(__int64, struct ICursor **, char *))(*(_QWORD *)v50 + 40LL))(
                v50,
                &v51,
                (char *)&v51 + 4);
        if ( v49 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x241,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v49,
            v50);
      }
      v42 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v50 + 104LL))(v50, &v60);
      if ( v42 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x243,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v42,
          v50);
      v43 = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v40 + 24LL))(
              v40,
              (unsigned int)v51,
              HIDWORD(v51));
      if ( v43 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x245,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v43,
          v50);
      BamoServerConnection = ISMStatics::GetBamoServerConnection();
      v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 216LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
      if ( v45 )
      {
        v54 = 2;
        v46 = v51;
        *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Try_emplace<enum InputType const &,>(
                                 v45 + 96,
                                 &v56,
                                 &v54)
                  + 20LL) = v46;
      }
      v47 = (*(__int64 (__fastcall **)(struct ICursor *, __int128 *))(*(_QWORD *)v40 + 96LL))(v40, &v60);
      if ( v47 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x253,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v47,
          v50);
    }
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v50);
    v5 = v53;
  }
  else
  {
    v55 = *(struct ICursor **)(v16 + 24);
    (*(void (__fastcall **)(struct ICursor *, __int64, __int64))(*(_QWORD *)v55 + 8LL))(v55, v14, v10);
  }
  v18 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
    goto LABEL_28;
  LODWORD(v50) = *(_DWORD *)a2;
  HIDWORD(v50) = v5;
  v19 = 0xCBF29CE484222325uLL;
  for ( j = 0LL; j < 4; ++j )
    v19 = 0x100000001B3LL * (*((unsigned __int8 *)&v50 + j) ^ (unsigned __int64)v19);
  v21 = v19 ^ (0x100000001B3LL
             * (HIBYTE(v52) ^ (0x100000001B3LL
                             * (BYTE2(v52) ^ (0x100000001B3LL
                                            * (BYTE1(v52) ^ (0x100000001B3LL
                                                           * ((unsigned __int8)v5 ^ 0xCBF29CE484222325uLL))))))));
  v22 = *((_QWORD *)this + 17);
  v23 = *(_QWORD *)(v22 + 16 * (*((_QWORD *)this + 20) & v21) + 8);
  v24 = (char *)this + 120;
  v25 = *((_QWORD *)this + 15);
  if ( v23 != v25 )
  {
    while ( 1 )
    {
      if ( v18 == *(_DWORD *)(v23 + 16) && v53 == *(_DWORD *)(v23 + 20) )
      {
        *(_QWORD *)(v23 + 24) = v11;
        goto LABEL_28;
      }
      if ( v23 == *(_QWORD *)(v22 + 16 * (*((_QWORD *)this + 20) & v21)) )
        break;
      v23 = *(_QWORD *)(v23 + 8);
    }
    v25 = v23;
    v24 = (char *)this + 120;
  }
  if ( *((_QWORD *)this + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v56 = v24;
  v57 = 0LL;
  v26 = operator new(0x20uLL);
  v57 = v26;
  v26[2] = v50;
  v26[3] = v11;
  v27 = *((_QWORD *)this + 16);
  v28 = v27 + 1;
  if ( v27 + 1 < 0 )
    v29 = (float)(int)(v28 & 1 | (v28 >> 1)) + (float)(int)(v28 & 1 | (v28 >> 1));
  else
    v29 = (float)(int)v28;
  v30 = *((_QWORD *)this + 21);
  if ( v30 < 0 )
  {
    v48 = *((_QWORD *)this + 21) & 1LL | ((unsigned __int64)v30 >> 1);
    v31 = (float)(int)v48 + (float)(int)v48;
  }
  else
  {
    v31 = (float)(int)v30;
  }
  if ( (float)(v29 / v31) > *((float *)this + 28) )
  {
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Rehash_for_1((char *)this + 112);
    v60 = *(_OWORD *)std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Find_last<DWMPointerMapping>(
                       (char *)this + 112,
                       &v56,
                       v26 + 2,
                       v21);
    v27 = *((_QWORD *)this + 16);
    v25 = v60;
  }
  v32 = *(_QWORD **)(v25 + 8);
  *((_QWORD *)this + 16) = v27 + 1;
  *v26 = v25;
  v26[1] = v32;
  *v32 = v26;
  *(_QWORD *)(v25 + 8) = v26;
  v33 = *((_QWORD *)this + 17);
  v34 = 2 * (*((_QWORD *)this + 20) & v21);
  v35 = *(_QWORD *)(v33 + 8 * v34);
  if ( v35 == *((_QWORD *)this + 15) )
  {
    *(_QWORD *)(v33 + 8 * v34) = v26;
  }
  else
  {
    if ( v35 == v25 )
    {
      *(_QWORD *)(v33 + 8 * v34) = v26;
      goto LABEL_28;
    }
    if ( *(_QWORD **)(v33 + 8 * v34 + 8) != v32 )
      goto LABEL_28;
  }
  *(_QWORD *)(v33 + 8 * v34 + 8) = v26;
LABEL_28:
  *v58 = v55;
LABEL_29:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v9;
}

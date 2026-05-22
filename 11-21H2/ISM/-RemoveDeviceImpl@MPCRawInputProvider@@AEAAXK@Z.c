/*
 * XREFs of ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800B6C0C
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800B6358 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800B6B44 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___ @ 0x1800B5C38 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_LegacyInputInfo_______l.c)
 *     ?erase@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x1800B6F88 (-erase@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegacyDeviceI.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCRawInputProvider::RemoveDeviceImpl(MPCRawInputProvider *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *i; // rdi
  void *v6; // rdx
  void *v7; // rbx
  _DWORD *j; // rbx
  __int64 *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v16 = v4;
  for ( i = (_QWORD *)*((_QWORD *)this + 3); ; i += 2 )
  {
    if ( i == *((_QWORD **)this + 4) )
    {
      std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___(
        &v16,
        *((_DWORD **)this + 23),
        *((_DWORD **)this + 24),
        a2);
      v6 = (void *)*((_QWORD *)this + 24);
      v7 = v16;
      if ( v16 != v6 )
      {
        memmove_0(v16, v6, 0LL);
        *((_QWORD *)this + 24) = v7;
      }
      goto LABEL_7;
    }
    if ( *(_DWORD *)*i == a2 )
      break;
  }
  for ( j = (_DWORD *)*((_QWORD *)this + 23); j != *((_DWORD **)this + 24) && j[1] != a2; j += 752 )
    ;
  while ( 1 )
  {
    v9 = (__int64 *)*((_QWORD *)this + 2);
    v10 = *v9;
    if ( j == *((_DWORD **)this + 24) )
      break;
    v11 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v10 + 24))(v9, j);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        (const char *)(unsigned int)v11,
        v14);
    memmove_0(j, j + 752, *((_QWORD *)this + 24) - (_QWORD)(j + 752));
    v12 = *((_QWORD *)this + 24) - 3008LL;
    *((_QWORD *)this + 24) = v12;
    for ( j = (_DWORD *)*((_QWORD *)this + 23); j != (_DWORD *)v12 && j[1] != a2; j += 752 )
      ;
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v10 + 56))(v9, *i);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x155,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v13,
      v14);
  std::vector<std::shared_ptr<LegacyDeviceInfo>>::erase((char *)this + 24, &v16, i);
LABEL_7:
  if ( v4 )
    LeaveCriticalSection(v4);
}

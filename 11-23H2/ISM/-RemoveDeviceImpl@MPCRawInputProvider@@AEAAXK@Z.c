/*
 * XREFs of ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800CFAE4
 * Callers:
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CF180 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800CFA18 (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@PEAV10@00@Z @ 0x1800CE918 (--$_Move_unchecked@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@ULe.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___ @ 0x1800CEAA4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_LegacyInputInfo_______l.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCRawInputProvider::RemoveDeviceImpl(MPCRawInputProvider *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *i; // rdi
  char v6; // al
  _DWORD *v7; // r8
  _DWORD *j; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  std::_Ref_count_base *v14; // rcx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v17 = v4;
  for ( i = (_QWORD *)*((_QWORD *)this + 3); ; i += 2 )
  {
    if ( i == *((_QWORD **)this + 4) )
    {
      v6 = 0;
      goto LABEL_6;
    }
    if ( *(_DWORD *)*i == a2 )
      break;
  }
  v6 = 1;
LABEL_6:
  v7 = (_DWORD *)*((_QWORD *)this + 24);
  j = (_DWORD *)*((_QWORD *)this + 23);
  if ( v6 )
  {
    while ( j != v7 && j[1] != a2 )
      j += 752;
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
          v15);
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
        v15);
    std::_Move_unchecked<std::shared_ptr<LegacyDeviceInfo> *,std::shared_ptr<LegacyDeviceInfo> *>(
      i + 2,
      *((__int64 **)this + 4),
      i);
    v14 = *(std::_Ref_count_base **)(*((_QWORD *)this + 4) - 8LL);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    *((_QWORD *)this + 4) -= 16LL;
  }
  else
  {
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_LegacyInputInfo_______lambda_1157ceaaacdd00f9cf6535b50f5a150f___(
      &v17,
      *((_DWORD **)this + 23),
      v7,
      a2);
    if ( v17 != *((struct _RTL_CRITICAL_SECTION **)this + 24) )
      *((_QWORD *)this + 24) = v17;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}

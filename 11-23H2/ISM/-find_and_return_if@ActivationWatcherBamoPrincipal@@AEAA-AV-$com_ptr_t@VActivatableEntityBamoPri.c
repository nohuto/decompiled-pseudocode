/*
 * XREFs of ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800267E0
 * Callers:
 *     ?TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z @ 0x180026614 (-TryUpdateApplicationActivationState@ActivationWatcherBamoPrincipal@@QEAAX_K@Z.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@AEBU_LUID@@@Z @ 0x1800A5070 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800A50B4 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActiv_ea_1800A50B4.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall ActivationWatcherBamoPrincipal::find_and_return_if(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r8
  DWORD CurrentThreadId; // edi
  const char *v15; // r9
  int v16; // eax
  __int64 v17; // rbx
  const char *v18; // r9
  __int64 v19; // rbx
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v25; // eax
  const char *v26; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v28; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v29; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+80h] [rbp+18h]
  __int64 v31; // [rsp+88h] [rbp+20h] BYREF

  v30 = a3;
  v29 = a2;
  *a2 = 0LL;
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8);
  v7 = (__int64)(v6[8] - v6[7]) >> 3;
  v8 = 0LL;
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6[4] + 32LL);
      if ( *(int *)(v9 + 8) <= 0 )
        v10 = 0LL;
      else
        v10 = *(_QWORD *)(v9 + 16);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
      if ( *(_QWORD *)(v12 + 64) )
      {
        CurrentThreadId = GetCurrentThreadId();
        if ( *(_DWORD *)(v12 + 184) != CurrentThreadId )
        {
          v16 = *(_DWORD *)(v12 + 24);
          if ( v16 )
          {
            if ( v16 != CurrentThreadId )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x8F5,
                (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
                v15);
          }
          else
          {
            v25 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v12 + 56) + 88LL))(
                    *(_QWORD *)(v12 + 56),
                    &v28);
            if ( v25 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x8FF,
                (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
                (const char *)(unsigned int)v25,
                1);
            if ( CurrentThreadId != v28 )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x901,
                (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
                v26);
          }
        }
      }
      v17 = v6[7];
      v18 = (const char *)retaddr;
      if ( (unsigned int)v8 >= (unsigned __int64)((v6[8] - v17) >> 3) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x49,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)retaddr);
      v19 = *(_QWORD *)(v17 + 8 * v8);
      if ( v19 )
        (**(void (__fastcall ***)(__int64, __int64, __int64, wil::details::in1diag3 *))v19)(v19, v11, v13, retaddr);
      v20 = retaddr;
      if ( !v19 )
        goto LABEL_29;
      v31 = v19;
      v21 = *(_QWORD *)(a3 + 56);
      if ( !v21 )
      {
        std::_Xbad_function_call();
        __debugbreak();
LABEL_29:
        wil::details::in1diag3::_FailFast_Unexpected(
          v20,
          (void *)0x92,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
          v18);
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, const char *))(*(_QWORD *)v21 + 16LL))(
             v21,
             &v31,
             v13,
             v18) )
      {
        break;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= (unsigned int)v7 )
        goto LABEL_19;
    }
    v22 = *a2;
    *a2 = v19;
    (**(void (__fastcall ***)(__int64))v19)(v19);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
LABEL_19:
  v23 = *(_QWORD *)(a3 + 56);
  if ( v23 )
  {
    LOBYTE(v5) = v23 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v5);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return a2;
}

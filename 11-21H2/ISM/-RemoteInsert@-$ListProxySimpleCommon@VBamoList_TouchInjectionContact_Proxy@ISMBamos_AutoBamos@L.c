/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x180197CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAAPEAUTouchInjectionContact@Input@Internal@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x180197664 (--$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@-$vector@UTouchInje.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact,Windows::UI::Internal::Input::TouchInjectionContact const &>::RemoteInsert(
        const void **a1,
        unsigned int a2,
        _OWORD *a3)
{
  const void **v6; // rbx
  __int64 v7; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  _BYTE *v15; // rdi
  _OWORD *v16; // rcx
  __int128 v17; // xmm6
  const char *v18; // r9
  __int64 (*v19)(void); // rax
  int v20; // eax
  Microsoft::BamoImpl::BamoImplObject *v21[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1 + 6;
  v7 = a2;
  if ( a2 <= (unsigned __int64)(((_BYTE *)a1[7] - (_BYTE *)a1[6]) >> 4) )
  {
    v9 = a1[4];
    v10 = *(_QWORD *)(v9[3] + 32LL);
    if ( *(int *)(v10 + 8) <= 0 )
      v11 = 0LL;
    else
      v11 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v10 + 16);
    try
    {
      Microsoft::Bamo::Lock::Lock(v21, v11);
      v15 = (char *)*v6 + 16 * v7;
      v16 = v6[1];
      if ( v16 == v6[2] )
      {
        std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::_Emplace_reallocate<Windows::UI::Internal::Input::TouchInjectionContact const &>(
          v6,
          v15,
          a3);
      }
      else if ( v15 == (_BYTE *)v16 )
      {
        *v16 = *a3;
        v6[1] = (char *)v6[1] + 16;
      }
      else
      {
        v17 = *a3;
        *v16 = *(v16 - 1);
        v6[1] = (char *)v6[1] + 16;
        memmove_0(v15 + 16, v15, (char *)(v16 - 1) - v15);
        *(_OWORD *)v15 = v17;
      }
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v21, v12, v13, v14);
      v19 = (__int64 (*)(void))*((_QWORD *)*a1 + 7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x48F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v18);
    }
    if ( *(_BYTE *)(v19() + 28) )
    {
      v20 = (*((__int64 (__fastcall **)(const void **, _QWORD))*a1 + 17))(a1, a2);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x493,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v20,
          (int)v21[0]);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x486,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)0x87B2080CLL);
    return 2276591628LL;
  }
}

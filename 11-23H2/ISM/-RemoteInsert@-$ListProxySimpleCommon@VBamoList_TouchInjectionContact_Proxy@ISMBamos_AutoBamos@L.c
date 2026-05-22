/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x1801B5D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800A40D4 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800A41E8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x18014A500 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ??$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAAPEAUTouchInjectionContact@Input@Internal@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x1801B5718 (--$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@-$vector@UTouchInje.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact,Windows::UI::Internal::Input::TouchInjectionContact const &>::RemoteInsert(
        const void **a1,
        unsigned int a2,
        _OWORD *a3)
{
  const void **v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  Microsoft::Bamo::BaseBamoConnection *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  _BYTE *v19; // rsi
  _OWORD *v20; // rcx
  __int128 v21; // xmm6
  const char *v22; // r9
  __int64 (*v23)(void); // rax
  int v24; // eax
  Microsoft::BamoImpl::BamoImplObject *v25[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a1 + 6;
  v7 = a2;
  if ( a2 <= (unsigned __int64)(((_BYTE *)a1[7] - (_BYTE *)a1[6]) >> 4) )
  {
    v13 = a1[4];
    v14 = *(_QWORD *)(v13[3] + 32LL);
    if ( *(int *)(v14 + 8) <= 0 )
      v15 = 0LL;
    else
      v15 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v14 + 16);
    try
    {
      Microsoft::Bamo::Lock::Lock(v25, v15);
      v19 = (char *)*v6 + 16 * v7;
      v20 = v6[1];
      if ( v20 == v6[2] )
      {
        std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::_Emplace_reallocate<Windows::UI::Internal::Input::TouchInjectionContact const &>(
          v6,
          v19,
          a3);
      }
      else if ( v19 == (_BYTE *)v20 )
      {
        *v20 = *a3;
        v6[1] = (char *)v6[1] + 16;
      }
      else
      {
        v21 = *a3;
        *v20 = *(v20 - 1);
        v6[1] = (char *)v6[1] + 16;
        memmove_0(v19 + 16, v19, (char *)(v20 - 1) - v19);
        *(_OWORD *)v19 = v21;
      }
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v25, v16, v17, v18);
      v23 = (__int64 (*)(void))*((_QWORD *)*a1 + 7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x49F,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v22);
    }
    if ( *(_BYTE *)(v23() + 28) )
    {
      v24 = (*((__int64 (__fastcall **)(const void **, _QWORD))*a1 + 17))(a1, a2);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A3,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v24,
          (int)v25[0]);
    }
    return 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1[4] + 3) + 32LL);
    if ( *(int *)(v8 + 8) <= 0 )
      v9 = 0LL;
    else
      v9 = *(Microsoft::Bamo::BaseBamoConnection **)(v8 + 16);
    v10 = Microsoft::Bamo::BaseBamoConnection::TrackError(v9);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x496,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v10);
    return v11;
  }
}

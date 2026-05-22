/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18014B250
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800A40D4 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800A41E8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x18014A500 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteReplace(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  Microsoft::Bamo::BaseBamoConnection *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  char v11; // si
  __int64 v12; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  __int64 v17; // rax
  __int64 v18; // xmm0_8
  __int64 v19; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // rax
  const char *v22; // r9
  int v23; // eax
  int v24[2]; // [rsp+20h] [rbp-68h]
  __int128 v25; // [rsp+28h] [rbp-60h]
  __int128 v26; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a2;
  if ( a2 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[7] - a1[6]) >> 3) )
  {
    v11 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v25 = 0LL;
    try
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v12 + 8) <= 0 )
        v13 = 0LL;
      else
        v13 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v12 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v26, v13);
      if ( v11 )
      {
        v17 = a1[6];
        v25 = *(_OWORD *)(v17 + 24 * v4);
        v18 = *(_QWORD *)(v17 + 24 * v4 + 16);
      }
      else
      {
        v18 = 0LL;
      }
      *(_QWORD *)v24 = v18;
      v19 = *(_QWORD *)(a3 + 16);
      v20 = 3 * v4;
      v21 = a1[6];
      *(_OWORD *)(v21 + 8 * v20) = *(_OWORD *)a3;
      *(_QWORD *)(v21 + 8 * v20 + 16) = v19;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v26, v14, v15, v16);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4FC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v22);
    }
    if ( v11 )
    {
      v26 = v25;
      v27 = *(_QWORD *)v24;
      v23 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*a1 + 160LL))(a1, (unsigned int)v4, &v26);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x500,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v23,
          v24[0]);
    }
    return 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v6 + 8) <= 0 )
      v7 = 0LL;
    else
      v7 = *(Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
    v8 = Microsoft::Bamo::BaseBamoConnection::TrackError(v7);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EB,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v8);
    return v9;
  }
}

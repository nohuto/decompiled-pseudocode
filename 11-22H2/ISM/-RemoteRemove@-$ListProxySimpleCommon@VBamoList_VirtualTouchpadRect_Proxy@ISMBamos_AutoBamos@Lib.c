/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x180159350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1801587E0 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteRemove(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  Microsoft::Bamo::BaseBamoConnection *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // si
  __int64 v10; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  const char *v17; // r9
  int v18; // eax
  int v19[2]; // [rsp+20h] [rbp-68h]
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = a2;
  if ( a2 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[7] - a1[6]) >> 3) )
  {
    v9 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v20 = 0LL;
    try
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v10 + 8) <= 0 )
        v11 = 0LL;
      else
        v11 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v10 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v21, v11);
      if ( v9 )
      {
        v12 = a1[6];
        v20 = *(_OWORD *)(v12 + 24 * v2);
        v13 = *(_QWORD *)(v12 + 24 * v2 + 16);
      }
      else
      {
        v13 = 0LL;
      }
      *(_QWORD *)v19 = v13;
      memmove_0((void *)(a1[6] + 24 * v2), (const void *)(a1[6] + 24 * v2 + 24), a1[7] - (a1[6] + 24 * v2 + 24));
      a1[7] -= 24LL;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v21, v14, v15, v16);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4CD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v17);
    }
    if ( v9 )
    {
      v21 = v20;
      v22 = *(_QWORD *)v19;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*a1 + 152LL))(a1, (unsigned int)v2, &v21);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v18,
          v19[0]);
    }
    return 0LL;
  }
  else
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v4 + 8) <= 0 )
      v5 = 0LL;
    else
      v5 = *(Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
    v6 = Microsoft::Bamo::BaseBamoConnection::TrackError(v5);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v6);
    return v7;
  }
}

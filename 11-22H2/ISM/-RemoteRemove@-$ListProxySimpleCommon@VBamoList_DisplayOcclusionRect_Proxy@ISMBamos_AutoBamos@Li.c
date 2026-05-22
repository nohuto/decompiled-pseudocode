/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x1801580C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1801587E0 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteRemove(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  Microsoft::Bamo::BaseBamoConnection *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  char v10; // di
  __int64 v11; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v12; // rdx
  __int128 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  const char *v16; // r9
  const char *v17; // r9
  int v18; // eax
  Microsoft::BamoImpl::BamoImplObject *v19[2]; // [rsp+20h] [rbp-198h] BYREF
  __int128 v20; // [rsp+30h] [rbp-188h] BYREF
  __int128 v21; // [rsp+40h] [rbp-178h]
  __int128 v22; // [rsp+50h] [rbp-168h]
  __int128 v23; // [rsp+60h] [rbp-158h]
  __int128 v24; // [rsp+70h] [rbp-148h]
  __int128 v25; // [rsp+80h] [rbp-138h]
  __int128 v26; // [rsp+90h] [rbp-128h]
  __int128 v27; // [rsp+A0h] [rbp-118h]
  __int128 v28; // [rsp+B0h] [rbp-108h]
  __int128 v29; // [rsp+C0h] [rbp-F8h]
  __int128 v30; // [rsp+D0h] [rbp-E8h]
  _OWORD v31[11]; // [rsp+E0h] [rbp-D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v4 = a2;
  if ( a2 < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[7] - a1[6]) >> 4)) )
  {
    v10 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    memset_0(&v20, 0, 0xB0uLL);
    try
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v11 + 8) <= 0 )
        v12 = 0LL;
      else
        v12 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v11 + 16);
      Microsoft::Bamo::Lock::Lock(v19, v12);
      if ( v10 )
      {
        v13 = (__int128 *)(a1[6] + 176 * v4);
        v20 = *v13;
        v21 = v13[1];
        v22 = v13[2];
        v23 = v13[3];
        v24 = v13[4];
        v25 = v13[5];
        v26 = v13[6];
        v27 = v13[7];
        v28 = v13[8];
        v29 = v13[9];
        v30 = v13[10];
      }
      memmove_0((void *)(a1[6] + 176 * v4), (const void *)(a1[6] + 176 * v4 + 176), a1[7] - (a1[6] + 176 * v4 + 176));
      a1[7] -= 176LL;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v19, v14, v15, v16);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4CD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v17);
    }
    if ( v10 )
    {
      v31[0] = v20;
      v31[1] = v21;
      v31[2] = v22;
      v31[3] = v23;
      v31[4] = v24;
      v31[5] = v25;
      v31[6] = v26;
      v31[7] = v27;
      v31[8] = v28;
      v31[9] = v29;
      v31[10] = v30;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _OWORD *))(*a1 + 152LL))(a1, a2, v31);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v18,
          (int)v19[0]);
    }
    return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v5 + 8) <= 0 )
      v6 = 0LL;
    else
      v6 = *(Microsoft::Bamo::BaseBamoConnection **)(v5 + 16);
    v7 = Microsoft::Bamo::BaseBamoConnection::TrackError(v6, a2);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7);
    return v8;
  }
}

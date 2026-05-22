/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x180158370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800B6B74 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800B6C88 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1801587E0 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteReplace(
        _QWORD *a1,
        unsigned int a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // r14
  __int64 v13; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  __int128 *v18; // rcx
  _OWORD *v19; // rcx
  const char *v20; // r9
  int v21; // eax
  Microsoft::BamoImpl::BamoImplObject *v22[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-198h] BYREF
  __int128 v24; // [rsp+40h] [rbp-188h]
  __int128 v25; // [rsp+50h] [rbp-178h]
  __int128 v26; // [rsp+60h] [rbp-168h]
  __int128 v27; // [rsp+70h] [rbp-158h]
  __int128 v28; // [rsp+80h] [rbp-148h]
  __int128 v29; // [rsp+90h] [rbp-138h]
  __int128 v30; // [rsp+A0h] [rbp-128h]
  __int128 v31; // [rsp+B0h] [rbp-118h]
  __int128 v32; // [rsp+C0h] [rbp-108h]
  __int128 v33; // [rsp+D0h] [rbp-F8h]
  __int128 v34; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v35; // [rsp+F0h] [rbp-D8h]
  __int128 v36; // [rsp+100h] [rbp-C8h]
  __int128 v37; // [rsp+110h] [rbp-B8h]
  __int128 v38; // [rsp+120h] [rbp-A8h]
  __int128 v39; // [rsp+130h] [rbp-98h]
  __int128 v40; // [rsp+140h] [rbp-88h]
  __int128 v41; // [rsp+150h] [rbp-78h]
  __int128 v42; // [rsp+160h] [rbp-68h]
  __int128 v43; // [rsp+170h] [rbp-58h]
  __int128 v44; // [rsp+180h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v6 = a2;
  if ( a2 < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[7] - a1[6]) >> 4)) )
  {
    v12 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    memset_0(&v23, 0, 0xB0uLL);
    try
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v13 + 8) <= 0 )
        v14 = 0LL;
      else
        v14 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v13 + 16);
      Microsoft::Bamo::Lock::Lock(v22, v14);
      if ( v12 )
      {
        v18 = (__int128 *)(a1[6] + 176 * v6);
        v23 = *v18;
        v24 = v18[1];
        v25 = v18[2];
        v26 = v18[3];
        v27 = v18[4];
        v28 = v18[5];
        v29 = v18[6];
        v30 = v18[7];
        v31 = v18[8];
        v32 = v18[9];
        v33 = v18[10];
      }
      v34 = *a3;
      v35 = a3[1];
      v36 = a3[2];
      v37 = a3[3];
      v38 = a3[4];
      v39 = a3[5];
      v40 = a3[6];
      v41 = a3[7];
      v42 = a3[8];
      v43 = a3[9];
      v44 = a3[10];
      v19 = (_OWORD *)(a1[6] + 176 * v6);
      *v19 = v34;
      v19[1] = v35;
      v19[2] = v36;
      v19[3] = v37;
      v19[4] = v38;
      v19[5] = v39;
      v19[6] = v40;
      v19 += 8;
      *(v19 - 1) = v41;
      *v19 = v42;
      v19[1] = v43;
      v19[2] = v44;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v22, v15, v16, v17);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4FC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v20);
    }
    if ( v12 )
    {
      v34 = v23;
      v35 = v24;
      v36 = v25;
      v37 = v26;
      v38 = v27;
      v39 = v28;
      v40 = v29;
      v41 = v30;
      v42 = v31;
      v43 = v32;
      v44 = v33;
      v21 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*a1 + 160LL))(a1, a2, &v34);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x500,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v21,
          (int)v22[0]);
    }
    return 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
    if ( *(int *)(v7 + 8) <= 0 )
      v8 = 0LL;
    else
      v8 = *(Microsoft::Bamo::BaseBamoConnection **)(v7 + 16);
    v9 = Microsoft::Bamo::BaseBamoConnection::TrackError(v8, a2);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EB,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v9);
    return v10;
  }
}

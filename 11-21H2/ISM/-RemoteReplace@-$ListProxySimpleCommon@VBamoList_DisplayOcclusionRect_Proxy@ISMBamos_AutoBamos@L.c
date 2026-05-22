/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18012F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteReplace(
        _QWORD *a1,
        unsigned int a2,
        __int128 *a3)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  char v8; // r14
  __int64 v9; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int128 *v14; // rcx
  _OWORD *v15; // rcx
  const char *v16; // r9
  int v17; // eax
  Microsoft::BamoImpl::BamoImplObject *v18[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v19; // [rsp+30h] [rbp-198h] BYREF
  __int128 v20; // [rsp+40h] [rbp-188h]
  __int128 v21; // [rsp+50h] [rbp-178h]
  __int128 v22; // [rsp+60h] [rbp-168h]
  __int128 v23; // [rsp+70h] [rbp-158h]
  __int128 v24; // [rsp+80h] [rbp-148h]
  __int128 v25; // [rsp+90h] [rbp-138h]
  __int128 v26; // [rsp+A0h] [rbp-128h]
  __int128 v27; // [rsp+B0h] [rbp-118h]
  __int128 v28; // [rsp+C0h] [rbp-108h]
  __int128 v29; // [rsp+D0h] [rbp-F8h]
  __int128 v30; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-D8h]
  __int128 v32; // [rsp+100h] [rbp-C8h]
  __int128 v33; // [rsp+110h] [rbp-B8h]
  __int128 v34; // [rsp+120h] [rbp-A8h]
  __int128 v35; // [rsp+130h] [rbp-98h]
  __int128 v36; // [rsp+140h] [rbp-88h]
  __int128 v37; // [rsp+150h] [rbp-78h]
  __int128 v38; // [rsp+160h] [rbp-68h]
  __int128 v39; // [rsp+170h] [rbp-58h]
  __int128 v40; // [rsp+180h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v4 = a2;
  v6 = a2;
  if ( a2 < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[7] - a1[6]) >> 4)) )
  {
    v8 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    memset_0(&v19, 0, 0xB0uLL);
    try
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v9 + 8) <= 0 )
        v10 = 0LL;
      else
        v10 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v9 + 16);
      Microsoft::Bamo::Lock::Lock(v18, v10);
      if ( v8 )
      {
        v14 = (__int128 *)(a1[6] + 176 * v6);
        v19 = *v14;
        v20 = v14[1];
        v21 = v14[2];
        v22 = v14[3];
        v23 = v14[4];
        v24 = v14[5];
        v25 = v14[6];
        v26 = v14[7];
        v27 = v14[8];
        v28 = v14[9];
        v29 = v14[10];
      }
      else
      {
        v6 = v4;
      }
      v30 = *a3;
      v31 = a3[1];
      v32 = a3[2];
      v33 = a3[3];
      v34 = a3[4];
      v35 = a3[5];
      v36 = a3[6];
      v37 = a3[7];
      v38 = a3[8];
      v39 = a3[9];
      v40 = a3[10];
      v15 = (_OWORD *)(a1[6] + 176 * v6);
      *v15 = v30;
      v15[1] = v31;
      v15[2] = v32;
      v15[3] = v33;
      v15[4] = v34;
      v15[5] = v35;
      v15[6] = v36;
      v15 += 8;
      *(v15 - 1) = v37;
      *v15 = v38;
      v15[1] = v39;
      v15[2] = v40;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v18, v11, v12, v13);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4EC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v16);
    }
    if ( v8 )
    {
      v30 = v19;
      v31 = v20;
      v32 = v21;
      v33 = v22;
      v34 = v23;
      v35 = v24;
      v36 = v25;
      v37 = v26;
      v38 = v27;
      v39 = v28;
      v40 = v29;
      v17 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*a1 + 160LL))(a1, (unsigned int)v4, &v30);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4F0,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v17,
          (int)v18[0]);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DB,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)0x87B2080CLL);
    return 2276591628LL;
  }
}

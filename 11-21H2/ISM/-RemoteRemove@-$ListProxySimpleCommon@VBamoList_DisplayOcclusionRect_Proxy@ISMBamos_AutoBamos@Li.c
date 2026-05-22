/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18012F750
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteRemove(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v4; // r14
  char v6; // di
  __int64 v7; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v8; // rdx
  __int64 v9; // rdx
  __int128 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  const char *v14; // r9
  int v15; // eax
  Microsoft::BamoImpl::BamoImplObject *v16[2]; // [rsp+20h] [rbp-198h] BYREF
  __int128 v17; // [rsp+30h] [rbp-188h] BYREF
  __int128 v18; // [rsp+40h] [rbp-178h]
  __int128 v19; // [rsp+50h] [rbp-168h]
  __int128 v20; // [rsp+60h] [rbp-158h]
  __int128 v21; // [rsp+70h] [rbp-148h]
  __int128 v22; // [rsp+80h] [rbp-138h]
  __int128 v23; // [rsp+90h] [rbp-128h]
  __int128 v24; // [rsp+A0h] [rbp-118h]
  __int128 v25; // [rsp+B0h] [rbp-108h]
  __int128 v26; // [rsp+C0h] [rbp-F8h]
  __int128 v27; // [rsp+D0h] [rbp-E8h]
  _OWORD v28[11]; // [rsp+E0h] [rbp-D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v4 = a2;
  if ( a2 < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[7] - a1[6]) >> 4)) )
  {
    v6 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    memset_0(&v17, 0, 0xB0uLL);
    try
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v7 + 8) <= 0 )
        v8 = 0LL;
      else
        v8 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v7 + 16);
      Microsoft::Bamo::Lock::Lock(v16, v8);
      v9 = a1[6];
      if ( v6 )
      {
        v10 = (__int128 *)(v9 + 176 * v4);
        v17 = *v10;
        v18 = v10[1];
        v19 = v10[2];
        v20 = v10[3];
        v21 = v10[4];
        v22 = v10[5];
        v23 = v10[6];
        v24 = v10[7];
        v25 = v10[8];
        v26 = v10[9];
        v27 = v10[10];
      }
      memmove_0((void *)(v9 + 176 * v4), (const void *)(v9 + 176 * v4 + 176), a1[7] - (v9 + 176 * v4 + 176));
      a1[7] -= 176LL;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v16, v11, v12, v13);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4BD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v14);
    }
    if ( v6 )
    {
      v28[0] = v17;
      v28[1] = v18;
      v28[2] = v19;
      v28[3] = v20;
      v28[4] = v21;
      v28[5] = v22;
      v28[6] = v23;
      v28[7] = v24;
      v28[8] = v25;
      v28[9] = v26;
      v28[10] = v27;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _OWORD *))(*a1 + 152LL))(a1, a2, v28);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4C1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v15,
          (int)v16[0]);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AC,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      (const char *)0x87B2080CLL);
    return 2276591628LL;
  }
}

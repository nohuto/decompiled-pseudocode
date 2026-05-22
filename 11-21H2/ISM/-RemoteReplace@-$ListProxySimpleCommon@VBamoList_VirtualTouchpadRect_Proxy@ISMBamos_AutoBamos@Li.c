/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x180130C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteReplace(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v6; // rdi
  char v8; // si
  __int64 v9; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rax
  __int64 v15; // xmm0_8
  __int64 v16; // xmm0_8
  __int64 v17; // rcx
  __int64 v18; // rax
  const char *v19; // r9
  int v20; // eax
  int v21[2]; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+28h] [rbp-60h]
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a2;
  v6 = a2;
  if ( a2 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[7] - a1[6]) >> 3) )
  {
    v8 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v22 = 0LL;
    try
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v9 + 8) <= 0 )
        v10 = 0LL;
      else
        v10 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v9 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v23, v10);
      if ( v8 )
      {
        v14 = a1[6];
        v22 = *(_OWORD *)(v14 + 24 * v4);
        v15 = *(_QWORD *)(v14 + 24 * v4 + 16);
      }
      else
      {
        v6 = v4;
        v15 = 0LL;
      }
      *(_QWORD *)v21 = v15;
      v16 = *(_QWORD *)(a3 + 16);
      v17 = 3 * v6;
      v18 = a1[6];
      *(_OWORD *)(v18 + 8 * v17) = *(_OWORD *)a3;
      *(_QWORD *)(v18 + 8 * v17 + 16) = v16;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v23, v11, v12, v13);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4EC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v19);
    }
    if ( v8 )
    {
      v23 = v22;
      v24 = *(_QWORD *)v21;
      v20 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*a1 + 160LL))(a1, (unsigned int)v4, &v23);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4F0,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v20,
          v21[0]);
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

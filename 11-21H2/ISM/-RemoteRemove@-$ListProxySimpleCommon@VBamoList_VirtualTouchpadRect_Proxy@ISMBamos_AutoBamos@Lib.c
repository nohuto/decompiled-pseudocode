/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x180130A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004E99F (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteRemove(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v2; // r14
  char v5; // di
  __int64 v6; // rdx
  struct Microsoft::Bamo::BaseBamoConnection *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  const char *v13; // r9
  int v14; // eax
  int v15[2]; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+28h] [rbp-60h]
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = a2;
  if ( a2 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[7] - a1[6]) >> 3) )
  {
    v5 = *(_BYTE *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) + 28);
    v16 = 0LL;
    try
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1[4] + 24LL) + 32LL);
      if ( *(int *)(v6 + 8) <= 0 )
        v7 = 0LL;
      else
        v7 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v17, v7);
      v8 = a1[6];
      if ( v5 )
      {
        v16 = *(_OWORD *)(v8 + 24 * v2);
        v9 = *(_QWORD *)(v8 + 24 * v2 + 16);
      }
      else
      {
        v9 = 0LL;
      }
      *(_QWORD *)v15 = v9;
      memmove_0((void *)(v8 + 24 * v2), (const void *)(v8 + 24 * v2 + 24), a1[7] - (v8 + 24 * v2 + 24));
      a1[7] -= 24LL;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v17, v10, v11, v12);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4BD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v13);
    }
    if ( v5 )
    {
      v17 = v16;
      v18 = *(_QWORD *)v15;
      v14 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(*a1 + 152LL))(a1, (unsigned int)v2, &v17);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4C1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v14,
          v15[0]);
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

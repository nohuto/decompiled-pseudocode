/*
 * XREFs of ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1800FE768
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800149A0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF204 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800FFC18 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?NewNode@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBUResourceHandleInfo@@PEAV312@1@Z @ 0x180100F94 (-NewNode@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAA.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180101104 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x180101820 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180101C8C (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101E9C (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@H@Z @ 0x180102050 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x1801024D4 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ResourceHandleInfo *__fastcall ResourceHandleInfo::ResourceHandleInfo(
        ResourceHandleInfo *this,
        const struct ResourceHandleInfo *a2)
{
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int64 v5; // r8
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // r8
  char *v9; // rcx
  char *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v3 = (_OWORD *)((char *)this + 12);
  v4 = (_OWORD *)((char *)a2 + 12);
  v5 = 2LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    *(v3 - 1) = v4[7];
    v4 += 8;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)((char *)this + 268) = *(_OWORD *)((char *)a2 + 268);
  *((_DWORD *)this + 71) = *((_DWORD *)a2 + 71);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  *((_DWORD *)this + 73) = *((_DWORD *)a2 + 73);
  v6 = (_OWORD *)((char *)this + 296);
  v7 = (_OWORD *)((char *)a2 + 296);
  v8 = 3LL;
  do
  {
    *v6 = *v7;
    v6[1] = v7[1];
    v6[2] = v7[2];
    v6[3] = v7[3];
    v6[4] = v7[4];
    v6[5] = v7[5];
    v6[6] = v7[6];
    v6 += 8;
    *(v6 - 1) = v7[7];
    v7 += 8;
    --v8;
  }
  while ( v8 );
  *v6 = *v7;
  *((_WORD *)v6 + 8) = *((_WORD *)v7 + 8);
  v9 = (char *)this + 698;
  v10 = (char *)a2 + 698;
  v11 = 4LL;
  do
  {
    *(_OWORD *)v9 = *(_OWORD *)v10;
    *((_OWORD *)v9 + 1) = *((_OWORD *)v10 + 1);
    *((_OWORD *)v9 + 2) = *((_OWORD *)v10 + 2);
    *((_OWORD *)v9 + 3) = *((_OWORD *)v10 + 3);
    *((_OWORD *)v9 + 4) = *((_OWORD *)v10 + 4);
    *((_OWORD *)v9 + 5) = *((_OWORD *)v10 + 5);
    *((_OWORD *)v9 + 6) = *((_OWORD *)v10 + 6);
    v9 += 128;
    *((_OWORD *)v9 - 1) = *((_OWORD *)v10 + 7);
    v10 += 128;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)v9 = *(_QWORD *)v10;
  *((_WORD *)v9 + 4) = *((_WORD *)v10 + 4);
  *((_DWORD *)this + 305) = *((_DWORD *)a2 + 305);
  *((_DWORD *)this + 306) = *((_DWORD *)a2 + 306);
  *((_DWORD *)this + 307) = *((_DWORD *)a2 + 307);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  v12 = *((_QWORD *)a2 + 155);
  *((_QWORD *)this + 155) = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64, const struct ResourceHandleInfo *, char *, __int64))(*(_QWORD *)v12 + 8LL))(
      v12,
      a2,
      v10,
      128LL);
  return this;
}

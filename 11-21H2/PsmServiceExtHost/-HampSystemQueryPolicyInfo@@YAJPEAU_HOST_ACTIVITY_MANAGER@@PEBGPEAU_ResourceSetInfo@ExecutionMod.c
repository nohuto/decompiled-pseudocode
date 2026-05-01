/*
 * XREFs of ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800220DC
 * Callers:
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180002858 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180022910 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800495F8 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x180081FF4 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180021570 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemQueryPolicyInfo(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 result; // rax
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-1A8h] BYREF
  __int16 v24; // [rsp+48h] [rbp-180h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v23);
  if ( !*a2 || (result = RmRpsQueryResourceSetInfo(*((_QWORD *)a1 - 198), a2, v23), (int)result >= 0) )
  {
    v24 |= 0x20u;
    v7 = v23;
    v8 = 2LL;
    do
    {
      v9 = v7[1];
      *(_OWORD *)a3 = *v7;
      v10 = v7[2];
      *((_OWORD *)a3 + 1) = v9;
      v11 = v7[3];
      *((_OWORD *)a3 + 2) = v10;
      v12 = v7[4];
      *((_OWORD *)a3 + 3) = v11;
      v13 = v7[5];
      *((_OWORD *)a3 + 4) = v12;
      v14 = v7[6];
      *((_OWORD *)a3 + 5) = v13;
      v15 = v7[7];
      v7 += 8;
      *((_OWORD *)a3 + 6) = v14;
      a3 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a3 + 128);
      *((_OWORD *)a3 - 1) = v15;
      --v8;
    }
    while ( v8 );
    v16 = v7[1];
    *(_OWORD *)a3 = *v7;
    v17 = v7[2];
    *((_OWORD *)a3 + 1) = v16;
    v18 = v7[3];
    *((_OWORD *)a3 + 2) = v17;
    v19 = v7[4];
    *((_OWORD *)a3 + 3) = v18;
    v20 = v7[5];
    *((_OWORD *)a3 + 4) = v19;
    v21 = v7[6];
    v22 = *((_QWORD *)v7 + 14);
    *((_OWORD *)a3 + 5) = v20;
    *((_OWORD *)a3 + 6) = v21;
    *((_QWORD *)a3 + 14) = v22;
    return 0LL;
  }
  return result;
}

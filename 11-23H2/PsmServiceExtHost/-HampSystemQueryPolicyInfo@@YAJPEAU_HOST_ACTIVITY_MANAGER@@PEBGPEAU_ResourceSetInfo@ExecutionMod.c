/*
 * XREFs of ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180014A54
 * Callers:
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180014980 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800440E4 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x18007FA40 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180014CA0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemQueryPolicyInfo(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  _OWORD *v8; // rax
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
  _BYTE v23[384]; // [rsp+20h] [rbp-1A8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v23);
  if ( !*a2 || (result = RmRpsQueryResourceSetInfo(*((_QWORD *)a1 - 198), a2, v23), (int)result >= 0) )
  {
    v7 = 2LL;
    v8 = v23;
    do
    {
      v9 = v8[1];
      *(_OWORD *)a3 = *v8;
      v10 = v8[2];
      *((_OWORD *)a3 + 1) = v9;
      v11 = v8[3];
      *((_OWORD *)a3 + 2) = v10;
      v12 = v8[4];
      *((_OWORD *)a3 + 3) = v11;
      v13 = v8[5];
      *((_OWORD *)a3 + 4) = v12;
      v14 = v8[6];
      *((_OWORD *)a3 + 5) = v13;
      v15 = v8[7];
      v8 += 8;
      *((_OWORD *)a3 + 6) = v14;
      a3 = (struct ExecutionModel::_ResourceSetInfo *)((char *)a3 + 128);
      *((_OWORD *)a3 - 1) = v15;
      --v7;
    }
    while ( v7 );
    v16 = v8[1];
    *(_OWORD *)a3 = *v8;
    v17 = v8[2];
    *((_OWORD *)a3 + 1) = v16;
    v18 = v8[3];
    *((_OWORD *)a3 + 2) = v17;
    v19 = v8[4];
    *((_OWORD *)a3 + 3) = v18;
    v20 = v8[5];
    *((_OWORD *)a3 + 4) = v19;
    v21 = v8[6];
    v22 = *((_QWORD *)v8 + 14);
    *((_OWORD *)a3 + 5) = v20;
    *((_OWORD *)a3 + 6) = v21;
    *((_QWORD *)a3 + 14) = v22;
    return 0LL;
  }
  return result;
}

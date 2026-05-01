/*
 * XREFs of ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002CA0C
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B0E0 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     CempPackageFamilyNameFromPsmKey @ 0x180025F60 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180029200 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18002CBF0 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002D2E4 (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

LONG __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_SERVICE_GLOBALS *v1; // rsi
  LONG result; // eax
  struct _RM_PSM_APP_FAMILY *v4; // rax
  struct _RM_PSM_APP_FAMILY *v5; // rbx
  __int64 v6; // r10
  struct _RM_PSM_APP_FAMILY *i; // rdx
  __int64 v8; // [rsp+20h] [rbp-418h]
  _BYTE v9[544]; // [rsp+30h] [rbp-408h] BYREF
  char v10[464]; // [rsp+250h] [rbp-1E8h] BYREF

  v1 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a1 + 6);
  result = CempPackageFamilyNameFromPsmKey((__int64)a1 + 88, (__int64)v10);
  if ( result >= 0 )
  {
    RmpPsmAppFamilyIdInitialize(
      v10,
      (struct _RM_ACTIVITY_HOST *)((char *)a1 + 552),
      *((_DWORD *)a1 + 155),
      (struct _RM_PSM_APP_FAMILY_ID *)v9);
    v4 = RmpPsmAppFamilyTableFind(v1, (struct _RM_PSM_APP_FAMILY_ID *)v9);
    v5 = v4;
    if ( v4 )
    {
      result = RmpPsmAppFamilyTryRemoveActivityHost(v4, a1);
      if ( result >= 0 )
      {
        if ( *((struct _RM_ACTIVITY_HOST **)v5 + 72) == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64) )
          *((_QWORD *)v5 + 72) = 0LL;
        v6 = *((_QWORD *)a1 + 6);
        if ( !*((_QWORD *)v5 + 69) )
        {
          v8 = *((_QWORD *)v5 + 1) & (-1LL << (*(_DWORD *)(v6 + 3060) & 0x1F));
          for ( i = (struct _RM_PSM_APP_FAMILY *)(*(_QWORD *)(v6 + 3064)
                                                + 8LL
                                                * ((37
                                                  * (BYTE6(v8)
                                                   + 37
                                                   * (BYTE5(v8)
                                                    + 37
                                                    * (BYTE4(v8)
                                                     + 37
                                                     * (BYTE3(v8)
                                                      + 37
                                                      * (BYTE2(v8)
                                                       + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                                                  + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(v6 + 3060) >> 5) - 1)));
                (*(_QWORD *)i & 1) == 0;
                i = *(struct _RM_PSM_APP_FAMILY **)i )
          {
            if ( *(struct _RM_PSM_APP_FAMILY **)i == v5 )
            {
              *(_QWORD *)i = *(_QWORD *)v5;
              --*(_DWORD *)(v6 + 3056);
              *(_QWORD *)v5 |= 0x8000000000000002uLL;
              break;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        }
        return 0;
      }
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}

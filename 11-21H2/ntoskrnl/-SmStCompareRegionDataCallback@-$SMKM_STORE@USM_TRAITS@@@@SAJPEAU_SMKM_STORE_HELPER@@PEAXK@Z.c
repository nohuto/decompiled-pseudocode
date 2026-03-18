/*
 * XREFs of ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140394DD0
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14039423C (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1403792A8 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140379A64 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmFpFree @ 0x14037AE58 (SmFpFree.c)
 *     ?SmStCheckResident@?$SMKM_STORE@USM_TRAITS@@@@SA?AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z @ 0x140395068 (-SmStCheckResident@-$SMKM_STORE@USM_TRAITS@@@@SA-AW4_SMST_RESIDENT_CHECK_RESULT@1@PEAXK@Z.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x1405F7E2C (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCompareRegionDataCallback(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int *a3,
        struct _MDL *a4)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r15d
  volatile signed __int32 *v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  unsigned int *v12; // r13
  unsigned int *v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  struct _MDL *v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // [rsp+20h] [rbp-88h]
  void *Buf2; // [rsp+40h] [rbp-68h]
  void *Buf1; // [rsp+48h] [rbp-60h]
  unsigned __int64 v24; // [rsp+58h] [rbp-50h]
  unsigned int *v25; // [rsp+60h] [rbp-48h]
  unsigned int *v26; // [rsp+B0h] [rbp+8h]

  v5 = 0;
  v6 = 0LL;
  v7 = a1 - 6232;
  v8 = 0;
  if ( (_DWORD)a3 )
  {
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
  v9 = (volatile signed __int32 *)(v7 + 6596);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 6596));
  v10 = *(unsigned int *)a2;
  if ( (*(_BYTE *)(v7 + 6021) & 4) == 0 )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v7 + 6216) + 8 * v10) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
LABEL_4:
    v12 = (unsigned int *)(a2 + 4);
    v13 = (unsigned int *)((char *)a2 + a2[3]);
    v25 = v13;
LABEL_5:
    if ( v12 < v13 )
    {
      Buf1 = (void *)(v11 + *v12);
      *((_BYTE *)v12 + 7) = 16;
      v14 = (unsigned __int64)&v12[2 * *((unsigned __int8 *)v12 + 6) + 2];
      v24 = v14;
      a3 = v12 + 2;
      while ( 1 )
      {
        v26 = a3;
        if ( (unsigned __int64)a3 >= v14 )
        {
LABEL_14:
          v12 += 2 * *((unsigned __int8 *)v12 + 6) + 2;
          v13 = v25;
          goto LABEL_5;
        }
        if ( v6 )
        {
          if ( v8 == *a3 )
            goto LABEL_10;
          if ( v6 != v11 )
          {
            if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, (__int64)a3, (__int64)a4, v21, 8u);
LABEL_18:
              a3 = v26;
              goto LABEL_19;
            }
            v16 = *(_QWORD *)(v7 + 6216);
            a4 = (struct _MDL *)(*(_QWORD *)(v16 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
            v17 = *(_QWORD *)(v16 + 8LL * v8) & 0xFFFFFFFFFFFFFFFEuLL;
            *(_QWORD *)(v16 + 8LL * v8) = v17;
            if ( (v17 & 3) == 0 )
            {
              SmFpFree(v7 + 6608, 5, (__int64)KeGetCurrentThread(), a4);
              goto LABEL_18;
            }
          }
        }
LABEL_19:
        v8 = *a3;
        if ( *a3 == *(_DWORD *)a2 )
        {
          v6 = v11;
        }
        else
        {
          v6 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(v7, v8, 0, (int)a4, 64);
          if ( v6 <= 3 )
          {
            v5 = -1073741670;
            break;
          }
          a3 = v26;
        }
LABEL_10:
        Buf2 = (void *)(v6 + a3[1]);
        if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckResident(Buf2, *((unsigned __int16 *)v12 + 2)) == 1 )
        {
          if ( !memcmp(Buf1, Buf2, *((unsigned __int16 *)v12 + 2)) )
            *((_BYTE *)v12 + 7) = ((char *)v26 - (char *)(v12 + 2)) >> 3;
          if ( *((_BYTE *)v12 + 7) != 16 )
            goto LABEL_14;
        }
        a3 = v26 + 2;
        v14 = v24;
      }
    }
    v9 = (volatile signed __int32 *)(v7 + 6596);
    goto LABEL_23;
  }
  v11 = SMKM_STORE<SM_TRAITS>::SmStMapRegion(v7, v10, 0, (int)a4, 64);
  if ( v11 > 3 )
    goto LABEL_4;
  v5 = -1073741670;
LABEL_23:
  if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 && v11 > 3 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, *(_DWORD *)a2, (__int64)a3, (__int64)a4, v21, 8u);
  if ( v6 != v11 && v6 > 3 )
  {
    if ( (*(_BYTE *)(v7 + 6021) & 4) != 0 )
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v7, v8, (__int64)a3, (__int64)a4, v21, 8u);
    }
    else
    {
      v18 = *(_QWORD *)(v7 + 6216);
      v19 = (struct _MDL *)(*(_QWORD *)(v18 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
      v20 = *(_QWORD *)(v18 + 8LL * v8) & 0xFFFFFFFFFFFFFFFEuLL;
      *(_QWORD *)(v18 + 8LL * v8) = v20;
      if ( (v20 & 3) == 0 )
        SmFpFree(v7 + 6608, 5, (__int64)KeGetCurrentThread(), v19);
    }
  }
  _InterlockedDecrement(v9);
  return v5;
}

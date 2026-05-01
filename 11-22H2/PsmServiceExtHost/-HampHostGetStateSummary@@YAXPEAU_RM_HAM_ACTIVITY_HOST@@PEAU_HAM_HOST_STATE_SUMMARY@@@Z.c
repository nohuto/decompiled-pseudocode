/*
 * XREFs of ?HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18004BEA8
 * Callers:
 *     ?HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18004C8E4 (-HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x18004CA5C (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 * Callees:
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800139C8 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DFB0 (-RmHostFromHamHost@@YAPEAU_RM_ACTIVITY_HOST@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F830 (-HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostGetStateSummary(struct _RM_HAM_ACTIVITY_HOST *a1, struct _HAM_HOST_STATE_SUMMARY *a2)
{
  struct _RM_ACTIVITY_HOST *v4; // rsi
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  __int64 v15; // rdx
  unsigned int IsRunnable; // eax
  int v17; // edx
  int v18; // ecx

  v4 = RmHostFromHamHost(a1);
  memset_0(a2, 0, 0x238uLL);
  v5 = 4LL;
  v6 = (_OWORD *)((char *)a2 + 16);
  v7 = (_OWORD *)((char *)a1 + 24);
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
    v8 = v7[7];
    v7 += 8;
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  *v6 = *v7;
  v6[1] = v7[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)v7 + 4);
  HampHostAcquireLockSharedEx(a1);
  v9 = *((_DWORD *)v4 + 350);
  v10 = *((_DWORD *)a2 + 3);
  if ( v9 )
    v11 = ((unsigned __int8)v10 ^ (unsigned __int8)(v9 - 1)) & 7 ^ v10;
  else
    v11 = v10 & 0xFFFFFFF8;
  *((_DWORD *)a2 + 3) = v11;
  if ( !*((_BYTE *)a1 + 592) )
    *((_DWORD *)a2 + 3) = v11 | 8;
  *(_QWORD *)a2 = *((_QWORD *)v4 + 174);
  v12 = *((_DWORD *)a2 + 2) ^ (*((_DWORD *)a2 + 2) ^ (*((unsigned __int16 *)a1 + 340) >> 1)) & 7;
  *((_DWORD *)a2 + 2) = v12;
  v13 = ((unsigned __int8)v12 ^ (unsigned __int8)(*((unsigned __int16 *)a1 + 340) >> 1)) & 0x18 ^ v12;
  *((_DWORD *)a2 + 2) = v13;
  v14 = ((unsigned __int16)v13 ^ (unsigned __int16)(8 * *((_WORD *)a1 + 340))) & 0x200 ^ v13;
  *((_DWORD *)a2 + 2) = v14;
  if ( *((_DWORD *)v4 + 156) != 2 )
  {
    v15 = v14 & 0xFFFFFF1F | 0x80;
LABEL_15:
    *((_DWORD *)a2 + 2) = v15;
    goto LABEL_16;
  }
  if ( !HampHostIsResumed(a1) )
  {
    IsRunnable = HampHostIsRunnable(a1);
    v17 = *((_DWORD *)a2 + 2);
    if ( IsRunnable )
      v15 = v17 & 0xFFFFFF1F | 0x20;
    else
      v15 = v17 & 0xFFFFFF1F | 0x40;
    goto LABEL_15;
  }
  *((_DWORD *)a2 + 2) &= 0xFFFFFF1F;
  v15 = *((unsigned int *)a2 + 2);
LABEL_16:
  v18 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((unsigned __int16)(*((_QWORD *)a1 + 84) >> 3) << 8)) & 0x100;
  *((_DWORD *)a2 + 2) = v18;
  *((_DWORD *)a2 + 2) = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(*((_QWORD *)a1 + 83) >> 49 << 10)) & 0x400;
  HampHostReleaseLockSharedEx(a1, v15);
}

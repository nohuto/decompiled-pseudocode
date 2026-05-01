/*
 * XREFs of ?ArHostInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@PEAU_RM_PSM_HOST_INFO@@PEAU_AR_ACTIVITY_HOST@@@Z @ 0x180003AF0
 * Callers:
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800033F0 (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall ArHostInitialize(
        struct _ACTIVITY_RESTARTER *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _AR_ACTIVITY_HOST *a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rdi
  __int128 v8; // xmm1

  memset_0((char *)a3 + 40, 0, 0x238uLL);
  *(_QWORD *)a3 = 0LL;
  v6 = 4LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 2) = -1LL;
  *((_QWORD *)a3 + 3) = 1LL;
  *((_QWORD *)a3 + 4) = a1;
  v7 = (_OWORD *)((char *)a3 + 40);
  do
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
    v7[3] = *((_OWORD *)a2 + 3);
    v7[4] = *((_OWORD *)a2 + 4);
    v7[5] = *((_OWORD *)a2 + 5);
    v7[6] = *((_OWORD *)a2 + 6);
    v7 += 8;
    v8 = *((_OWORD *)a2 + 7);
    a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
    *(v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v7 = *(_OWORD *)a2;
  v7[1] = *((_OWORD *)a2 + 1);
  *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
}

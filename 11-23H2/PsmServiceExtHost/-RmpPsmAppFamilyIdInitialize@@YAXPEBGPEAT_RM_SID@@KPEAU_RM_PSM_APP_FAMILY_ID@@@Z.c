/*
 * XREFs of ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180031B70
 * Callers:
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x1800319A0 (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003534C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall RmpPsmAppFamilyIdInitialize(char *a1, union _RM_SID *a2, int a3, struct _RM_PSM_APP_FAMILY_ID *a4)
{
  signed __int64 v8; // rdi
  __int64 v9; // r11
  struct _RM_PSM_APP_FAMILY_ID *v10; // r10
  __int16 v11; // ax
  struct _RM_PSM_APP_FAMILY_ID *v12; // rax
  int v13; // eax

  memset_0(a4, 0, 0x218uLL);
  v8 = a1 - (char *)a4;
  v9 = 232LL;
  v10 = a4;
  do
  {
    if ( v9 == -2147483414 )
      break;
    v11 = *(_WORD *)((char *)v10 + v8);
    if ( !v11 )
      break;
    *(_WORD *)v10 = v11;
    v10 = (struct _RM_PSM_APP_FAMILY_ID *)((char *)v10 + 2);
    --v9;
  }
  while ( v9 );
  v12 = (struct _RM_PSM_APP_FAMILY_ID *)((char *)v10 - 2);
  if ( v9 )
    v12 = v10;
  *(_WORD *)v12 = 0;
  *((_OWORD *)a4 + 29) = *(_OWORD *)a2;
  *((_OWORD *)a4 + 30) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a4 + 31) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a4 + 32) = *((_OWORD *)a2 + 3);
  v13 = *((_DWORD *)a2 + 16);
  *((_DWORD *)a4 + 133) = a3;
  *((_DWORD *)a4 + 132) = v13;
}

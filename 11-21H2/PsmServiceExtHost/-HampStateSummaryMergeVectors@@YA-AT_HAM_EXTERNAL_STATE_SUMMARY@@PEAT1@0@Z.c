/*
 * XREFs of ?HampStateSummaryMergeVectors@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAT1@0@Z @ 0x180010A30
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011800 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampStateSummaryMergeVectors(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r11d
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // r9d
  int v11; // edx
  __int16 v12; // r11
  int v13; // eax
  int v14; // ecx
  int v15; // eax

  v2 = *a1;
  v3 = *a2;
  v4 = *a1 & 7;
  v5 = *a1;
  v6 = *a2 & 7;
  if ( v4 > v6 )
    v6 = v4;
  v7 = (v5 >> 3) & 3;
  v8 = (v3 >> 3) & 3;
  if ( v7 > v8 )
    v8 = v7;
  v9 = (unsigned __int8)v3 >> 5;
  v10 = v6 | (8 * v8);
  v11 = 0;
  if ( (unsigned __int8)v2 >> 5 < v9 )
    v9 = (unsigned __int8)v2 >> 5;
  v12 = v2 | v3;
  v13 = 0;
  if ( (v12 & 0x400) != 0 )
    v13 = 1024;
  v14 = 0;
  if ( (v12 & 0x200) != 0 )
    v14 = 512;
  v15 = v14 | v13;
  if ( (v12 & 0x100) != 0 )
    v11 = 256;
  return v10 | (32 * v9) | v11 | v15;
}

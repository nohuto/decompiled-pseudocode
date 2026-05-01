/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180024970
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180023E30 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  __int16 v2; // bx
  __int16 v3; // ax
  __int16 v4; // di
  __int16 v5; // ax
  __int16 v6; // r9
  __int16 v7; // ax
  __int16 v8; // r8
  __int16 v9; // ax
  __int16 v10; // r8
  __int16 v11; // ax
  __int16 v12; // r8
  __int16 v13; // ax
  __int16 v14; // r8
  __int16 v15; // r9
  unsigned __int16 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v21; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v2 = (unsigned __int16)a1 >> 1;
  v3 = (unsigned __int16)a1 >> 4;
  v4 = a1 | a2;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v3 = (unsigned __int16)a2 >> 4;
  v5 = 8 * (v3 & 3);
  v6 = 0;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 1) & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v2 = (unsigned __int16)a2 >> 1;
  v7 = 2 * (v2 & 7 | v5);
  v8 = 0;
  if ( (v4 & 0x100) != 0 )
    v8 = 256;
  v9 = v8 | v7;
  v10 = 0;
  if ( (v4 & 0x80) != 0 )
    v10 = 128;
  v11 = v10 | v9;
  v12 = 1;
  if ( (v4 & 0x40) != 0 )
    v12 = 65;
  v13 = v12 | v11;
  if ( (v4 & 0x200) != 0 )
    v14 = 512;
  else
    v14 = 0;
  if ( (v4 & 0x400) != 0 )
    v6 = 1024;
  v15 = v14 | v13 | v6;
  v16 = ((unsigned __int16)a2 >> 11) & 1;
  if ( (unsigned __int16)(((unsigned __int16)a1 >> 11) & 1) < v16 )
    v16 = ((unsigned __int16)a1 >> 11) & 1;
  v17 = HIBYTE(a1);
  LOWORD(v21) = v15 | (v16 << 11);
  if ( HIBYTE(a1) > HIBYTE(a2) )
  {
    HIBYTE(v21) = HIBYTE(a1);
    v18 = HIWORD(a1);
LABEL_24:
    BYTE2(v21) = v18;
    return v21;
  }
  if ( HIBYTE(a1) >= HIBYTE(a2) )
  {
    v18 = HIWORD(a1);
    v19 = HIWORD(a2);
    HIBYTE(v21) = v17;
    if ( (unsigned __int8)v18 <= (unsigned __int8)v19 )
    {
      BYTE2(v21) = v19;
      return v21;
    }
    goto LABEL_24;
  }
  BYTE2(v21) = BYTE2(a2);
  HIBYTE(v21) = HIBYTE(a2);
  return v21;
}

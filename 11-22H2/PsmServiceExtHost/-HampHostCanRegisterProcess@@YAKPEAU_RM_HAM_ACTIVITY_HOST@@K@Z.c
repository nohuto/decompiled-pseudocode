/*
 * XREFs of ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180019170
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x180018BA0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostCanRegisterProcess(struct _RM_HAM_ACTIVITY_HOST *a1, __int16 a2)
{
  unsigned int v2; // r8d

  v2 = 1;
  if ( *((_BYTE *)a1 + 592) != 1 )
  {
    if ( (a2 & 0x80u) != 0 )
    {
      if ( (a2 & 0x100) == 0 )
        return *((_QWORD *)a1 + 76) == (_QWORD)a1 + 608;
      return v2;
    }
    if ( (*((_QWORD *)a1 + 83) & 0x2000000000LL) == 0 )
      return 0;
  }
  if ( (a2 & 1) != 0 && (*((_QWORD *)a1 + 83) & 0x10000000000LL) == 0 )
    return 0;
  return v2;
}

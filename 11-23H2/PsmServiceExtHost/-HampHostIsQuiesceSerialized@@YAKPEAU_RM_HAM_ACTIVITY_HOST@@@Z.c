/*
 * XREFs of ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013360
 * Callers:
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180013304 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIsQuiesceSerialized(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  int v3; // edx
  int v5; // edx

  if ( (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
  {
    v1 = *((_QWORD *)a1 + 99);
    v2 = 0;
    v3 = *(_DWORD *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v1 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                   + 696) & 3;
    if ( v3 )
    {
      v5 = v3 - 1;
      if ( v5 )
        return v5 == 1;
      else
        return *(_WORD *)(v1 + 618) & 1;
    }
  }
  else
  {
    return 0;
  }
  return v2;
}

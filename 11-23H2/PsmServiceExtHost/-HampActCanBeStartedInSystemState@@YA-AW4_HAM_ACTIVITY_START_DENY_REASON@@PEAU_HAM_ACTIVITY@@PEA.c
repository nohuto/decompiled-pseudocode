/*
 * XREFs of ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180026D70
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FB18 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z @ 0x18007F7CC (-HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAK@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInSystemState(__int64 a1, int *a2)
{
  int v2; // eax
  int v4; // esi
  __int64 v5; // rbp
  __int64 v8; // rax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2[1];
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 80);
  if ( (v2 & 0x18) != 0 )
  {
    return 8;
  }
  else if ( (v2 & 6) != 0 && (*(_BYTE *)(a1 + 116) & 4) != 0 )
  {
    return 1;
  }
  else if ( (v2 & 4) != 0 && (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
  {
    return 2;
  }
  else if ( ((*(_BYTE *)(a1 + 116) & 8) != 0 || (*(_DWORD *)(a1 + 112) & 0x400) != 0 && !*(_BYTE *)(v5 + 592))
         && (v2 & 1) != 0
         && HampHostShouldDplPolicyApply((struct _RM_HAM_ACTIVITY_HOST *)v5) )
  {
    return 3;
  }
  else if ( (v4 & 8) != 0 && (*(_BYTE *)(a1 + 116) & 2) != 0 )
  {
    return 4;
  }
  else if ( (v4 & 0x20) != 0 && (*(_BYTE *)(a1 + 116) & 1) != 0 )
  {
    return 5;
  }
  else if ( (v4 & 2) != 0 || (*(_BYTE *)(a1 + 116) & 0x10) == 0 )
  {
    if ( (v4 & 0x10) != 0 && (*(_BYTE *)(a1 + 116) & 0x20) != 0 )
    {
      return 7;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 112) & 0x8000) == 0 )
        return 0;
      v8 = *(_QWORD *)(v5 + 792);
      v9 = 1;
      HampSessionCheckBackgroundAccessAllowed(
        *(struct _HAM_SESSION **)(*(_QWORD *)(*(_QWORD *)(v8 + 88) + 88LL) + 160LL),
        (struct _HAM_PACKAGE_INFO *)(*(_QWORD *)(v8 + 88) + 96LL),
        &v9);
      if ( v9 )
        return 0;
      else
        return 12;
    }
  }
  else
  {
    return 6;
  }
}

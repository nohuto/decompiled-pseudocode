/*
 * XREFs of sub_1C0012E40 @ 0x1C0012E40
 * Callers:
 *     sub_1C00119D8 @ 0x1C00119D8 (sub_1C00119D8.c)
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     sub_1C0026320 @ 0x1C0026320 (sub_1C0026320.c)
 *     sub_1C004E5E0 @ 0x1C004E5E0 (sub_1C004E5E0.c)
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0012F88 @ 0x1C0012F88 (sub_1C0012F88.c)
 */

char __fastcall sub_1C0012E40(__int64 a1)
{
  char v1; // si
  __int64 v2; // rdi
  char v3; // bl
  char v4; // r14
  __int64 v6; // r9
  _DWORD *v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // r9
  int v13; // eax

  v1 = 1;
  v2 = *(_QWORD *)(a1 + 4952);
  v3 = 1;
  v4 = 1;
  if ( *(char *)(a1 + 108) < 0
    || *(_DWORD *)(a1 + 308) == 4
    && !*(_DWORD *)(a1 + 100)
    && ((v13 = *(_DWORD *)(a1 + 352), v13 == 5) || v13 == 17 || (*(_BYTE *)(a1 + 107) & 0x50) == 0x50)
    || (v6 = *(_QWORD *)(a1 + 4896)) != 0
    && ((v7 = (_DWORD *)sub_1C0012F88(*(_QWORD *)(v6 + 8), 0LL)) == 0LL
     || *v7 >= 2u && *(_DWORD *)(v9 + 16) > v7[9]
     || *v7 == 1 && (*(_BYTE *)(a1 + 107) & 0x40) != 0 && *(_DWORD *)(v9 + 16) > v8) )
  {
    v1 = 0;
LABEL_25:
    v4 = 0;
    goto LABEL_19;
  }
  if ( !v2
    || (*(_BYTE *)(v2 + 450) & 4) != 0
    || *(_DWORD *)(v2 + 492) == 4 && !*(_DWORD *)(v2 + 980) && (*(_BYTE *)(v2 + 449) & 0x44) == 0x44 )
  {
    v3 = 0;
    goto LABEL_25;
  }
  if ( sub_1C0008B84(v2) )
  {
    v10 = (_DWORD *)sub_1C0012F88(*(_QWORD *)(*(_QWORD *)(v2 + 1792) + 8LL), 0LL);
    if ( !v10
      || *v10 >= 2u && *(_DWORD *)(v11 + 16) > v10[9]
      || *v10 == 1 && (*(_BYTE *)(v2 + 449) & 0x40) != 0 && *(_DWORD *)(v11 + 16) )
    {
      v3 = 0;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 1784));
    if ( !v3 )
      goto LABEL_25;
  }
LABEL_19:
  *(_BYTE *)(a1 + 4829) = v1;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 1782) = v3;
    *(_BYTE *)(v2 + 1783) = v4;
  }
  return v3;
}

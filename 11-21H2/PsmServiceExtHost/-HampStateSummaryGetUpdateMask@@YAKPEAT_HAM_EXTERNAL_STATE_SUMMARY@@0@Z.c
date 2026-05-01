/*
 * XREFs of ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x1800108E8
 * Callers:
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000F9EC (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180010350 (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampStateSummaryGetUpdateMask(
        union _HAM_EXTERNAL_STATE_SUMMARY *a1,
        union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)a1;
  v3 = ((*(_BYTE *)a2 ^ *(_BYTE *)a1) & 0xE0) != 0;
  if ( ((*(_BYTE *)a2 ^ (unsigned __int8)v2) & 7) != 0
    || ((*(_BYTE *)a2 ^ (unsigned __int8)v2) & 0x18) != 0
    || ((*(_DWORD *)a2 ^ v2) & 0x100) != 0
    || ((*(_DWORD *)a2 ^ v2) & 0x200) != 0 )
  {
    v3 |= 2u;
  }
  result = v3 | 4;
  if ( ((*(_DWORD *)a2 ^ v2) & 0x400) == 0 )
    return v3;
  return result;
}

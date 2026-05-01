/*
 * XREFs of ?HampSlsHostBlockerNameFromPsmKey@@YAXPEAU_RM_PSM_KEY@@PEAW4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_BLOCKER_NAME@@@Z @ 0x1800829D8
 * Callers:
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180082358 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800826A4 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 * Callees:
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180082CB4 (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

void __fastcall HampSlsHostBlockerNameFromPsmKey(
        struct _RM_PSM_KEY *a1,
        enum _HAM_PDC_BLOCK_TYPE *a2,
        struct _HAM_SLEEP_STUDY_BLOCKER_NAME *a3)
{
  int v4; // [rsp+38h] [rbp-10h]
  unsigned __int16 *v5; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = *(unsigned __int8 *)a2;
    RtlStringCchPrintfExW((unsigned __int16 *)a3, 0x100uLL, &v5, 0LL, 0, L"%s (%u)", a1, v4);
  }
  else
  {
    RtlStringCchPrintfExW((unsigned __int16 *)a3, 0x100uLL, &v5, 0LL, 0, L"%s", a1);
  }
  *((_DWORD *)a3 + 128) = wcsnlen((const wchar_t *)a3, 0x100uLL) + 1;
}

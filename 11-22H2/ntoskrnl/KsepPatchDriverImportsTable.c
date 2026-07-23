/*
 * XREFs of KsepPatchDriverImportsTable @ 0x14085E8A8
 * Callers:
 *     KsepApplyShimsToDriver @ 0x14085E728 (KsepApplyShimsToDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x140293860 (VfIsVerifierEnabled.c)
 *     VfIsVerificationEnabledForImage @ 0x1405CE288 (VfIsVerificationEnabledForImage.c)
 *     KsepPatchImportTableEntry @ 0x1409773D4 (KsepPatchImportTableEntry.c)
 *     VfGetHookAddressForOriginal @ 0x140ACB88C (VfGetHookAddressForOriginal.c)
 */

__int64 __fastcall KsepPatchDriverImportsTable(__int64 a1, __int64 a2)
{
  PVOID v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // r15d
  __int64 HookAddressForOriginal; // rsi
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  if ( a1 && a2 )
  {
    v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v11);
    if ( !v4 )
      return 3221225473LL;
    v5 = *(_QWORD *)(a2 + 48);
    if ( v5 )
    {
      LODWORD(v6) = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v5 == 4 )
          return 0LL;
        if ( *(_DWORD *)v5 <= 2u )
          break;
LABEL_8:
        v6 = (unsigned int)(v6 + 1);
        v5 = *(_QWORD *)(a2 + 48) + 24 * v6;
        if ( !v5 )
          return 0LL;
      }
      v8 = *(_QWORD *)(v5 + 16);
      if ( v8 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)v8 == 2 )
            goto LABEL_8;
          if ( !*(_QWORD *)(v8 + 16) || !*(_QWORD *)(v8 + 24) || *(_DWORD *)v8 )
            return 3221225485LL;
          result = KsepPatchImportTableEntry(v4, v11);
          if ( (_DWORD)result == -1073741275 )
          {
            if ( (unsigned int)VfIsVerifierEnabled() )
            {
              if ( (unsigned int)VfIsVerificationEnabledForImage(a1) )
              {
                HookAddressForOriginal = VfGetHookAddressForOriginal(*(_QWORD *)(v8 + 8));
                if ( HookAddressForOriginal )
                {
                  result = KsepPatchImportTableEntry(v4, v11);
                  if ( (int)result < 0 )
                    goto LABEL_26;
                  *(_QWORD *)(v8 + 24) = HookAddressForOriginal;
                }
              }
            }
          }
          else if ( (int)result < 0 )
          {
LABEL_26:
            if ( (_DWORD)result != -1073741275 )
              return result;
          }
          v8 = *(_QWORD *)(v5 + 16) + 32LL * (unsigned int)++v9;
          if ( !v8 )
            goto LABEL_8;
        }
      }
    }
  }
  return 3221225485LL;
}

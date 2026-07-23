/*
 * XREFs of MmReplaceImportEntriesForVerifier @ 0x140A2D6BC
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140AE8F80 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiEnumerateBasePatches @ 0x1406971E4 (MiEnumerateBasePatches.c)
 */

__int64 __fastcall MmReplaceImportEntriesForVerifier(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  _QWORD *v6; // rsi
  ULONG v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v3 = a3;
  v6 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v8);
  if ( !v6 || v8 < 8 )
    return 3221225659LL;
  if ( (_DWORD)v3 )
  {
    do
    {
      *((_QWORD *)a2 + 2) = v6[*a2];
      MiEnumerateBasePatches(a1, (unsigned int (__fastcall *)(_QWORD *, __int64))MiReplacePatchImportEntry, (__int64)a2);
      MiReplaceImportEntry((ULONG_PTR)&v6[*a2], *((_QWORD *)a2 + 1));
      a2 += 6;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}

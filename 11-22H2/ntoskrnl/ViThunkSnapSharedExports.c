/*
 * XREFs of ViThunkSnapSharedExports @ 0x140ABE0E4
 * Callers:
 *     ViThunkCreateSharedExportInformation @ 0x140ABE010 (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140293710 (RtlFindNextForwardRunClear.c)
 *     ViThunkSnapSharedExportByName @ 0x140ABE194 (ViThunkSnapSharedExportByName.c)
 */

__int64 __fastcall ViThunkSnapSharedExports(
        PVOID BaseOfImage,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        unsigned int a5)
{
  ULONG v5; // ebx
  unsigned int v6; // edi
  unsigned int v7; // esi
  ULONG v10; // eax
  ULONG v11; // ebx
  int v12; // eax
  ULONG StartingRunIndex; // [rsp+60h] [rbp+18h] BYREF
  int v15; // [rsp+64h] [rbp+1Ch]

  v15 = HIDWORD(a3);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  StartingRunIndex = 0;
  if ( a5 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v5, &StartingRunIndex) )
        break;
      v11 = StartingRunIndex;
      v12 = ViThunkSnapSharedExportByName(BaseOfImage);
      if ( v6 || v12 )
        v6 = 1;
      v5 = v11 + 1;
      ++v7;
      v10 = v5;
      StartingRunIndex = v5;
    }
    while ( v7 < a5 );
  }
  return v6;
}

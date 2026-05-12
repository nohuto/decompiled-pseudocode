/*
 * XREFs of PmTableSignatureCompareRoutine @ 0x1C001C1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmTableSignatureCompareRoutine(
        struct _RTL_AVL_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx

  v3 = FirstStruct[6];
  v4 = SecondStruct[6];
  if ( v4 > v3 )
    return 0LL;
  else
    return 2 - (unsigned int)(v4 < v3);
}

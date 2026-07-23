/*
 * XREFs of sub_14096A1D0 @ 0x14096A1D0
 * Callers:
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1405905F0 @ 0x1405905F0 (sub_1405905F0.c)
 *     sub_140761F24 @ 0x140761F24 (sub_140761F24.c)
 */

__int64 __fastcall sub_14096A1D0(__int64 a1, int *a2, unsigned int a3)
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
      sub_140761F24(a1, (__int64)sub_1405A3DC0, (__int64)a2);
      sub_1405905F0((ULONG_PTR)&v6[*a2], *((_QWORD *)a2 + 1));
      a2 += 6;
      --v3;
    }
    while ( v3 );
  }
  return 0LL;
}

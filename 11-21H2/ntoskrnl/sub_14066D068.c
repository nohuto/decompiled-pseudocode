/*
 * XREFs of sub_14066D068 @ 0x14066D068
 * Callers:
 *     sub_14066D038 @ 0x14066D038 (sub_14066D038.c)
 *     sub_1406D6DA8 @ 0x1406D6DA8 (sub_1406D6DA8.c)
 *     sub_1406D833C @ 0x1406D833C (sub_1406D833C.c)
 *     sub_1406E0450 @ 0x1406E0450 (sub_1406E0450.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_140750F1C @ 0x140750F1C (sub_140750F1C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14066D068(unsigned __int8 a1, unsigned __int8 a2)
{
  bool result; // al
  int v3; // eax

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v3 = *(_DWORD *)&byte_140A38E00[12 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v3, a2 >> 4) )
      return 0;
  }
  return result;
}

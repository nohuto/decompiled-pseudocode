/*
 * XREFs of sub_140B30E74 @ 0x140B30E74
 * Callers:
 *     sub_140AFFEF4 @ 0x140AFFEF4 (sub_140AFFEF4.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 */

unsigned __int8 __fastcall sub_140B30E74(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 result; // al
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 240);
  result = ExInitializeResourceLite(&stru_140C165C0);
  if ( *(_DWORD *)v1 >= 0xED8u )
  {
    v3 = *(_QWORD *)(v1 + 56);
    if ( v3 )
    {
      qword_140D3B0E8 = *(_QWORD *)(v3 + 16);
      LODWORD(dword_140D3B040) = *(_DWORD *)(v3 + 12);
      BYTE1(dword_140D3B058) = *(_BYTE *)(v3 + 7);
      result = *(_BYTE *)(v3 + 8);
      LOBYTE(dword_140D3B058) = 0;
      HIWORD(dword_140D3B058) = result;
    }
  }
  return result;
}

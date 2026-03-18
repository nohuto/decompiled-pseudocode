/*
 * XREFs of MiReleasePteCopyList @ 0x14066107C
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140C69A40, *(__int64 **)(a1 + 16), v1);
  return result;
}

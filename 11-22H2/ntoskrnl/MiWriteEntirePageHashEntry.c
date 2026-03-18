/*
 * XREFs of MiWriteEntirePageHashEntry @ 0x140666E6C
 * Callers:
 *     MiWritePageFileHash @ 0x14046EFA6 (MiWritePageFileHash.c)
 *     MiClearPageFileHash @ 0x140665C00 (MiClearPageFileHash.c)
 *     MiLateWritePageHash @ 0x140666138 (MiLateWritePageHash.c)
 *     MiUpdatePageFileBlockOwner @ 0x140666D0C (MiUpdatePageFileBlockOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWriteEntirePageHashEntry(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_DWORD *)a1 = result;
  if ( dword_140C69750 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
    result = a2[1];
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}

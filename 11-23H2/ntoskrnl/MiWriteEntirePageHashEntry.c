/*
 * XREFs of MiWriteEntirePageHashEntry @ 0x140666DFC
 * Callers:
 *     MiWritePageFileHash @ 0x14046F606 (MiWritePageFileHash.c)
 *     MiClearPageFileHash @ 0x140665B90 (MiClearPageFileHash.c)
 *     MiLateWritePageHash @ 0x1406660C8 (MiLateWritePageHash.c)
 *     MiUpdatePageFileBlockOwner @ 0x140666C9C (MiUpdatePageFileBlockOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWriteEntirePageHashEntry(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = *a2;
  *(_DWORD *)a1 = result;
  if ( dword_140C69650 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
    result = a2[1];
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}

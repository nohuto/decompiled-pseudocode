/*
 * XREFs of MiWriteEntirePageHashEntry @ 0x14066734C
 * Callers:
 *     MiWritePageFileHash @ 0x14046FA06 (MiWritePageFileHash.c)
 *     MiClearPageFileHash @ 0x1406660E0 (MiClearPageFileHash.c)
 *     MiLateWritePageHash @ 0x140666618 (MiLateWritePageHash.c)
 *     MiUpdatePageFileBlockOwner @ 0x1406671EC (MiUpdatePageFileBlockOwner.c)
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

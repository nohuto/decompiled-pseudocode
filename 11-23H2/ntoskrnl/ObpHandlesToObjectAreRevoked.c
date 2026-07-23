/*
 * XREFs of ObpHandlesToObjectAreRevoked @ 0x1407496F8
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x140749FD4 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1402F50A0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 */

bool __fastcall ObpHandlesToObjectAreRevoked(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r8

  v1 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a1);
  if ( v1 )
    return *(_QWORD *)(v1 + 16) == 1LL;
  return v2;
}

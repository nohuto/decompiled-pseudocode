/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18008DE80
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  unsigned int v4; // edi
  char *Heap; // rax
  __int64 v9; // r8
  signed __int64 v10; // rdx

  v4 = SubAuthorityCount;
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  Heap = (char *)RtlAllocateHeap(
                   NtCurrentPeb()->ProcessHeap,
                   NtdllBaseTag + 1310720,
                   4 * (unsigned int)SubAuthorityCount + 8);
  if ( !Heap )
    return -1073741801;
  *Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)IdentifierAuthority->Value;
  *((_WORD *)Heap + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Heap[1] = v4;
  if ( (_BYTE)v4 )
  {
    v9 = v4;
    v10 = Heap - (char *)SubAuthorities;
    do
    {
      *(PULONG)((char *)SubAuthorities + v10 + 8) = *SubAuthorities;
      ++SubAuthorities;
      --v9;
    }
    while ( v9 );
  }
  *Sid = Heap;
  return 0;
}

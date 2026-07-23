/*
 * XREFs of sub_1403A711C @ 0x1403A711C
 * Callers:
 *     IoAllocateErrorLogEntry @ 0x1403A70E0 (IoAllocateErrorLogEntry.c)
 *     sub_1405573A8 @ 0x1405573A8 (sub_1405573A8.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403A711C(PVOID Object, PVOID a2, char a3)
{
  unsigned int v5; // ebx
  __int64 Pool2; // rdi
  __int64 result; // rax

  if ( (unsigned __int8)(a3 - 48) > 0xC0u )
    return 0LL;
  v5 = ((a3 + 7) & 0xF8) + 48;
  if ( (unsigned int)_InterlockedExchangeAdd(&dword_140C46D00, v5) > 0x64000
    || (Pool2 = ExAllocatePool2(64LL, v5, 1917153097LL)) == 0 )
  {
    _InterlockedExchangeAdd(&dword_140C46D00, -v5);
    return 0LL;
  }
  if ( Object )
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
  if ( a2 )
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_WORD *)(Pool2 + 2) = v5;
  *(_WORD *)Pool2 = 11;
  result = Pool2 + 48;
  *(_QWORD *)(Pool2 + 24) = Object;
  *(_QWORD *)(Pool2 + 32) = a2;
  return result;
}

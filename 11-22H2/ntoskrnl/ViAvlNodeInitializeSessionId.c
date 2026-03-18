/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14020A320
 * Callers:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlReserveNode @ 0x14020A294 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x14020A740 (VfAvlDeleteTreeNode.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && (unsigned __int64)(*(_QWORD *)a2 - qword_140C65AE8) < 0x8000000000LL )
    result = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}

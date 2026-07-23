/*
 * XREFs of sub_1406469A4 @ 0x1406469A4
 * Callers:
 *     sub_140646840 @ 0x140646840 (sub_140646840.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1406469A4(int a1, unsigned int a2, unsigned int *a3, __int64 a4, unsigned int *a5)
{
  unsigned int v7; // ecx
  size_t v8; // rbp
  unsigned int v9; // edi
  PVOID Memory; // rax
  void *v11; // r12

  *a5 = 0;
  if ( a1 != 1 )
    return (unsigned int)-1073741161;
  if ( a2 < 4 )
    return (unsigned int)-1073741811;
  if ( !a3 )
    return (unsigned int)-1073741811;
  v8 = *a3;
  if ( (unsigned int)v8 < 4 )
    return (unsigned int)-1073741811;
  v9 = 8;
  if ( a2 < 8 )
  {
    v7 = -1073741789;
    goto LABEL_14;
  }
  Memory = PshedAllocateMemory(v8);
  v11 = Memory;
  if ( !Memory )
    return (unsigned int)-1073741670;
  memmove(Memory, a3 + 1, v8);
  a3[1] = a2 - 8;
  *a3 = PshedDoPluginCtl((unsigned int)v8, v11, a3 + 1, a3 + 2);
  PshedFreeMemory(v11);
  v9 = a3[1] + 8;
  v7 = *a3;
  if ( a2 < v9 )
    v7 = -1073741789;
  if ( !v7 || v7 == -1073741789 )
LABEL_14:
    *a5 = v9;
  return v7;
}

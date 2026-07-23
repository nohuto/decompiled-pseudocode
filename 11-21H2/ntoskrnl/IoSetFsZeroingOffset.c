/*
 * XREFs of IoSetFsZeroingOffset @ 0x140559420
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 */

__int64 __fastcall IoSetFsZeroingOffset(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // r8d
  int v3; // r9d

  if ( sub_14020C0F0(a1, 4u) )
    *(_DWORD *)(*(_QWORD *)(v1 + 200) + 40LL) = v3;
  else
    return (unsigned int)-1073741275;
  return v2;
}

/*
 * XREFs of sub_1409B1740 @ 0x1409B1740
 * Callers:
 *     <none>
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14030263C @ 0x14030263C (sub_14030263C.c)
 *     sub_14079FFE8 @ 0x14079FFE8 (sub_14079FFE8.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 */

__int64 __fastcall sub_1409B1740(_DWORD *a1)
{
  _DWORD **v2; // rax
  __int64 v3; // rcx
  void *v4; // rax

  v2 = (_DWORD **)sub_140204738(0LL);
  if ( (a1[543] & 0x1000) == 0 && a1 != qword_140D06940 && a1 != v2[110] && !sub_14030263C(a1) )
  {
    v4 = sub_14079FFE8(v3);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( (a1[281] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}

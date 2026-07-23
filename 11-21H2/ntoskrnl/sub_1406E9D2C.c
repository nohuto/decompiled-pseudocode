/*
 * XREFs of sub_1406E9D2C @ 0x1406E9D2C
 * Callers:
 *     sub_140798E18 @ 0x140798E18 (sub_140798E18.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG_PTR __fastcall sub_1406E9D2C(__int64 a1, void *a2)
{
  void **v3; // rdx
  void **v4; // rax
  struct _KEVENT *v5; // rcx

  v3 = *(void ***)a2;
  if ( v3[1] != a2 || (v4 = (void **)*((_QWORD *)a2 + 1), *v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  --*(_DWORD *)(a1 + 344);
  v5 = (struct _KEVENT *)*((_QWORD *)a2 + 6);
  *((_BYTE *)a2 + 90) |= 4u;
  KeSetEvent(v5, 0, 0);
  return ObfDereferenceObject(a2);
}

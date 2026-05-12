/*
 * XREFs of sub_1C00420D4 @ 0x1C00420D4
 * Callers:
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 * Callees:
 *     <none>
 */

void sub_1C00420D4()
{
  PVOID *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = (PVOID *)qword_1C00939F0;
    if ( qword_1C00939F0 == &qword_1C00939F0 )
      break;
    if ( *((PVOID **)qword_1C00939F0 + 1) != &qword_1C00939F0
      || (v1 = *(_QWORD *)qword_1C00939F0, *(PVOID *)(*(_QWORD *)qword_1C00939F0 + 8LL) != qword_1C00939F0) )
    {
      __fastfail(3u);
    }
    qword_1C00939F0 = *(PVOID *)qword_1C00939F0;
    *(_QWORD *)(v1 + 8) = &qword_1C00939F0;
    ExFreePoolWithTag(v0[2], 0x48536152u);
    ExFreePoolWithTag(v0, 0x48536152u);
  }
}

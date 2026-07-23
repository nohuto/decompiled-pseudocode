/*
 * XREFs of sub_140563058 @ 0x140563058
 * Callers:
 *     sub_140A67BA0 @ 0x140A67BA0 (sub_140A67BA0.c)
 *     sub_140A67C74 @ 0x140A67C74 (sub_140A67C74.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140952A20 @ 0x140952A20 (sub_140952A20.c)
 *     sub_140A68BE8 @ 0x140A68BE8 (sub_140A68BE8.c)
 */

__int64 sub_140563058()
{
  int v0; // ebx
  __int64 v1; // rax
  int v2; // ecx
  int v3; // ecx

  v0 = 0;
  if ( (*(_DWORD *)(qword_140C448A8 + 64) & 0x20) != 0 )
  {
    sub_140952A20();
    goto LABEL_9;
  }
  KeSetEvent((PRKEVENT)(qword_140C448A8 + 33048), 0, 1u);
  KeWaitForSingleObject((PVOID)(qword_140C448A8 + 33072), Executive, 0, 0, 0LL);
  v1 = qword_140C448A8;
  v0 = *(_DWORD *)(qword_140C448A8 + 33144);
  if ( v0 >= 0 )
  {
LABEL_9:
    sub_140A68BE8();
    return (unsigned int)v0;
  }
  v2 = *(_DWORD *)(qword_140C448A8 + 33272);
  if ( !v2 )
    v2 = 1892;
  *(_DWORD *)(qword_140C448A8 + 33272) = v2;
  v3 = *(_DWORD *)(v1 + 33276);
  if ( !v3 )
    v3 = 1;
  *(_DWORD *)(v1 + 33276) = v3;
  return (unsigned int)v0;
}

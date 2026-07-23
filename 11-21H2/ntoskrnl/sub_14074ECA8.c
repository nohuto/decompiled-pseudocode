/*
 * XREFs of sub_14074ECA8 @ 0x14074ECA8
 * Callers:
 *     sub_140747DDC @ 0x140747DDC (sub_140747DDC.c)
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 *     sub_14074D338 @ 0x14074D338 (sub_14074D338.c)
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 *     sub_14080EBD0 @ 0x14080EBD0 (sub_14080EBD0.c)
 * Callees:
 *     sub_1402D3D0C @ 0x1402D3D0C (sub_1402D3D0C.c)
 *     sub_1402D5A78 @ 0x1402D5A78 (sub_1402D5A78.c)
 */

_QWORD *__fastcall sub_14074ECA8(int a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  v4 = sub_1402D5A78();
  v5 = v4;
  if ( v4 )
  {
    v4[3] = a2;
    *((_DWORD *)v4 + 4) = a1;
    v6 = v4[1];
    *v4 = MEMORY[0xFFFFF78000000008];
    sub_1402D3D0C(v6);
  }
  return v5;
}

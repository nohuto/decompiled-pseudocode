/*
 * XREFs of sub_18005C7A0 @ 0x18005C7A0
 * Callers:
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18005CAE8 @ 0x18005CAE8 (sub_18005CAE8.c)
 */

_QWORD *__fastcall sub_18005C7A0(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // r10
  _QWORD *result; // rax

  v8 = sub_18001D684();
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a3;
    *a3 = 0LL;
    sub_18005CAE8(v8, a2, v10, v9);
    *v11 = &Spectre::Engine::TextureImageSet::`vftable';
    v11[7] = v12;
  }
  else
  {
    v11 = 0LL;
  }
  result = a1;
  *a1 = v11;
  return result;
}

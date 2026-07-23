/*
 * XREFs of sub_14095A388 @ 0x14095A388
 * Callers:
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 *     sub_14095A388 @ 0x14095A388 (sub_14095A388.c)
 * Callees:
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1409588F0 @ 0x1409588F0 (sub_1409588F0.c)
 *     sub_14095A388 @ 0x14095A388 (sub_14095A388.c)
 */

__int64 __fastcall sub_14095A388(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = sub_14095A388(i);
  if ( *(_DWORD *)(a1 + 300) == 779 )
  {
    sub_1409588F0(4, *(struct _DEVICE_OBJECT **)(a1 + 32));
    return sub_1402DE844(a1, 780);
  }
  return result;
}

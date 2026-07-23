/*
 * XREFs of sub_140811D40 @ 0x140811D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140995F04 @ 0x140995F04 (sub_140995F04.c)
 */

__int64 __fastcall sub_140811D40(_QWORD *a1)
{
  _QWORD *v1; // r8
  __int64 v3; // rax
  __int64 v4; // rdx

  v1 = a1;
  if ( byte_140C5AC3C )
  {
    v3 = *a1;
    v4 = 0x4B00E9D55D3E9A59LL - *a1;
    if ( *a1 == 0x4B00E9D55D3E9A59LL )
      v4 = 0x486551FF34FFBDA6LL - a1[1];
    if ( !v4 )
      goto LABEL_12;
    a1 = (_QWORD *)(0x4094B817BA3E0F4DLL - v3);
    if ( v3 == 0x4094B817BA3E0F4DLL )
      a1 = (_QWORD *)(0xF3A0E67963D5D1A2uLL - v1[1]);
    if ( !a1 )
      goto LABEL_12;
    a1 = (_QWORD *)(0x47A0704A6FE69556LL - v3);
    if ( v3 == 0x47A0704A6FE69556LL )
      a1 = (_QWORD *)(0x47DA6F938DC2248FLL - v1[1]);
    if ( !a1 )
LABEL_12:
      sub_140995F04(a1, v4, v1);
  }
  return 0LL;
}

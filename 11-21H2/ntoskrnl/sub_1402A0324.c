/*
 * XREFs of sub_1402A0324 @ 0x1402A0324
 * Callers:
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     sub_14057B33C @ 0x14057B33C (sub_14057B33C.c)
 *     sub_14070A268 @ 0x14070A268 (sub_14070A268.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402A0324(unsigned __int16 *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned int v3; // edx
  _QWORD *v4; // rcx
  unsigned int v5; // [rsp+8h] [rbp+8h] BYREF

  v1 = *a1;
  result = 0LL;
  v5 = 0;
  v3 = 0;
  if ( v1 )
  {
    v4 = a1 + 4;
    do
    {
      if ( *v4 )
        _bittestandset((signed __int32 *)&v5, v3);
      ++v3;
      ++v4;
    }
    while ( v3 < v1 );
    return v5;
  }
  return result;
}

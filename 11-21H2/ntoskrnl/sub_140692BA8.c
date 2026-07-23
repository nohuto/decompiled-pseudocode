/*
 * XREFs of sub_140692BA8 @ 0x140692BA8
 * Callers:
 *     sub_140690B2C @ 0x140690B2C (sub_140690B2C.c)
 *     sub_140692ACC @ 0x140692ACC (sub_140692ACC.c)
 *     sub_1409B4C94 @ 0x1409B4C94 (sub_1409B4C94.c)
 * Callees:
 *     sub_1402A0EDC @ 0x1402A0EDC (sub_1402A0EDC.c)
 *     sub_1409B4A64 @ 0x1409B4A64 (sub_1409B4A64.c)
 */

__int64 __fastcall sub_140692BA8(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  const signed __int64 *Buffer; // rcx

  result = sub_1402A0EDC(a1, a2, a3, a4);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( *(_QWORD *)(v9 + 512) )
      return result;
    result = sub_1409B4A64();
    if ( (int)result < 0 )
      return result;
    result = sub_1402A0EDC(a1, a2, a3, a4);
  }
  if ( (int)result >= 0 )
  {
    Buffer = (const signed __int64 *)stru_140C1BD30.Buffer;
    if ( a2 >= 0x20 )
      Buffer = (const signed __int64 *)stru_140C1BD40.Buffer;
    if ( !_bittest64(Buffer, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}

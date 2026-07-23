/*
 * XREFs of sub_1402F69A0 @ 0x1402F69A0
 * Callers:
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_140294574 @ 0x140294574 (sub_140294574.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F6970 @ 0x1402F6970 (sub_1402F6970.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_14035EE9C @ 0x14035EE9C (sub_14035EE9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402F69A0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 388);
  if ( (_BYTE)result == 1 )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
  }
  else if ( (_BYTE)result == 5 )
  {
    result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
    if ( *(_BYTE *)(a1 + 391) )
      *(_QWORD *)(a1 + 1000) += result;
    else
      *(_QWORD *)(a1 + 992) += result;
  }
  *(_BYTE *)(a1 + 388) = 7;
  return result;
}

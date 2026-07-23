/*
 * XREFs of sub_140258774 @ 0x140258774
 * Callers:
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 * Callees:
 *     sub_1402768B4 @ 0x1402768B4 (sub_1402768B4.c)
 */

__int64 __fastcall sub_140258774(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 *v8; // r11
  unsigned __int64 v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx

  *a4 = 0LL;
  result = sub_1402768B4(a1, a2, a2);
  if ( (_BYTE)result )
  {
    v9 = 0x9896800uLL / DesiredTime;
    if ( byte_140C54C58 == 1 )
      v10 = (_DWORD *)(v7 + 708);
    else
      v10 = (_DWORD *)(v6 + 716);
    v11 = *a3;
    if ( *a3 != 0x7FFFFFFFFFFFFFFFLL && (__int64)(v11 + v9) > MEMORY[0xFFFFF78000000320] )
    {
      v12 = v9 + v11 - MEMORY[0xFFFFF78000000320];
      *v10 = 0;
      *v8 = v12;
    }
    result = (unsigned int)dword_140C49BD8;
    if ( *v10 >= (unsigned int)dword_140C49BD8 )
    {
      *v10 = 0;
      *v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  return result;
}

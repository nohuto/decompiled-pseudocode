/*
 * XREFs of sub_140A56A48 @ 0x140A56A48
 * Callers:
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 */

__int64 __fastcall sub_140A56A48(_BYTE *a1, int *a2, int *a3, _DWORD *a4)
{
  char v8; // r10
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx

  v8 = sub_140A56B08(a1);
  _RAX = 1LL;
  __asm { cpuid }
  v14 = BYTE1(result) & 0xF;
  if ( v14 == 15 )
  {
    v14 = (unsigned __int8)((unsigned int)result >> 20) + 15;
    v15 = (unsigned __int64)(result & 0xF0 | ((unsigned int)result >> 8) & 0xF00) >> 4;
  }
  else
  {
    v15 = (unsigned __int8)result >> 4;
  }
  if ( (v8 == 2 || v8 == 3) && v14 == 6 )
    v15 |= ((unsigned int)result >> 12) & 0xF0;
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v14;
  if ( a3 )
    *a3 = v15;
  if ( a4 )
    *a4 = result & 0xF;
  return (unsigned int)result;
}

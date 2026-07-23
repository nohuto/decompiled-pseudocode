/*
 * XREFs of sub_1403BF914 @ 0x1403BF914
 * Callers:
 *     sub_140A56780 @ 0x140A56780 (sub_140A56780.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140647C4C @ 0x140647C4C (sub_140647C4C.c)
 *     sub_140A56B08 @ 0x140A56B08 (sub_140A56B08.c)
 */

__int64 __fastcall sub_1403BF914(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  char v24; // r8
  int v25; // r8d
  __int128 v26; // [rsp+30h] [rbp-20h] BYREF

  *a1 = 0;
  *a2 = 0;
  v26 = 0LL;
  result = sub_140A56B08();
  if ( (_DWORD)result == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)result >= 0x14 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RBX & 0x2000000) != 0 || (result = sub_140647C4C(&v26, _RDX), (v26 & 0xFFFFF000) != 0) )
      {
        *a1 = 16;
        *a2 |= 9u;
        _RAX = 20LL;
        __asm { cpuid }
        if ( (_RCX & 1) != 0 || (_RCX & 4) != 0 )
        {
          *a1 += 16;
          *a2 |= 6u;
        }
        if ( (_RBX & 1) != 0 )
        {
          *a1 += 8;
          *a2 |= 0x10u;
        }
        if ( (_RBX & 4) != 0 && (_DWORD)_RAX )
        {
          _RAX = 20LL;
          __asm { cpuid }
          v24 = _RAX;
          if ( ((unsigned __int8)_RAX & 7u) > 4 )
            v24 = -4;
          v25 = v24 & 7;
          *a1 += 16 * v25;
          *a2 |= (32 << v25) - 32;
        }
        result = (*a1 + 63) & 0xFFFFFFC0;
        *a1 = result;
      }
    }
  }
  return result;
}

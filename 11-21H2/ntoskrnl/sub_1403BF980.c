/*
 * XREFs of sub_1403BF980 @ 0x1403BF980
 * Callers:
 *     sub_140A56780 @ 0x140A56780 (sub_140A56780.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403BF980(__int64 a1)
{
  __int64 result; // rax
  unsigned int v11; // r11d
  __int64 v17; // rdi
  char v18; // r9
  int v19; // ecx
  int v20; // r9d
  int v21; // r9d
  unsigned __int64 v22; // rcx
  unsigned int *v23; // rdi
  _DWORD *v24; // rsi
  int v25; // edx
  unsigned int i; // r9d
  __int64 v27; // r8
  unsigned int v28; // ebp
  __int64 v34; // r8

  _RAX = 1LL;
  __asm { cpuid }
  if ( (_RCX & 0x4000000) == 0 )
    goto LABEL_28;
  _RAX = 13LL;
  __asm { cpuid }
  result = (unsigned int)result;
  *(_QWORD *)a1 = (unsigned int)result | ((unsigned __int64)(unsigned int)_RDX << 32);
  if ( (result & 3) == 3 )
  {
    v11 = 0;
    _RAX = 13LL;
    __asm { cpuid }
    v17 = (unsigned int)_RCX;
    v18 = 0;
    v19 = 0;
    if ( (_RAX & 0xA) == 0xA )
      v18 = 2;
    v20 = ((unsigned __int8)((unsigned int)_RAX >> 2) ^ (unsigned __int8)(*(_BYTE *)(a1 + 20) | v18)) & 4;
    if ( (_RAX & 0xA) == 0xA )
      v19 = 2;
    v21 = (*(_DWORD *)(a1 + 20) & 0xFFFFFFFC | _RAX & 1 | v19) ^ v20;
    *(_DWORD *)(a1 + 20) = v21;
    if ( (v21 & 2) != 0 )
      v22 = v17 | ((unsigned __int64)(unsigned int)_RDX << 32);
    else
      v22 = 0LL;
    *(_QWORD *)(a1 + 536) = v22;
    v23 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 160;
    v24 = (_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 32) = 160;
    v25 = 576;
    *(_DWORD *)(a1 + 36) = 256;
    for ( i = 2; i < 0x40; ++i )
    {
      v27 = 1LL << i;
      v28 = v25;
      if ( ((1LL << i) & *(_QWORD *)a1) != 0 )
      {
        _RAX = 13LL;
        __asm { cpuid }
        *(v24 - 1) = _RBX;
        *v24 = _RAX;
        v25 = _RBX + _RAX;
        if ( v28 >= (int)_RBX + (int)_RAX )
          v25 = v28;
        if ( (_RCX & 2) != 0 )
          *(_QWORD *)(a1 + 544) |= v27;
        if ( (_RCX & 4) != 0 )
          *(_QWORD *)(a1 + 824) |= v27;
      }
      v24 += 2;
    }
    result = *(unsigned int *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v25;
    if ( (result & 2) != 0 )
    {
      v34 = 556LL;
      do
      {
        if ( ((1LL << v11) & *(_QWORD *)(a1 + 536)) != 0 )
        {
          _RAX = 13LL;
          __asm { cpuid }
          *(_DWORD *)(v34 + a1) = result;
          if ( (_RCX & 2) != 0 )
            *(_QWORD *)(a1 + 544) |= 1LL << v11;
        }
        else
        {
          result = *v23;
          *(_DWORD *)(v34 + a1) = result;
        }
        ++v11;
        v34 += 4LL;
        v23 += 2;
      }
      while ( v11 < 0x40 );
    }
  }
  else
  {
LABEL_28:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}

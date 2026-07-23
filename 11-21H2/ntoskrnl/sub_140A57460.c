/*
 * XREFs of sub_140A57460 @ 0x140A57460
 * Callers:
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 * Callees:
 *     sub_1403BFE1C @ 0x1403BFE1C (sub_1403BFE1C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418C1C @ 0x140418C1C (sub_140418C1C.c)
 *     sub_140418FE4 @ 0x140418FE4 (sub_140418FE4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall sub_140A57460(__int64 a1)
{
  __int64 v3; // rcx
  char v12; // dl
  char v13; // dl
  bool v14; // zf
  __int64 v15; // rdx
  int v16; // ecx
  ULONG_PTR v26; // rdx
  int v28[6]; // [rsp+30h] [rbp-20h] BYREF

  v28[0] = 0;
  LODWORD(_RAX) = sub_140418C1C(a1);
  if ( (_DWORD)_RAX )
    goto LABEL_18;
  LOBYTE(_RAX) = *(_BYTE *)(a1 + 141);
  if ( (_BYTE)_RAX == 2 )
  {
    _RAX = *(unsigned __int8 *)(a1 + 67);
    if ( *(_BYTE *)(a1 + 64) == 6 && (unsigned __int8)_RAX <= 0x36u )
    {
      v3 = 0x6000C010000000LL;
      if ( _bittest64(&v3, _RAX) )
        return _RAX;
    }
  }
  else if ( (_BYTE)_RAX != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return _RAX;
  }
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_17;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) == 0 )
    goto LABEL_17;
  _RAX = __readmsr(0x10Au);
  if ( (_RAX & 1) == 0 )
    goto LABEL_17;
  dword_140D06C2C = 1;
  LOBYTE(_RAX) = 0;
  v12 = (qword_140D06958 & 0x28) == 8;
  if ( (qword_140D06958 & 0x380000) != 0x380000 )
  {
    LOBYTE(_RAX) = sub_140418FE4();
    v12 = _RAX | v13;
  }
  if ( v12 )
  {
LABEL_17:
    if ( *(_DWORD *)(a1 + 36) && !byte_140C54EE0 )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
LABEL_18:
    v14 = *(_BYTE *)(a1 + 141) == 2;
    byte_140C54EE0 = 1;
    if ( !v14 || (qword_140D06958 & 0x10) != 0 )
    {
      if ( !*(_DWORD *)(a1 + 36) )
        dword_140D06B00 = -1;
    }
    else
    {
      LOBYTE(_RAX) = sub_1403BFE1C(v28);
      if ( (_BYTE)_RAX )
      {
        v16 = v28[0];
      }
      else
      {
        v15 = 0LL;
        _RAX = 0LL;
        v16 = 46;
        while ( *(_DWORD *)((char *)qword_1400274A0 + _RAX) != *(unsigned __int8 *)(a1 + 141)
             || *(_DWORD *)((char *)qword_1400274A0 + _RAX + 4) != *(_DWORD *)(a1 + 1736) )
        {
          ++v15;
          _RAX = 20 * v15;
          if ( *((_DWORD *)&qword_1400274A0[1] + 5 * v15) == 19 )
            goto LABEL_32;
        }
        LOBYTE(_RAX) = 5 * v15;
        v16 = *((_DWORD *)&qword_1400274A0[1] + 5 * v15 + 1);
        if ( !v16 )
        {
          _RAX = 0x80000000LL;
          __asm { cpuid }
          if ( (unsigned int)_RAX < 0x80000008 )
          {
            LOBYTE(_RAX) = 36;
          }
          else
          {
            _RAX = 2147483656LL;
            __asm { cpuid }
          }
          v16 = (unsigned __int8)_RAX;
        }
      }
LABEL_32:
      v26 = *(unsigned int *)(a1 + 36);
      if ( (_DWORD)v26 )
      {
        LOBYTE(_RAX) = dword_140D06B00;
        if ( v16 != dword_140D06B00 && !byte_140D069E3 )
          KeBugCheckEx(0x5Du, 0x4C315446uLL, v26, v16, dword_140D06B00);
      }
      else
      {
        dword_140D06B00 = v16;
      }
    }
  }
  return _RAX;
}

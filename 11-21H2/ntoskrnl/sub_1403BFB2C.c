/*
 * XREFs of sub_1403BFB2C @ 0x1403BFB2C
 * Callers:
 *     sub_140A56CDC @ 0x140A56CDC (sub_140A56CDC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1403BFB2C(int a1, unsigned int a2, unsigned int a3, __int64 a4, __int128 *a5, char *a6)
{
  __int128 v8; // xmm0
  unsigned int v9; // esi
  int v15; // r15d
  unsigned int v16; // r11d
  unsigned int v22; // ecx
  char v23; // r8
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  int i; // r11d
  int v32; // ecx
  unsigned int v33; // ecx
  char v34; // cl
  int v35; // eax
  int v36; // edx
  unsigned __int8 v42; // r11
  int v43; // ecx
  int v49; // r8d
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  char v56; // r8
  int v57; // eax
  __int64 v58; // rax
  char v59; // r8
  unsigned int v60; // ebx
  unsigned int v66; // ecx
  __int128 v68; // [rsp+30h] [rbp-20h]
  __int64 v69; // [rsp+40h] [rbp-10h]

  *(_OWORD *)a6 = 0LL;
  v8 = *a5;
  *((_QWORD *)a6 + 2) = 0LL;
  *((_DWORD *)a6 + 6) = 0;
  v69 = 0LL;
  v68 = 0LL;
  if ( (unsigned int)(a1 - 2) > 1 )
  {
    if ( a1 == 1 && a3 >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      v42 = _RCX;
      v43 = (unsigned __int16)_RCX >> 12;
      if ( !v43 )
        _BitScanReverse((unsigned int *)&v43, 2 * v42 + 1);
      *a6 = 2;
      *((_DWORD *)a6 + 3) = 1 << v43;
      if ( a3 >= 0x8000001E && (*(_DWORD *)(a4 + 8) & 0x400000) != 0 )
      {
        *a6 |= 7u;
        _RAX = 2147483678LL;
        __asm { cpuid }
        v49 = _RAX;
        LODWORD(_RAX) = *((_DWORD *)a6 + 3);
        LODWORD(_RBX) = BYTE1(_RBX) + 1;
        *((_DWORD *)a6 + 6) = v49;
        LODWORD(_RAX) = (unsigned int)_RAX / (unsigned int)_RBX;
        *((_DWORD *)a6 + 2) = _RBX;
        *((_DWORD *)a6 + 3) = _RAX;
        *((_DWORD *)a6 + 1) |= 2u;
        *((_DWORD *)a6 + 4) = (unsigned int)_RAX / ((((unsigned int)_RCX >> 8) & 7) + 1);
      }
    }
    goto LABEL_21;
  }
  v9 = 11;
  if ( a2 >= 0x1F )
  {
    _RAX = 31LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      v9 = 31;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  if ( a2 >= 0xB )
  {
LABEL_4:
    _RAX = 11LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
LABEL_5:
      *((_DWORD *)a6 + 1) |= 2u;
      v15 = 0;
      *((_DWORD *)a6 + 6) = _RDX;
      v16 = 0;
      do
      {
        _RAX = v9;
        __asm { cpuid }
        v22 = (unsigned int)_RCX >> 8;
        ++v15;
        v23 = _RAX;
        if ( v22 )
        {
          v24 = v22 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v54 = v25 - 1;
              if ( v54 )
              {
                v55 = v54 - 1;
                if ( v55 )
                {
                  v56 = _RAX & 0x1F;
                  if ( v55 == 1 )
                  {
                    v57 = *((_DWORD *)&v68 + v16) / *((_DWORD *)a6 + 2);
                    *a6 |= 4u;
                    v16 = 5;
                    *((_DWORD *)a6 + 4) = v57;
                    HIDWORD(v69) = 1 << v56;
                  }
                  else
                  {
                    *((_DWORD *)&v68 + v16) = 1 << v56;
                  }
                }
                else
                {
                  v16 = 4;
                  LODWORD(v69) = 1 << (_RAX & 0x1F);
                }
              }
              else
              {
                *((_DWORD *)a6 + 1) |= 1u;
                v58 = v16;
                v16 = 3;
                *((_DWORD *)a6 + 5) = *((_DWORD *)&v68 + v58);
                HIDWORD(v68) = 1 << (v23 & 0x1F);
              }
            }
            else
            {
              v16 = 2;
              DWORD2(v68) = 1 << (_RAX & 0x1F);
            }
          }
          else
          {
            v16 = 1;
            *a6 |= 1u;
            *((_DWORD *)a6 + 2) = 1 << (_RAX & 0x1F);
            DWORD1(v68) = 1 << (_RAX & 0x1F);
          }
        }
      }
      while ( (_WORD)_RBX );
      *a6 |= 2u;
      *((_DWORD *)a6 + 3) = *((_DWORD *)&v68 + v16) / *((_DWORD *)a6 + 2);
      if ( (*((_DWORD *)a6 + 1) & 1) != 0 )
        goto LABEL_21;
      goto LABEL_12;
    }
    goto LABEL_44;
  }
  if ( a2 < 4 )
  {
    v59 = 1;
    v60 = 0;
    goto LABEL_45;
  }
LABEL_44:
  *a6 = 2;
  _RAX = 4LL;
  v59 = 3;
  __asm { cpuid }
  _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
  v60 = 1 << _RCX;
  *((_DWORD *)a6 + 3) = 1 << _RCX;
LABEL_45:
  if ( (HIDWORD(v8) & 0x10000000) != 0 )
  {
    *a6 = v59;
    _BitScanReverse(&v66, 2 * BYTE6(v8) - 1);
    *((_DWORD *)a6 + 2) = (1 << v66) / v60;
  }
LABEL_12:
  if ( a1 == 2 && a2 >= 4 )
  {
    for ( i = 0; ; ++i )
    {
      _RAX = 4LL;
      __asm { cpuid }
      v32 = (int)((_DWORD)_RAX << 27) >> 27;
      if ( !v32 )
        break;
      if ( v32 == 3 && (_RAX & 0xE0) == 0x40 )
      {
        _BitScanReverse(&v33, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
        *((_DWORD *)a6 + 1) |= 1u;
        *((_DWORD *)a6 + 5) = 1 << v33;
        break;
      }
    }
  }
LABEL_21:
  v34 = *a6;
  LOBYTE(v35) = *a6 & 6;
  if ( (_BYTE)v35 == 2 )
  {
    v35 = *((_DWORD *)a6 + 3);
    v34 |= 4u;
    *a6 = v34;
    *((_DWORD *)a6 + 4) = v35;
  }
  v36 = *((_DWORD *)a6 + 1);
  if ( (v36 & 1) == 0 && (v34 & 1) != 0 )
  {
    v35 = *((_DWORD *)a6 + 2);
    *((_DWORD *)a6 + 1) = v36 | 1;
    *((_DWORD *)a6 + 5) = v35;
  }
  return v35;
}

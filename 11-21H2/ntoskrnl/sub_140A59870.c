/*
 * XREFs of sub_140A59870 @ 0x140A59870
 * Callers:
 *     sub_140A59810 @ 0x140A59810 (sub_140A59810.c)
 *     sub_140A69A2C @ 0x140A69A2C (sub_140A69A2C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140A59870(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // r9
  __int64 result; // rax
  int v11; // r10d
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  char v16; // cl
  __int64 v17; // r15
  __int64 v18; // rbx
  _WORD *v19; // rdx
  __int64 v20; // r10
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // r11
  int v24; // edi
  int i; // ebp
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r14

  v2 = 0;
  v3 = a1 + 34392;
  do
  {
    _RAX = a2;
    __asm { cpuid }
    v11 = _RCX;
    v12 = (int)((_DWORD)result << 27) >> 27;
    if ( !v12 )
      break;
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 2 )
            goto LABEL_20;
          *(_DWORD *)(v3 + 8) = 3;
        }
        else
        {
          *(_DWORD *)(v3 + 8) = 0;
        }
      }
      else
      {
        *(_DWORD *)(v3 + 8) = 1;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 2;
    }
    if ( (result & 0x200) != 0 )
      v16 = -1;
    else
      v16 = ((unsigned int)_RBX >> 22) + 1;
    *(_BYTE *)(v3 + 1) = v16;
    *(_BYTE *)v3 = ((unsigned int)result >> 5) & 7;
    *(_WORD *)(v3 + 2) = (_RBX & 0xFFF) + 1;
    v17 = 264LL * v2;
    *(_DWORD *)(v3 + 4) = (v11 + 1)
                        * (((unsigned int)_RBX >> 22) + 1)
                        * ((_RBX & 0xFFF) + 1)
                        * ((((unsigned int)_RBX >> 12) & 0x3FF) + 1);
    v18 = *(unsigned __int8 *)(a1 + 208);
    v19 = (_WORD *)(v17 + a1 + 40632);
    v20 = *(_QWORD *)(a1 + 200);
    if ( *v19 > (unsigned __int16)v18 )
      goto LABEL_10;
    if ( v19[1] > (unsigned __int16)v18 )
    {
      *v19 = v18 + 1;
LABEL_10:
      *(_QWORD *)&v19[4 * v18 + 4] |= v20;
    }
    v21 = ((unsigned int)result >> 14) & 0xFFF;
    if ( v21 )
    {
      _BitScanReverse(&v22, 2 * v21 + 1);
      v23 = 0LL;
      v24 = ~((unsigned __int8)(1 << v22) - 1);
      for ( i = v24 & *(_DWORD *)(a1 + 212);
            (unsigned int)v23 < (unsigned int)dword_140D06884;
            v23 = (unsigned int)(v23 + 1) )
      {
        v26 = qword_140D088C0[v23];
        if ( (v24 & *(_DWORD *)(v26 + 212)) != i )
          continue;
        v27 = *(unsigned __int8 *)(v26 + 208);
        v28 = *(_QWORD *)(v26 + 200);
        if ( *v19 <= (unsigned __int16)v27 )
        {
          if ( v19[1] <= (unsigned __int16)v27 )
            goto LABEL_16;
          *v19 = v27 + 1;
        }
        *(_QWORD *)&v19[4 * v27 + 4] |= v28;
LABEL_16:
        v29 = *(unsigned __int8 *)(a1 + 208);
        v30 = v17 + v26;
        v31 = *(_QWORD *)(a1 + 200);
        if ( *(_WORD *)(v17 + v26 + 40632) <= (unsigned __int16)v29 )
        {
          if ( *(_WORD *)(v30 + 40634) <= (unsigned __int16)v29 )
            continue;
          *(_WORD *)(v30 + 40632) = v29 + 1;
        }
        *(_QWORD *)(v30 + 8 * v29 + 40640) |= v31;
      }
    }
    v3 += 12LL;
    ++*(_DWORD *)(a1 + 34452);
LABEL_20:
    result = *(unsigned int *)(a1 + 34452);
    ++v2;
  }
  while ( (unsigned int)result < 5 );
  return result;
}

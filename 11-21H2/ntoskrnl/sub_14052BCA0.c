/*
 * XREFs of sub_14052BCA0 @ 0x14052BCA0
 * Callers:
 *     sub_14052BFC0 @ 0x14052BFC0 (sub_14052BFC0.c)
 * Callees:
 *     sub_1403D8F10 @ 0x1403D8F10 (sub_1403D8F10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14052BA4C @ 0x14052BA4C (sub_14052BA4C.c)
 *     sub_14052C0C8 @ 0x14052C0C8 (sub_14052C0C8.c)
 */

__int64 (__fastcall **sub_14052BCA0())()
{
  int LockArray_high; // edi
  __int64 v6; // r8
  int v7; // r8d
  char v18; // bl
  unsigned int v19; // ecx
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall **v21)(); // r11
  __int64 v22; // rsi
  __int64 v23; // rdi
  int v24; // r9d
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // ebx
  __int64 v28; // r10
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // ecx
  _DWORD v33[6]; // [rsp+20h] [rbp-20h] BYREF

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v33[0] = 0;
  if ( *((_BYTE *)KeGetCurrentPrcb() + 64) == 22 )
  {
    _RAX = 2147483678LL;
    __asm { cpuid }
    v6 = (unsigned __int8)_RCX;
  }
  else
  {
    v7 = 0;
    do
    {
      _RAX = 2147483677LL;
      ++v7;
      __asm { cpuid }
    }
    while ( (_RAX & 0xF) != 0 );
    _RAX = 2147483677LL;
    __asm { cpuid }
    v18 = 0;
    _BitScanReverse((unsigned int *)&_RCX, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
    v19 = (unsigned __int8)(1 << _RCX);
    while ( 1 )
    {
      v19 >>= 1;
      if ( !v19 )
        break;
      ++v18;
    }
    result = (__int64 (__fastcall **)())sub_1403D8F10(LockArray_high, v33, 0LL);
    if ( (int)result < 0 )
      return result;
    v6 = (unsigned int)(v33[0] >> v18);
  }
  result = (__int64 (__fastcall **)())sub_14052C0C8(2LL, &qword_140C49F40, v6, (unsigned int)dword_140C49EA0);
  v21 = result;
  if ( result )
  {
    result = &off_1400032A0;
    v22 = qword_140C49F38 + 24LL * (unsigned int)(LockArray_high * dword_140C49FE0);
    if ( off_140C02520 == &off_1400032A0 )
    {
      v23 = qword_140C4D0A8;
    }
    else
    {
      result = (__int64 (__fastcall **)())qword_140C4D0A8;
      v23 = qword_140C4D0A8 + 8LL * (unsigned int)(LockArray_high * dword_140C4D044);
    }
    v24 = dword_140C49FE4;
    v25 = dword_140C49EA4;
    v26 = dword_140C49FE4 + dword_140C49EA4;
    v27 = dword_140C49FE4 + dword_140C49EA4;
    if ( dword_140C49FE4 + dword_140C49EA4 < (unsigned int)(dword_140C49FE4 + dword_140C49EA4 + dword_140C49EA0) )
    {
      while ( 1 )
      {
        v28 = v22 + 24LL * v27;
        v29 = v27;
        *(_QWORD *)(v28 + 8) = v21;
        if ( v27 >= v26 )
          break;
        if ( v27 >= v25 )
        {
          v30 = v27;
          goto LABEL_19;
        }
LABEL_20:
        v31 = (__int64)v21[3] + 40 * v29;
        *(_QWORD *)(v23 + 8LL * v27) = v31;
        v32 = *((_DWORD *)&xmmword_140C49FA0 + v27);
        *(_QWORD *)(v31 + 16) = v28;
        __writemsr(v32, 0LL);
        result = (__int64 (__fastcall **)())sub_14052BA4C(v27);
        v24 = dword_140C49FE4;
        ++v27;
        v25 = dword_140C49EA4;
        v26 = dword_140C49FE4 + dword_140C49EA4;
        if ( v27 >= dword_140C49FE4 + dword_140C49EA4 + dword_140C49EA0 )
          return result;
      }
      v30 = v27 - v24;
LABEL_19:
      v29 = v30 - v25;
      goto LABEL_20;
    }
  }
  return result;
}

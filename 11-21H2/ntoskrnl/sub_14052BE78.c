/*
 * XREFs of sub_14052BE78 @ 0x14052BE78
 * Callers:
 *     sub_14052BFC0 @ 0x14052BFC0 (sub_14052BFC0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14052BA4C @ 0x14052BA4C (sub_14052BA4C.c)
 *     sub_14052C0C8 @ 0x14052C0C8 (sub_14052C0C8.c)
 */

__int64 sub_14052BE78()
{
  __int64 result; // rax
  __int64 v6; // rsi
  int LockArray_high; // ebx
  __int64 v8; // rdi
  __int64 v9; // r11
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // edx
  unsigned int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax

  _RAX = 2147483678LL;
  __asm { cpuid }
  result = sub_14052C0C8(1LL, &qword_140C49E90, (unsigned __int8)_RCX, (unsigned int)dword_140C49FE4);
  v6 = result;
  if ( result )
  {
    LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
    v8 = qword_140C49F38 + 24LL * (unsigned int)(LockArray_high * dword_140C49FE0);
    v9 = off_140C02520 == &off_1400032A0
       ? qword_140C4D0A8
       : qword_140C4D0A8 + 8LL * (unsigned int)(LockArray_high * dword_140C4D044);
    v10 = dword_140C49EA4;
    v11 = dword_140C49EA4;
    v12 = dword_140C49FE4;
    result = (unsigned int)(dword_140C49FE4 + dword_140C49EA4);
    if ( dword_140C49EA4 < (unsigned int)result )
    {
      v13 = dword_140C49EA4 + dword_140C49FE4;
      do
      {
        v14 = v8 + 24LL * v11;
        v15 = v11;
        *(_QWORD *)(v14 + 8) = v6;
        if ( v11 < v13 )
        {
          if ( v11 >= v10 )
            v15 = v11 - v10;
        }
        else
        {
          v15 = v11 - v10 - v12;
        }
        v16 = *((_DWORD *)&xmmword_140C49FA0 + v11);
        v17 = *(_QWORD *)(v6 + 24) + 40 * v15;
        *(_QWORD *)(v9 + 8LL * v11) = v17;
        *(_QWORD *)(v17 + 16) = v14;
        __writemsr(v16, 0LL);
        result = sub_14052BA4C(v11);
        v10 = dword_140C49EA4;
        ++v11;
        v12 = dword_140C49FE4;
        v13 = dword_140C49EA4 + dword_140C49FE4;
      }
      while ( v11 < dword_140C49EA4 + dword_140C49FE4 );
    }
  }
  return result;
}

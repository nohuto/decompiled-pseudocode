/*
 * XREFs of sub_14054F250 @ 0x14054F250
 * Callers:
 *     sub_140A6BEC8 @ 0x140A6BEC8 (sub_140A6BEC8.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054F250(char *a1, __int128 *a2, const void *a3, unsigned int a4, int a5)
{
  size_t v6; // rbx
  unsigned int v9; // edi
  wchar_t **v10; // r9
  unsigned __int16 *v11; // rax
  int v12; // edx
  int v13; // ecx
  __int64 result; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  _OWORD v17[7]; // [rsp+20h] [rbp-51h] BYREF

  v6 = a4;
  if ( (a5 & 1) == 0 || a4 > 8 )
    return 3221225485LL;
  memset(v17, 0, 0x68uLL);
  v9 = 0;
  v10 = &off_140C08E58;
  do
  {
    v11 = (unsigned __int16 *)a1;
    do
    {
      v12 = *(unsigned __int16 *)((char *)v11 + (char *)*v10 - a1);
      v13 = *v11 - v12;
      if ( v13 )
        break;
      ++v11;
    }
    while ( v12 );
    if ( !v13 )
    {
      *((_QWORD *)&v17[0] + 1) = v9;
      goto LABEL_13;
    }
    ++v9;
    ++v10;
  }
  while ( v9 < 4 );
  if ( v9 == 4 )
    return 3221225485LL;
LABEL_13:
  v15 = *a2;
  memset(&v17[2], 0, 24);
  v17[1] = v15;
  if ( (a5 & 0x40) != 0 )
    result = 3221225485LL;
  else
    result = sub_140358A20(2u, 261, 0, (__int64)v17);
  if ( (_DWORD)v6 )
  {
    memmove(&v17[2], a3, v6);
    v16 = *a2;
    *((_QWORD *)&v17[0] + 1) = v9;
    *(_QWORD *)&v17[3] = a5 | 6u;
    v17[1] = v16;
    *((_QWORD *)&v17[2] + 1) = v6;
    return sub_140358A20(2u, 261, 0, (__int64)v17);
  }
  return result;
}

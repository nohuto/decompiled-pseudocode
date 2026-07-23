/*
 * XREFs of sub_14054AE18 @ 0x14054AE18
 * Callers:
 *     sub_14054ABD0 @ 0x14054ABD0 (sub_14054ABD0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14054D1E8 @ 0x14054D1E8 (sub_14054D1E8.c)
 *     sub_14054D2AC @ 0x14054D2AC (sub_14054D2AC.c)
 *     sub_14054D374 @ 0x14054D374 (sub_14054D374.c)
 *     sub_14054D424 @ 0x14054D424 (sub_14054D424.c)
 */

__int64 __fastcall sub_14054AE18(__int64 a1, char *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // edi
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+64h] [rbp+Ch]

  v22 = HIDWORD(a1);
  v19 = 0LL;
  v21 = 0;
  *a5 = 0;
  if ( (dword_140D068B8 & 4) == 0 )
    return 3221226021LL;
  if ( !(_BYTE)xmmword_140C48940 )
  {
    v9 = sub_14054D424(1LL, byte_140C48839 == 0 ? 2 : 0);
    if ( v9 )
      sub_14054D374(v9, 0LL);
    *((_QWORD *)&xmmword_140C48940 + 1) = -1LL;
    LODWORD(xmmword_140C48950) = 0;
    LOBYTE(xmmword_140C48940) = 1;
  }
  v10 = xmmword_140C48950;
  if ( (_DWORD)xmmword_140C48950 )
  {
    v11 = *((_QWORD *)&xmmword_140C48940 + 1);
    v19 = *((_QWORD *)&xmmword_140C48940 + 1);
    v21 = xmmword_140C48950;
  }
  else
  {
    if ( !(unsigned int)sub_14054D2AC(1LL, &v19, &v21) )
    {
      sub_14054D1E8(1LL);
      LOBYTE(xmmword_140C48940) = 0;
      *((_QWORD *)&xmmword_140C48940 + 1) = -1LL;
      LODWORD(xmmword_140C48950) = 0;
      return 3221226021LL;
    }
    v11 = v19;
    v10 = v21;
  }
  v12 = a3 >> 12;
  v13 = v10;
  if ( v12 < v10 )
    v13 = v12;
  if ( v13 )
  {
    v14 = v13;
    v15 = v11 << 12;
    v16 = v11;
    do
    {
      v20 = v15 & 0xFFFFFFFFFF000LL | 0x8000000000000001uLL;
      *(_QWORD *)(8 * (((unsigned __int64)qword_140C48928 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v20;
      v17 = __readcr4();
      if ( (v17 & 0x20080) != 0 )
      {
        __writecr4(v17 ^ 0x80);
        __writecr4(v17);
      }
      else
      {
        v18 = __readcr3();
        __writecr3(v18);
      }
      memmove(a2, qword_140C48928, 0x1000uLL);
      *a4 = v16;
      a2 += 4096;
      v15 += 4096LL;
      ++a4;
      ++v16;
      --v14;
    }
    while ( v14 );
  }
  *a5 = v13 << 12;
  LODWORD(xmmword_140C48950) = v10 - v13;
  *((_QWORD *)&xmmword_140C48940 + 1) = v11 + v13;
  return 0LL;
}

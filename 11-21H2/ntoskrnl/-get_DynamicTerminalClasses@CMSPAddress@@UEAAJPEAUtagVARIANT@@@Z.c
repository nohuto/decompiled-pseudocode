/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4
 * Callers:
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 * Callees:
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_1402433D0 @ 0x1402433D0 (sub_1402433D0.c)
 *     sub_1402C1D70 @ 0x1402C1D70 (sub_1402C1D70.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402E5920 @ 0x1402E5920 (sub_1402E5920.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033A410 @ 0x14033A410 (sub_14033A410.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A6A34 @ 0x1405A6A34 (sub_1405A6A34.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(
        CMSPAddress *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 v10; // rcx
  char v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // ecx
  BOOL v18; // r14d
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // r12d
  char v25; // r14
  bool v26; // zf
  BOOL v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-D8h] BYREF
  CMSPAddress *v29; // [rsp+30h] [rbp-D0h]
  _DWORD *v30; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h]
  _QWORD v32[24]; // [rsp+50h] [rbp-B0h] BYREF

  v29 = this;
  v30 = a6;
  memset(v32, 0, 0xB8uLL);
  v10 = *((unsigned int *)this + 12);
  if ( (*((_DWORD *)this + 12) & 0xA00000) != 0xA00000 || (v15 = (v10 >> 19) & 3, v16 = qword_1400161D0[v15], v16 == 1) )
  {
    v11 = 0;
    v12 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
    LODWORD(v32[0]) = 1;
    WORD2(v32[0]) = 4;
    v32[2] = 0LL;
    LODWORD(v32[1]) = 20;
    v32[3] = 0LL;
    v13 = a2 << 25 >> 16;
    if ( (a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
      a3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( a2 > a3 )
      return 0LL;
    while ( 1 )
    {
      v28 = sub_140317A10(a2);
      if ( (v28 & 1) == 0
        || (*((_DWORD *)v29 + 12) & 0x70) == 0x40 && sub_1402433D0(a2)
        || *(__int64 *)(48 * (((unsigned __int64)sub_140317A10(&v28) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
      {
LABEL_11:
        if ( HIDWORD(v32[1]) )
          sub_1402C1D70(v12, v32, 0LL);
        return 0LL;
      }
      if ( (sub_14033A410(0xFFFFDE0000000028uLL, v13) & 0xF) == 8 )
        break;
      sub_1402CF280(v32, v13, 1LL, 0LL);
      if ( HIDWORD(v32[1]) == LODWORD(v32[1]) )
        goto LABEL_39;
LABEL_10:
      v13 += 4096LL;
      a2 += 8LL;
      if ( a2 > a3 )
        goto LABEL_11;
    }
    v11 = 1;
    *v30 = 1;
LABEL_39:
    if ( HIDWORD(v32[1]) )
      sub_1402C1D70(v12, v32, 0LL);
    if ( v11 )
    {
      sub_1402E5920(v12, v13);
      v11 = 0;
    }
    goto LABEL_10;
  }
  v26 = (v10 & 0x600000) == 6291456;
  v17 = dword_140037160[v15];
  v18 = v26;
  v19 = 16LL;
  v27 = v26;
  if ( v16 != 16 )
    v19 = 1LL;
  if ( v17 > 1 )
    sub_1402CF280(a4, a2 << 25 >> 16, v16, 0LL);
  else
    sub_1402285E8(a4, 2 - v17, a2);
  v28 = sub_140317A10(a2);
  v20 = ((unsigned __int64)sub_140317A10(&v28) >> 12) & 0xFFFFFFFFFFLL;
  v31 = v20;
  v21 = 0LL;
  v30 = (_DWORD *)(48 * v20 - 0x220000000000LL);
  do
  {
    if ( v18 && (sub_140317A10(a2) & 0x42) != 0 )
    {
      v22 = sub_1402CFEB0(a2);
      sub_1402358D4(*((_QWORD *)KeGetCurrentThread() + 23), v22, (__int64)v29);
      v27 = 0;
    }
    v28 = sub_1402E4D28(v20 + v21, 24LL);
    v23 = v28;
    v24 = 0;
    v25 = v28;
    if ( (unsigned int)sub_140317A80(a2) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v24 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_32;
        v26 = (v25 & 1) == 0;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_32;
        v26 = (v25 & 1) == 0;
      }
      if ( !v26 )
        v23 |= 0x8000000000000000uLL;
    }
LABEL_32:
    *(_QWORD *)a2 = v23;
    if ( v24 )
      sub_1402294F0(a2, v23);
    v18 = v27;
    a2 += 8LL;
    v20 = v31;
    ++v21;
  }
  while ( v21 < v19 );
  sub_1405A6A34(v29, v30, 24LL);
  return 1LL;
}

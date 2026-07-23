/*
 * XREFs of sub_140A375DC @ 0x140A375DC
 * Callers:
 *     sub_140659E70 @ 0x140659E70 (sub_140659E70.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FDD98 @ 0x1403FDD98 (sub_1403FDD98.c)
 *     sub_1403FF10C @ 0x1403FF10C (sub_1403FF10C.c)
 *     sub_1403FF3BC @ 0x1403FF3BC (sub_1403FF3BC.c)
 *     sub_1403FF880 @ 0x1403FF880 (sub_1403FF880.c)
 *     sub_1403FF894 @ 0x1403FF894 (sub_1403FF894.c)
 *     sub_140400AB4 @ 0x140400AB4 (sub_140400AB4.c)
 *     sub_140400B44 @ 0x140400B44 (sub_140400B44.c)
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140400D10 @ 0x140400D10 (sub_140400D10.c)
 *     sub_140400E9C @ 0x140400E9C (sub_140400E9C.c)
 *     sub_140401C90 @ 0x140401C90 (sub_140401C90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A375DC(
        int a1,
        const void *a2,
        size_t a3,
        _BYTE *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 a9,
        char a10)
{
  __int64 Pool2; // rax
  __int64 v13; // r8
  _SLIST_ENTRY *v14; // rdi
  unsigned int v15; // ebx
  unsigned __int64 v16; // rsi
  __int64 v17; // r14
  unsigned int v18; // r15d
  unsigned int *v19; // rsi
  int v20; // ecx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  __int64 *v25; // rax
  char v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+58h] [rbp-70h] BYREF
  __int64 v29; // [rsp+60h] [rbp-68h]
  size_t v30; // [rsp+68h] [rbp-60h]
  const void *v31; // [rsp+70h] [rbp-58h]
  __int128 v32; // [rsp+78h] [rbp-50h] BYREF

  v29 = a8;
  v30 = a3;
  v31 = a2;
  v28 = 0LL;
  v27 = byte_140CE21F0;
  v32 = 0LL;
  if ( byte_140CE21F0 )
    Pool2 = (__int64)sub_140202234((__int64)&unk_140CE1F40);
  else
    Pool2 = ExAllocatePool2(258LL, 6816LL, 1919109443LL);
  v14 = (_SLIST_ENTRY *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( a5 > 8 )
    goto LABEL_7;
  v16 = Pool2 - ((Pool2 + 31) & 0xFFFFFFFFFFFFFFE0uLL) + 6816;
  sub_140400AB4();
  v17 = sub_140400BBC();
  if ( !v17 )
    goto LABEL_7;
  sub_140400D10();
  v18 = sub_140400B44();
  sub_140400E9C(v17);
  if ( v18 < 0x400 )
  {
    v15 = -1073740760;
    goto LABEL_30;
  }
  *(_QWORD *)((char *)&v32 + 4) = v18;
  LODWORD(v32) = 1;
  HIDWORD(v32) = 1;
  v19 = (unsigned int *)sub_1403FF10C(
                          ((unsigned __int64)&v14[1].Next + 15) & 0xFFFFFFFFFFFFFFE0uLL,
                          v16,
                          (unsigned int *)&v32);
  if ( !v19 )
  {
LABEL_7:
    v15 = -1073740760;
    goto LABEL_30;
  }
  if ( !(unsigned int)sub_1403FDD98(a4, a5, &v28)
    && !(unsigned int)sub_1403FF3BC(a6, a7, (__int64)&v28, 1, 0LL, 0LL, 0, 2u, 0, (__int64)v19)
    && a9 == (unsigned int)sub_1403FF880((__int64)v19) )
  {
    v20 = 0;
    if ( (a10 & 1) != 0 )
      v20 = 2;
    v21 = a1 - 32771;
    if ( !v21 )
    {
      v25 = &qword_140006890;
      goto LABEL_28;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v25 = &qword_1400068F0;
      goto LABEL_28;
    }
    v23 = v22 - 8;
    if ( !v23 )
    {
      v25 = &qword_140006910;
      goto LABEL_28;
    }
    v24 = v23 - 1;
    if ( !v24 )
    {
      v25 = &qword_1400068B0;
      goto LABEL_28;
    }
    if ( v24 == 1 )
    {
      v25 = &qword_1400068D0;
LABEL_28:
      v15 = (unsigned int)sub_140401C90((__int64)v19, v31, v30, v29, a9, 2, (__int64)v25, 2uLL, v20) != 0
          ? 0xC0000428
          : 0;
      goto LABEL_29;
    }
  }
  v15 = -1073740760;
LABEL_29:
  sub_1403FF894(v19);
LABEL_30:
  if ( v27 )
    sub_140203D50((__int64)&unk_140CE1F40, v14, v13);
  else
    ExFreePoolWithTag(v14, 0x72634943u);
  return v15;
}

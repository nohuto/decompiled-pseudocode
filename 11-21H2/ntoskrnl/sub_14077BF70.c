/*
 * XREFs of sub_14077BF70 @ 0x14077BF70
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077C1C4 @ 0x14077C1C4 (sub_14077C1C4.c)
 *     sub_14077C484 @ 0x14077C484 (sub_14077C484.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077BF70(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  void *Pool2; // rsi
  int v11; // edi
  int v12; // r12d
  int v13; // ebx
  unsigned int v14; // r14d
  int v15; // eax
  unsigned int v17; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+64h] [rbp-65h] BYREF
  _DWORD *v19; // [rsp+68h] [rbp-61h]
  _QWORD v20[10]; // [rsp+70h] [rbp-59h] BYREF

  v19 = a6;
  memset(v20, 0, 0x48uLL);
  *a6 = 0;
  Pool2 = 0LL;
  v17 = 0;
  v18 = 0;
  v11 = sub_14077C1C4(a1, a2, a5, v20);
  if ( v11 < 0 )
    goto LABEL_21;
  v12 = v20[2];
  if ( !v20[2] || HIDWORD(v20[0]) || v20[7] || LODWORD(v20[8]) || LODWORD(v20[6]) || !a3 || a4 < 0x14 )
    goto LABEL_29;
  v13 = 6;
  if ( SLODWORD(v20[1]) > 6 )
  {
    switch ( LODWORD(v20[1]) )
    {
      case 0x10001:
        v13 = 7;
        break;
      case 0x10002:
        v13 = 8;
        break;
      case 0x10003:
        v13 = 9;
        break;
      case 0x10004:
        v13 = 10;
        break;
      case 0x10005:
        v13 = 11;
        break;
      default:
        goto LABEL_29;
    }
    if ( qword_140D00AC8 )
      goto LABEL_13;
LABEL_29:
    v11 = -1073741811;
LABEL_18:
    v15 = sub_14077C780((unsigned int)v11, v18, v17, 0LL, 0, HIDWORD(v20[8]), a3, a4, v19);
    goto LABEL_19;
  }
  switch ( LODWORD(v20[1]) )
  {
    case 6:
      goto LABEL_13;
    case 1:
      v13 = 1;
      goto LABEL_13;
    case 2:
      v13 = 2;
      goto LABEL_13;
    case 3:
      v13 = 4;
      goto LABEL_13;
    case 4:
      v13 = 3;
      goto LABEL_13;
  }
  if ( LODWORD(v20[1]) != 5 )
    goto LABEL_29;
  v13 = 5;
LABEL_13:
  v14 = a4 - 20;
  if ( a4 != 20 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v14, 879783504LL);
    if ( !Pool2 )
      v11 = -1073741670;
    if ( v11 < 0 )
      goto LABEL_18;
  }
  v11 = sub_14077DA5C(
          qword_140D00AC0,
          v12,
          v13,
          0,
          0LL,
          (__int64)&v20[3] + 4,
          (__int64)&v17,
          (__int64)Pool2,
          v14,
          (__int64)&v18,
          0);
  if ( v11 < 0 )
    goto LABEL_18;
  v15 = sub_14077C780((unsigned int)v11, v18, v17, Pool2, v18, HIDWORD(v20[8]), a3, a4, v19);
LABEL_19:
  v11 = v15;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_21:
  sub_14077C484(v20);
  return (unsigned int)v11;
}

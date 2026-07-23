/*
 * XREFs of sub_14065B560 @ 0x14065B560
 * Callers:
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14091854C @ 0x14091854C (sub_14091854C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065B81C @ 0x14065B81C (sub_14065B81C.c)
 *     sub_14065BF3C @ 0x14065BF3C (sub_14065BF3C.c)
 *     sub_14065C388 @ 0x14065C388 (sub_14065C388.c)
 *     sub_14065C63C @ 0x14065C63C (sub_14065C63C.c)
 *     sub_14065C6C0 @ 0x14065C6C0 (sub_14065C6C0.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 *     sub_1406B5158 @ 0x1406B5158 (sub_1406B5158.c)
 *     sub_140721BF0 @ 0x140721BF0 (sub_140721BF0.c)
 *     sub_14091D2E4 @ 0x14091D2E4 (sub_14091D2E4.c)
 */

__int64 __fastcall sub_14065B560(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned int a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // ebx
  int v13; // eax
  int i; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-79h] BYREF
  __int64 v22; // [rsp+28h] [rbp-71h] BYREF
  _WORD v23[56]; // [rsp+30h] [rbp-69h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  memset(&v23[1], 0, 0x66uLL);
  v23[0] = -2;
  sub_14069F2B4(&v23[8]);
  if ( (a6 & 1) != 0 )
  {
    if ( a1 )
    {
      v19 = sub_140721BF0(a1, a2, 0LL);
      v12 = sub_1406B5158((PSECURITY_DESCRIPTOR)(v19 + 32));
      if ( v12 < 0 )
        goto LABEL_14;
      goto LABEL_16;
    }
    LOBYTE(v11) = (a6 & 2) != 0;
    LOBYTE(v10) = a4;
    v12 = sub_14065BF3C(a3, v10, a5, v11);
    if ( v12 < 0 )
      goto LABEL_14;
  }
  if ( !a1 )
  {
    v13 = sub_14065C6C0(v23, a3);
    goto LABEL_6;
  }
LABEL_16:
  v13 = sub_14091D2E4(v23, a1);
LABEL_6:
  v12 = v13;
  if ( v13 >= 0 )
  {
    for ( i = sub_14065B81C(v23); i != -2147483622; i = sub_14065B81C(v23) )
    {
      sub_14065C388(v23, &v21, &v22);
      if ( v21 )
      {
        v20 = sub_140721BF0(v21, a2, 0LL);
        v17 = sub_1406B5158((PSECURITY_DESCRIPTOR)(v20 + 32));
      }
      else
      {
        LOBYTE(v16) = (a6 & 2) != 0;
        LOBYTE(v15) = a4;
        v17 = sub_14065BF3C(v22, v15, a5, v16);
      }
      v12 = v17;
      if ( v17 < 0 )
        goto LABEL_14;
    }
    v12 = 0;
  }
LABEL_14:
  sub_14065C63C(v23);
  return (unsigned int)v12;
}

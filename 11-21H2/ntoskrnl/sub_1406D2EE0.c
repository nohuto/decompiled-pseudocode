/*
 * XREFs of sub_1406D2EE0 @ 0x1406D2EE0
 * Callers:
 *     sub_1407783C4 @ 0x1407783C4 (sub_1407783C4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406D3020 @ 0x1406D3020 (sub_1406D3020.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406D2EE0(int a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int a6, PVOID *a7)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // eax
  PVOID v11; // rdi
  _BYTE *v12; // rdx
  __int64 v13; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v16[80]; // [rsp+80h] [rbp-88h] BYREF

  LODWORD(v13) = 0;
  P = 0LL;
  *a7 = 0LL;
  v7 = sub_1406D3020(a1, a2, a3, a5, (__int64)a7);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( *((_DWORD *)*a7 + 7) != a6 )
    {
      sub_14077B394(*a7);
      *a7 = 0LL;
      return (unsigned int)-1073741772;
    }
    return v8;
  }
  if ( v7 != -1073741802 )
    return v8;
  v10 = sub_14077D91C(0x5A706E50u, 0LL, 0LL, a5, (__int64)&v13, (__int64)&P, (__int64)&v15, 0);
  v11 = P;
  v8 = v10;
  if ( v10 >= 0 )
  {
    if ( (_DWORD)v13 == 13 )
    {
      v8 = sub_140773030(P, v16);
      if ( (v8 & 0x80000000) != 0 )
        goto LABEL_11;
      v12 = v16;
      goto LABEL_10;
    }
    if ( (_DWORD)v13 == 18 )
    {
      v12 = P;
LABEL_10:
      v8 = sub_14077B0A4(a6, v12, a7);
      goto LABEL_11;
    }
    v8 = -1073741772;
  }
LABEL_11:
  if ( v11 )
    ExFreePoolWithTag(v11, 0x5A706E50u);
  return v8;
}

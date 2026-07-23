/*
 * XREFs of sub_140948814 @ 0x140948814
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 *     sub_14077D91C @ 0x14077D91C (sub_14077D91C.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_1409485D8 @ 0x1409485D8 (sub_1409485D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140948814(__int64 a1, unsigned int ***a2)
{
  void *v2; // rsi
  __int64 *Pool2; // rax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+60h] [rbp-49h] BYREF
  __int64 v14; // [rsp+68h] [rbp-41h] BYREF
  __int128 v15; // [rsp+70h] [rbp-39h] BYREF
  _WORD v16[40]; // [rsp+80h] [rbp-29h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Pool2 = (__int64 *)ExAllocatePool2(256LL, 32LL, 1198550608LL);
  *a2 = (unsigned int **)Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741670;
LABEL_22:
    sub_1409485D8(*a2);
    *a2 = 0LL;
    goto LABEL_24;
  }
  v7 = sub_14077B0A4(3LL, a1, Pool2);
  v6 = v7;
  if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741772 )
    goto LABEL_22;
  v8 = sub_14077DA5C(
         *(__int64 *)&qword_140D00AC0,
         a1,
         3,
         0,
         0LL,
         (__int64)&qword_140010B68,
         (__int64)&v13 + 4,
         (__int64)&v15,
         16,
         (__int64)&v13,
         0);
  v6 = v8;
  if ( v8 != -1073741772 && v8 != -1073741275 )
  {
    if ( v8 < 0 )
      goto LABEL_22;
    if ( (int)sub_140773030((int *)&v15, v16) >= 0 )
    {
      v6 = sub_14077B0A4(4LL, (__int64)v16, (__int64 *)*a2 + 1);
      if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
        goto LABEL_22;
    }
  }
  v9 = sub_14077D91C(
         0x47706E50u,
         0xC8u,
         a1,
         3,
         0LL,
         0LL,
         (__int64)&qword_140010AD8,
         (__int64)&v13 + 4,
         (PVOID *)&v14,
         (unsigned int *)&v13,
         0);
  v2 = (void *)v14;
  v6 = v9;
  if ( v9 != -1073741772 && v9 != -1073741275 )
  {
    if ( v9 < 0 )
      goto LABEL_22;
    v6 = sub_14077B0A4(1LL, v14, (__int64 *)*a2 + 2);
    if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
      goto LABEL_22;
  }
  v10 = sub_14077DA5C(
          *(__int64 *)&qword_140D00AC0,
          a1,
          3,
          0,
          0LL,
          (__int64)&qword_140010A78,
          (__int64)&v13 + 4,
          (__int64)&v15,
          16,
          (__int64)&v13,
          0);
  v6 = v10;
  if ( v10 != -1073741772 && v10 != -1073741275 )
  {
    if ( v10 < 0 )
      goto LABEL_22;
    v6 = sub_140773030((int *)&v15, v16);
    if ( v6 < 0 )
      goto LABEL_22;
    v11 = sub_14077B0A4(5LL, (__int64)v16, (__int64 *)*a2 + 3);
    v6 = v11;
    if ( v11 != -1073741772 )
    {
      if ( v11 >= 0 )
        goto LABEL_24;
      goto LABEL_22;
    }
  }
  v6 = 0;
LABEL_24:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return (unsigned int)v6;
}

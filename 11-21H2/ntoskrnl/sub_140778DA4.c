/*
 * XREFs of sub_140778DA4 @ 0x140778DA4
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_140778F4C @ 0x140778F4C (sub_140778F4C.c)
 *     sub_140778FA0 @ 0x140778FA0 (sub_140778FA0.c)
 *     sub_1407790D0 @ 0x1407790D0 (sub_1407790D0.c)
 *     sub_14077C780 @ 0x14077C780 (sub_14077C780.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140778DA4(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v6; // r13
  void *Pool2; // rdi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  unsigned int v14; // [rsp+58h] [rbp-9h] BYREF
  int v15; // [rsp+5Ch] [rbp-5h] BYREF
  __int128 v16; // [rsp+60h] [rbp-1h] BYREF
  __int128 v17; // [rsp+70h] [rbp+Fh]
  __int128 v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+90h] [rbp+2Fh]

  v6 = a6;
  v14 = 0;
  v15 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  Pool2 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = sub_1407790D0(a1, a2, a5, &v16);
  if ( v10 < 0 )
    goto LABEL_20;
  if ( !(_QWORD)v17 || DWORD1(v16) || *((_QWORD *)&v18 + 1) || (_DWORD)v19 || (_DWORD)v18 || !a3 || a4 < 0x14 )
    goto LABEL_24;
  if ( a4 != 20 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, a4 - 20, 879783504LL);
    if ( !Pool2 )
      v10 = -1073741670;
    if ( v10 < 0 )
      goto LABEL_17;
  }
  v10 = sub_140778FA0(HIDWORD(v17), &v15);
  if ( v10 < 0 )
    goto LABEL_17;
  LODWORD(a6) = a4 - 20;
  if ( DWORD2(v16) == 1 )
  {
    v11 = sub_14077CD90(qword_140D00AC0, v17, 0, v15, (__int64)&v14, (__int64)Pool2, (__int64)&a6, 0);
    goto LABEL_16;
  }
  if ( DWORD2(v16) != 2 )
  {
LABEL_24:
    v10 = -1073741811;
    goto LABEL_17;
  }
  v11 = sub_1406BDAE4(*(__int64 *)&qword_140D00AC0, v17, 0LL, v15, (__int64)&v14, (__int64)Pool2, (__int64)&a6);
LABEL_16:
  v10 = v11;
  if ( v11 < 0 )
  {
LABEL_17:
    v12 = sub_14077C780((unsigned int)v10, (unsigned int)a6, v14, 0LL, 0, HIDWORD(v19), a3, a4, v6);
    goto LABEL_18;
  }
  v12 = sub_14077C780((unsigned int)v11, (unsigned int)a6, v14, Pool2, (_DWORD)a6, HIDWORD(v19), a3, a4, v6);
LABEL_18:
  v10 = v12;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_20:
  sub_140778F4C(&v16);
  return (unsigned int)v10;
}

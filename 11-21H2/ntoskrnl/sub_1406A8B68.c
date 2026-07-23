/*
 * XREFs of sub_1406A8B68 @ 0x1406A8B68
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406A8D54 @ 0x1406A8D54 (sub_1406A8D54.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 */

__int64 __fastcall sub_1406A8B68(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // ebx
  _QWORD *v5; // r14
  _DWORD *v7; // r12
  unsigned int v8; // esi
  __int64 result; // rax
  unsigned int v10; // eax
  int v11; // r12d
  void *v12; // rdi
  _QWORD *v13; // r15
  unsigned int v14; // r13d
  bool v15; // sf
  unsigned int v16; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-29h]
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v20; // [rsp+50h] [rbp-19h]
  _OWORD v21[3]; // [rsp+58h] [rbp-11h] BYREF

  v17 = 0LL;
  P = 0LL;
  v4 = 0;
  *a3 = 0;
  v5 = 0LL;
  v16 = 0;
  v18 = a4;
  v7 = a3;
  v20 = a3;
  v8 = a2;
  memset(v21, 0, sizeof(v21));
  if ( (_DWORD)a2 )
  {
    LOBYTE(a3) = *((_BYTE *)KeGetCurrentThread() + 562);
    result = sub_1406A904C(a1, a2, a3, 1LL, &v17, &P);
    v4 = result;
    if ( (int)result < 0 )
      return result;
  }
  v10 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  if ( *a4 != -1 && *a4 == v10 )
  {
    v5 = v17;
    v4 = sub_1406A8D54(v17, v8, v7, v10);
    v15 = v4 < 0;
    goto LABEL_15;
  }
  v11 = 0;
  v12 = (void *)sub_1402A1770(0LL);
  if ( !v12 )
    goto LABEL_14;
  v13 = v17;
  while ( 1 )
  {
    v14 = sub_140287F30((__int64)v12);
    if ( *v18 != -1 && *v18 != v14 )
      goto LABEL_13;
    v4 = sub_1402312E0((ULONG_PTR)v12);
    if ( v4 < 0 )
      goto LABEL_14;
    v4 = sub_1406A8D54(v13, v8, &v16, v14);
    sub_140231240((__int64)v12, (__int64)v21);
    if ( v4 < 0 )
    {
      if ( v4 != -1073741820 )
        goto LABEL_29;
      v8 = 0;
      goto LABEL_12;
    }
    if ( v16 > v8 || v16 < 0x38 )
      break;
    v5 = v13;
    v13 = (_QWORD *)((char *)v13 + v16);
    v8 -= v16;
LABEL_12:
    v11 += v16;
    if ( *v18 != -1 )
      goto LABEL_29;
LABEL_13:
    v12 = (void *)sub_1402A1770(v12);
    if ( !v12 )
      goto LABEL_14;
  }
  v4 = -1073741675;
LABEL_29:
  ObfDereferenceObject(v12);
LABEL_14:
  v15 = v4 < 0;
  *v20 = v11;
LABEL_15:
  if ( !v15 && v5 )
    *v5 = 0LL;
  if ( P )
    sub_140231450((struct _MDL *)P);
  return (unsigned int)v4;
}

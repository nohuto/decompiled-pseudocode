/*
 * XREFs of sub_1409F5D80 @ 0x1409F5D80
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14063A8C0 @ 0x14063A8C0 (sub_14063A8C0.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 */

__int64 __fastcall sub_1409F5D80(unsigned __int64 a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int *v4; // r14
  __int64 v5; // r12
  unsigned int v6; // esi
  int v7; // edi
  _QWORD *v8; // r13
  __int64 result; // rax
  void *v10; // rbx
  __int64 v11; // r14
  int v12; // eax
  int v13; // r15d
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  int v16; // eax
  int v17; // [rsp+30h] [rbp-49h]
  unsigned int v18; // [rsp+34h] [rbp-45h] BYREF
  unsigned int *v19; // [rsp+38h] [rbp-41h]
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-31h]
  _DWORD *v22; // [rsp+50h] [rbp-29h]
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v24[3]; // [rsp+60h] [rbp-19h] BYREF

  v22 = a4;
  v19 = a3;
  v21 = a2;
  v4 = a3;
  v20 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v17 = 1;
  v6 = 0;
  v18 = 0;
  v7 = 0;
  *a3 = 0;
  v8 = 0LL;
  memset(v24, 0, sizeof(v24));
  if ( a2 )
  {
    result = sub_1406A904C(a1, a2, *((_BYTE *)KeGetCurrentThread() + 562), IoWriteAccess, &v20, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
    v5 = v20;
  }
  v10 = (void *)sub_1402A1770(0LL);
  if ( !v10 )
    goto LABEL_24;
  while ( 1 )
  {
    v11 = v6 + v5;
    v12 = sub_140300B40((__int64)v10);
    LODWORD(v20) = v12;
    if ( *v22 != -1 && v12 != *v22 )
      goto LABEL_20;
    if ( (int)sub_1402312E0((ULONG_PTR)v10) >= 0 )
    {
      if ( v6 >= 0xFFFFFFD8 )
      {
        v7 = -1073741675;
LABEL_22:
        sub_140231240((__int64)v10, (__int64)v24);
        ObfDereferenceObject(v10);
LABEL_23:
        v4 = v19;
        goto LABEL_24;
      }
      if ( (unsigned __int64)v6 + 40 <= v21 && (v13 = v17) != 0 )
      {
        v14 = (_DWORD *)(v6 + v5);
        v15 = v21 - v6;
      }
      else
      {
        v13 = 0;
        v14 = 0LL;
        v17 = 0;
        v15 = 0;
        v7 = -1073741820;
      }
      v16 = sub_14063A8C0(v14, v15, 0, &v18);
      if ( v16 < 0 )
      {
        v7 = v16;
        if ( v16 != -1073741820 )
          goto LABEL_22;
      }
      if ( v13 == 1 && v16 >= 0 )
      {
        v8 = (_QWORD *)(v6 + v5);
        *(_DWORD *)(v11 + 8) = v20;
        *(_QWORD *)v11 = (unsigned int)(24 * *(_DWORD *)(v11 + 12) + 16);
      }
      v6 += v18;
      sub_140231240((__int64)v10, (__int64)v24);
    }
    if ( *v22 != -1 )
      break;
LABEL_20:
    v10 = (void *)sub_1402A1770(v10);
    if ( !v10 )
      goto LABEL_30;
  }
  ObfDereferenceObject(v10);
LABEL_30:
  if ( v7 < 0 )
    goto LABEL_23;
  v4 = v19;
  if ( v8 )
    *v8 = 0LL;
LABEL_24:
  if ( v5 )
    sub_140231450((struct _MDL *)P);
  *v4 = v6;
  return (unsigned int)v7;
}

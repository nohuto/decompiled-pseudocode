/*
 * XREFs of sub_14079982C @ 0x14079982C
 * Callers:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_14079AD30 @ 0x14079AD30 (sub_14079AD30.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 *     sub_1407927AC @ 0x1407927AC (sub_1407927AC.c)
 *     sub_140794654 @ 0x140794654 (sub_140794654.c)
 *     sub_14079474C @ 0x14079474C (sub_14079474C.c)
 *     sub_140798234 @ 0x140798234 (sub_140798234.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 *     sub_14079A254 @ 0x14079A254 (sub_14079A254.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14079982C(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5, __int64 a6, int a7, char a8)
{
  ACCESS_MASK v8; // r14d
  int v9; // esi
  char v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  int v13; // r13d
  PEPROCESS v14; // rax
  int v15; // eax
  int v16; // r15d
  struct _EX_RUNDOWN_REF *v17; // rbx
  BOOL v18; // ecx
  int v19; // r8d
  unsigned int v20; // r8d
  struct _EX_RUNDOWN_REF *v22; // [rsp+68h] [rbp-70h] BYREF
  int v23; // [rsp+70h] [rbp-68h] BYREF
  PVOID P; // [rsp+78h] [rbp-60h] BYREF
  PEPROCESS v25; // [rsp+80h] [rbp-58h]
  int v26[2]; // [rsp+88h] [rbp-50h] BYREF
  int v27; // [rsp+90h] [rbp-48h]
  unsigned __int64 v28; // [rsp+98h] [rbp-40h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+A0h] [rbp-38h] BYREF

  v28 = 0LL;
  v23 = 0;
  P = 0LL;
  *(_QWORD *)v26 = 0LL;
  v22 = 0LL;
  v29 = 0LL;
  v8 = 0;
  v9 = sub_14079474C(a3, &v28, a8);
  v27 = v9;
  if ( v9 >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_24;
    }
    v11 = v28;
    v12 = (v28 >> 4) & 3;
    if ( v10 )
    {
      v13 = 0;
      v8 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v8 |= 2u;
    }
    else
    {
      v13 = 1;
    }
    if ( v10 )
    {
      v14 = (PEPROCESS)*((_QWORD *)KeGetCurrentThread() + 23);
      v11 = v28;
    }
    else
    {
      v14 = PsInitialSystemProcess;
    }
    v25 = v14;
    v9 = sub_140798334((struct _EX_RUNDOWN_REF **)v26, (__int64)v14, 0LL, (v28 >> 6) & 0xF, 0LL);
    if ( v9 >= 0 )
    {
      v15 = sub_140798234(*(__int64 *)v26, v11, (__int64 *)&v22);
      v9 = v15;
      if ( v15 != -1073741772 || (_DWORD)v12 == 3 )
      {
        if ( v15 < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          v9 = sub_140794654(v22[9].Ptr, v8);
          if ( v9 < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
      }
      else
      {
        v9 = sub_14075A12C(v11, (PSECURITY_DESCRIPTOR **)&P);
        if ( v9 < 0 )
          goto LABEL_24;
        if ( !v13 )
        {
          v9 = sub_140794654(*((PSECURITY_DESCRIPTOR *)P + 2), v8);
          if ( v9 < 0 )
            goto LABEL_24;
        }
        v16 = (int)v25;
        v9 = sub_14066FED4(*(ULONG_PTR *)v26, v11, (__int64)P, (ULONG_PTR)v25, &v22);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( v9 < 0 )
          goto LABEL_24;
      }
      v17 = v22;
      v9 = sub_14079A254((_DWORD)v22, v16, a5, a6, a4, a7, a8, a1, a2, (__int64)&v29, (__int64)&v23);
      if ( v9 >= 0 )
      {
        v18 = 0;
        if ( a4 != LODWORD(v17[12].Count) )
          v18 = v17[11].Count != 0;
        v19 = v18 | 8;
        if ( HIDWORD(v22[20].Ptr) )
          v19 = v18;
        if ( !v23 )
        {
          if ( LODWORD(v22[20].Count) )
            v19 |= 2u;
          else
            v19 |= 4u;
        }
        v20 = a7 & v19;
        if ( v20 )
          sub_1407927AC((__int64)v22, (__int64)v29, v20, a8 != 0);
      }
    }
  }
LABEL_24:
  if ( v29 )
    sub_1402AD030(v29 + 1);
  if ( v22 )
    sub_1402AD030(v22 + 1);
  if ( *(_QWORD *)v26 )
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)v26 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)v9;
}

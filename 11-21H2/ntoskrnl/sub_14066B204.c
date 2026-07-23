/*
 * XREFs of sub_14066B204 @ 0x14066B204
 * Callers:
 *     sub_14066AC1C @ 0x14066AC1C (sub_14066AC1C.c)
 *     sub_1407A98B0 @ 0x1407A98B0 (sub_1407A98B0.c)
 * Callees:
 *     sub_1402031BC @ 0x1402031BC (sub_1402031BC.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1406BC8F0 @ 0x1406BC8F0 (sub_1406BC8F0.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     sub_14088204C @ 0x14088204C (sub_14088204C.c)
 *     sub_1409C750C @ 0x1409C750C (sub_1409C750C.c)
 *     sub_1409E1FA0 @ 0x1409E1FA0 (sub_1409E1FA0.c)
 */

__int64 __fastcall sub_14066B204(__int64 *a1, ULONG_PTR a2, char a3, __int64 *a4, _DWORD *a5)
{
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // r9
  bool v12; // r12
  int v13; // esi
  __int64 v14; // r10
  int v15; // r15d
  __int64 v16; // rax
  int v17; // edx
  int v18; // r10d
  __int64 v19; // r14
  int v20; // edx
  _DWORD *v21; // rcx
  int v22; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  _QWORD v28[2]; // [rsp+50h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = sub_14066B3D8(a2);
  v10 = v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == qword_140C24F88;
    v29 = *((_DWORD *)a1 + 6);
    v13 = sub_140733B40(2, (unsigned int)&v29, a2, v11, a3, *((_DWORD *)a1 + 9), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v28[1] = v28;
      v28[0] = v28;
      v27 = v16;
      if ( !sub_1402031BC(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        v19 = sub_1407A1CE8(v10, v15, v29, *((_DWORD *)a1 + 9), (__int64)a1 + 28);
        if ( v19 )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && (unsigned __int8)SeAuditingWithTokenForSubcategory(123LL) )
            sub_1409C750C(a1[1], v19, *a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x7544624Fu);
          sub_1407A2FA0(a2);
          v13 = -1073741670;
        }
        if ( v12 )
          v19 |= 0xFFFFFFFF80000000uLL;
        sub_1402AD030((struct _EX_RUNDOWN_REF *)(a2 + 1112));
        if ( (_QWORD *)v28[0] != v28 )
        {
          LOBYTE(v20) = v12;
          sub_14088204C(a1[2], v20, v13, v29, (__int64)v28);
        }
        if ( v13 >= 0 )
        {
          v21 = a5;
          v22 = v29;
          *a4 = v19;
          *v21 = v22;
        }
        if ( (xmmword_140D06910 & 0x40) != 0 && v13 >= 0 )
          sub_1409E1FA0(a1[1], v19, a1[2], *(_DWORD *)(*a1 + 1088), *(_DWORD *)(a2 + 1088), v27);
        return (unsigned int)v13;
      }
      v24 = *a1;
      LOBYTE(v17) = v12;
      v26 = v29;
      v13 = sub_1406BC8F0(v18, v17, (unsigned int)&v26, v24, a2, (__int64)v28);
      if ( v13 >= 0 )
      {
        v25 = v29;
        if ( !v12 )
          v25 = v26;
        v29 = v25;
        goto LABEL_4;
      }
      sub_1407A2FA0(a2);
    }
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(a2 + 1112));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}

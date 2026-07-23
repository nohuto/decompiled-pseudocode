/*
 * XREFs of sub_1402E3150 @ 0x1402E3150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D594C @ 0x1402D594C (sub_1402D594C.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1402E3150(HANDLE Handle, int a2, __int128 *a3, unsigned int a4)
{
  __int128 *v4; // rbx
  unsigned __int8 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13
  NTSTATUS v13; // edi
  struct _OBJECT_TYPE *v14; // rax
  NTSTATUS v15; // eax
  __int64 result; // rax
  char v17[4]; // [rsp+50h] [rbp-68h] BYREF
  int v18; // [rsp+54h] [rbp-64h]
  PVOID P; // [rsp+58h] [rbp-60h] BYREF
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int128 v21; // [rsp+68h] [rbp-50h] BYREF
  __int128 v22; // [rsp+78h] [rbp-40h]
  __int128 v23; // [rsp+88h] [rbp-30h]

  v4 = a3;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v17[0] = 0;
  P = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 && a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)a3 + a4;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a2 )
    return 3221225475LL;
  if ( a4 != 48 )
    return 3221225476LL;
  if ( v6 )
  {
    v21 = *a3;
    v22 = a3[1];
    v23 = a3[2];
    v4 = &v21;
  }
  v8 = *((_DWORD *)v4 + 8);
  if ( v8 > 0x7FFFFFFF )
    return 3221225713LL;
  v9 = *((_QWORD *)v4 + 3);
  if ( !v9 )
  {
LABEL_14:
    v10 = *((_QWORD *)v4 + 5);
    v18 = *((_DWORD *)v4 + 9);
    v11 = *((_QWORD *)v4 + 2);
    v12 = *((_QWORD *)v4 + 1);
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(Handle, 2u, 0LL, v6, &Object, 0LL);
    if ( v13 < 0 )
    {
LABEL_19:
      if ( v13 >= 0 && v13 != 1073741861 )
        return (unsigned int)v13;
      goto LABEL_36;
    }
    v14 = (struct _OBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 == qword_140D06C78 )
    {
      if ( !v12 && !v11 && !P && !v18 && !v10 )
      {
        v15 = sub_1402D594C(Object, (__int64 *)v4, 10000LL * v8, 0LL);
        goto LABEL_18;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v13 = -1073741811;
    }
    else
    {
      if ( v14 == ExTimerObjectType )
      {
        v15 = sub_1402E33D0((ULONG_PTR)Object, v11, (__int64)P, v17[0], v8, v18, v10);
LABEL_18:
        v13 = v15;
        goto LABEL_19;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v13 = -1073741788;
    }
LABEL_36:
    if ( P )
      sub_14036B090(P);
    return (unsigned int)v13;
  }
  result = sub_14036B98C(v9, v6, 0, 0, (__int64)v17, (__int64)&P);
  if ( (int)result >= 0 )
  {
    v8 = *((_DWORD *)v4 + 8);
    goto LABEL_14;
  }
  return result;
}

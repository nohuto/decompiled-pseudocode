/*
 * XREFs of sub_1406623D0 @ 0x1406623D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140659D50 @ 0x140659D50 (sub_140659D50.c)
 *     sub_1406651C8 @ 0x1406651C8 (sub_1406651C8.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_140799DB0 @ 0x140799DB0 (sub_140799DB0.c)
 *     sub_14079E674 @ 0x14079E674 (sub_14079E674.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406623D0(void *a1, __int64 i, unsigned int *a3, _DWORD *a4, unsigned int *a5, __int64 *a6)
{
  KPROCESSOR_MODE v7; // si
  __int64 v8; // rcx
  unsigned int v9; // ecx
  NTSTATUS v10; // edi
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v14; // [rsp+30h] [rbp-B8h]
  unsigned int v15; // [rsp+68h] [rbp-80h]
  unsigned int v16; // [rsp+6Ch] [rbp-7Ch]
  __int64 v17; // [rsp+70h] [rbp-78h] BYREF
  PVOID v18; // [rsp+78h] [rbp-70h] BYREF
  __int64 v19; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+88h] [rbp-60h]
  __int64 v21; // [rsp+8Ch] [rbp-5Ch] BYREF
  PVOID v22; // [rsp+98h] [rbp-50h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v25; // [rsp+B0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-30h] BYREF
  int v28; // [rsp+F8h] [rbp+10h]

  v28 = i;
  v18 = 0LL;
  v16 = 0;
  v19 = 0LL;
  v17 = 0LL;
  v15 = 0;
  v23 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
    v8 = (__int64)a6;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  if ( a3 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      goto LABEL_18;
    v15 = *a3;
    v9 = 0;
    v20 = 0;
    while ( v9 < v15 )
    {
      a3[4 * ++v9] = 0;
      v20 = v9;
    }
    v10 = sub_140799DB0(a3 + 2, 0, HandleInformation, v14, (__int64)&v23, (__int64)&v21);
  }
  else
  {
    v10 = 0;
  }
  if ( v10 < 0 )
    goto LABEL_19;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      goto LABEL_18;
    HIDWORD(v17) = *a4;
    v10 = sub_14079E674(a4 + 1, Object, HandleInformation, v14, (__int64)&v24, (__int64)&v21 + 4);
  }
  if ( v10 >= 0 && a5 )
  {
    if ( ((unsigned __int8)a5 & 3) == 0 )
    {
      v16 = *a5;
      v10 = sub_140799DB0(a5 + 2, 0, HandleInformation, v14, (__int64)&v19, (__int64)&v17);
      goto LABEL_19;
    }
LABEL_18:
    ExRaiseDatatypeMisalignment();
  }
LABEL_19:
  if ( v10 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(v19 + 16LL * (unsigned int)i + 8) )
      {
        v10 = -1073741811;
        goto LABEL_30;
      }
    }
    v22 = 0LL;
    v10 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)SeTokenObjectType, v7, &v22, &v25);
    if ( v10 >= 0 )
    {
      v18 = 0LL;
      LOBYTE(i) = v7;
      v10 = sub_14078E3F0((_DWORD)v22, i, v28, v15, v23, HIDWORD(v17), v24, v16, v19, v17, (__int64)&v18);
      if ( v10 >= 0 )
      {
        v10 = sub_140729C30(v18, 0LL, 0, 0LL, (__int64)&v26);
        if ( v10 >= 0 )
        {
          sub_140659D50(v18);
          ObfDereferenceObject(v18);
        }
      }
      ObfDereferenceObject(v22);
      if ( v10 >= 0 )
        *a6 = v26;
    }
  }
LABEL_30:
  if ( v23 )
  {
    LOBYTE(i) = v7;
    sub_1406651C8(v23, i);
  }
  if ( v24 )
  {
    LOBYTE(i) = v7;
    sub_1406651C8(v24, i);
  }
  if ( v19 )
  {
    LOBYTE(i) = v7;
    sub_1406651C8(v19, i);
  }
  return (unsigned int)v10;
}

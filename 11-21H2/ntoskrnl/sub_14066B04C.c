/*
 * XREFs of sub_14066B04C @ 0x14066B04C
 * Callers:
 *     sub_14066AD78 @ 0x14066AD78 (sub_14066AD78.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     sub_140733B40 @ 0x140733B40 (sub_140733B40.c)
 *     sub_1407A2680 @ 0x1407A2680 (sub_1407A2680.c)
 */

__int64 __fastcall sub_14066B04C(
        struct _EX_RUNDOWN_REF *Object,
        __int64 a2,
        ACCESS_MASK a3,
        char a4,
        char a5,
        __int64 a6)
{
  ACCESS_MASK v7; // r14d
  int v8; // esi
  int v10; // edi
  __int64 v11; // rax
  int v12; // r9d
  int v13; // esi
  char *v14; // rsi
  bool v15; // zf
  int v16; // r12d
  __int64 v17; // rdi
  int v18; // r13d
  __int64 v19; // r15
  int v20; // r14d
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  PVOID Objecta[2]; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK AccessMask; // [rsp+B0h] [rbp+50h] BYREF
  int v27; // [rsp+B8h] [rbp+58h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v7 = a3;
  Objecta[0] = 0LL;
  v8 = a2;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = sub_14066B3D8(Object);
  if ( !v11 )
    return 3221225738LL;
  LOBYTE(v12) = a5;
  v13 = sub_1407A2680(v8, (_DWORD)Object, v11, v12, 1967415887, (__int64)Objecta, (__int64)&v22, (__int64)&v23);
  if ( v13 < 0 )
  {
    sub_1402AD030(Object + 139);
    return (unsigned int)v13;
  }
  else
  {
    if ( (v22 & 4) != 0 )
      LODWORD(v23) = 0;
    v14 = (char *)Objecta[0];
    v15 = v10 == 0;
    v16 = HIDWORD(v22);
    v17 = a6;
    if ( !v15 )
      v7 = HIDWORD(v22);
    AccessMask = v7;
    v18 = v22 & 4 | 8;
    if ( (a4 & 8) == 0 )
      v18 = v22 & 0xC;
    *(_QWORD *)(a6 + 28) = v23;
    v19 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
    if ( (v7 & 0xF0000000) != 0 )
    {
      RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(v19 + 76));
      v7 = AccessMask;
    }
    v27 = v7 & (*(_DWORD *)(v19 + 92) | 0x1000000);
    if ( (~v16 & v27) != 0 )
    {
      sub_1402AD030(Object + 139);
      ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
      return 3221225506LL;
    }
    v20 = sub_140733B40(2, (unsigned int)&v27, (_DWORD)Object, (_DWORD)v14, a5, v18, 0LL);
    sub_1402AD030(Object + 139);
    if ( v20 < 0 )
    {
      ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
    }
    else
    {
      *(_DWORD *)(v17 + 24) = v27;
      *(_QWORD *)(v17 + 8) = a2;
      *(_DWORD *)(v17 + 36) = v18;
      ObfReferenceObjectWithTag(Object, 0x7544624Fu);
      *(_QWORD *)v17 = Object;
      *(_QWORD *)(v17 + 16) = v14;
    }
    return (unsigned int)v20;
  }
}

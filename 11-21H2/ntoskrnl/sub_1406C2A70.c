/*
 * XREFs of sub_1406C2A70 @ 0x1406C2A70
 * Callers:
 *     sub_1406C2A30 @ 0x1406C2A30 (sub_1406C2A30.c)
 *     sub_1406C2A50 @ 0x1406C2A50 (sub_1406C2A50.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall sub_1406C2A70(__int64 a1, __int64 a2, int a3, void *a4, int a5)
{
  _QWORD *v6; // r13
  PVOID v7; // rsi
  KPROCESSOR_MODE v8; // r14
  int v9; // edi
  _QWORD *v11; // rdi
  int v12; // r15d
  int v13; // edx
  int v14; // eax
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  PVOID v16; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h] BYREF

  v6 = (_QWORD *)a1;
  v17 = 0LL;
  v16 = 0LL;
  v7 = 0LL;
  Object = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_25;
  v8 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v8 )
  {
    if ( (a5 & 2) == 0 )
    {
      a1 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        a1 = (__int64)v6;
      *(_QWORD *)a1 = *(_QWORD *)a1;
      goto LABEL_7;
    }
LABEL_25:
    v9 = -1073741581;
    goto LABEL_9;
  }
LABEL_7:
  if ( !a4
    || (Object = 0LL, v9 = ObReferenceObjectByHandle(a4, 3u, qword_140C24FB8, v8, &Object, 0LL), v7 = Object, v9 >= 0) )
  {
    LOBYTE(a1) = v8;
    v9 = sub_14072B3B0(a1, (_DWORD)qword_140C24FB8, a3, v8);
    if ( v9 >= 0 )
    {
      v11 = v16;
      memset(v16, 0, 0x158uLL);
      v11[37] = 0LL;
      *((_DWORD *)v11 + 85) = -1;
      v12 = 0;
      if ( v7 )
      {
        v12 = 4;
        v11[39] = v7;
        v7 = 0LL;
        Object = 0LL;
        if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
          v12 = 20;
      }
      v13 = v12 | 8;
      if ( (a5 & 1) == 0 )
        v13 = v12;
      v14 = v13 | 0x20;
      if ( (a5 & 2) == 0 )
        v14 = v13;
      *((_DWORD *)v11 + 84) |= v14;
      v9 = sub_140729C30(v11, 0LL, 0, 0LL, (__int64)&v17);
      v16 = 0LL;
      *v6 = v17;
    }
  }
LABEL_9:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v16 )
    ObfDereferenceObject(v16);
  return (unsigned int)v9;
}

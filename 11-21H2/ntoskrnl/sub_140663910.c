/*
 * XREFs of sub_140663910 @ 0x140663910
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1406634A0 @ 0x1406634A0 (sub_1406634A0.c)
 *     sub_140666BAC @ 0x140666BAC (sub_140666BAC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 */

__int64 __fastcall sub_140663910(_QWORD *a1, void *a2, __int64 a3, unsigned int a4, unsigned int a5, _OWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  _OWORD *v12; // r9
  __int64 v13; // rcx
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v20; // [rsp+38h] [rbp-70h] BYREF
  int v21[2]; // [rsp+40h] [rbp-68h] BYREF
  int v22[4]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v23; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+68h] [rbp-40h]
  int v25[4]; // [rsp+70h] [rbp-38h] BYREF
  __int128 v26; // [rsp+80h] [rbp-28h]
  __int128 v27; // [rsp+90h] [rbp-18h]

  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25[1] = 0;
  *(_QWORD *)v21 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  PreviousMode = *((_BYTE *)KeGetCurrentThread() + 562);
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, qword_140D069D8, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a1;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      sub_140666BAC(a3, v22, a4);
      if ( a6 < v12 )
        v12 = a6;
      *(_OWORD *)v25 = *v12;
      v26 = v12[1];
      v27 = v12[2];
    }
    else
    {
      *(_OWORD *)v22 = *(_OWORD *)a3;
      v23 = *(_OWORD *)(a3 + 16);
      v24 = *(_QWORD *)(a3 + 32);
      *(_OWORD *)v25 = *a6;
      v26 = a6[1];
      v27 = a6[2];
    }
    v14 = Object;
    v11 = sub_1407ABD80((_DWORD)Object, DWORD2(v23), v24, (_DWORD)v12, (__int64)&v20);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v14);
    }
    else
    {
      v15 = v20;
      if ( (*(_DWORD *)(v20 + 40) & 0x80u) != 0 )
      {
        sub_1407A7628(v20);
        ObfDereferenceObject(v14);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD **)(v20 + 32);
        if ( !v16 )
          goto LABEL_17;
        v17 = v16[153] - *(_QWORD *)&v22[2];
        if ( !v17 )
          v17 = v16[154] - v23;
        if ( v17 )
        {
LABEL_17:
          sub_1407A7628(v20);
          ObfDereferenceObject(v14);
          v11 = -1073741790;
        }
        else
        {
          ObfReferenceObject(*(PVOID *)(v20 + 32));
          sub_1407A7628(v15);
          v11 = sub_1406634A0((unsigned __int64)v21, a5, (__int64)v25, &v22[2], 0, PreviousMode);
          ObfDereferenceObject(v16);
          ObfDereferenceObject(v14);
          if ( v11 >= 0 )
            *a1 = *(_QWORD *)v21;
        }
      }
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}

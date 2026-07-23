/*
 * XREFs of sub_1406B94DC @ 0x1406B94DC
 * Callers:
 *     sub_1406B9464 @ 0x1406B9464 (sub_1406B9464.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_1406B96B0 @ 0x1406B96B0 (sub_1406B96B0.c)
 *     sub_1406B96E8 @ 0x1406B96E8 (sub_1406B96E8.c)
 */

_QWORD *__fastcall sub_1406B94DC(_QWORD **Object, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rax
  _QWORD **v5; // r14
  _QWORD *v6; // r15
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  char v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v14; // rdx
  struct _OBJECT_TYPE *v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  _QWORD *v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  _QWORD *v20; // [rsp+98h] [rbp+10h]
  _QWORD **v21; // [rsp+A0h] [rbp+18h]
  __int64 v22; // [rsp+A8h] [rbp+20h]

  v20 = a2;
  v2 = a2;
  v18 = 0LL;
  v19 = 0LL;
  sub_1406B96B0(&v18, Object);
  v4 = 37LL;
  v21 = Object;
  v22 = 37LL;
  v5 = Object;
  v6 = Object;
  do
  {
    v7 = *v5;
    v8 = v6;
    if ( *v5 )
    {
      do
      {
        v10 = 0;
        v16 = v7[1];
        v17 = v8;
        v11 = v16 - 48;
        if ( (*(_BYTE *)(v16 - 48 + 26) & 2) != 0 )
          v12 = v11 - byte_140C25440[*(_BYTE *)(v16 - 48 + 26) & 3];
        else
          v12 = 0LL;
        v15 = (struct _OBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v11 + 24) ^ (unsigned __int64)BYTE1(v11)];
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockExclusiveEx(v11 + 16, 0LL);
        *(_BYTE *)(v11 + 27) &= ~0x10u;
        if ( *(_QWORD *)(v11 + 8) || *(_DWORD *)(v12 + 24) )
        {
          v2 = v20;
        }
        else
        {
          if ( v15 == qword_140C24FC0 )
            sub_1406B96E8(v16);
          v14 = v7;
          *v8 = *v7;
          v7 = (_QWORD *)*v7;
          *(_QWORD *)v12 = 0LL;
          v2 = v14;
          *v14 = v20;
          v20 = v14;
          ObfDereferenceObjectWithTag(Object, 0x6944624Fu);
          v10 = 1;
        }
        v8 = v7;
        ExReleasePushLockEx(v11 + 16, 0LL);
        KeLeaveCriticalRegion();
        if ( v10 )
          v8 = v17;
        else
          v7 = (_QWORD *)*v7;
      }
      while ( v7 );
      v5 = v21;
      v4 = v22;
    }
    ++v5;
    ++v6;
    --v4;
    v21 = v5;
    v22 = v4;
  }
  while ( v4 );
  sub_14066960C((__int64)&v18);
  return v2;
}

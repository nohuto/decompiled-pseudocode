/*
 * XREFs of sub_14066BFB8 @ 0x14066BFB8
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSection @ 0x14066BF30 (MmCreateSection.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 *     sub_1406FE1A0 @ 0x1406FE1A0 (sub_1406FE1A0.c)
 */

__int64 __fastcall sub_14066BFB8(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        volatile void *Address)
{
  __int64 result; // rax
  int v12; // esi
  __int64 v13; // r15
  char v14; // r12
  char v15; // bp
  void *v16; // r14
  int v17; // ebx
  int v18; // eax
  int v19; // edx
  unsigned int v20; // ebx
  __int128 v21; // [rsp+70h] [rbp-58h] BYREF
  int v22; // [rsp+80h] [rbp-48h]
  char v23; // [rsp+84h] [rbp-44h]

  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  result = sub_1406FE1A0(Address, (__int64)&v21);
  if ( (int)result >= 0 )
  {
    v12 = 0;
    v13 = *((_QWORD *)KeGetCurrentThread() + 23);
    v14 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( v14 == 1 )
    {
      v15 = *(_BYTE *)(v13 + 2169);
      v16 = (void *)sub_140347920(v13, 0x746C6644u);
    }
    else
    {
      v16 = 0LL;
      v15 = (v22 & 8) != 0 ? BYTE12(v21) : 0;
      v12 = (v22 & 8) != 0 ? 0x10 : 0;
    }
    v17 = v12 | 2;
    if ( !a7 )
      v17 = v12;
    v18 = sub_140287F30(v13);
    v19 = v17 | 4;
    if ( (a8 & 2) == 0 )
      v19 = v17;
    v20 = sub_1406FD4A0(a1, a2, a3, a4, a5, v19, (__int64)v16, v15, a6, a7, v14, v18, (__int64)&v21);
    if ( v16 )
      ObfDereferenceObject(v16);
    return v20;
  }
  return result;
}

/*
 * XREFs of sub_1407A56B0 @ 0x1407A56B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A59D8 @ 0x1407A59D8 (sub_1407A59D8.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A74A4 @ 0x1407A74A4 (sub_1407A74A4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407A56B0(HANDLE Handle, int a2, __m128i *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v6; // r14
  __int64 v7; // rcx
  __m128i v8; // xmm1
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  NTSTATUS v12; // edi
  PVOID v13; // r15
  ULONG_PTR v14; // rbx
  unsigned __int64 v16; // xmm1_8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+40h] [rbp-38h]
  __int128 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0LL;
  LODWORD(v21) = 0;
  v18 = 0LL;
  v19 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a2 )
  {
    v12 = -1073741811;
  }
  else
  {
    v6 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( v6 )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a3;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *a3;
      v21 = a3[1].m128i_i64[0];
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v18 = *(_QWORD *)v11;
        v19 = *(_DWORD *)(v11 + 8);
      }
    }
    else
    {
      v16 = _mm_srli_si128(*a3, 8).m128i_u64[0];
      v10 = v16;
      if ( v16 )
      {
        v18 = *(_QWORD *)v16;
        v19 = *(_DWORD *)(v16 + 8);
      }
    }
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, qword_140D069D8, v6, &Object, 0LL);
    if ( v12 >= 0 )
    {
      if ( !v10 )
      {
        v18 = *(_QWORD *)((char *)Object + 260);
        v19 = *((_DWORD *)Object + 67);
      }
      v13 = Object;
      v12 = sub_1407A74A4(Object, KeGetCurrentThread(), (__int64)&BugCheckParameter2);
      if ( v12 >= 0 )
      {
        v14 = BugCheckParameter2;
        a3[1].m128i_i64[0] = *(_QWORD *)(BugCheckParameter2 + 8);
        sub_1407A5A54(v14);
      }
      ObfDereferenceObject(v13);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}

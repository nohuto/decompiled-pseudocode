/*
 * XREFs of sub_1407B0FE0 @ 0x1407B0FE0
 * Callers:
 *     sub_14084D204 @ 0x14084D204 (sub_14084D204.c)
 *     sub_140B0E88C @ 0x140B0E88C (sub_140B0E88C.c)
 *     sub_140B2BC5C @ 0x140B2BC5C (sub_140B2BC5C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407B0FE0(HANDLE Handle, unsigned __int64 a2, _DWORD *a3)
{
  KPROCESSOR_MODE v6; // di
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // rdi
  int v12; // edi
  unsigned int v13; // eax
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF
  void *v18[2]; // [rsp+50h] [rbp-28h]
  NTSTATUS v19; // [rsp+98h] [rbp+20h]

  *(_OWORD *)v18 = 0LL;
  *(_OWORD *)Src = 0LL;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v6 )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v7 = 0x7FFFFFFF0000LL;
    *(_WORD *)v7 = *(_WORD *)v7;
    v8 = a2 + 2;
    if ( a2 + 2 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_WORD *)v8 = *(_WORD *)v8;
    *(_OWORD *)v18 = *(_OWORD *)a2;
    ProbeForWrite((volatile void *)_mm_srli_si128(*(__m128i *)v18, 8).m128i_i64[0], WORD1(v18[0]), 1u);
    if ( a3 )
    {
      v9 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    *(_OWORD *)v18 = *(_OWORD *)a2;
  }
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(Handle, 1u, qword_140C24FC0, v6, &Object, 0LL);
  if ( v19 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v11 = (char *)Object;
    BugCheckParameter2 = (ULONG_PTR)Object - 32;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
    if ( (*((_DWORD *)v11 + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_140867F00);
    else
      *(_OWORD *)Src = *(_OWORD *)(v11 + 8);
    v12 = (int)Src[0];
    if ( a3 )
    {
      if ( WORD1(Src[0]) <= WORD1(v18[0]) )
      {
        v13 = WORD1(Src[0]);
LABEL_18:
        memmove(v18[1], Src[1], v13);
        *(_WORD *)a2 = v12;
        if ( a3 )
          *a3 = HIWORD(v12);
LABEL_20:
        ExReleasePushLockEx(BugCheckParameter2, 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return (unsigned int)v19;
      }
    }
    else if ( LOWORD(Src[0]) <= WORD1(v18[0]) )
    {
      v13 = LOWORD(Src[0]);
      goto LABEL_18;
    }
    v19 = -1073741789;
    if ( a3 )
      *a3 = WORD1(Src[0]);
    goto LABEL_20;
  }
  return (unsigned int)v19;
}

/*
 * XREFs of sub_1407A7850 @ 0x1407A7850
 * Callers:
 *     sub_1407A76C0 @ 0x1407A76C0 (sub_1407A76C0.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_1407A7B20 @ 0x1407A7B20 (sub_1407A7B20.c)
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 *     sub_1407B0F40 @ 0x1407B0F40 (sub_1407B0F40.c)
 *     sub_1407F58C4 @ 0x1407F58C4 (sub_1407F58C4.c)
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1407A7850(_QWORD *a1, unsigned __int64 a2, __int64 *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 v7; // r13
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // r15
  unsigned int v13; // r14d
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // rdx
  void **v17; // rdi
  __int64 v18; // [rsp+30h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  void *v21; // [rsp+48h] [rbp-50h]
  void *v22; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v23; // [rsp+58h] [rbp-40h]
  _QWORD *v24; // [rsp+A0h] [rbp+8h]

  v24 = a1;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = CurrentThread;
  v7 = *((_BYTE *)CurrentThread + 562);
  v20 = 0LL;
  v8 = *a1;
  v18 = *a1;
  v22 = (void *)*a1;
  if ( v7 )
  {
    if ( a3 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a3;
      v20 = *(_QWORD *)v11;
      a3 = &v20;
    }
    if ( a2 )
    {
      v9 = a2;
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a2 >= 0x7FFFFFFF0000LL )
        v9 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 39) = *(_BYTE *)(v9 + 39);
    }
    if ( a4 )
    {
      v10 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    LODWORD(a1) = (_DWORD)v24;
  }
  else
  {
    v7 = (*((_DWORD *)CurrentThread + 29) & 0x400) != 0;
  }
  v12 = 0LL;
  v21 = 0LL;
  if ( (*(_BYTE *)(v8 + 416) & 6) == 6 )
  {
    v17 = *(void ***)(v8 + 16);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v17 - 2), 0LL);
    v12 = *v17;
    v21 = v12;
    if ( v12 && ObReferenceObjectSafe((__int64)v12) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v17 - 2);
      sub_1402AFC00((ULONG_PTR)(v17 - 2));
      v18 = (__int64)v12;
      v22 = v12;
      LODWORD(a1) = (_DWORD)v24;
      *v24 = v12;
      goto LABEL_18;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v17 - 2);
    sub_1402AFC00((ULONG_PTR)(v17 - 2));
    return 3221225527LL;
  }
  else
  {
LABEL_18:
    while ( 1 )
    {
      v13 = sub_1407A8B00((_DWORD)a1, v7, (_DWORD)a3, (unsigned int)&BugCheckParameter2, 0);
      if ( v13 )
        break;
      v14 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) == 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 200) = v23;
        if ( a2 )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v14 + 240);
          *(_OWORD *)(a2 + 16) = *(_OWORD *)(v14 + 256);
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(v14 + 272);
          if ( (*(_DWORD *)(v18 + 256) & 0x1000) != 0 )
            *(_WORD *)(a2 + 4) = *(_WORD *)(v14 + 244) & 0xC00F;
          v15 = a2 + 40;
          if ( *(_QWORD *)(v14 + 176) )
            sub_1407F58C4(v14, v15);
          else
            sub_1407A7B20(v14, v15);
        }
        if ( a4 )
          *a4 = *(_QWORD *)(v14 + 120);
        if ( a2 )
        {
          if ( dword_140C2A158 )
            sub_140966A84(v14);
          sub_1407B0F40(v14);
        }
        else
        {
          *(_QWORD *)(v14 + 200) = 0LL;
          sub_140662E08(v18, v14, 0x10000);
        }
        break;
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 64) == v18 )
      {
        *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
        *(_QWORD *)(v14 + 56) = 0LL;
      }
      sub_140662E08(v18, v14, 0x10000);
      BugCheckParameter2 = 0LL;
      LODWORD(a1) = (_DWORD)v24;
    }
    if ( v12 )
      ObfDereferenceObject(v12);
    return v13;
  }
}

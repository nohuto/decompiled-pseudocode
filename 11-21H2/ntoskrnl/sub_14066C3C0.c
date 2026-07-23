/*
 * XREFs of sub_14066C3C0 @ 0x14066C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14066C5B0 @ 0x14066C5B0 (sub_14066C5B0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407A58A4 @ 0x1407A58A4 (sub_1407A58A4.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A7EB0 @ 0x1407A7EB0 (sub_1407A7EB0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_14066C3C0(HANDLE Handle, int a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  KPROCESSOR_MODE v7; // r9
  NTSTATUS v8; // ebx
  PVOID v9; // r13
  void *v10; // r15
  ULONG_PTR v11; // rsi
  PVOID Object[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+20h] BYREF

  v14 = 0LL;
  *(_QWORD *)&v15 = 0LL;
  DWORD2(v15) = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  if ( a2 )
    goto LABEL_20;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 31) = *(_BYTE *)(v6 + 31);
    v14 = *(_OWORD *)a3;
    v15 = *(_OWORD *)(a3 + 16);
  }
  else
  {
    v14 = *(_OWORD *)a3;
    v15 = *(_OWORD *)(a3 + 16);
  }
  if ( (_DWORD)v14 || !*((_QWORD *)&v15 + 1) || (_QWORD)v15 )
  {
LABEL_20:
    v8 = -1073741811;
  }
  else
  {
    v7 = *((_BYTE *)KeGetCurrentThread() + 562);
    Object[0] = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 1u, qword_140D069D8, v7, Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = Object[0];
      v10 = (void *)sub_1407A7EB0(*((_QWORD *)Object[0] + 2) + 40LL, *((_QWORD *)&v14 + 1), qword_140002E20);
      Object[1] = v10;
      if ( v10 )
      {
        v8 = sub_14066C5B0((ULONG_PTR)v10, v9, (__int64)&BugCheckParameter2);
        if ( v8 >= 0 )
        {
          v11 = BugCheckParameter2;
          *(_QWORD *)(a3 + 16) = *(_QWORD *)(BugCheckParameter2 + 40);
          *(_QWORD *)(a3 + 24) = *(_QWORD *)(v11 + 48);
          sub_1407A5A54(v11);
        }
        sub_1407A5A54((ULONG_PTR)v10);
      }
      else
      {
        v8 = -1073741816;
      }
      ObfDereferenceObject(v9);
    }
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}

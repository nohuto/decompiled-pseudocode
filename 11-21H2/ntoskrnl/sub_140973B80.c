/*
 * XREFs of sub_140973B80 @ 0x140973B80
 * Callers:
 *     sub_1409736EC @ 0x1409736EC (sub_1409736EC.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14041D020 @ 0x14041D020 (sub_14041D020.c)
 *     PsGetThreadExitStatus @ 0x1406E2920 (PsGetThreadExitStatus.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 */

__int64 __fastcall sub_140973B80(int a1, int a2, int a3)
{
  struct _KTHREAD *v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rsi
  BOOLEAN v8; // al
  int v9; // r14d
  unsigned int v10; // ebx
  int ThreadExitStatus; // eax
  PVOID Object; // [rsp+68h] [rbp-9h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp-1h] BYREF
  __int128 v15; // [rsp+78h] [rbp+7h]
  __int128 v16; // [rsp+88h] [rbp+17h]
  __int128 v17; // [rsp+98h] [rbp+27h]
  HANDLE Handle; // [rsp+F0h] [rbp+7Fh] BYREF

  *(_QWORD *)&v17 = 0LL;
  v15 = 0LL;
  DWORD2(v17) = 0;
  v16 = 0LL;
  Timeout.QuadPart = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v7 = (struct _EX_RUNDOWN_REF *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1112LL);
  v8 = sub_140347810(v7);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -1073741558;
    goto LABEL_16;
  }
  LODWORD(v15) = 48;
  *((_QWORD *)&v15 + 1) = 0LL;
  DWORD2(v16) = 512;
  *(_QWORD *)&v16 = 0LL;
  v17 = 0LL;
  ThreadExitStatus = sub_14041D020((__int64)&Handle, 0x1FFFFFLL);
  if ( ThreadExitStatus >= 0 )
  {
    Object = 0LL;
    ThreadExitStatus = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = (struct _KTHREAD *)Object;
    v10 = ThreadExitStatus;
    if ( ThreadExitStatus >= 0 )
    {
      sub_1402AD030(v7);
      v9 = 0;
      if ( *((_BYTE *)v6 + 644) || (*((_DWORD *)v6 + 30) & 0x4000) != 0 )
      {
        ThreadExitStatus = 1073741825;
      }
      else
      {
        Timeout.QuadPart = -100000000LL;
        if ( KeWaitForSingleObject(v6, WrKernel, 0, 0, &Timeout) != 258 )
        {
          ThreadExitStatus = PsGetThreadExitStatus(v6);
          v10 = 0;
          if ( ThreadExitStatus >= 0 )
            goto LABEL_16;
          goto LABEL_14;
        }
        ThreadExitStatus = -1073740675;
      }
      v10 = 0;
    }
  }
  else
  {
    v10 = ThreadExitStatus;
  }
LABEL_14:
  sub_140974FBC(a2, a3, a1, ThreadExitStatus, 4);
  if ( v9 )
    sub_1402AD030(v7);
LABEL_16:
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
    ObfDereferenceObject(v6);
  return v10;
}

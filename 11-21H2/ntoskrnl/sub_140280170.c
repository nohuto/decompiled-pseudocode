/*
 * XREFs of sub_140280170 @ 0x140280170
 * Callers:
 *     sub_14072DDC0 @ 0x14072DDC0 (sub_14072DDC0.c)
 * Callees:
 *     IoGetInitiatorProcess @ 0x14025D5C0 (IoGetInitiatorProcess.c)
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall sub_140280170(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  char v7; // bl
  int v8; // r9d
  PVOID InitiatorProcess; // rax
  NTSTATUS v11; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 || *((_BYTE *)CurrentThread + 586) == 1 )
    v5 = 0LL;
  else
    v5 = (_QWORD *)*((_QWORD *)CurrentThread + 30);
  if ( (v5[9] | 1LL) == v5[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v6 = v5[251];
    v7 = v6;
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(
            (HANDLE)(v6 & 0xFFFFFFFFFFFFFFFEuLL),
            1u,
            (POBJECT_TYPE)PsProcessType,
            1,
            &Object,
            0LL);
    if ( v11 >= 0 )
    {
      v13 = 0LL;
      LOBYTE(v8) = 1;
      v11 = sub_1402A38B4(a1, 1, 32, v8, (__int64)&v13, 0LL);
      if ( v11 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          if ( InitiatorProcess != Object )
          {
            v11 = -1073741811;
            ObfDereferenceObject(Object);
          }
        }
        if ( v11 >= 0 )
        {
          *(_QWORD *)(v13 + 8) = Object;
          if ( (v7 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            sub_1402A34C8(a1, 8LL);
          }
        }
      }
    }
  }
  return (unsigned int)v11;
}

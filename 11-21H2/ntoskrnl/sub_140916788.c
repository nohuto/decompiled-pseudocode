/*
 * XREFs of sub_140916788 @ 0x140916788
 * Callers:
 *     sub_1406B656C @ 0x1406B656C (sub_1406B656C.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x14023A1C0 (PsGetCurrentThreadProcess.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 */

BOOLEAN __fastcall sub_140916788(__int64 a1, __int64 a2, int a3, char a4)
{
  BOOLEAN v7; // si
  _QWORD *v9; // r14
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *v11; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  _QWORD *v13; // rcx
  BOOLEAN v14; // bl
  __int64 v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[28]; // [rsp+100h] [rbp+0h] BYREF

  LODWORD(v16) = a3;
  memset(&AccessState, 0, sizeof(AccessState));
  memset(v19, 0, sizeof(v19));
  v7 = 0;
  Object = 0LL;
  if ( (int)sub_14072B3B0(a4, CmKeyObjectType, 0, a4, v15, 112, 0, 0, &Object, 0LL) < 0 )
    return 0;
  v9 = Object;
  *((_QWORD *)Object + 7) = 0LL;
  v9[8] = 0LL;
  *(_DWORD *)v9 = 1803104306;
  v9[1] = 0LL;
  *((_DWORD *)v9 + 12) = 0;
  v9[10] = v9 + 9;
  v9[9] = v9 + 9;
  CurrentThread = KeGetCurrentThread();
  v11 = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
  CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
  LODWORD(v16) = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, &AccessState, v19, v16, v11);
  if ( (int)v16 >= 0 )
  {
    v13 = Object;
    v9[1] = a1;
    v14 = sub_1407F7AD0(v13, a2, &AccessState, a4, (NTSTATUS *)&v16);
    sub_1403478A0((__int64)&AccessState);
    SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    v9[1] = 0LL;
    v7 = v14;
  }
  ObfDereferenceObject(Object);
  return v7;
}

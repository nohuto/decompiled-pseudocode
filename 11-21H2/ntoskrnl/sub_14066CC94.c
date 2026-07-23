/*
 * XREFs of sub_14066CC94 @ 0x14066CC94
 * Callers:
 *     sub_140702AF8 @ 0x140702AF8 (sub_140702AF8.c)
 * Callees:
 *     sub_1402033F0 @ 0x1402033F0 (sub_1402033F0.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeDeleteAccessState @ 0x14066C150 (SeDeleteAccessState.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 */

void __fastcall sub_14066CC94(__int64 Object)
{
  void *v2; // rcx
  PEPROCESS v3; // rbx
  signed __int64 v4; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[224]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v9, 0, sizeof(v9));
  v2 = *(void **)(Object + 1344);
  Process = 0LL;
  Handle = 0LL;
  if ( PsLookupProcessByProcessId(v2, &Process) < 0 )
    goto LABEL_17;
  v3 = Process;
  if ( !sub_1402033F0((__int64)Process, Object) || (*((_DWORD *)v3 + 543) & 0x400000) == 0 )
    goto LABEL_12;
  _InterlockedOr(v5, 0);
  if ( *(int *)(Object + 2512) < 0 )
  {
LABEL_17:
    v3 = Process;
    goto LABEL_12;
  }
  v3 = Process;
  if ( *((int *)Process + 628) >= 0
    && (int)SeCreateAccessStateEx(
              0,
              (_DWORD)Process,
              (unsigned int)&PassedAccessState,
              (unsigned int)v9,
              40,
              (__int64)PsProcessType + 76) >= 0 )
  {
    if ( ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
    {
      *(_QWORD *)(Object + 2536) = *((_QWORD *)v3 + 316);
      if ( (*((_DWORD *)v3 + 628) | *(_DWORD *)(Object + 2512)) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(Object + 2172), 0x200000u);
        v4 = _InterlockedIncrement64(&qword_140C0BAF8);
        *(_QWORD *)(Object + 2528) = v4;
        *(_QWORD *)(Object + 2536) = v4;
      }
      v3 = Process;
    }
    SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
  }
LABEL_12:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v3 )
    ObfDereferenceObject(v3);
}

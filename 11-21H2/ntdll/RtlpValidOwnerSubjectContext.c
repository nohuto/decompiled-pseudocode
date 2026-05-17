/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x18000E418
 * Callers:
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x180012520 (RtlEqualSid.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1800A6640 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x1800A6820 (ZwPrivilegeCheck.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, __int64 a2, char a3, int *a4)
{
  char v4; // bl
  void *ProcessHeap; // r13
  int v9; // eax
  int v11; // eax
  unsigned int *Heap; // r14
  unsigned int v13; // edi
  _QWORD *v14; // r15
  int v15; // eax
  int v16; // eax
  char v17; // cl
  char v18[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-85h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-81h] BYREF
  void *v21; // [rsp+48h] [rbp-71h]
  _DWORD v22[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h]
  int v24; // [rsp+60h] [rbp-59h]
  __int64 v25[12]; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  v21 = a1;
  if ( !a2 )
  {
LABEL_31:
    *a4 = -1073741734;
    return 0;
  }
  if ( !a3 )
  {
    Handle[0] = a1;
    goto LABEL_4;
  }
  v15 = NtOpenProcessToken(-1LL, 8LL, Handle);
  *a4 = v15;
  if ( v15 >= 0 )
  {
LABEL_4:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = NtQueryInformationToken(Handle[0], 1LL, v25, 84LL, &v19);
    *a4 = v9;
    if ( v9 < 0 )
      goto LABEL_25;
    if ( (unsigned __int8)RtlEqualSid(a2, v25[0]) )
    {
      if ( a3 )
        NtClose(Handle[0]);
      return 1;
    }
    v11 = NtQueryInformationToken(Handle[0], 2LL, 0LL, 0LL, &v19);
    *a4 = v11;
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741789 )
      goto LABEL_25;
    Heap = (unsigned int *)RtlAllocateHeap(ProcessHeap, 0LL, v19);
    if ( !Heap )
    {
      *a4 = -1073741801;
LABEL_25:
      if ( a3 )
        NtClose(Handle[0]);
      return 0;
    }
    *a4 = NtQueryInformationToken(Handle[0], 2LL, Heap, v19, &v19);
    if ( a3 )
      NtClose(Handle[0]);
    if ( *a4 < 0 )
    {
LABEL_19:
      RtlFreeHeap(ProcessHeap, 0LL, Heap);
      return v4;
    }
    v13 = 0;
    if ( *Heap )
    {
      v14 = Heap + 2;
      while ( !(unsigned __int8)RtlEqualSid(a2, *v14) )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *Heap )
          goto LABEL_28;
      }
      if ( (Heap[4 * v13 + 4] & 0x18) == 8 )
      {
        v4 = 1;
        goto LABEL_19;
      }
    }
LABEL_28:
    RtlFreeHeap(ProcessHeap, 0LL, Heap);
    Handle[1] = (HANDLE)18;
    v23 = 18LL;
    v22[0] = 1;
    v22[1] = 1;
    v24 = 0;
    v16 = ZwPrivilegeCheck(v21, v22, v18);
    v17 = v18[0];
    if ( v16 < 0 )
      v17 = 0;
    if ( v17 )
      return 1;
    goto LABEL_31;
  }
  return 0;
}

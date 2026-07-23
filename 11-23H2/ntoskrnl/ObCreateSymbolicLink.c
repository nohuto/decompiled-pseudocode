/*
 * XREFs of ObCreateSymbolicLink @ 0x1407F3638
 * Callers:
 *     NtCreateSymbolicLinkObject @ 0x1407F3320 (NtCreateSymbolicLinkObject.c)
 *     MiCreateMemoryEvent @ 0x14081C194 (MiCreateMemoryEvent.c)
 *     IoCreateSymbolicLink2 @ 0x14086FEE0 (IoCreateSymbolicLink2.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     ObpGetIntegrityLevel @ 0x1407F39C4 (ObpGetIntegrityLevel.c)
 *     RtlIsSandboxedToken @ 0x1407F3A60 (RtlIsSandboxedToken.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObCreateSymbolicLink(_QWORD *a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int IntegrityLevel; // r14d
  _QWORD *v8; // rbx
  __int16 v9; // cx
  void *Pool2; // rcx
  unsigned __int16 v11; // ax
  __int64 v12; // r12
  unsigned __int16 *v14; // rax
  REGHANDLE v15; // r10
  unsigned int v16; // r9d
  __int64 v17; // rax
  unsigned int v18; // r9d
  ULONGLONG v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-118h]
  int v26; // [rsp+50h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v29[3]; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+80h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR v31[6]; // [rsp+90h] [rbp-A8h] BYREF

  v28 = a3;
  v30 = a1;
  v26 = a2;
  v29[1] = a3;
  v29[2] = a4;
  v29[0] = 0LL;
  Object = 0LL;
  IntegrityLevel = ObCreateObjectEx(a5, ObpSymbolicLinkObjectType, a3, a5, (__int64)UserData, 40, 0, 0, &Object, 0LL);
  if ( IntegrityLevel < 0 )
  {
    v8 = Object;
    goto LABEL_30;
  }
  v8 = Object;
  *(_QWORD *)Object = MEMORY[0xFFFFF78000000014];
  v8[3] = 0LL;
  if ( (*(_DWORD *)a4 & 1) != 0 )
  {
    *((_DWORD *)v8 + 7) = 16;
    v8[1] = *(_QWORD *)(a4 + 8);
    v8[2] = *(_QWORD *)(a4 + 16);
  }
  else
  {
    if ( a5 )
    {
      *((_WORD *)v8 + 5) = *(_WORD *)(a4 + 10);
    }
    else
    {
      v9 = *(_WORD *)(a4 + 8);
      *((_WORD *)v8 + 5) = v9;
      if ( *(_WORD *)(a4 + 10) > *(_WORD *)(a4 + 8) )
        *((_WORD *)v8 + 5) = v9 + 2;
    }
    *((_WORD *)v8 + 4) = *(_WORD *)(a4 + 8);
    if ( (*(_DWORD *)a4 & 2) != 0 )
      *((_DWORD *)v8 + 7) |= 0x20u;
    if ( *((_WORD *)v8 + 5) )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, *((unsigned __int16 *)v8 + 5), 1953331539LL);
      v8[2] = Pool2;
      if ( !Pool2 )
      {
        IntegrityLevel = -1073741801;
        goto LABEL_30;
      }
      if ( a5 )
        v11 = *((_WORD *)v8 + 5);
      else
        v11 = *((_WORD *)v8 + 4);
      memmove(Pool2, *(const void **)(a4 + 16), v11);
    }
    else
    {
      v8[2] = 0LL;
    }
  }
  IntegrityLevel = ObpGetIntegrityLevel(0LL);
  if ( IntegrityLevel >= 0 )
  {
    if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
      *((_DWORD *)v8 + 7) |= 2u;
    IntegrityLevel = ObInsertObjectEx((char *)v8, 0LL, a2, 0, 0, 0LL, v29);
    v8 = 0LL;
    Object = 0LL;
    if ( IntegrityLevel >= 0 )
    {
      *v30 = v29[0];
      v12 = v28;
      IntegrityLevel = 0;
      goto LABEL_19;
    }
  }
LABEL_30:
  v12 = v28;
LABEL_19:
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( (*(_DWORD *)a4 & 5) == 0 )
  {
    LODWORD(Object) = IntegrityLevel;
    v14 = *(unsigned __int16 **)(v12 + 16);
    LODWORD(v28) = a2;
    v15 = EtwApiCallsProvRegHandle;
    if ( EtwApiCallsProvRegHandle )
    {
      LOWORD(v26) = 0;
      v16 = 0;
      if ( *((_QWORD *)v14 + 1) )
      {
        v31[0].Ptr = *((_QWORD *)v14 + 1);
        v31[0].Size = *v14;
        v31[0].Reserved = 0;
        v16 = 1;
      }
      v17 = v16;
      v31[v17].Ptr = (ULONGLONG)&v26;
      *(_QWORD *)&v31[v17].Size = 2LL;
      v18 = v16 + 1;
      v19 = *(_QWORD *)(a4 + 16);
      if ( v19 )
      {
        v20 = v18;
        v31[v20].Ptr = v19;
        v31[v20].Size = *(unsigned __int16 *)(a4 + 8);
        *(&v31[0].Reserved + 1 * v20) = 0;
        ++v18;
      }
      v21 = v18;
      v31[v21].Ptr = (ULONGLONG)&v26;
      *(_QWORD *)&v31[v21].Size = 2LL;
      v22 = v18 + 1;
      v23 = v22;
      v31[v23].Ptr = (ULONGLONG)&v28;
      *(_QWORD *)&v31[v23].Size = 4LL;
      v24 = ++v22;
      v31[v24].Ptr = (ULONGLONG)&Object;
      *(_QWORD *)&v31[v24].Size = 4LL;
      EtwWrite(v15, &KERNEL_AUDIT_API_CREATESYMBOLICLINKOBJECT, 0LL, v22 + 1, v31);
    }
  }
  return (unsigned int)IntegrityLevel;
}

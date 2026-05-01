/*
 * XREFs of CrmSrvRegister @ 0x180004F60
 * Callers:
 *     CrmRpcSrvRegister @ 0x180004E50 (CrmRpcSrvRegister.c)
 * Callees:
 *     CrmRegistrationStart @ 0x180005054 (CrmRegistrationStart.c)
 *     CrmRegistrationInitialize @ 0x1800053EC (CrmRegistrationInitialize.c)
 *     CrmRegistrationCleanup @ 0x180012170 (CrmRegistrationCleanup.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D5BC (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall CrmSrvRegister(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  PVOID Heap; // rax
  void *v9; // rdi
  int v10; // ebx
  int v12; // eax
  int v13; // r10d
  int v14; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+34h] [rbp-95h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+40h] [rbp-89h] BYREF
  UUID *v17; // [rsp+60h] [rbp-69h]
  int v18; // [rsp+68h] [rbp-61h]
  int v19; // [rsp+6Ch] [rbp-5Dh]
  int *v20; // [rsp+70h] [rbp-59h]
  int v21; // [rsp+78h] [rbp-51h]
  int v22; // [rsp+7Ch] [rbp-4Dh]
  __int64 v23; // [rsp+80h] [rbp-49h]
  int v24; // [rsp+88h] [rbp-41h]
  int v25; // [rsp+8Ch] [rbp-3Dh]
  char v26[16]; // [rsp+90h] [rbp-39h] BYREF
  int *v27; // [rsp+A0h] [rbp-29h]
  int v28; // [rsp+A8h] [rbp-21h]
  int v29; // [rsp+ACh] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+B0h] [rbp-19h] BYREF
  UUID *v31; // [rsp+D0h] [rbp+7h]
  int v32; // [rsp+D8h] [rbp+Fh]
  int v33; // [rsp+DCh] [rbp+13h]

  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v33 = 0;
    v31 = &Uuid;
    v32 = 16;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE821, 0, 0, 3u, &v30);
  }
  if ( a2 >= 309 )
  {
    v10 = -1073741811;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x90uLL);
    v9 = Heap;
    if ( Heap )
    {
      CrmRegistrationInitialize(Heap);
      v10 = CrmRegistrationStart(v9, a4, (unsigned int)a2);
      if ( v10 < 0 )
      {
        CrmRegistrationCleanup(v9, 1LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      }
      else
      {
        *a1 = v9;
        v10 = 0;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v20 = &v14;
    v12 = *(unsigned __int8 *)(a4 + 1);
    v17 = &Uuid;
    v18 = 16;
    v14 = a2;
    v21 = 4;
    v24 = 4 * v12 + 8;
    v23 = a4;
    tlgCreate1Sz_wchar_t(v26, a3);
    v29 = 0;
    v27 = &v15;
    v15 = v10;
    v28 = v13;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE2E6, 0, 0, 7u, &v16);
  }
  return (unsigned int)v10;
}

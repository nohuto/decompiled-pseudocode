/*
 * XREFs of sub_1405F43E0 @ 0x1405F43E0
 * Callers:
 *     sub_140244198 @ 0x140244198 (sub_140244198.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     sub_1402E0A04 @ 0x1402E0A04 (sub_1402E0A04.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F4784 @ 0x1405F4784 (sub_1405F4784.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1405F43E0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // rax
  int v4; // edi
  void *v5; // rcx
  _OBJECT_NAME_INFORMATION *Pool2; // rax
  _OBJECT_NAME_INFORMATION *v7; // rdi
  NTSTATUS v8; // eax
  _OBJECT_NAME_INFORMATION *v9; // rax
  size_t v10; // r14
  WCHAR *v11; // rax
  WCHAR *v12; // rsi
  __int64 v13; // rcx
  char v14[16]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+40h] BYREF
  int v17; // [rsp+88h] [rbp+48h] BYREF

  ReturnLength = 0;
  v17 = 0;
  LOBYTE(Object) = 0;
  if ( dword_140D3CAD0 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (_DWORD *)sub_1407B3B60(CurrentThread, 1953654867LL, &v17, &Object, v14, 0LL);
    v4 = v3[50] & 0x400000;
    if ( v17 == 1 )
      sub_1402F89B0((signed __int64 *)(*((_QWORD *)CurrentThread + 23) + 1208LL), (unsigned __int64)v3, 0x74726853u);
    else
      ObfDereferenceObjectWithTag(v3, 0x74726853u);
    if ( v4 )
    {
      *(_OWORD *)(a1 + 40) = 0LL;
      v5 = *(void **)(a1 + 32);
      if ( !v5 )
        goto LABEL_20;
      Object = 0LL;
      if ( ObReferenceObjectByHandle(v5, 0, 0LL, *((_BYTE *)KeGetCurrentThread() + 562), &Object, 0LL) < 0 )
        goto LABEL_20;
      Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, 528LL, 1330799955LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ObQueryNameString(Object, Pool2, 0x210u, &ReturnLength);
        if ( v8 != -1073741820 )
          goto LABEL_12;
        ExFreePoolWithTag(v7, 0);
        v9 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 1330799955LL);
        v7 = v9;
        if ( v9 )
        {
          v8 = ObQueryNameString(Object, v9, ReturnLength, &ReturnLength);
LABEL_12:
          if ( v8 >= 0 )
          {
            if ( v7->Name.Buffer )
            {
              v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v7->Name.MaximumLength;
              v11 = (WCHAR *)ExAllocatePool2(256LL, v10, 1330799955LL);
              v12 = v11;
              if ( v11 )
              {
                memset(v11, 0, v10);
                sub_1402E0978(v12, v10, (__int64)v7->Name.Buffer);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
                {
                  sub_1402E0A04(v12, v10, (__int64)&word_140439030);
                  sub_1402E0A04(v12, v10, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
                }
                RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v12);
              }
            }
          }
          ExFreePoolWithTag(v7, 0);
        }
      }
      ObfDereferenceObject(Object);
LABEL_20:
      *(_DWORD *)(a1 + 8) = sub_1405F4784(KeGetCurrentThread());
      *(_QWORD *)a1 = *(_QWORD *)(v13 + 1528);
      *(_QWORD *)(v13 + 1528) = a1;
    }
  }
}

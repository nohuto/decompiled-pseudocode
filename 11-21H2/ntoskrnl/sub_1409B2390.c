/*
 * XREFs of sub_1409B2390 @ 0x1409B2390
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025302C @ 0x14025302C (sub_14025302C.c)
 *     sub_1402A0880 @ 0x1402A0880 (sub_1402A0880.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 */

__int64 __fastcall sub_1409B2390(__int64 a1, __int64 a2, HANDLE *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  int v4; // ebx
  PVOID v7; // r12
  NTSTATUS v8; // edi
  void *v9; // rcx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID v14; // r15
  int v15; // eax
  HANDLE v16; // r14
  volatile signed __int32 *v17; // rsi
  int v18; // ebx
  PVOID v20; // [rsp+50h] [rbp-10h] BYREF
  PVOID v21; // [rsp+58h] [rbp-8h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+40h] BYREF
  HANDLE *v23; // [rsp+B0h] [rbp+50h]
  HANDLE Handle; // [rsp+B8h] [rbp+58h] BYREF

  v23 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)(a1 + 24);
  v21 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  if ( (v4 & 0xFFFFFFF0) != 0 || (v4 & 6) != 0 && (v4 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v8 = ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 0x80u, (POBJECT_TYPE)PsProcessType, 0, 0x72437350u, &Object, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = *(void **)(a1 + 8);
  if ( !v9 )
    goto LABEL_10;
  v8 = ObReferenceObjectByHandleWithTag(v9, 9u, (POBJECT_TYPE)SeTokenObjectType, 0, 0x72437350u, &v21, 0LL);
  if ( v8 >= 0 )
  {
    v7 = v21;
LABEL_10:
    v10 = 0;
    if ( (v4 & 1) != 0 )
    {
      v10 = 2 * (v4 & 2 | 0x1000);
      if ( (v4 & 4) != 0 )
        v10 |= 0x4000u;
    }
    v11 = v10 | 1;
    if ( (v4 & 8) == 0 )
      v11 = v10;
    v12 = 0LL;
    v13 = 0LL;
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 16);
    }
    v14 = Object;
    v15 = sub_140831810((PEPROCESS)Object, v12, v13, 0, v7, v11, 2, *(_QWORD *)(a1 + 16), 0LL, &Handle);
    v16 = Handle;
    v8 = v15;
    if ( v15 >= 0 )
    {
      v8 = ObReferenceObjectByHandleWithTag(Handle, 0x80u, (POBJECT_TYPE)PsProcessType, 0, 0x72437350u, &v20, 0LL);
      if ( v8 >= 0 )
      {
        v17 = (volatile signed __int32 *)v20;
        sub_1402A0880((__int64)v20, (__int64)CurrentThread);
        if ( (v17[281] & 8) != 0 )
        {
          v8 = -1073741558;
        }
        else
        {
          _interlockedbittestandset(v17 + 280, 0xAu);
          v16 = 0LL;
          v14 = Object;
          v17 = (volatile signed __int32 *)v20;
          v7 = v21;
          *v23 = Handle;
        }
        v18 = v8;
        sub_14025302C((__int64)v17, (__int64)CurrentThread);
        ObfDereferenceObjectWithTag((PVOID)v17, 0x72437350u);
        v8 = 0;
        if ( v18 < 0 )
          v8 = v18;
      }
    }
    if ( v16 )
      ZwClose(v16);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x72437350u);
    goto LABEL_29;
  }
  v14 = Object;
LABEL_29:
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return (unsigned int)v8;
}

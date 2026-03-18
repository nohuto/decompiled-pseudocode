/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C0011260
 * Callers:
 *     <none>
 * Callees:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0010E70 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     DxgkGetWin32kImportTable @ 0x1C001166C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v7; // r13
  void *Pool2; // rsi
  unsigned __int128 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int LocallyUniqueId; // ebx
  size_t v14; // r8
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  void *v20; // rcx
  __int64 v21; // rax
  __int64 Win32kImportTable; // rax
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  void *v25; // [rsp+60h] [rbp-A8h]
  __int64 v26; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  __int128 v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  _QWORD v31[14]; // [rsp+98h] [rbp-70h] BYREF
  size_t Size; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v33; // [rsp+118h] [rbp+10h]
  unsigned int v34; // [rsp+120h] [rbp+18h]

  v34 = a3;
  v33 = a2;
  v7 = a2;
  Handle = (HANDLE)-1LL;
  Pool2 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  KeEnterCriticalRegion();
  if ( !Src || !(_DWORD)v7 || !a3 || !a4 )
  {
    LocallyUniqueId = -1073741811;
    goto LABEL_40;
  }
  v11 = (unsigned int)v7;
  v10 = v7 * (unsigned __int128)0x18uLL;
  v30 = *((_QWORD *)&v10 + 1);
  Size = 24 * v7;
  v12 = -1LL;
  if ( is_mul_ok(v7, 0x18uLL) )
  {
    LocallyUniqueId = 0;
  }
  else
  {
    Size = -1LL;
    LocallyUniqueId = -1073741675;
  }
  if ( LocallyUniqueId >= 0 )
  {
    v10 = (unsigned int)v7 * (unsigned __int128)0x18uLL;
    if ( !is_mul_ok((unsigned int)v7, 0x18uLL) )
      *(_QWORD *)&v10 = -1LL;
    if ( (_QWORD)v10 )
    {
      if ( (unsigned __int64)v10 > 0x7FFFFFFF )
        goto LABEL_15;
    }
    else
    {
      *(_QWORD *)&v10 = 1LL;
    }
    Pool2 = (void *)ExAllocatePool2(256LL, v10, 1650675028LL);
LABEL_15:
    v25 = Pool2;
    if ( Pool2 )
    {
      v14 = Size;
      if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, Src, v14);
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        a4 = (__int64 *)MmUserProbeAddress;
      v15 = *a4;
      v26 = *a4;
      v16 = ((__int64 (*)(void))DxgkGetWin32kImportTable)();
      LocallyUniqueId = (*(__int64 (__fastcall **)(__int64, __int64 *))(v16 + 456))(0x80000000LL, &v24);
      if ( LocallyUniqueId >= 0 )
      {
        v31[0] = 48LL;
        memset(&v31[1], 0, 24);
        v31[4] = v24;
        v31[5] = 0LL;
        *(_QWORD *)&v28 = Pool2;
        *((_QWORD *)&v28 + 1) = __PAIR64__(v34, v7);
        v29 = v15;
        Size = 0LL;
        LOBYTE(v17) = 1;
        LocallyUniqueId = ObCreateObject(0LL, g_pDxgkCompositionObjectType, v31, v17, 0LL, 120, 0, 0, &Size);
        if ( LocallyUniqueId >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess();
          ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
          *(_DWORD *)(Size + 8) = ProcessSessionId;
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(Size + 24));
          v20 = (void *)Size;
          if ( LocallyUniqueId < 0
            || (LocallyUniqueId = CompositionTokenObject::ObjectInit(
                                    (struct DxgkCompositionObject *)Size,
                                    (const struct CompositionTokenInitInfo *)&v28,
                                    (struct IDxgkCompositionObject **)(Size + 16)),
                v20 = (void *)Size,
                LocallyUniqueId < 0) )
          {
            ObfDereferenceObject(v20);
          }
          else
          {
            LocallyUniqueId = ObInsertObject((PVOID)Size, 0LL, 3u, 0, 0LL, &Handle);
          }
        }
        if ( LocallyUniqueId >= 0 )
        {
          v11 = a5;
          if ( a5 )
          {
            *((_QWORD *)&v10 + 1) = a5 + 8;
            if ( a5 + 8 < a5 || *((_QWORD *)&v10 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_QWORD *)v11 = Handle;
          }
          else
          {
            LocallyUniqueId = -1073741811;
          }
          if ( LocallyUniqueId >= 0 && v15 )
          {
            v21 = ((__int64 (*)(void))DxgkGetWin32kImportTable)();
            (*(void (__fastcall **)(__int64, _QWORD))(v21 + 48))(v15, 0LL);
          }
        }
      }
    }
    else
    {
      LocallyUniqueId = -1073741801;
    }
  }
LABEL_40:
  if ( v24 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable(v11, *((_QWORD *)&v10 + 1), v12);
    (*(void (__fastcall **)(__int64))(Win32kImportTable + 576))(v24);
  }
  if ( LocallyUniqueId < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)LocallyUniqueId;
}

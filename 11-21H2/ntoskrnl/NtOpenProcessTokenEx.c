/*
 * XREFs of NtOpenProcessTokenEx @ 0x1407279B0
 * Callers:
 *     NtOpenProcessToken @ 0x1407271B0 (NtOpenProcessToken.c)
 *     sub_1409BB4D8 @ 0x1409BB4D8 (sub_1409BB4D8.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1402A48C0 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1403478A0 @ 0x1403478A0 (sub_1403478A0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     sub_140347B50 @ 0x140347B50 (sub_140347B50.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  PHANDLE v4; // r15
  KPROCESSOR_MODE v5; // r12
  int v6; // edi
  ULONG v7; // edi
  _QWORD *v8; // r13
  NTSTATUS result; // eax
  char *v10; // r14
  POBJECT_TYPE *v11; // rsi
  NTSTATUS v12; // ebx
  __int64 v13; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rdx
  signed __int64 *v21; // rbx
  int v22; // [rsp+30h] [rbp-248h]
  PVOID Object; // [rsp+68h] [rbp-210h] BYREF
  PHANDLE v25; // [rsp+70h] [rbp-208h]
  void *v26; // [rsp+78h] [rbp-200h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-1F8h]
  __int128 v28; // [rsp+88h] [rbp-1F0h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp-1E0h]
  __int64 v30; // [rsp+A0h] [rbp-1D8h]
  struct _KTHREAD *v31; // [rsp+A8h] [rbp-1D0h]
  PVOID v32[20]; // [rsp+B0h] [rbp-1C8h] BYREF
  _QWORD v33[28]; // [rsp+150h] [rbp-128h] BYREF

  v4 = TokenHandle;
  v25 = TokenHandle;
  v5 = *((_BYTE *)KeGetCurrentThread() + 562);
  v6 = 73714;
  if ( v5 )
    v6 = 7666;
  v7 = HandleAttributes & v6;
  if ( v5 )
  {
    v20 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
  }
  v8 = 0LL;
  Object = 0LL;
  result = sub_140732D40((ULONG_PTR)ProcessHandle, 0x65537350u, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v10 = (char *)sub_140347920((__int64)Object, 0x746C6644u);
    ObfDereferenceObjectWithTag(Object, 0x65537350u);
    v11 = SeTokenObjectType;
    memset(v33, 0, sizeof(v33));
    memset(v32, 0, sizeof(v32));
    v26 = 0LL;
    v12 = ObReferenceObjectByPointerWithTag(v10, 0, (POBJECT_TYPE)SeTokenObjectType, v5, 0x6E48624Fu);
    if ( v12 >= 0 )
    {
      if ( !v11 )
        v11 = (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ (unsigned __int8)*(v10 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v10 - 48) >> 8)];
      if ( (v7 & (_DWORD)v11[9]) != 0 || (*(v10 - 21) & 1) != 0 && *((_QWORD *)v10 - 2) )
      {
        ++dword_140C246E0;
        ObfDereferenceObjectWithTag(v10, 0x6E48624Fu);
        v12 = -1073741811;
      }
      else
      {
        v13 = *((_QWORD *)KeGetCurrentThread() + 23);
        CurrentThread = KeGetCurrentThread();
        *((_QWORD *)&v28 + 1) = 0LL;
        v30 = *(_QWORD *)(v13 + 1088);
        if ( CurrentThread && (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
        {
          v31 = KeGetCurrentThread();
          --*((_WORD *)v31 + 242);
          BugCheckParameter2 = (ULONG_PTR)CurrentThread + 1360;
          ExAcquirePushLockSharedEx((ULONG_PTR)CurrentThread + 1360, 0LL);
          if ( (*((_DWORD *)CurrentThread + 344) & 8) != 0 )
          {
            v8 = (_QWORD *)(*((_QWORD *)CurrentThread + 159) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObjectWithTag(v8, 0x75536553u);
            DWORD2(v28) = *((_DWORD *)CurrentThread + 318) & 3;
          }
          v21 = (signed __int64 *)BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v21);
          sub_1402AFC00((ULONG_PTR)v21);
          sub_1402AC800((__int64)v31);
        }
        *(_QWORD *)&v28 = v8;
        v15 = sub_140347920(v13, 0x75536553u);
        v29 = v15;
        if ( HIDWORD(NlsMbOemCodePageTag) )
        {
          if ( v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
            if ( v29 == qword_140D04940 )
              __debugbreak();
            v8 = (_QWORD *)v28;
          }
          if ( v8 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v8[143] + 284LL));
            if ( (_QWORD)v28 == qword_140D04940 )
              __debugbreak();
          }
        }
        v12 = sub_140347A20(&v28, v32, v33, DesiredAccess, (PGENERIC_MAPPING)((char *)v11 + 76));
        if ( v12 < 0 )
        {
          ObfDereferenceObjectWithTag(v10, 0x6E48624Fu);
          v4 = v25;
        }
        else
        {
          LOBYTE(v22) = v5;
          v12 = sub_140731DA0(1LL, v10, 0LL, v32, 0, v7, v22, 0LL, 0, 0LL, &v26);
          if ( v12 < 0 )
            ObfDereferenceObjectWithTag(v10, 0x6E48624Fu);
          sub_1403478A0((__int64)v32);
          if ( HIDWORD(NlsMbOemCodePageTag) )
          {
            if ( v32[6] )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v32[6] + 143) + 284LL));
              if ( v32[6] == (PVOID)qword_140D04940 )
                __debugbreak();
            }
            if ( v32[4] )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v32[4] + 143) + 284LL));
              if ( v32[4] == (PVOID)qword_140D04940 )
                __debugbreak();
            }
          }
          v16 = *((_QWORD *)KeGetCurrentThread() + 23);
          v17 = (unsigned __int64)v32[6];
          _m_prefetchw((const void *)(v16 + 1208));
          v18 = *(_QWORD *)(v16 + 1208);
          if ( (v18 ^ (unsigned __int64)v32[6]) >= 0xF )
          {
LABEL_36:
            ObfDereferenceObjectWithTag((PVOID)v17, 0x75536553u);
          }
          else
          {
            while ( 1 )
            {
              v19 = v18;
              v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 1208), v18 + 1, v18);
              if ( v19 == v18 )
                break;
              if ( (v17 ^ v18) >= 0xF )
                goto LABEL_36;
            }
            sub_140347B50(v17 - 48);
          }
          v32[6] = 0LL;
          if ( v32[4] )
            ObfDereferenceObjectWithTag(v32[4], 0x75536553u);
          v4 = v25;
        }
      }
    }
    ObfDereferenceObject(v10);
    if ( v12 >= 0 )
      *v4 = v26;
    return v12;
  }
  return result;
}

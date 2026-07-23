/*
 * XREFs of sub_140B16B94 @ 0x140B16B94
 * Callers:
 *     sub_140B16904 @ 0x140B16904 (sub_140B16904.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_140837614 @ 0x140837614 (sub_140837614.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B4DE2C @ 0x140B4DE2C (sub_140B4DE2C.c)
 */

__int64 __fastcall sub_140B16B94(__int64 a1, __int64 a2)
{
  int v4; // esi
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // r15
  int v7; // ecx
  int v8; // ebx
  int v9; // ebx
  wchar_t *v10; // rax
  wchar_t *v11; // r14
  int v12; // r8d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  const WCHAR *v21; // rbx
  bool v22; // zf
  _BYTE v23[8]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v24; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v26; // [rsp+80h] [rbp-80h] BYREF
  _OWORD BugCheckParameter3[27]; // [rsp+90h] [rbp-70h] BYREF
  char v28; // [rsp+240h] [rbp+140h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  v24 = 0LL;
  v23[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_39;
  v7 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&Destination.Length = 0x10000000LL;
  Destination.Buffer = PoolWithTag;
  if ( (v7 & 0x80) != 0 )
  {
    v21 = (const WCHAR *)sub_140B4DE2C(*(_QWORD *)(a1 + 16));
    RtlAppendUnicodeToString(&Destination, L"\\DriverStore\\Nodes\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 48));
    RtlAppendUnicodeToString(&Destination, v21);
    v8 = *(_DWORD *)(a1 + 24);
    v4 = 0x400000;
    if ( (v8 & 0x10) != 0 && (!dword_140D011A8 || !dword_140D014EC) )
      v4 = 4194305;
  }
  else if ( (v7 & 0x36) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v8 = *(_DWORD *)(a1 + 24);
    if ( (v8 & 2) == 0 )
    {
      if ( (v8 & 4) != 0 )
        v4 = 0x2000;
      else
        v4 = (v8 & 0x20) != 0 ? 0x200000 : 1;
    }
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v8 = *(_DWORD *)(a1 + 24);
    v4 = 0x4000;
  }
  v9 = v8 & 0x100;
  v10 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.Length + 2LL, 0x20204D43u);
  v11 = v10;
  if ( !v10 )
LABEL_39:
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v10, Destination.Buffer, Destination.Length);
  ExFreePoolWithTag(v6, 0);
  v11[(unsigned __int64)Destination.Length >> 1] = 0;
  v12 = *(_DWORD *)(a1 + 24);
  Destination.MaximumLength = Destination.Length + 2;
  Destination.Buffer = v11;
  v13 = sub_14068A7FC(
          &v24,
          1u,
          (32 * (v12 & 8)) | 0x12u,
          2u,
          *(_QWORD *)(a1 + 32),
          0LL,
          (__int64)&Destination,
          4784136,
          0LL,
          0LL,
          (__int64)v23,
          (__int64)BugCheckParameter3);
  if ( v13 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v13);
  sub_140837614(v24, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v24 + 1824), v11);
  v14 = v4 | 0x1000000;
  if ( !v9 )
    v14 = v4;
  *(_DWORD *)(v24 + 160) |= v14 | 0x400;
  if ( v23[0] == 1 )
    *(_DWORD *)(v24 + 160) |= 0x800u;
  if ( byte_140D3B018 )
    *(_DWORD *)(v24 + 160) |= 0x8000u;
  v15 = *(_DWORD *)(a1 + 24);
  if ( (v15 & 0x80u) != 0 )
  {
    if ( (v15 & 0x10) == 0 )
      goto LABEL_15;
    if ( !dword_140D011A8 )
    {
LABEL_34:
      *(_DWORD *)(v24 + 160) |= 0x8000u;
      goto LABEL_15;
    }
    v22 = dword_140D014EC == 0;
  }
  else
  {
    if ( !dword_140D011A8 || dword_140D014EC )
      goto LABEL_15;
    v22 = (v15 & 0x20) == 0;
  }
  if ( v22 )
    goto LABEL_34;
LABEL_15:
  v16 = *(_DWORD *)(*(_QWORD *)(v24 + 64) + 4088LL);
  dword_140C4986C = v16;
  if ( !dword_140C0C69C )
  {
    BYTE3(NlsMbOemCodePageTag) = 0;
    if ( (v16 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v24, 0LL);
  }
  *(_QWORD *)&v26.Length = 0x800000LL;
  v26.Buffer = (wchar_t *)&v28;
  RtlAppendUnicodeToString(&v26, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v26, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v26, &word_140B323C0);
  RtlAppendUnicodeToString(&v26, *(PCWSTR *)(a1 + 48));
  v17 = sub_14067C9E8((__int64)&v26, 0LL, v24, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1, BugCheckParameter3);
  if ( v17 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v24, v17);
  v18 = (_QWORD *)qword_140C49818;
  v19 = (_QWORD *)(v24 + 1624);
  if ( *(__int64 **)qword_140C49818 != &qword_140C49810 )
    __fastfail(3u);
  *v19 = &qword_140C49810;
  v19[1] = v18;
  *v18 = v19;
  qword_140C49818 = (__int64)v19;
  return 0LL;
}

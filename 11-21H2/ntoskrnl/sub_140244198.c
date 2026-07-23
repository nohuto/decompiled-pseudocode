/*
 * XREFs of sub_140244198 @ 0x140244198
 * Callers:
 *     sub_1402F349C @ 0x1402F349C (sub_1402F349C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347840 @ 0x140347840 (sub_140347840.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F43E0 @ 0x1405F43E0 (sub_1405F43E0.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall sub_140244198(__int64 a1)
{
  bool v1; // zf
  _DWORD *v3; // rax
  char v5; // bl
  SIZE_T v6; // r14
  WCHAR *PoolWithTag; // rax
  WCHAR *v8; // rdi
  const WCHAR *v9; // rdx
  char v10; // si
  char v11[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING v13; // [rsp+70h] [rbp-90h] BYREF
  char v14[4]; // [rsp+80h] [rbp-80h] BYREF
  char v15[4]; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-60h]
  PVOID Object[2]; // [rsp+B0h] [rbp-50h]
  __int128 v20; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-30h]
  __int128 v22; // [rsp+E0h] [rbp-20h]
  __int64 v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h] BYREF
  int v25; // [rsp+100h] [rbp+0h]
  int v26; // [rsp+104h] [rbp+4h]
  char v27; // [rsp+108h] [rbp+8h] BYREF

  v12 = 0LL;
  v1 = (*(_BYTE *)(a1 + 38) & 2) == 0;
  v11[0] = 0;
  v18 = 0LL;
  v24 = 0x3000000020000LL;
  *(_OWORD *)Object = 0LL;
  v25 = 0x20000;
  v26 = 2031616;
  v20 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  DestinationString = 0LL;
  v13 = 0LL;
  if ( !v1 )
    return 1;
  v3 = (_DWORD *)sub_1407B3B60(KeGetCurrentThread(), 1836020801LL, v15, v11, v14, 0LL);
  Object[0] = v3;
  if ( (v3[50] & 0x400000) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
    v5 = 1;
    v6 = 2LL * *(unsigned __int8 *)(a1 + 40) + 2;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v6, 0x6D4E7441u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      if ( (int)sub_1402E0978(v8, v6, a1 + 42) < 0 )
        v9 = L"Unable to capture ATOM name.";
      else
        v9 = v8;
    }
    else
    {
      v9 = L"Unable to Allocate space for ATOM name.";
    }
    RtlInitUnicodeString(&v13, v9);
    *(_QWORD *)&v21 = &DestinationString;
    *((_QWORD *)&v21 + 1) = &v13;
    sub_1405F43E0(&v20);
    v16 = (__int64)&v27;
    Object[1] = *(PVOID *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
    v10 = SeAccessCheckWithHint(
            qword_140D3CD80,
            0x20000,
            0,
            (__int64)&v16,
            (__int64)&v24,
            *((_BYTE *)KeGetCurrentThread() + 562),
            (__int64)&v12,
            (__int64)&v12 + 4);
    ObfDereferenceObjectWithTag(Object[0], 0x6D6F7441u);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x6D4E7441u);
    sub_140347840();
    if ( v10 != 1 || !(_DWORD)v12 )
      return 0;
    return v5;
  }
  else
  {
    ObfDereferenceObjectWithTag(v3, 0x6D6F7441u);
    return 0;
  }
}

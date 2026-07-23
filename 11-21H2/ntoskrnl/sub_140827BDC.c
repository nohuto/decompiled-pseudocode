/*
 * XREFs of sub_140827BDC @ 0x140827BDC
 * Callers:
 *     sub_140827AA8 @ 0x140827AA8 (sub_140827AA8.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14041BEE0 (ZwDuplicateObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 *     sub_14078003C @ 0x14078003C (sub_14078003C.c)
 *     sub_140827DE0 @ 0x140827DE0 (sub_140827DE0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140827BDC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        HANDLE SourceHandle,
        int a6,
        _QWORD *a7)
{
  int Version; // ebx
  __int64 v10; // rcx
  _BYTE *Pool2; // rdi
  int v12; // r8d
  const WCHAR *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  HANDLE v16; // rcx
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v20; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD VersionInformation[72]; // [rsp+60h] [rbp-A0h] BYREF

  Handle = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  TargetHandle = 0LL;
  Version = 0;
  *a7 = 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, 56LL, 1397771856LL);
  if ( !Pool2 )
  {
    Version = -1073741801;
    goto LABEL_25;
  }
  v12 = a6;
  if ( !a6 )
  {
    memset(&VersionInformation[1], 0, 0x118uLL);
    VersionInformation[0] = 284;
    Version = RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
    if ( Version < 0 )
      goto LABEL_25;
    v10 = LOBYTE(VersionInformation[69]);
    LOWORD(v10) = LOBYTE(VersionInformation[69]) << 8;
    v12 = BYTE2(VersionInformation[69]) | (unsigned __int16)v10 | ((LOBYTE(VersionInformation[2]) | (unsigned __int16)(LOBYTE(VersionInformation[1]) << 8)) << 16);
  }
  *(_DWORD *)Pool2 = v12;
  if ( SourceHandle )
  {
    Version = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0,
                0,
                2u);
    if ( Version < 0 )
    {
      TargetHandle = 0LL;
      goto LABEL_15;
    }
  }
  if ( !a2 )
  {
    v13 = L"SYSTEM";
    v14 = 2147483650LL;
    goto LABEL_6;
  }
  if ( a2 != -1 )
  {
    v13 = 0LL;
    v14 = a2;
LABEL_6:
    Version = sub_14078003C((char *)v14, v13, 0, 0x2000000u, &Handle, (__int64)TargetHandle);
    if ( Version )
      goto LABEL_25;
  }
  if ( !Handle || (Version = sub_140827DE0(v10, Handle, TargetHandle, &v21)) == 0 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        goto LABEL_12;
      v15 = a4;
    }
    else
    {
      v15 = 2147483651LL;
    }
    Version = sub_14078003C((char *)v15, 0LL, 0, 0x2000000u, &v20, (__int64)TargetHandle);
    if ( !Version )
    {
LABEL_12:
      Pool2[16] = 1;
      v16 = 0LL;
      *((_QWORD *)Pool2 + 1) = TargetHandle;
      *((_QWORD *)Pool2 + 3) = Handle;
      *((_QWORD *)Pool2 + 4) = 0LL;
      *((_QWORD *)Pool2 + 6) = v21;
      *((_QWORD *)Pool2 + 5) = v20;
      *a7 = Pool2;
      Pool2 = 0LL;
      TargetHandle = 0LL;
      Handle = 0LL;
      v21 = 0LL;
      v20 = 0LL;
      goto LABEL_13;
    }
  }
LABEL_25:
  v16 = TargetHandle;
LABEL_13:
  if ( v16 )
    ZwClose(v16);
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v21 )
    ZwClose(v21);
  if ( v20 )
    ZwClose(v20);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Version;
}

/*
 * XREFs of sub_14055E2F4 @ 0x14055E2F4
 * Callers:
 *     sub_1403B839C @ 0x1403B839C (sub_1403B839C.c)
 *     sub_14055EBF8 @ 0x14055EBF8 (sub_14055EBF8.c)
 * Callees:
 *     sub_1403C55B0 @ 0x1403C55B0 (sub_1403C55B0.c)
 *     sub_14055EBC8 @ 0x14055EBC8 (sub_14055EBC8.c)
 *     sub_1405F3CD0 @ 0x1405F3CD0 (sub_1405F3CD0.c)
 *     sub_1405F3D28 @ 0x1405F3D28 (sub_1405F3D28.c)
 *     sub_1407E21D4 @ 0x1407E21D4 (sub_1407E21D4.c)
 *     sub_14082E8D4 @ 0x14082E8D4 (sub_14082E8D4.c)
 *     sub_1409C5CC4 @ 0x1409C5CC4 (sub_1409C5CC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14055E2F4()
{
  UCHAR *v0; // rsi
  unsigned int v1; // edi
  NTSTATUS v2; // ebx
  UCHAR *Pool2; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+58h] [rbp-20h] BYREF
  ULONG pcbResult; // [rsp+B0h] [rbp+38h] BYREF
  int v11; // [rsp+B8h] [rbp+40h] BYREF
  int v12; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+50h] BYREF

  v9[0] = L"SHA256";
  pcbResult = 0;
  v0 = 0LL;
  v8 = 0LL;
  v13 = 0LL;
  v1 = 1;
  v9[1] = 0LL;
  v9[2] = 0LL;
  v11 = 0;
  v12 = 0;
  dword_140C4F01C = 2;
  v2 = BCryptExportKey(hKey, 0LL, L"KeyDataBlob", 0LL, 0, &pcbResult, 0);
  if ( v2 >= 0 )
  {
    Pool2 = (UCHAR *)ExAllocatePool2(64LL, pcbResult, 1886217299LL);
    v0 = Pool2;
    if ( !Pool2 )
    {
LABEL_3:
      v2 = -1073741670;
      goto LABEL_14;
    }
    v2 = BCryptExportKey(hKey, 0LL, L"KeyDataBlob", Pool2, pcbResult, &pcbResult, 0);
    if ( v2 >= 0 )
    {
      v2 = sub_14082E8D4(&v8, L"RSA", 0LL, 1LL);
      if ( v2 >= 0 )
      {
        v2 = sub_1409C5CC4(v8, v4, v5, (unsigned int)&v13, *((__int64 *)&xmmword_140C4EFD8 + 1), xmmword_140C4EFE8);
        if ( v2 < 0
          || (v2 = sub_1407E21D4(v13, (unsigned int)L"KeyLength", (unsigned int)&v11, v6, (__int64)&v12), v2 < 0) )
        {
          v1 = 3;
        }
        else if ( v11 == 2048 )
        {
          v2 = sub_1405F3D28(v13, (_DWORD)v0, pcbResult, (unsigned int)v9, 0LL, 0, 0LL, 0, (__int64)&dword_140C4F000, 4);
          if ( v2 >= 0 )
          {
            qword_140C4EFF8 = (PVOID)ExAllocatePool2(64LL, (unsigned int)dword_140C4F000, 1886217299LL);
            if ( !qword_140C4EFF8 )
              goto LABEL_3;
            v2 = sub_1405F3D28(
                   v13,
                   (_DWORD)v0,
                   pcbResult,
                   (unsigned int)v9,
                   0LL,
                   0,
                   (__int64)qword_140C4EFF8,
                   dword_140C4F000,
                   (__int64)&dword_140C4F000,
                   4);
          }
        }
        else
        {
          v1 = 4;
          v2 = -1073741823;
        }
      }
    }
  }
LABEL_14:
  if ( v8 )
    sub_1403C55B0(v8);
  if ( v13 )
    sub_1405F3CD0();
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( v2 < 0 )
    sub_14055EBC8(v1);
  return (unsigned int)v2;
}

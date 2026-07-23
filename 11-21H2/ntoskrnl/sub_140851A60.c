/*
 * XREFs of sub_140851A60 @ 0x140851A60
 * Callers:
 *     sub_140B10D98 @ 0x140B10D98 (sub_140B10D98.c)
 *     sub_140B4F76C @ 0x140B4F76C (sub_140B4F76C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     sub_14067AB94 @ 0x14067AB94 (sub_14067AB94.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B277F4 @ 0x140B277F4 (sub_140B277F4.c)
 */

NTSTATUS __fastcall sub_140851A60(
        __int64 a1,
        UNICODE_STRING *a2,
        __int64 a3,
        char a4,
        void *a5,
        __int64 a6,
        HANDLE Handle)
{
  NTSTATUS result; // eax
  int v8; // ebx
  int v9; // edi
  _DWORD *Pool2; // rsi
  ULONG i; // r14d
  NTSTATUS v12; // eax
  unsigned int v13; // edx
  _WORD *v14; // rcx
  int v15; // ebx
  PVOID P; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+30h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp+40h] BYREF
  int v20; // [rsp+A8h] [rbp+48h] BYREF

  LOBYTE(v20) = a4;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  P = 0LL;
  v17 = 0LL;
  a5 = 0LL;
  result = sub_14067B470(a2, 0x20019u, 0LL, &KeyHandle, 0);
  if ( result < 0 )
    return result;
  v8 = 0;
  v9 = sub_14067B838(KeyHandle, L"Count", 0, &P);
  if ( v9 < 0 )
  {
    if ( v9 == -1073741772 )
      v9 = 0;
    goto LABEL_15;
  }
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
    v8 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  ExFreePoolWithTag(P, 0);
  if ( !v8 )
    goto LABEL_15;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 512LL, 538996816LL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_15;
  }
  for ( i = 0; ; ++i )
  {
    v12 = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, Pool2, 0x200u, &ResultLength);
    if ( v12 < 0 )
      break;
    if ( Pool2[1] == 1 )
    {
      LOWORD(v17) = 0;
      v13 = Pool2[3];
      v14 = (_WORD *)((char *)Pool2 + (unsigned int)Pool2[2]);
      v20 = 0;
      sub_14067AB94(v14, v13, &v20);
      LOWORD(v17) = v20;
      WORD1(v17) = *((_WORD *)Pool2 + 6);
      *((_QWORD *)&v17 + 1) = (char *)Pool2 + (unsigned int)Pool2[2];
      if ( (_WORD)v20 )
      {
        if ( (int)sub_140779CA0((__int16 **)&a5, 0LL, (unsigned __int16 *)&v17) >= 0 )
        {
          v9 = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, (__int64)a5, 16, 0, 983103, 0, (__int64)&Handle, 0LL);
          sub_14077BAB8(a5, (__int64)&v17);
          if ( v9 >= 0 )
          {
            v15 = sub_140B277F4(Handle, &v17, a6);
            ZwClose(Handle);
            if ( !v15 )
              goto LABEL_14;
          }
        }
      }
    }
LABEL_11:
    ;
  }
  if ( v12 != -2147483622 )
    goto LABEL_11;
  v9 = 0;
LABEL_14:
  ExFreePoolWithTag(Pool2, 0);
LABEL_15:
  ZwClose(KeyHandle);
  return v9;
}

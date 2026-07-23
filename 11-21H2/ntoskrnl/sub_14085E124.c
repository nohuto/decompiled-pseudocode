/*
 * XREFs of sub_14085E124 @ 0x14085E124
 * Callers:
 *     sub_14085E010 @ 0x14085E010 (sub_14085E010.c)
 *     sub_1409F9960 @ 0x1409F9960 (sub_1409F9960.c)
 *     sub_1409F9E40 @ 0x1409F9E40 (sub_1409F9E40.c)
 *     sub_1409FA090 @ 0x1409FA090 (sub_1409FA090.c)
 *     sub_1409FA0D0 @ 0x1409FA0D0 (sub_1409FA0D0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14085E1D0 @ 0x14085E1D0 (sub_14085E1D0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14085E124(
        __int64 a1,
        UNICODE_STRING *a2,
        _DWORD *a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6,
        _BYTE *a7)
{
  NTSTATUS v10; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rdi
  HANDLE KeyHandle[5]; // [rsp+30h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v16 = HIDWORD(a1);
  KeyHandle[0] = 0LL;
  ResultLength = 0;
  *a7 = 1;
  v10 = sub_14085E1D0(a1, a2, KeyHandle);
  if ( v10 >= 0 )
  {
    v10 = ZwQueryValueKey(KeyHandle[0], a2, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20534C53u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = ZwQueryValueKey(KeyHandle[0], a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
        if ( v10 >= 0 )
        {
          *a6 = v13[2];
          if ( a3 )
            *a3 = v13[1];
          if ( a5 >= v13[2] )
          {
            if ( a4 )
              memmove(a4, v13 + 3, (unsigned int)v13[2]);
          }
          else
          {
            v10 = -1073741789;
          }
        }
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        v10 = -1073741801;
      }
    }
    ZwClose(KeyHandle[0]);
  }
  return (unsigned int)v10;
}

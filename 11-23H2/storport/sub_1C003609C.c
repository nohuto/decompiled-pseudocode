/*
 * XREFs of sub_1C003609C @ 0x1C003609C
 * Callers:
 *     sub_1C003FB90 @ 0x1C003FB90 (sub_1C003FB90.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C00A1480 @ 0x1C00A1480 (sub_1C00A1480.c)
 *     sub_1C00A9460 @ 0x1C00A9460 (sub_1C00A9460.c)
 *     sub_1C00A949C @ 0x1C00A949C (sub_1C00A949C.c)
 */

__int64 __fastcall sub_1C003609C(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING v5; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  _BYTE Dst[16]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v8; // [rsp+70h] [rbp-39h]
  unsigned int (__fastcall *v9)(__int64, __int64, __int16 *); // [rsp+A0h] [rbp-9h]
  __int16 v10; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v11; // [rsp+B2h] [rbp+9h]

  v4 = 0;
  DestinationString = 0LL;
  v5 = 0LL;
  memset_0(Dst, 0, 0x41uLL);
  memset_0(&v10, 0, 0x40uLL);
  result = sub_1C00A949C(Dst, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( v9(v8, 4LL, &v10) >= 0xF )
    {
      if ( v10 == 5197 )
      {
        if ( v11 != 5632 && (unsigned __int16)(v11 + 22528) > 1u )
          return sub_1C00A9460(Dst);
        RtlInitUnicodeString(&DestinationString, L"Interrupt Management\\MessageSignaledInterruptProperties");
        RtlInitUnicodeString(&v5, L"MSISupported");
        v3 = sub_1C00A1480(
               *(_QWORD *)(a1 + 32),
               (unsigned int)&DestinationString,
               (unsigned int)&v5,
               4,
               (__int64)&v4,
               4);
        if ( v3 < 0
          && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 0x100) != 0
          && BYTE1(off_1C0093070->Timer) >= 2u )
        {
          sub_1C003EE1C(off_1C0093070->AttachedDevice, 67LL, &unk_1C0083210, (unsigned int)v3);
        }
      }
      if ( v10 == 4318 )
        *(_BYTE *)(a1 + 5296) = 1;
    }
    return sub_1C00A9460(Dst);
  }
  return result;
}

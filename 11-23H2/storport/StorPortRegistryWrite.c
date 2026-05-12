/*
 * XREFs of StorPortRegistryWrite @ 0x1C0047100
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C004A544 @ 0x1C004A544 (sub_1C004A544.c)
 *     sub_1C00783F0 @ 0x1C00783F0 (sub_1C00783F0.c)
 *     sub_1C00787D4 @ 0x1C00787D4 (sub_1C00787D4.c)
 */

bool __fastcall StorPortRegistryWrite(
        PVOID VirtualAddress,
        PCSZ SourceString,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  bool v9; // bl
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  int v13; // edx
  int v14; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  UnicodeString = 0LL;
  v9 = 0;
  if ( KeGetCurrentIrql() )
    return 0;
  if ( !MmIsAddressValid(VirtualAddress) )
    return 0;
  v10 = sub_1C000E2EC((__int64)VirtualAddress);
  if ( !v10 )
    return 0;
  v11 = v10 + 486;
  v12 = *((_QWORD *)v10 + 2);
  if ( !(unsigned __int8)sub_1C004A544(v10 + 486, a5, &a6) )
    return 0;
  v14 = a6;
  v11[13] = v13 - v11[8];
  v11[11] = v14;
  if ( (int)sub_1C00783F0((PCUNICODE_STRING)(v12 + 40), &Destination) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, SourceString);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      v9 = (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))sub_1C00787D4)(
                  &Destination,
                  &UnicodeString,
                  a4,
                  v11) >= 0;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v9;
}

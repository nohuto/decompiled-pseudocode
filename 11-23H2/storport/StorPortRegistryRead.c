/*
 * XREFs of StorPortRegistryRead @ 0x1C0046F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C004A544 @ 0x1C004A544 (sub_1C004A544.c)
 *     sub_1C00783F0 @ 0x1C00783F0 (sub_1C00783F0.c)
 *     sub_1C00785B4 @ 0x1C00785B4 (sub_1C00785B4.c)
 */

char __fastcall StorPortRegistryRead(
        PVOID VirtualAddress,
        PCSZ SourceString,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6)
{
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // r14
  int v12; // edx
  int v13; // eax
  char v14; // si
  int v15; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  UnicodeString = 0LL;
  if ( KeGetCurrentIrql() || !MmIsAddressValid(VirtualAddress) || (v9 = sub_1C000E2EC((__int64)VirtualAddress)) == 0LL )
  {
    *a6 = 0;
    return 0;
  }
  v10 = v9 + 486;
  v11 = *((_QWORD *)v9 + 2);
  if ( !(unsigned __int8)sub_1C004A544(v9 + 486, a5, a6) )
    return 0;
  v13 = *a6;
  v10[13] = v12 - v10[8];
  v14 = 0;
  v10[11] = v13;
  *a6 = 0;
  if ( (int)sub_1C00783F0((PCUNICODE_STRING)(v11 + 40), &Destination) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, SourceString);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))sub_1C00785B4)(
              &Destination,
              &UnicodeString,
              a4,
              v10);
      if ( v15 < 0 )
      {
        if ( v15 == -1073741789 )
          *a6 = v10[12];
        else
          *a6 = 0;
      }
      else
      {
        v14 = 1;
        *a6 = v10[11];
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v14;
}

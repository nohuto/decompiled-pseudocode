/*
 * XREFs of sub_1C00146EC @ 0x1C00146EC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     sub_1C000E318 @ 0x1C000E318 (sub_1C000E318.c)
 *     sub_1C00A1480 @ 0x1C00A1480 (sub_1C00A1480.c)
 *     sub_1C00A18DC @ 0x1C00A18DC (sub_1C00A18DC.c)
 */

__int64 __fastcall sub_1C00146EC(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rsi
  const char *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  int v7; // r12d
  _DWORD *v10; // rdi
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebx
  int v15; // ecx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v18; // [rsp+40h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v20; // [rsp+A8h] [rbp+48h]
  const char *SourceString; // [rsp+B0h] [rbp+50h]

  v3 = 0LL;
  v4 = *(const char **)a3;
  v5 = 0LL;
  v6 = 0LL;
  SourceString = *(const char **)(a3 + 8);
  v7 = 0;
  v20 = *(_DWORD *)(a3 + 16);
  v18 = 0LL;
  UnicodeString = 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a3 + 24);
    v5 = *(_QWORD *)(a3 + 32);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 24);
    v7 = *(_DWORD *)(a3 + 32);
  }
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  v10 = sub_1C000E2EC(a1);
  if ( !v10 )
    return 3238002694LL;
  if ( v4
    && (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, v4),
        v11 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u),
        v11 < 0)
    || (DestinationString = 0LL,
        RtlInitAnsiString(&DestinationString, SourceString),
        v11 = RtlAnsiStringToUnicodeString(&v18, &DestinationString, 1u),
        v11 < 0) )
  {
    v15 = v11;
  }
  else
  {
    v12 = *((_QWORD *)v10 + 4);
    if ( a2 )
      v13 = sub_1C00A18DC(
              v12,
              (unsigned __int64)&UnicodeString & -(__int64)(v4 != 0LL),
              (unsigned int)&v18,
              v20,
              v3,
              v5);
    else
      v13 = sub_1C00A1480(
              v12,
              (unsigned __int64)&UnicodeString & -(__int64)(v4 != 0LL),
              (unsigned int)&v18,
              v20,
              v6,
              v7);
    v14 = v13;
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( v18.Buffer )
      RtlFreeUnicodeString(&v18);
    v15 = v14;
  }
  return sub_1C000E318(v15);
}

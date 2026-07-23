/*
 * XREFs of sub_1408123B4 @ 0x1408123B4
 * Callers:
 *     sub_1403A7718 @ 0x1403A7718 (sub_1403A7718.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 *     sub_140812260 @ 0x140812260 (sub_140812260.c)
 *     sub_140A1CAC4 @ 0x140A1CAC4 (sub_140A1CAC4.c)
 *     sub_140A1D308 @ 0x140A1D308 (sub_140A1D308.c)
 *     sub_140A1F234 @ 0x140A1F234 (sub_140A1F234.c)
 *     sub_140A20DF8 @ 0x140A20DF8 (sub_140A20DF8.c)
 * Callees:
 *     sub_14025DBFC @ 0x14025DBFC (sub_14025DBFC.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403A774C @ 0x1403A774C (sub_1403A774C.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 */

__int64 __fastcall sub_1408123B4(__int64 a1, const WCHAR *a2, __int64 a3, ULONG a4, PVOID a5, ULONG a6)
{
  unsigned int i; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  NTSTATUS v13; // ebx
  int v15[2]; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = sub_14025DBFC(a1);
    a1 = v11;
    *(_QWORD *)v15 = 0LL;
    if ( a3 )
    {
      v13 = sub_140813164(v11, a3, 131103LL, v15);
      if ( v13 < 0 )
        goto LABEL_5;
    }
    else
    {
      *(_QWORD *)v15 = v11;
    }
    v13 = sub_1403A774C(*(void **)v15, &DestinationString, v12, a4, a5, a6);
LABEL_5:
    if ( *(_QWORD *)v15 != a1 && *(_QWORD *)v15 )
      sub_1408132F0(*(_QWORD *)v15);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}

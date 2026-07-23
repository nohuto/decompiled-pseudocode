/*
 * XREFs of sub_1403B1D20 @ 0x1403B1D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     RtlEqualString @ 0x140238C70 (RtlEqualString.c)
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1403B1D20(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  STRING String1; // [rsp+30h] [rbp-28h] BYREF
  CHAR SourceString[4]; // [rsp+40h] [rbp-18h] BYREF
  __int16 v11; // [rsp+44h] [rbp-14h]
  char v12; // [rsp+46h] [rbp-12h]

  v5 = 1;
  DestinationString = 0LL;
  String1 = 0LL;
  if ( a4 == 2 )
  {
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
      {
        v6 = sub_140213A40(0LL, **(_DWORD **)a3, 0, 0);
        if ( v6 )
        {
          v12 = 0;
          *(_DWORD *)SourceString = *(_DWORD *)(v6 + 10);
          v11 = *(_WORD *)(v6 + 14);
          RtlInitString(&DestinationString, SourceString);
          RtlInitString(&String1, *(PCSZ *)(a3 + 8));
          return RtlEqualString(&String1, &DestinationString, 1u) != 0 ? 2 : 0;
        }
      }
    }
  }
  return v5;
}

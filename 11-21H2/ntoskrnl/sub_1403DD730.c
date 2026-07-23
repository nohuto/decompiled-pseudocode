/*
 * XREFs of sub_1403DD730 @ 0x1403DD730
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_1403ACEFC @ 0x1403ACEFC (sub_1403ACEFC.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_1403B6AC0 @ 0x1403B6AC0 (sub_1403B6AC0.c)
 *     sub_1403DD7D4 @ 0x1403DD7D4 (sub_1403DD7D4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

int __fastcall sub_1403DD730(char a1, int *a2)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR Context[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+40h] [rbp-38h]
  __int128 v8; // [rsp+50h] [rbp-28h]

  *(_OWORD *)Context = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( qword_140C4C488 || (unsigned __int8)sub_1403DD7D4() )
  {
    v4 = sub_1403ACEFC(5, 0, 0, 0, 1);
    if ( v4 && (v4[28] & 0x6000) == 0 )
      *((_DWORD *)v4 + 46) |= 0x20u;
  }
  else
  {
    LODWORD(v4) = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( (unsigned int)v4 >= 2 )
    {
      sub_1403B6AC0((__int64)Context, a1, a2, 0LL);
      LODWORD(v4) = KeIpiGenericCall((PKIPI_BROADCAST_WORKER)sub_1403AC910, (ULONG_PTR)Context);
    }
  }
  return (int)v4;
}

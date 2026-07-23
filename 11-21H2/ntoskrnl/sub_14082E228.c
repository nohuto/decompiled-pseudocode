/*
 * XREFs of sub_14082E228 @ 0x14082E228
 * Callers:
 *     sub_1409F6C5C @ 0x1409F6C5C (sub_1409F6C5C.c)
 *     sub_140B0EFD8 @ 0x140B0EFD8 (sub_140B0EFD8.c)
 * Callees:
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 *     sub_14082E2BC @ 0x14082E2BC (sub_14082E2BC.c)
 */

__int64 __fastcall sub_14082E228(unsigned __int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+78h] [rbp+10h] BYREF
  __int64 v6; // [rsp+88h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v4[2] = 0LL;
  v4[0] = L"MSELAMCERTINFOID";
  v4[1] = L"MICROSOFTELAMCERTIFICATEINFO";
  result = LdrResSearchResource(a1, v4, 3u, a3 != 0 ? 4624 : 4112, &v5, &v6, 0LL, 0LL);
  if ( (int)result >= 0 )
    return sub_14082E2BC(v5, v6);
  return result;
}

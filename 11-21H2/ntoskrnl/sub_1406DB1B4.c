/*
 * XREFs of sub_1406DB1B4 @ 0x1406DB1B4
 * Callers:
 *     sub_140771FFC @ 0x140771FFC (sub_140771FFC.c)
 *     sub_140A2DB88 @ 0x140A2DB88 (sub_140A2DB88.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 */

__int64 __fastcall sub_1406DB1B4(int a1, int a2, WCHAR *a3, __int64 a4, int a5, __int64 a6, int a7)
{
  int v11; // eax
  int v12; // ebx
  NTSTATUS inited; // edi
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-D0h] BYREF
  _WORD v16[48]; // [rsp+B0h] [rbp-B8h] BYREF

  if ( a5 || a7 )
    return (unsigned int)-1073741811;
  if ( !a3 || (v12 = sub_1402DF9D0(a3, 85LL, &DestinationString), v12 >= 0) )
  {
    if ( (int)sub_1402DFBC4(
                v16,
                0x30uLL,
                0LL,
                0LL,
                0x800u,
                L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
                *(_DWORD *)a4,
                *(unsigned __int16 *)(a4 + 4),
                *(unsigned __int16 *)(a4 + 6),
                *(unsigned __int8 *)(a4 + 8),
                *(unsigned __int8 *)(a4 + 9),
                *(unsigned __int8 *)(a4 + 10),
                *(unsigned __int8 *)(a4 + 11),
                *(unsigned __int8 *)(a4 + 12),
                *(unsigned __int8 *)(a4 + 13),
                *(unsigned __int8 *)(a4 + 14),
                *(unsigned __int8 *)(a4 + 15),
                *(_DWORD *)(a4 + 16)) < 0 )
      return (unsigned int)-1073741595;
    v11 = sub_14077EF20(a1, a2, (unsigned int)v16, 6, 0);
    v12 = v11;
    if ( v11 == -1073741772 )
      return (unsigned int)-1073741275;
    if ( v11 < 0 )
      return (unsigned int)v12;
    DestinationString = 0LL;
    inited = RtlInitUnicodeStringEx(&DestinationString, a3);
    if ( inited >= 0 )
      inited = ZwDeleteValueKey(0LL, &DestinationString);
    ZwClose(0LL);
    if ( inited == -1073741772 || inited == -1073741444 )
      return (unsigned int)-1073741275;
    if ( inited < 0 )
      return (unsigned int)inited;
  }
  return (unsigned int)v12;
}

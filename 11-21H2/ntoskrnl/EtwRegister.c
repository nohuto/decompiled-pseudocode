/*
 * XREFs of EtwRegister @ 0x1406D2350
 * Callers:
 *     sub_1403AFA58 @ 0x1403AFA58 (sub_1403AFA58.c)
 *     sub_1403B7244 @ 0x1403B7244 (sub_1403B7244.c)
 *     sub_1403DDD24 @ 0x1403DDD24 (sub_1403DDD24.c)
 *     sub_1403DED54 @ 0x1403DED54 (sub_1403DED54.c)
 *     sub_14054B7B4 @ 0x14054B7B4 (sub_14054B7B4.c)
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_140606620 @ 0x140606620 (sub_140606620.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     sub_14083F84C @ 0x14083F84C (sub_14083F84C.c)
 *     sub_140845558 @ 0x140845558 (sub_140845558.c)
 *     sub_1408455A0 @ 0x1408455A0 (sub_1408455A0.c)
 *     sub_140858BF8 @ 0x140858BF8 (sub_140858BF8.c)
 *     sub_140860A10 @ 0x140860A10 (sub_140860A10.c)
 *     sub_14092A77C @ 0x14092A77C (sub_14092A77C.c)
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 *     sub_14092FB38 @ 0x14092FB38 (sub_14092FB38.c)
 *     sub_140A544B0 @ 0x140A544B0 (sub_140A544B0.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 *     sub_140AFFF64 @ 0x140AFFF64 (sub_140AFFF64.c)
 *     sub_140B01A8C @ 0x140B01A8C (sub_140B01A8C.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 *     sub_140B1A3F4 @ 0x140B1A3F4 (sub_140B1A3F4.c)
 *     sub_140B1BC34 @ 0x140B1BC34 (sub_140B1BC34.c)
 *     sub_140B24410 @ 0x140B24410 (sub_140B24410.c)
 *     sub_140B255E4 @ 0x140B255E4 (sub_140B255E4.c)
 *     sub_140B2DD5C @ 0x140B2DD5C (sub_140B2DD5C.c)
 *     sub_140B2F500 @ 0x140B2F500 (sub_140B2F500.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_QWORD *)sub_140347DB0() + 108);
  return sub_1406D2394(v4, v8, 3, v5, v6, retaddr, v7);
}

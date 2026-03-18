/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x1C01E9950
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C00FDEB0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x1C01F58D0 (NtUserGetPointerDevice.c)
 * Callees:
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C016C26C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     PHIDTtoPT @ 0x1C01E8F0C (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int16 v5; // cx
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 376) )
    RtlStringCbCopyUnicodeString((char *)(a1 + 38), 0x410uLL, (const struct _UNICODE_STRING *)(a2 + 368));
  else
    *(_WORD *)(a1 + 38) = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 784);
  *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v4 + 1344);
  v5 = *(_WORD *)(a2 + 768) - 1;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    v5 = *(_WORD *)(a2 + 768);
  *(_WORD *)(a1 + 36) = v5;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 4LL);
  result = *(unsigned int *)(a2 + 224);
  *(_DWORD *)a1 = result;
  return result;
}

/*
 * XREFs of DbgLoadImageSymbols @ 0x1402D9D60
 * Callers:
 *     sub_1402D9D04 @ 0x1402D9D04 (sub_1402D9D04.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     sub_140429850 @ 0x140429850 (sub_140429850.c)
 */

__int64 __fastcall DbgLoadImageSymbols(__int64 a1, void *a2, __int64 a3)
{
  PIMAGE_NT_HEADERS v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  DWORD CheckSum; // [rsp+30h] [rbp-18h]
  DWORD SizeOfImage; // [rsp+34h] [rbp-14h]

  v6[0] = a2;
  v6[1] = a3;
  v4 = RtlImageNtHeader(a2);
  if ( v4 )
  {
    CheckSum = v4->OptionalHeader.CheckSum;
    SizeOfImage = v4->OptionalHeader.SizeOfImage;
  }
  else
  {
    SizeOfImage = 0;
    CheckSum = 0;
  }
  return sub_140429850(a1, v6, 3LL);
}

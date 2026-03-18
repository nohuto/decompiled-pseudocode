/*
 * XREFs of UmfdGetTrueTypeFile @ 0x1C0306230
 * Callers:
 *     <none>
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C007EF30 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C007FC30 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdGetTrueTypeFile(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  struct _SLIST_ENTRY v7[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  _DWORD *v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  *a2 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v7, 12);
  v11 = 0LL;
  v7[0].Next = (struct _SLIST_ENTRY *)&GetTrueTypeFileRequest::`vftable';
  v8 = a1;
  v9 = a2;
  v10 = 0LL;
  v4 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 8), v7);
  v5 = v10;
  if ( v4 < 0 )
    return 0LL;
  return v5;
}

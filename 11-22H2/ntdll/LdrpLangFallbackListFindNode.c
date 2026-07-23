/*
 * XREFs of LdrpLangFallbackListFindNode @ 0x180016558
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x180016458 (LdrpLangFallbackListAppendNode.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x1800166A8 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall LdrpLangFallbackListFindNode(__int64 a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  DWORD v8; // esi
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rax
  bool v15; // zf
  DWORD Lcid; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-40h] BYREF
  __int16 v19; // [rsp+70h] [rbp+8h] BYREF

  v19 = -1;
  if ( a1 && a2 && a3 && a4 )
  {
    *a4 = -1;
    RtlInitUnicodeString(&String, a3);
    if ( !RtlCultureNameToLCID(&String, &Lcid) )
      return 3221225524LL;
    v8 = ((Lcid - 4096) & 0xFFFFFBFF) != 0 ? Lcid : 0;
    v9 = RtlpMuiRegGetOrAddString(a1, a3, 0LL, &v19);
    v10 = -1;
    if ( v9 >= 0 )
      v10 = v19;
    v11 = 0;
    if ( !*(_WORD *)(a2 + 4) )
      return 3221225524LL;
    v12 = *(_QWORD *)(a2 + 24);
    while ( 1 )
    {
      if ( *(_WORD *)(v12 + 6LL * v11) == 1 )
      {
        if ( !v8 )
          goto LABEL_16;
        v15 = *(__int16 *)(v12 + 6LL * v11 + 4) == v8;
        goto LABEL_15;
      }
      if ( *(_WORD *)(v12 + 6LL * v11) != 2 )
        break;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      v14 = 28LL * *(__int16 *)(v12 + 6LL * v11 + 4);
      if ( v10 > 0 && v10 == *(_WORD *)(v14 + v13 + 6) )
      {
LABEL_19:
        *a4 = v11;
        return 0LL;
      }
      if ( v8 )
      {
        v15 = v8 == *(unsigned __int16 *)(v13 + v14 + 4);
LABEL_15:
        if ( v15 )
          goto LABEL_19;
      }
LABEL_16:
      if ( ++v11 >= (int)*(unsigned __int16 *)(a2 + 4) )
        return 3221225524LL;
    }
    if ( *(_WORD *)(v12 + 6LL * v11) != 3 || v10 == -1 )
      goto LABEL_16;
    v15 = *(_WORD *)(v12 + 6LL * v11 + 4) == (unsigned __int16)v10;
    goto LABEL_15;
  }
  return 3221225485LL;
}

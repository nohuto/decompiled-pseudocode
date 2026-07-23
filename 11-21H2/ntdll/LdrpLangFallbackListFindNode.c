/*
 * XREFs of LdrpLangFallbackListFindNode @ 0x18004BC28
 * Callers:
 *     LdrpLangFallbackListAppendNode @ 0x18004BB28 (LdrpLangFallbackListAppendNode.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18004BD84 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 */

__int64 __fastcall LdrpLangFallbackListFindNode(__int64 a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  DWORD v8; // edi
  __int16 v9; // dx
  __int16 v10; // cx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r10
  bool v15; // zf
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  *a4 = -1;
  RtlInitUnicodeString(&DestinationString, a3);
  if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
  {
    v8 = ((Lcid - 4096) & 0xFFFFFBFF) != 0 ? Lcid : 0;
    if ( !*a3 || (v9 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a3, 0LL, &Lcid), v9 < 0) )
      v9 = -1;
    v10 = 0;
    if ( *(_WORD *)(a2 + 4) )
    {
      v11 = *(_QWORD *)(a2 + 24);
      while ( 1 )
      {
        if ( *(_WORD *)(v11 + 6LL * v10) == 1 )
        {
          if ( !v8 )
            goto LABEL_18;
          v15 = *(__int16 *)(v11 + 6LL * v10 + 4) == v8;
          goto LABEL_17;
        }
        if ( *(_WORD *)(v11 + 6LL * v10) != 2 )
          break;
        v12 = 28LL * *(__int16 *)(v11 + 6LL * v10 + 4);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( v9 > 0 && v9 == *(_WORD *)(v12 + v13 + 6) )
        {
LABEL_14:
          *a4 = v10;
          return 0LL;
        }
        if ( v8 )
        {
          v15 = v8 == *(unsigned __int16 *)(v12 + v13 + 4);
LABEL_17:
          if ( v15 )
            goto LABEL_14;
        }
LABEL_18:
        if ( ++v10 >= (int)*(unsigned __int16 *)(a2 + 4) )
          return 3221225524LL;
      }
      if ( *(_WORD *)(v11 + 6LL * v10) != 3 || v9 == -1 )
        goto LABEL_18;
      v15 = *(_WORD *)(v11 + 6LL * v10 + 4) == (unsigned __int16)v9;
      goto LABEL_17;
    }
  }
  return 3221225524LL;
}

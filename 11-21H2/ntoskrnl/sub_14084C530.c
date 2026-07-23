/*
 * XREFs of sub_14084C530 @ 0x14084C530
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     sub_1407871A0 @ 0x1407871A0 (sub_1407871A0.c)
 */

__int64 __fastcall sub_14084C530(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4)
{
  __int64 v4; // rdx
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v11; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = *(_QWORD *)(a4 + 8);
  DestinationString = 0LL;
  if ( v4
    && (a1 ? (v11 = *(_QWORD *)(a1 + 224)) : (v11 = 0LL),
        (int)sub_14077FFEC(v11, v4, (__int64)a3, 0, 0x20019u, (__int64)&Handle) >= 0) )
  {
    ZwClose(Handle);
  }
  else if ( ((unsigned __int8)*(_DWORD *)a4 == 2 || *(_DWORD *)a4 == 4)
         && (int)sub_1407871A0(a1, a3) >= 0
         && RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
  {
    v8 = DestinationString.MaximumLength >> 1;
    if ( !*(_QWORD *)(a4 + 16) || (unsigned __int8)sub_14042A5E0(a1, a3) )
    {
      *(_DWORD *)(a4 + 44) += v8;
      v9 = *(_DWORD *)(a4 + 40);
      if ( v9 > v8 )
      {
        sub_1402E0340(*(_WORD **)(a4 + 32), v9, a3, 0LL, 0LL, 2304);
        *(_QWORD *)(a4 + 32) += 2LL * v8;
        *(_DWORD *)(a4 + 40) -= v8;
      }
    }
  }
  return 0LL;
}

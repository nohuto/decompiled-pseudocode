/*
 * XREFs of sub_14077B12C @ 0x14077B12C
 * Callers:
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14077B0A4 @ 0x14077B0A4 (sub_14077B0A4.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402DF3F0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14077B1E0 @ 0x14077B1E0 (sub_14077B1E0.c)
 */

__int64 __fastcall sub_14077B12C(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  PVOID v5; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[112]; // [rsp+30h] [rbp-88h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0LL;
  Buffer = v8;
  if ( a2 )
  {
    if ( (int)sub_14077B1E0(a2, *(unsigned int *)(a1 + 208), v8) >= 0 )
    {
      v5 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer);
      if ( v5 )
        return *(_QWORD *)v5;
    }
  }
  return v4;
}

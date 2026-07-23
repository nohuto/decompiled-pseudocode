/*
 * XREFs of sub_1407772C8 @ 0x1407772C8
 * Callers:
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406DCFC0 @ 0x1406DCFC0 (sub_1406DCFC0.c)
 *     sub_1407773E8 @ 0x1407773E8 (sub_1407773E8.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall sub_1407772C8(__int64 a1)
{
  bool v2; // zf
  const WCHAR *v3; // rdx
  char v4; // cl
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // r9
  NTSTATUS result; // eax
  __int128 v10; // [rsp+48h] [rbp+7h] BYREF
  __int128 v11; // [rsp+58h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+3Fh] BYREF

  v2 = (*(_BYTE *)(a1 + 32) & 1) == 0;
  v11 = 0LL;
  v3 = *(const WCHAR **)(a1 + 16);
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  v5 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    v4 = 1;
  LOBYTE(v11) = v4;
  v6 = *(_QWORD *)(a1 + 24);
  *((_QWORD *)&v11 + 1) = v5;
  v12 = *(_QWORD *)(a1 + 48);
  Guid = 0LL;
  v10 = 0LL;
  DestinationString = 0LL;
  if ( !v6 )
  {
    v7 = *(_DWORD *)(a1 + 64);
    v8 = *(_QWORD *)(a1 + 56);
    if ( v3 )
      return sub_1407773E8(0, (_DWORD)v3, (unsigned int)sub_140781DE0, (unsigned int)&v10, v8, v7, *(_QWORD *)(a1 + 72));
    else
      return sub_1406DCFC0(3, (__int64)sub_140781DE0, (__int64)&v10, v8, v7, *(_QWORD *)(a1 + 72));
  }
  if ( !v3 )
    return sub_1407773E8(
             1,
             v6,
             (unsigned int)sub_140781DE0,
             (unsigned int)&v10,
             *(_QWORD *)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             *(_QWORD *)(a1 + 72));
  result = RtlInitUnicodeStringEx(&DestinationString, v3);
  if ( result >= 0 )
  {
    result = RtlGUIDFromString(&DestinationString, &Guid);
    if ( result >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&v10 = &Guid;
      return sub_1407773E8(
               1,
               v6,
               (unsigned int)sub_140781DE0,
               (unsigned int)&v10,
               *(_QWORD *)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72));
    }
  }
  return result;
}

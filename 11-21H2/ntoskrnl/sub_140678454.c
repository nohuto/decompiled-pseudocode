/*
 * XREFs of sub_140678454 @ 0x140678454
 * Callers:
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140419F54 @ 0x140419F54 (sub_140419F54.c)
 *     RtlFindUnicodeSubstring @ 0x140678510 (RtlFindUnicodeSubstring.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 */

__int64 __fastcall sub_140678454(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  PUNICODE_STRING v9; // rdi
  unsigned int v10; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned __int16 v14; // r9
  __int64 v15; // r10
  int Length; // ecx
  PUNICODE_STRING FullString[2]; // [rsp+30h] [rbp-B1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-A1h] BYREF
  _DWORD *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  wchar_t *Buffer; // [rsp+70h] [rbp-71h]
  _DWORD v22[2]; // [rsp+78h] [rbp-69h] BYREF
  _DWORD *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  __int64 v25; // [rsp+90h] [rbp-51h]
  _DWORD v26[2]; // [rsp+98h] [rbp-49h] BYREF
  PUNICODE_STRING *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  _DWORD *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  __int64 v31; // [rsp+C0h] [rbp-21h]
  _DWORD v32[2]; // [rsp+C8h] [rbp-19h] BYREF
  _DWORD *v33; // [rsp+D0h] [rbp-11h]
  __int64 v34; // [rsp+D8h] [rbp-9h]
  __int64 v35; // [rsp+E0h] [rbp-1h]
  _DWORD v36[2]; // [rsp+E8h] [rbp+7h] BYREF

  FullString[0] = 0LL;
  v8 = sub_1407C0690(a1, FullString);
  v9 = FullString[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( RtlFindUnicodeSubstring(FullString[0], &SearchString, 1u) )
    {
      v12 = sub_140419F54();
      if ( v12 > 0xFFFF )
        LOWORD(v12) = -1;
      v13 = sub_140419F54();
      if ( v13 > 0xFFFF )
        LOWORD(v13) = -1;
      sub_140419F54();
      if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 2LL) )
      {
        Length = v9->Length;
        Buffer = v9->Buffer;
        v23 = v26;
        v19 = v22;
        v26[0] = (unsigned __int16)v12;
        v27 = FullString;
        v29 = v32;
        v32[0] = (unsigned __int16)v13;
        v33 = v36;
        v36[0] = v14;
        v22[0] = Length;
        v22[1] = 0;
        v26[1] = 0;
        v32[1] = 0;
        v36[1] = 0;
        v20 = v15;
        v24 = v15;
        v25 = a2;
        LODWORD(FullString[0]) = a3;
        v28 = 4LL;
        v30 = v15;
        v31 = a4;
        v34 = v15;
        v35 = a5;
        sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)byte_1400295E7, 0LL, 0LL, 0xBu, &v18);
      }
    }
    v10 = 0;
  }
  if ( v9 )
    sub_140346D64(v9, 0x624E4D43u);
  return v10;
}

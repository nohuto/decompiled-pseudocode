/*
 * XREFs of sub_14022B210 @ 0x14022B210
 * Callers:
 *     sub_1406A2F6C @ 0x1406A2F6C (sub_1406A2F6C.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140659E0C @ 0x140659E0C (sub_140659E0C.c)
 */

__int64 __fastcall sub_14022B210(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int64 v5; // rbp
  int v6; // r15d
  int v8; // r10d
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rdi
  wchar_t *v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int16 v14; // ax
  size_t v15; // rax
  wchar_t *v16; // r14
  __int64 v17; // r14
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3 + a4;
  v6 = a3;
  v8 = 0;
  DestinationString = 0LL;
  if ( v5 >= a3 )
  {
    v9 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    *a5 = 0;
    v10 = (unsigned int)(*(_DWORD *)(a1 + 60) << 6);
    if ( v9 + v10 <= v5 )
    {
      v11 = *(__int64 **)(a1 + 72);
      v12 = (wchar_t *)(v10 + v9);
      if ( v11 == (__int64 *)(a1 + 72) )
      {
LABEL_25:
        *a5 = (_DWORD)v12 - v6;
        return (unsigned int)v8;
      }
      v13 = ((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 40;
      while ( 1 )
      {
        *(_DWORD *)(v13 - 8) = 0;
        v14 = *(_WORD *)(a1 + 48);
        if ( !v14 )
          return (unsigned int)-1073741811;
        if ( v14 <= 2u )
          goto LABEL_20;
        switch ( v14 )
        {
          case 3u:
            v17 = *((unsigned __int16 *)v11 + 20);
            if ( (unsigned __int64)v12 + v17 > v5 )
              return (unsigned int)-2147483643;
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.MaximumLength = v17;
            DestinationString.Buffer = v12;
            RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 5));
            *(UNICODE_STRING *)v13 = DestinationString;
            break;
          case 4u:
            v17 = *((unsigned __int16 *)v11 + 24);
            if ( (unsigned __int64)v12 + v17 > v5 )
              return (unsigned int)-2147483643;
            *(_QWORD *)v13 = v11[5];
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.MaximumLength = v17;
            DestinationString.Buffer = v12;
            RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)v11 + 3);
            *(UNICODE_STRING *)(v13 + 8) = DestinationString;
            break;
          case 5u:
            goto LABEL_13;
          case 6u:
LABEL_20:
            *(_QWORD *)v13 = v11[5];
            goto LABEL_21;
          case 0x10u:
LABEL_13:
            v15 = *((unsigned int *)v11 + 12);
            v16 = (wchar_t *)((char *)v12 + v15);
            if ( (unsigned __int64)v12 + v15 > v5 )
              return (unsigned int)-2147483643;
            *(_DWORD *)(v13 + 8) = v15;
            *(_QWORD *)v13 = v12;
            memmove(v12, (const void *)v11[5], v15);
            v12 = v16;
            goto LABEL_21;
          default:
            return (unsigned int)-1073741811;
        }
        v12 = (wchar_t *)((char *)v12 + v17);
LABEL_21:
        v8 = sub_140659E0C(a2 + 72, v13 - 40);
        if ( v8 < 0 )
          return (unsigned int)v8;
        v13 += 64LL;
        ++*(_DWORD *)(a2 + 60);
        v11 = (__int64 *)*v11;
        if ( v11 == (__int64 *)(a1 + 72) )
          goto LABEL_25;
      }
    }
  }
  return (unsigned int)-2147483643;
}

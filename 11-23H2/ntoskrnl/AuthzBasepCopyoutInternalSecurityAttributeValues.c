/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140370FA8
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1407F4498 (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x140680E5C (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int inserted; // r10d
  unsigned __int64 v6; // rbp
  int v7; // r15d
  unsigned __int64 v8; // rsi
  wchar_t *v9; // rbx
  __int64 *v10; // r13
  __int64 *v11; // rdi
  unsigned __int64 v12; // r14
  size_t v13; // rax
  wchar_t *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+70h] [rbp+8h]

  v20 = a1;
  inserted = 0;
  v6 = a3 + a4;
  v7 = a3;
  DestinationString = 0LL;
  if ( v6 >= a3 )
  {
    v8 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v9 = (wchar_t *)(v8 + (unsigned int)(*(_DWORD *)(a1 + 60) << 6));
    *a5 = 0;
    if ( (unsigned __int64)v9 <= v6 )
    {
      v10 = (__int64 *)(a1 + 72);
      v11 = *(__int64 **)(a1 + 72);
      if ( v11 == (__int64 *)(a1 + 72) )
      {
LABEL_25:
        *a5 = (_DWORD)v9 - v7;
        return (unsigned int)inserted;
      }
      v12 = v8 + 40;
      while ( 1 )
      {
        *(_DWORD *)(v12 - 8) = 0;
        if ( *(_WORD *)(a1 + 48) != 1 && *(_WORD *)(a1 + 48) != 2 )
        {
          switch ( *(_WORD *)(a1 + 48) )
          {
            case 3:
              v17 = *((unsigned __int16 *)v11 + 20);
              v14 = (wchar_t *)((char *)v9 + v17);
              if ( (unsigned __int64)v9 + v17 > v6 )
                return (unsigned int)-2147483643;
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.MaximumLength = v17;
              DestinationString.Buffer = v9;
              RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 5));
              *(UNICODE_STRING *)v12 = DestinationString;
              goto LABEL_19;
            case 4:
              v15 = *((unsigned __int16 *)v11 + 24);
              v14 = (wchar_t *)((char *)v9 + v15);
              if ( (unsigned __int64)v9 + v15 > v6 )
                return (unsigned int)-2147483643;
              v16 = v11[5];
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.MaximumLength = v15;
              *(_QWORD *)v12 = v16;
              DestinationString.Buffer = v9;
              RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)v11 + 3);
              *(UNICODE_STRING *)(v12 + 8) = DestinationString;
              goto LABEL_19;
            case 5:
              goto LABEL_13;
          }
          if ( *(_WORD *)(a1 + 48) != 6 )
          {
            if ( *(_WORD *)(a1 + 48) != 16 )
              return (unsigned int)-1073741811;
LABEL_13:
            v13 = *((unsigned int *)v11 + 12);
            v14 = (wchar_t *)((char *)v9 + v13);
            if ( (unsigned __int64)v9 + v13 > v6 )
              break;
            *(_DWORD *)(v12 + 8) = v13;
            *(_QWORD *)v12 = v9;
            memmove(v9, (const void *)v11[5], v13);
LABEL_19:
            v9 = v14;
            goto LABEL_21;
          }
        }
        *(_QWORD *)v12 = v11[5];
LABEL_21:
        inserted = AuthzBasepProbeAndInsertTailList(a2 + 72, v8);
        if ( inserted < 0 )
          return (unsigned int)inserted;
        v8 += 64LL;
        v12 += 64LL;
        ++*(_DWORD *)(a2 + 60);
        v11 = (__int64 *)*v11;
        if ( v11 == v10 )
          goto LABEL_25;
        a1 = v20;
      }
    }
  }
  return (unsigned int)-2147483643;
}

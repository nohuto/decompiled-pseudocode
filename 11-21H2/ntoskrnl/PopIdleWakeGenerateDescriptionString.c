/*
 * XREFs of PopIdleWakeGenerateDescriptionString @ 0x14099B8FC
 * Callers:
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x14099BD28 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x140208BA0 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringCat @ 0x140208C24 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringPrintf @ 0x1402D17BC (RtlUnicodeStringPrintf.c)
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

signed int __fastcall PopIdleWakeGenerateDescriptionString(int *a1, __int64 a2)
{
  __int64 v2; // rax
  UNICODE_STRING *v3; // rdi
  int v4; // ebx
  wchar_t *v7; // r8
  __int64 v8; // rdx
  wchar_t *v9; // rax
  unsigned __int16 v10; // si
  signed int result; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // r12
  size_t v15; // r11
  size_t v16; // r14
  __int64 v17; // rax
  __int128 v18; // xmm0
  unsigned int *v19; // r12
  __int64 v20; // xmm1_8
  __int64 v21; // rsi
  unsigned int v22; // ecx
  unsigned __int16 *v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 Pool2; // rax
  size_t *v26; // r9
  size_t v27; // r8
  const wchar_t *v28; // rcx
  __int64 v29; // r9
  __int16 v30; // dx
  signed __int64 v31; // r10
  unsigned int i; // r14d
  unsigned __int64 MaximumLength; // rcx
  unsigned __int64 Length; // rdx
  wchar_t *Buffer; // r9
  const wchar_t *v36; // r8
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int16 v40; // r10
  unsigned __int64 v41; // r11
  char *v42; // r9
  size_t v43; // [rsp+20h] [rbp-60h]
  ULONG v44; // [rsp+28h] [rbp-58h]
  size_t pcbLength; // [rsp+30h] [rbp-50h] BYREF
  size_t v46; // [rsp+38h] [rbp-48h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-40h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-38h] BYREF
  __int128 v49; // [rsp+50h] [rbp-30h] BYREF
  __int64 v50; // [rsp+60h] [rbp-20h]
  __int64 v51; // [rsp+68h] [rbp-18h]

  v2 = *a1;
  v3 = (UNICODE_STRING *)(a2 + 392);
  v4 = 0;
  pcbLength = 0LL;
  v46 = 0LL;
  if ( (unsigned int)v2 <= 4 )
  {
    _mm_lfence();
    v7 = PopDiagStaticWakeSourceDescriptions[v2];
    *v3 = 0LL;
    if ( v7 )
    {
      v8 = 0x7FFFLL;
      v9 = v7;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      if ( v8 )
      {
        if ( !v3 )
          return -1073741811;
        v10 = 2 * (0x7FFF - v8);
        v3->Buffer = v7;
        v3->Length = v10;
        v3->MaximumLength = v10 + 2;
      }
      return v8 == 0 ? 0xC000000D : 0;
    }
    return v4;
  }
  if ( (_DWORD)v2 != 6 )
  {
    if ( (_DWORD)v2 != 5 )
      return -1073741811;
    v18 = *(_OWORD *)(a1 + 2);
    v19 = (unsigned int *)(a2 + 408);
    v20 = *((_QWORD *)a1 + 3);
    v51 = a2 + 408;
    v49 = v18;
    v50 = v20;
    result = MmEnumerateSystemImages(
               (__int64 (__fastcall *)(PVOID *, __int64))PopIdleWakeSystemImageCallback,
               (__int64)&v49);
    if ( result < 0 )
      return result;
    v21 = 0LL;
    v22 = 0;
    if ( *v19 )
    {
      v23 = (unsigned __int16 *)(v19 + 2);
      do
      {
        if ( v22 )
          v21 += 4LL;
        ++v22;
        v21 += *v23;
        v23 += 8;
      }
      while ( v22 < *v19 );
    }
    v24 = v21 + 24;
    if ( v24 <= 0xFFFF )
    {
      Pool2 = ExAllocatePool2(256LL, v24, 1734960208LL);
      v3->Buffer = (wchar_t *)Pool2;
      if ( !Pool2 )
        return -1073741670;
      *(_BYTE *)(a2 + 384) = 1;
      v3->Length = 0;
      v3->MaximumLength = v24;
      ppszDest = 0LL;
      pcchDest = 0LL;
      result = RtlUnicodeStringValidateDestWorker(v3, &ppszDest, &pcchDest, v26, v43, v44);
      if ( result >= 0 )
      {
        v27 = pcchDest;
        v28 = L"Interrupt: ";
        v29 = 0x7FFFLL;
        result = 0;
        v30 = 0;
        if ( pcchDest )
        {
          v31 = (char *)ppszDest - (char *)L"Interrupt: ";
          while ( v29 )
          {
            if ( *v28 )
            {
              *(const wchar_t *)((char *)v28 + v31) = *v28;
              --v29;
              ++v28;
              ++v30;
              if ( --v27 )
                continue;
            }
            if ( v27 || !v29 || !*v28 )
              break;
            goto LABEL_46;
          }
        }
        else
        {
LABEL_46:
          result = -2147483643;
        }
        v3->Length = 2 * v30;
      }
      for ( i = 0; i < *v19; ++i )
      {
        if ( i )
        {
          MaximumLength = v3->MaximumLength;
          Length = v3->Length;
          if ( (((unsigned __int16)Length | (unsigned __int16)MaximumLength) & 1) == 0
            && (unsigned __int16)Length <= (unsigned __int16)MaximumLength
            && (_WORD)MaximumLength != 0xFFFF )
          {
            Buffer = v3->Buffer;
            if ( Buffer || !__PAIR32__(MaximumLength, Length) )
            {
              v36 = L", ";
              v37 = MaximumLength >> 1;
              v38 = Length >> 1;
              v39 = 0x7FFFLL;
              v40 = 0;
              v41 = v37 - v38;
              if ( v41 )
              {
                v42 = (char *)Buffer + 2 * v38 - (_QWORD)L", ";
                do
                {
                  if ( !v39 )
                    break;
                  if ( !*v36 )
                    break;
                  *(const wchar_t *)((char *)v36 + (_QWORD)v42) = *v36;
                  --v39;
                  ++v36;
                  ++v40;
                }
                while ( v39 + v41 - 0x7FFF );
              }
              v3->Length = 2 * (v40 + v38);
            }
          }
        }
        result = RtlUnicodeStringCat(v3, (PCUNICODE_STRING)&v19[4 * i + 2]);
      }
      return result;
    }
    return -2147483643;
  }
  v12 = *((unsigned __int8 *)a1 + 8);
  if ( (unsigned __int8)v12 < 0x10u )
  {
    v14 = PopIrTimerDescriptions[v12];
    result = RtlStringCbLengthW(v14, 0xFFFFuLL, &pcbLength);
    if ( result < 0 )
      return result;
    if ( *((_BYTE *)a1 + 8) == 3 )
    {
      result = RtlStringCbLengthW((STRSAFE_PCNZWCH)a1 + 5, 0x80uLL, &v46);
      if ( result < 0 )
        return result;
      v16 = pcbLength + v46 + 42;
    }
    else
    {
      v16 = pcbLength + 48;
    }
    if ( v16 <= v15 )
    {
      v17 = ExAllocatePool2(256LL, v16, 1734960208LL);
      v3->Buffer = (wchar_t *)v17;
      if ( !v17 )
        return -1073741670;
      *(_BYTE *)(a2 + 384) = 1;
      v3->Length = 0;
      v3->MaximumLength = v16;
      if ( *((_BYTE *)a1 + 8) == 3 )
        return RtlUnicodeStringPrintf(v3, L"Timer(Name:Index): %s:%s", v14, (char *)a1 + 10);
      else
        return RtlUnicodeStringPrintf(v3, L"Timer(Name:Index): %s:%d", v14, *((unsigned __int8 *)a1 + 10));
    }
    return -2147483643;
  }
  v13 = ExAllocatePool2(256LL, 64LL, 1734960208LL);
  v3->Buffer = (wchar_t *)v13;
  if ( !v13 )
    return -1073741670;
  *(_BYTE *)(a2 + 384) = 1;
  *(_DWORD *)&v3->Length = 0x400000;
  return RtlUnicodeStringPrintf(
           v3,
           L"Timer(Component:Index): %d:%d",
           *((unsigned __int8 *)a1 + 8),
           *((unsigned __int8 *)a1 + 10));
}

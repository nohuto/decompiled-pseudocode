/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x1800770D0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1800148B0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180014A70 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x1800A14F0 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  _BYTE *v3; // r14
  unsigned int v5; // ebx
  int v6; // edi
  __int64 v7; // rsi
  __int64 result; // rax
  _BYTE *v10; // rax
  unsigned int v11; // r13d
  int inited; // edi
  int v13; // ecx
  int v14; // eax
  __int64 Heap; // rax
  void *ProcessHeap; // rcx
  int v17; // eax
  HANDLE *v18; // rsi
  int v19; // [rsp+30h] [rbp-D0h]
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE *v21; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v23[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v24; // [rsp+50h] [rbp-B0h]
  __int128 v25; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v26; // [rsp+68h] [rbp-98h]
  HANDLE *v27; // [rsp+70h] [rbp-90h]
  unsigned __int16 v28[4]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v31; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+A8h] [rbp-58h]
  _BYTE v35[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v36; // [rsp+C4h] [rbp-3Ch]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]

  v26 = a2;
  v3 = v35;
  v27 = a1;
  v5 = 0;
  v6 = 544;
  Handle = 0LL;
  v19 = 544;
  v7 = 0LL;
  result = RtlInitUnicodeStringEx((__int64)v23, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = NtQueryValueKey(*a1, v23, 2LL, v35, 544, &v20);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v5;
    return result;
  }
  if ( v36 != 4 || v37 != 4 || !v38 )
    return 0LL;
  v25 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v23, (__int64)L"\\??\\");
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v23, (__int64)&v25, 1) )
    {
      LOWORD(v25) = v25 - 8;
      WORD1(v25) -= 8;
      *((_QWORD *)&v25 + 1) += 8LL;
    }
    v10 = v35;
    v11 = 0;
    v21 = v35;
    while ( 1 )
    {
      inited = NtEnumerateKey(*v27, v11, 0LL, v10, v6, &v20);
      if ( inited >= 0 )
      {
        v23[0] = *((_WORD *)v21 + 6);
        v23[1] = *((_WORD *)v21 + 6);
        v24 = v21 + 16;
        v30 = 48;
        v33 = 576;
        v34 = 0LL;
        v31 = *v27;
        v32 = v23;
        inited = NtOpenKey(&Handle, v26, &v30);
        if ( inited >= 0 )
          break;
      }
LABEL_27:
      ++v11;
      if ( inited < 0 )
        goto LABEL_29;
LABEL_28:
      v10 = v21;
      v6 = v19;
    }
    inited = RtlInitUnicodeStringEx((__int64)v23, (__int64)L"FilterFullPath");
    if ( inited < 0 )
    {
      NtClose(Handle);
      goto LABEL_29;
    }
    v13 = v19;
    while ( 1 )
    {
      v14 = NtQueryValueKey(Handle, v23, 2LL, v3, v13, &v20);
      inited = v14;
      if ( v14 == -2147483643 || v14 == -1073741789 )
      {
        if ( v7 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
        {
          v7 = 0LL;
LABEL_45:
          inited = -1073741801;
LABEL_22:
          if ( inited < 0 )
          {
            NtClose(Handle);
            v17 = 0;
            if ( inited != -1073741772 )
              v17 = inited;
            inited = v17;
            goto LABEL_27;
          }
          if ( *((_DWORD *)v3 + 1) != 1
            || *((_DWORD *)v3 + 2) > 0xFFFEu
            || (v28[0] = *((_WORD *)v3 + 4) - 2,
                v28[1] = v28[0],
                v29 = v3 + 12,
                (unsigned int)RtlCompareUnicodeString((unsigned __int16 *)&v25, v28, 1)) )
          {
            NtClose(Handle);
            ++v11;
            goto LABEL_28;
          }
LABEL_29:
          if ( v7 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
          if ( inited >= 0 )
          {
            v18 = v27;
            NtClose(*v27);
            *v18 = Handle;
          }
          if ( inited != -2147483622 )
            return (unsigned int)inited;
          return v5;
        }
        Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v20);
        v7 = Heap;
        if ( !Heap )
          goto LABEL_45;
        v13 = v20;
        v3 = (_BYTE *)Heap;
        v19 = v20;
        v21 = (_BYTE *)Heap;
      }
      else
      {
        Heap = (__int64)v21;
        v13 = v19;
      }
      if ( inited != -2147483643 )
      {
        v19 = v13;
        v21 = (_BYTE *)Heap;
        if ( inited != -1073741789 )
          goto LABEL_22;
      }
    }
  }
  return result;
}

/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x18007C5D8
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlPrefixUnicodeString @ 0x180041530 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x1800415D0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x1800A46B0 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  _BYTE *v3; // r13
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 result; // rax
  _BYTE *v9; // rcx
  unsigned int v10; // eax
  int inited; // edi
  int v12; // eax
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh]
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v20[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-98h]
  _BYTE *v24; // [rsp+70h] [rbp-90h]
  unsigned __int16 v25[4]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v28; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  __int128 v31; // [rsp+A8h] [rbp-58h]
  _BYTE v32[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v33; // [rsp+C4h] [rbp-3Ch]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]

  v23 = a2;
  v3 = v32;
  v5 = 0;
  Handle = 0LL;
  v6 = 0LL;
  v17 = 544;
  result = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = NtQueryValueKey(*a1, v20, 2LL, v32, 544, &v16);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v5;
    return result;
  }
  if ( v33 != 4 || v34 != 4 || !v35 )
    return 0LL;
  v22 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"\\??\\");
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v20, (__int64)&v22, 1) )
    {
      LOWORD(v22) = v22 - 8;
      WORD1(v22) -= 8;
      *((_QWORD *)&v22 + 1) += 8LL;
    }
    v9 = v32;
    v19 = 0;
    v24 = v32;
    v10 = 0;
    while ( 1 )
    {
      inited = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, unsigned int *))NtEnumerateKey)(
                 *a1,
                 v10,
                 0LL,
                 v9,
                 v17,
                 &v16);
      if ( inited >= 0 )
      {
        v20[0] = *((_WORD *)v24 + 6);
        v20[1] = *((_WORD *)v24 + 6);
        v21 = v24 + 16;
        v28 = *a1;
        v29 = v20;
        v27 = 48;
        v30 = 576;
        v31 = 0LL;
        inited = NtOpenKey(&Handle, v23, &v27);
        if ( inited >= 0 )
          break;
      }
LABEL_24:
      v10 = ++v19;
      if ( inited < 0 )
        goto LABEL_26;
      v9 = v24;
    }
    inited = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"FilterFullPath");
    if ( inited < 0 )
    {
      NtClose(Handle);
      goto LABEL_26;
    }
    while ( 1 )
    {
      do
      {
        v12 = NtQueryValueKey(Handle, v20, 2LL, v3, v17, &v16);
        inited = v12;
        if ( v12 != -2147483643 && v12 != -1073741789 )
          break;
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
        {
          v6 = 0LL;
LABEL_44:
          inited = -1073741801;
LABEL_19:
          if ( inited < 0 )
          {
            NtClose(Handle);
            v15 = 0;
            if ( inited != -1073741772 )
              v15 = inited;
            inited = v15;
            goto LABEL_24;
          }
          if ( *((_DWORD *)v3 + 1) != 1
            || *((_DWORD *)v3 + 2) > 0xFFFEu
            || (v25[0] = *((_WORD *)v3 + 4) - 2,
                v25[1] = v25[0],
                v26 = v3 + 12,
                (unsigned int)RtlCompareUnicodeString((unsigned __int16 *)&v22, v25, 1)) )
          {
            NtClose(Handle);
            goto LABEL_24;
          }
LABEL_26:
          if ( v6 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
          if ( inited >= 0 )
          {
            NtClose(*a1);
            *a1 = Handle;
          }
          if ( inited != -2147483622 )
            return (unsigned int)inited;
          return v5;
        }
        Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v16);
        v6 = Heap;
        if ( !Heap )
          goto LABEL_44;
        v24 = (_BYTE *)Heap;
        v3 = (_BYTE *)Heap;
        v17 = v16;
      }
      while ( inited == -2147483643 );
      if ( inited != -1073741789 )
        goto LABEL_19;
    }
  }
  return result;
}

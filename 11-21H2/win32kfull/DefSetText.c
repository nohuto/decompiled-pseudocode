/*
 * XREFs of DefSetText @ 0x1C00689C0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C01496C0 (NtUserDefSetText.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTextChange @ 0x1C008507C (DwmAsyncTextChange.c)
 *     DesktopAlloc @ 0x1C00C2D40 (DesktopAlloc.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00E7390 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00E73F4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C00FE1C0 (--4-$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall DefSetText(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  ULONG v5; // edx
  unsigned int v6; // ecx
  int v7; // edx
  __int64 v8; // rdx
  PVOID *v9; // r15
  __int64 v10; // rax
  unsigned int v11; // esi
  BOOL v12; // r12d
  WCHAR *v13; // rcx
  __int64 v14; // rcx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  void *v17; // rax
  _OWORD v18[3]; // [rsp+40h] [rbp-38h] BYREF
  ULONG BytesInUnicodeString; // [rsp+90h] [rbp+18h] BYREF

  BytesInUnicodeString = 0;
  v4 = a1[3];
  if ( !v4 || !a2 || !*((_QWORD *)a2 + 1) )
  {
    v11 = 1;
LABEL_24:
    *(_DWORD *)(a1[5] + 184LL) = 0;
    goto LABEL_20;
  }
  v5 = *a2;
  if ( v5 >= 0x3FFFFFFE )
  {
    v11 = 0;
    goto LABEL_24;
  }
  v6 = v5 & 0xFFFFFFFE;
  v7 = 2 * v5;
  if ( (a2[1] & 0x80000000) == 0 )
    v7 = v6;
  v8 = (unsigned int)(v7 + 2);
  BytesInUnicodeString = v8;
  v9 = (PVOID *)(a1 + 23);
  if ( a1[23] )
  {
    v18[0] = 0LL;
    StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 23),
                (struct _LARGE_UNICODE_STRING *)v18);
    DesktopVerifyHeapLargeUnicodeString(v4, StrName);
    v8 = BytesInUnicodeString;
  }
  if ( (*(_DWORD *)(a1[5] + 188LL) & 0x7FFFFFFFu) >= (unsigned int)v8 )
    goto LABEL_14;
  if ( *v9 )
  {
    RtlFreeHeap(*(PVOID *)(v4 + 128), 0, *v9);
    v8 = BytesInUnicodeString;
  }
  v10 = DesktopAlloc(v4, v8, 4LL);
  tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(a1 + 23, v10);
  *(_DWORD *)(a1[5] + 184LL) = 0;
  if ( *v9 )
  {
    *(_DWORD *)(a1[5] + 188LL) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1[5] + 188LL)) & 0x7FFFFFFF;
    LODWORD(v8) = BytesInUnicodeString;
LABEL_14:
    v11 = 1;
    v12 = 1;
    if ( *a2 )
    {
      v13 = (WCHAR *)*v9;
      if ( (a2[1] & 0x80000000) != 0 )
      {
        v12 = RtlMultiByteToUnicodeN(v13, v8, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
        LODWORD(v8) = BytesInUnicodeString + 2;
        BytesInUnicodeString += 2;
      }
      else
      {
        memmove(v13, *((const void **)a2 + 1), *a2);
        LODWORD(v8) = BytesInUnicodeString;
      }
    }
    v14 = a1[5];
    if ( v12 )
    {
      *(_DWORD *)(v14 + 184) = v8 - 2;
      *((_WORD *)*v9 + ((unsigned __int64)*(unsigned int *)(a1[5] + 184LL) >> 1)) = 0;
      goto LABEL_20;
    }
    *(_DWORD *)(v14 + 184) = 0;
    goto LABEL_28;
  }
  *(_DWORD *)(a1[5] + 188LL) &= 0x80000000;
LABEL_28:
  v11 = 0;
LABEL_20:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v17 = (void *)ReferenceDwmApiPort();
    DwmAsyncTextChange(v17);
  }
  return v11;
}

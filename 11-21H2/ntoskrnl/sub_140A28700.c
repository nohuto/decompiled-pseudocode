/*
 * XREFs of sub_140A28700 @ 0x140A28700
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcstoul @ 0x1403E3880 (wcstoul.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077FFEC @ 0x14077FFEC (sub_14077FFEC.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A28700(__int64 a1, __int64 a2, const WCHAR *a3, const WCHAR *a4)
{
  int v5; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // cc
  _WORD *Pool2; // rax
  void *v13; // rsi
  __int64 v14; // rdx
  wchar_t *v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  unsigned int v20; // edi
  unsigned int v21; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  v5 = *(_DWORD *)a4;
  EndPtr = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  v9 = v5 - 1;
  if ( !v9 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
      goto LABEL_30;
LABEL_11:
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 114LL, 1380994640LL);
    v13 = Pool2;
    if ( !Pool2 )
      goto LABEL_30;
    v14 = 57LL;
    v15 = Pool2;
    if ( a4[2] )
    {
      if ( (int)sub_1402E0340(Pool2, 0x39uLL, a4 + 2, &EndPtr, &v25, 2304) < 0 || (v16 = v25, v25 < 2) )
      {
LABEL_29:
        ExFreePoolWithTag(v13, 0);
        goto LABEL_30;
      }
      *EndPtr = 92;
      v14 = v16 - 2;
      *++EndPtr = 0;
      v15 = EndPtr;
    }
    else
    {
      EndPtr = Pool2;
    }
    if ( (int)sub_1402E0200(v15, v14, (__int64)a3) >= 0 )
    {
      if ( *(_DWORD *)a4 >= 3u )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v13) >= 0 )
        {
          v20 = DestinationString.MaximumLength >> 1;
          if ( !*((_QWORD *)a4 + 15) || (unsigned __int8)sub_14042A5E0(a1, v13) )
          {
            *((_DWORD *)a4 + 37) += v20;
            v21 = *((_DWORD *)a4 + 36);
            if ( v21 > v20 )
            {
              sub_1402E0340(*((_WORD **)a4 + 17), v21, (const WCHAR *)v13, 0LL, 0LL, 2304);
              *((_QWORD *)a4 + 17) += 2LL * v20;
              *((_DWORD *)a4 + 36) -= v20;
            }
          }
        }
      }
      else
      {
        v17 = 0LL;
        if ( a1 )
          v17 = *(_QWORD *)(a1 + 224);
        if ( (int)sub_14077FFEC(v17, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0 )
        {
          v18 = ExAllocatePool2(256LL, 160LL, 1380994640LL);
          v19 = v18;
          if ( v18 )
          {
            *(_DWORD *)v18 = *(_DWORD *)a4 + 1;
            sub_1402E0340((_WORD *)(v18 + 4), 0x39uLL, (const WCHAR *)v13, 0LL, 0LL, 2304);
            *(_QWORD *)(v19 + 120) = *((_QWORD *)a4 + 15);
            *(_QWORD *)(v19 + 128) = *((_QWORD *)a4 + 16);
            *(_QWORD *)(v19 + 136) = *((_QWORD *)a4 + 17);
            *(_DWORD *)(v19 + 144) = *((_DWORD *)a4 + 36);
            *(_DWORD *)(v19 + 148) = *((_DWORD *)a4 + 37);
            sub_14083EAEC(a1, Handle, (__int64)&sub_140A28700, v19);
            *((_DWORD *)a4 + 37) = *(_DWORD *)(v19 + 148);
            *((_QWORD *)a4 + 17) = *(_QWORD *)(v19 + 136);
            *((_DWORD *)a4 + 36) = *(_DWORD *)(v19 + 144);
            ExFreePoolWithTag((PVOID)v19, 0);
          }
        }
      }
    }
    goto LABEL_29;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 0LL;
    v11 = wcstoul(a3, &EndPtr, 16) <= 7;
  }
  else
  {
    v11 = wcstoul(a3, &EndPtr, 16) <= 0xFFFF;
  }
  if ( v11 && EndPtr && !*EndPtr )
    goto LABEL_11;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}

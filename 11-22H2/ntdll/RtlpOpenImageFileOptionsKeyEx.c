/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x18007689C
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x18007D860 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800DF020 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlOpenImageFileOptionsKey @ 0x1800EC3C0 (RtlOpenImageFileOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800EC470 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ECF20 (RtlSetImageMitigationPolicy.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EE16C (RtlpDeleteEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180076A00 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180076A60 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x180076D50 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009F190 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009F9E0 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x1800A0920 (NtDeleteKey.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800EE050 (RtlpCreateIFEOKeyFilterKey.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 v6; // r11
  char v8; // r12
  _WORD *v9; // rdx
  int v10; // r10d
  int v11; // r11d
  char v12; // r14
  __int64 result; // rax
  HANDLE v14; // rdi
  int v15; // eax
  int inited; // ebx
  int v17; // eax
  HANDLE v18; // rdi
  int IFEOKeyFilterKey; // eax
  HANDLE v20[2]; // [rsp+40h] [rbp-29h] BYREF
  __int16 v21; // [rsp+50h] [rbp-19h] BYREF
  _WORD *v22; // [rsp+58h] [rbp-11h]
  int v23; // [rsp+60h] [rbp-9h] BYREF
  HANDLE v24; // [rsp+68h] [rbp-1h]
  __int16 *v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  __int128 v27; // [rsp+80h] [rbp+17h]
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  int v29; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v30; // [rsp+E8h] [rbp+7Fh]

  v30 = a4;
  *a4 = 0LL;
  v6 = *a1;
  v8 = 0;
  v9 = (_WORD *)(v6 + *((_QWORD *)a1 + 1));
  v20[0] = 0LL;
  Handle = 0LL;
  v10 = v6;
  if ( a3 && (v6 + 2 > (unsigned __int64)a1[1] || *v9) )
    return 3221225485LL;
  if ( (_DWORD)v6 )
  {
    while ( *(v9 - 1) != 92 )
    {
      --v9;
      v10 -= 2;
      if ( !v10 )
        goto LABEL_7;
    }
    v8 = 1;
  }
LABEL_7:
  v11 = v6 - v10;
  v22 = v9;
  v21 = v11;
  if ( (unsigned __int16)v11 != v11 )
    return 3221225507LL;
  if ( a3 )
  {
    v12 = 1;
    result = RtlpOpenBaseImageFileOptionsKeyEx(v20, a2);
  }
  else
  {
    v12 = 0;
    result = RtlpOpenBaseImageFileOptionsKey(v20);
  }
  if ( (int)result >= 0 )
  {
    v14 = v20[0];
    v24 = v20[0];
    v25 = &v21;
    v23 = 48;
    v26 = 576;
    v27 = 0LL;
    if ( a3 )
      v15 = ZwCreateKey(&Handle, a2, &v23, 0LL, 0LL, 0, 0LL);
    else
      v15 = NtOpenKey(&Handle, a2, &v23);
    inited = v15;
    if ( v12 )
      NtClose(v14);
    if ( inited >= 0 )
    {
      v20[0] = Handle;
      v17 = RtlpProcessIFEOKeyFilter(v20, a2, a1);
      v18 = v20[0];
      inited = v17;
      if ( v17 < 0 )
        goto LABEL_37;
      if ( v20[0] != Handle || !v8 || !a3 )
        goto LABEL_24;
      v20[0] = 0LL;
      IFEOKeyFilterKey = RtlpCreateIFEOKeyFilterKey(v20, Handle, a2 | 0x10000);
      v18 = v20[0];
      inited = IFEOKeyFilterKey;
      if ( IFEOKeyFilterKey >= 0 )
      {
        inited = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"FilterFullPath");
        if ( inited < 0
          || (inited = ZwSetValueKey(v18, v20, 0LL, 1LL, *((_QWORD *)a1 + 1), a1[1]), inited < 0)
          || (v29 = 1, inited = RtlInitUnicodeStringEx((__int64)v20, (__int64)L"UseFilter"), inited < 0)
          || (inited = ZwSetValueKey(Handle, v20, 0LL, 4LL, &v29, 4), inited < 0) )
        {
          NtDeleteKey(v18);
        }
      }
      NtClose(Handle);
      if ( inited < 0 )
      {
LABEL_37:
        if ( v18 )
          NtClose(v18);
      }
      else
      {
LABEL_24:
        *v30 = v18;
      }
    }
    return (unsigned int)inited;
  }
  return result;
}

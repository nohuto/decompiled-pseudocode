/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x18007DED0 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E034C (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlOpenImageFileOptionsKey @ 0x1800ED6F0 (RtlOpenImageFileOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800ED7A0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800EE2C0 (RtlSetImageMitigationPolicy.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EF57C (RtlpDeleteEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180077070 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800770D0 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800773C0 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A1250 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A1AA0 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x1800A29E0 (NtDeleteKey.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800EF460 (RtlpCreateIFEOKeyFilterKey.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, ACCESS_MASK a2, char a3, _QWORD *a4)
{
  __int64 v6; // r11
  char v8; // r12
  _WORD *v9; // rdx
  int v10; // r10d
  int v11; // r11d
  char v12; // r14
  __int64 result; // rax
  void *v14; // rdi
  NTSTATUS v15; // eax
  NTSTATUS inited; // ebx
  int v17; // eax
  void *v18; // rdi
  int v19; // eax
  _UNICODE_STRING Handle; // [rsp+40h] [rbp-29h] BYREF
  __int16 v21; // [rsp+50h] [rbp-19h] BYREF
  _WORD *v22; // [rsp+58h] [rbp-11h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+67h] BYREF
  int Data; // [rsp+E0h] [rbp+77h] BYREF
  _QWORD *v26; // [rsp+E8h] [rbp+7Fh]

  v26 = a4;
  *a4 = 0LL;
  v6 = *a1;
  v8 = 0;
  v9 = (_WORD *)(v6 + *((_QWORD *)a1 + 1));
  *(_QWORD *)&Handle.Length = 0LL;
  KeyHandle = 0LL;
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
    result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, a2);
  }
  else
  {
    v12 = 0;
    result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  }
  if ( (int)result >= 0 )
  {
    v14 = *(void **)&Handle.Length;
    ObjectAttributes.RootDirectory = *(HANDLE *)&Handle.Length;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a3 )
      v15 = ZwCreateKey(&KeyHandle, a2, &ObjectAttributes, 0, 0LL, 0, 0LL);
    else
      v15 = NtOpenKey(&KeyHandle, a2, &ObjectAttributes);
    inited = v15;
    if ( v12 )
      NtClose(v14);
    if ( inited >= 0 )
    {
      *(_QWORD *)&Handle.Length = KeyHandle;
      v17 = RtlpProcessIFEOKeyFilter(&Handle, a2, a1);
      v18 = *(void **)&Handle.Length;
      inited = v17;
      if ( v17 < 0 )
        goto LABEL_37;
      if ( *(HANDLE *)&Handle.Length != KeyHandle || !v8 || !a3 )
        goto LABEL_24;
      *(_QWORD *)&Handle.Length = 0LL;
      v19 = RtlpCreateIFEOKeyFilterKey(&Handle, KeyHandle, a2 | 0x10000);
      v18 = *(void **)&Handle.Length;
      inited = v19;
      if ( v19 >= 0 )
      {
        inited = RtlInitUnicodeStringEx(&Handle, L"FilterFullPath");
        if ( inited < 0
          || (inited = ZwSetValueKey(v18, &Handle, 0, 1u, *((PVOID *)a1 + 1), a1[1]), inited < 0)
          || (Data = 1, inited = RtlInitUnicodeStringEx(&Handle, L"UseFilter"), inited < 0)
          || (inited = ZwSetValueKey(KeyHandle, &Handle, 0, 4u, &Data, 4u), inited < 0) )
        {
          NtDeleteKey(v18);
        }
      }
      NtClose(KeyHandle);
      if ( inited < 0 )
      {
LABEL_37:
        if ( v18 )
          NtClose(v18);
      }
      else
      {
LABEL_24:
        *v26 = v18;
      }
    }
    return (unsigned int)inited;
  }
  return result;
}

/*
 * XREFs of sxsisol_RespectDotLocal @ 0x1800EB0B0
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E0B8 (RtlDoesFileExists_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800E1B10 (RtlComputePrivatizedDllName_U.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(_UNICODE_STRING *a1, unsigned __int16 *a2, _DWORD *a3)
{
  NTSTATUS v5; // ebx
  unsigned __int16 Length; // ax
  _UNICODE_STRING *p_LocalName; // r14
  SIZE_T v8; // r8
  __int64 *v9; // rbx
  __int64 v10; // rcx
  size_t v11; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  _UNICODE_STRING RealName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING LocalName; // [rsp+30h] [rbp-10h] BYREF

  RealName = 0LL;
  LocalName = 0LL;
  if ( a2 )
  {
    v5 = RtlComputePrivatizedDllName_U(a1, &RealName, &LocalName);
    if ( v5 < 0 )
      goto LABEL_19;
    if ( LocalName.Buffer && RtlDoesFileExists_UstrEx(&LocalName, 1) )
    {
      Length = LocalName.Length;
      p_LocalName = &LocalName;
    }
    else
    {
      if ( !RealName.Buffer || !RtlDoesFileExists_UstrEx(&RealName, 1) )
        goto LABEL_18;
      Length = RealName.Length;
      p_LocalName = &RealName;
    }
    v8 = Length + 2LL;
    *a2 = 0;
    if ( v8 > 0xFFFE )
    {
      v5 = -1073741562;
      goto LABEL_19;
    }
    v9 = (__int64 *)(a2 + 8);
    if ( (a2 == (unsigned __int16 *)-16LL || v8 > *((_QWORD *)a2 + 4))
      && (int)RtlpEnsureBufferSize(0, (__int64)(a2 + 8), v8) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_19;
    }
    v10 = *v9;
    v11 = p_LocalName->Length;
    Buffer = p_LocalName->Buffer;
    v13 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v9;
    memmove((void *)(v10 + 2 * v13), Buffer, v11);
    v14 = (unsigned __int16)(*a2 + p_LocalName->Length);
    *a2 = v14;
    a2[1] = v14 + 2;
    *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v14 >> 1)) = 0;
    if ( a3 )
      *a3 |= 1u;
LABEL_18:
    v5 = 0;
    goto LABEL_19;
  }
  v5 = -1073741811;
LABEL_19:
  RtlFreeUnicodeString(&RealName);
  RtlFreeUnicodeString(&LocalName);
  return (unsigned int)v5;
}

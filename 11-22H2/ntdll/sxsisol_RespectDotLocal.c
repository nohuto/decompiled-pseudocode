/*
 * XREFs of sxsisol_RespectDotLocal @ 0x1800E9D80
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E298 (RtlDoesFileExists_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x18006EAF0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800E07E0 (RtlComputePrivatizedDllName_U.c)
 */

__int64 __fastcall sxsisol_RespectDotLocal(unsigned __int16 *a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v5; // ebx
  unsigned __int16 Length; // ax
  UNICODE_STRING *p_UnicodeString; // r14
  unsigned __int64 v8; // r8
  __int64 *v9; // rbx
  __int64 v10; // rcx
  size_t v11; // r8
  wchar_t *Buffer; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-10h] BYREF

  UnicodeString = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    v5 = RtlComputePrivatizedDllName_U(a1, (__int64)&UnicodeString, (__int64)&v17);
    if ( v5 < 0 )
      goto LABEL_19;
    if ( v17.Buffer && RtlDoesFileExists_UstrEx((__m128i *)&v17, 1) )
    {
      Length = v17.Length;
      p_UnicodeString = &v17;
    }
    else
    {
      if ( !UnicodeString.Buffer || !RtlDoesFileExists_UstrEx((__m128i *)&UnicodeString, 1) )
        goto LABEL_18;
      Length = UnicodeString.Length;
      p_UnicodeString = &UnicodeString;
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
    v11 = p_UnicodeString->Length;
    Buffer = p_UnicodeString->Buffer;
    v13 = (unsigned __int64)*a2 >> 1;
    *((_QWORD *)a2 + 1) = *v9;
    memmove((void *)(v10 + 2 * v13), Buffer, v11);
    v14 = (unsigned __int16)(*a2 + p_UnicodeString->Length);
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
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v17);
  return (unsigned int)v5;
}

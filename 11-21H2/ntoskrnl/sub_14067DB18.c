/*
 * XREFs of sub_14067DB18 @ 0x14067DB18
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryObject @ 0x14041B960 (ZwQueryObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14065CA50 (IoConvertFileHandleToKernelHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

int __fastcall sub_14067DB18(_OWORD *a1, KPROCESSOR_MODE a2, UNICODE_STRING *a3)
{
  int v4; // ebx
  unsigned __int16 v5; // si
  wchar_t *PoolWithQuotaTag; // rax
  int result; // eax
  NTSTATUS v8; // r15d
  __m128i v9; // xmm0
  unsigned int v10; // edx
  wchar_t *v11; // rax
  __int64 Length; // rax
  wchar_t *Buffer; // rcx
  ULONG ReturnLength; // [rsp+34h] [rbp-294h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-290h]
  void *Src[2]; // [rsp+40h] [rbp-288h] BYREF
  UNICODE_STRING *v17; // [rsp+50h] [rbp-278h]
  UNICODE_STRING Source; // [rsp+58h] [rbp-270h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-260h] BYREF
  __int128 v20; // [rsp+78h] [rbp-250h]
  __int128 v21; // [rsp+88h] [rbp-240h]
  UNICODE_STRING ObjectInformation; // [rsp+A0h] [rbp-228h] BYREF

  v17 = a3;
  Source = 0LL;
  v4 = 0;
  ReturnLength = 0;
  v15 = 0;
  a3->Buffer = 0LL;
  if ( a2 == 1 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)Handle = *a1;
  v20 = a1[1];
  v21 = a1[2];
  *(_OWORD *)Src = *(_OWORD *)v20;
  if ( a2 == 1 )
  {
    v5 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v5 = (unsigned __int16)Src[0];
  }
  if ( (v5 & 1) != 0 )
    return -1073741765;
  if ( !Handle[1] )
  {
    if ( !v5 )
      return -1073741765;
    a3->Length = v5;
    a3->MaximumLength = v5;
    PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v5, 0x6E664D43u);
    a3->Buffer = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
    memmove(PoolWithQuotaTag, Src[1], v5);
    return v4;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 == 1 )
    return -1073741816;
  if ( Src[1] && v5 >= 2u && *(_WORD *)Src[1] == 92 )
    return -1073741765;
  result = IoConvertFileHandleToKernelHandle(Handle[1], a2, 0x20u, 1, &Handle[1]);
  if ( result >= 0 )
  {
    v8 = ZwQueryObject(Handle[1], ObjectNameInformation, &ObjectInformation, 0x200u, &ReturnLength);
    ZwClose(Handle[1]);
    if ( v8 < 0 )
      return v8;
    v9 = (__m128i)ObjectInformation;
    Source = ObjectInformation;
    a3->Length = 0;
    v10 = (unsigned __int16)_mm_cvtsi128_si32(v9) + 2 + v5;
    v15 = v10;
    if ( v10 > 0xFFFF )
      return -1073741767;
    a3->MaximumLength = v10;
    v11 = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned __int16)v10, 0x6E664D43u);
    a3->Buffer = v11;
    if ( !v11 )
      return -1073741670;
    RtlAppendUnicodeStringToString(a3, &Source);
    Length = a3->Length;
    if ( (_WORD)Length )
    {
      Buffer = a3->Buffer;
      if ( *(wchar_t *)((char *)Buffer + Length - 2) != 92 )
      {
        *(wchar_t *)((char *)Buffer + Length) = 92;
        a3->Length += 2;
      }
    }
    return RtlAppendUnicodeStringToString(a3, (PCUNICODE_STRING)Src);
  }
  return result;
}

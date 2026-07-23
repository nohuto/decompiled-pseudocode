/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x18008AD5C
 * Callers:
 *     LdrpInitializationFailure @ 0x18008ACF0 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x1800E19A8 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x1800877D0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

int __fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 v3; // rcx
  const void **v5; // rsi
  _WORD *v6; // rbx
  unsigned int v7; // eax
  _WORD *Heap; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF

  v3 = *a1;
  v5 = (const void **)(a1 + 4);
  if ( v3 + 2 > a1[1] || (v6 = *v5, *((_WORD *)*v5 + (v3 >> 1))) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v6 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *v5, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
  }
  v7 = *a1 + 2;
  UserData.Ptr = (unsigned __int64)v6;
  UserData.Size = v7;
  UserData.Reserved = 0;
  LODWORD(Heap) = EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1u, &UserData);
  if ( v6 != *v5 )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (int)Heap;
}

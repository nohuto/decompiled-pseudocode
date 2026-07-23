/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x180091FAC
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x18008FD68 (LdrpGenericExceptionFilter.c)
 *     LdrpInitializationFailure @ 0x180091F40 (LdrpInitializationFailure.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x18008AEB0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

int __fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, const EVENT_DESCRIPTOR *a2)
{
  __int64 v3; // rcx
  const void **v5; // rdi
  _WORD *v6; // rbx
  _WORD *Heap; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF

  v3 = *a1;
  v5 = (const void **)(a1 + 4);
  if ( v3 + 2 > (unsigned __int64)a1[1] || (v6 = *v5, *((_WORD *)*v5 + ((unsigned __int64)(unsigned int)v3 >> 1))) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v6 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *v5, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
    LOWORD(v3) = *a1;
  }
  UserData.Ptr = (unsigned __int64)v6;
  UserData.Size = (unsigned __int16)v3 + 2;
  UserData.Reserved = 0;
  LODWORD(Heap) = EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1u, &UserData);
  if ( v6 != *v5 )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (int)Heap;
}

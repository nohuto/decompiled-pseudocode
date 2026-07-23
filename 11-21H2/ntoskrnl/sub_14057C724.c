/*
 * XREFs of sub_14057C724 @ 0x14057C724
 * Callers:
 *     sub_14029A86C @ 0x14029A86C (sub_14029A86C.c)
 * Callees:
 *     sub_14025CB30 @ 0x14025CB30 (sub_14025CB30.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     sub_140298720 @ 0x140298720 (sub_140298720.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_14056E34C @ 0x14056E34C (sub_14056E34C.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 */

int __fastcall sub_14057C724(__int64 a1)
{
  ULONG v1; // eax
  int result; // eax
  ULONG v4; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  int v9; // edx
  int v10; // ecx
  char *v11; // rax
  char *v12; // rbx
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  ContextEx = 0LL;
  ContextLength = 0;
  ContextFlags = v1;
  result = sub_140298720(&ContextFlags, 1);
  if ( result >= 0 )
  {
    v4 = ContextFlags;
    if ( (ContextFlags & 0x100040) != 0x100040 )
      return -1073741823;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v5 = ContextLength + 15LL;
      if ( v5 <= ContextLength )
        v5 = 0xFFFFFFFFFFFFFF0LL;
      v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
      v7 = alloca(v6);
      v8 = alloca(v6);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v4, &ContextEx);
      if ( result >= 0 )
      {
        LOBYTE(v9) = 1;
        result = sub_140703290(v10, v9, (_DWORD)ContextEx, v4, a1, 0LL);
        if ( result >= 0 )
        {
          v11 = sub_14025CB30(ContextEx, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
          v12 = v11;
          if ( v11 && (*(ULONG *)((char *)&ContextFlags + SLODWORD(STACK[0x510]) + 1232) & 0x800LL) != 0 )
          {
            *((_QWORD *)v11 + 1) -= 8LL;
            result = sub_14056E34C(v11, (void *)__readmsr(0x6A7u));
            if ( result >= 0 )
            {
              __writemsr(0x6A7u, *((_QWORD *)v12 + 1));
              return 0;
            }
            return result;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}

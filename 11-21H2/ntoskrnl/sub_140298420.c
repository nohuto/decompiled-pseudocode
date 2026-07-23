/*
 * XREFs of sub_140298420 @ 0x140298420
 * Callers:
 *     sub_1402987C0 @ 0x1402987C0 (sub_1402987C0.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     sub_140298378 @ 0x140298378 (sub_140298378.c)
 *     sub_1402985E4 @ 0x1402985E4 (sub_1402985E4.c)
 *     sub_140298720 @ 0x140298720 (sub_140298720.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041F500 @ 0x14041F500 (sub_14041F500.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 */

int __fastcall sub_140298420(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  int result; // eax
  ULONG v9; // ebx
  unsigned __int64 v10; // rax
  void *v11; // rsp
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp+10h] BYREF
  int v21; // [rsp+60h] [rbp+30h]

  v5 = a2;
  ContextEx = 0LL;
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  ContextFlags = *(_DWORD *)(a1 + 48);
  if ( a4 <= 0xFF )
  {
    memset(v20, 0, sizeof(v20));
  }
  else
  {
    *(_OWORD *)v20 = *(_OWORD *)a4;
    *(_QWORD *)&v20[16] = *(_QWORD *)(a4 + 16);
    if ( (*(_DWORD *)&v20[4] & 0xFFFFFFFC) != 0 || *(_DWORD *)v20 >= 4u || *(_OWORD *)&v20[8] != 0LL )
      return -1073741811;
  }
  LOBYTE(a2) = 1;
  result = sub_140298720(&ContextFlags, a2);
  if ( result >= 0 )
  {
    v9 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v10 = ContextLength + 15LL;
      if ( v10 <= ContextLength )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v9, &ContextEx);
      if ( result >= 0 )
      {
        LOBYTE(v12) = 1;
        result = sub_140703290(v13, v12, (_DWORD)ContextEx, v9, a1, 0LL);
        if ( result >= 0 )
        {
          ContextEx = 0LL;
          result = sub_140298378((__int64)CurrentThread, &ContextFlags, (unsigned __int64 *)&ContextEx);
          if ( result >= 0 )
          {
            result = sub_1402985E4(
                       (_DWORD)CurrentThread,
                       (unsigned int)&ContextFlags,
                       v14,
                       (unsigned int)v20,
                       (__int64)&ContextEx);
            if ( result >= 0 )
            {
              v15 = *((_QWORD *)CurrentThread + 133);
              if ( v15
                && (v21 & 0x100040) == 0x100040
                && (v15 & *(_QWORD *)((_BYTE *)&ContextFlags + SLODWORD(STACK[0x510]) + 1232)) != 0 )
              {
                return -1073741811;
              }
              else
              {
                LOBYTE(v16) = 1;
                sub_14041F500(a3, v5, (unsigned int)&ContextFlags, v9, v16);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of sub_140576820 @ 0x140576820
 * Callers:
 *     sub_140576640 @ 0x140576640 (sub_140576640.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     sub_140298378 @ 0x140298378 (sub_140298378.c)
 *     sub_1402985E4 @ 0x1402985E4 (sub_1402985E4.c)
 *     sub_140298720 @ 0x140298720 (sub_140298720.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041F500 @ 0x14041F500 (sub_14041F500.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     sub_140703290 @ 0x140703290 (sub_140703290.c)
 */

int __fastcall sub_140576820(__int64 a1, CONTEXT_CHUNK *a2, __int64 a3, __int64 a4)
{
  CONTEXT_CHUNK *v4; // rdi
  char v6; // r15
  __int64 v7; // rax
  int result; // eax
  ULONG v9; // ebx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  CONTEXT_CHUNK *p_XState; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v18; // r12d
  unsigned __int8 CurrentIrql; // si
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // edi
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r9
  bool v25; // zf
  __int64 v26; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp+10h] BYREF
  __int64 v31; // [rsp+48h] [rbp+18h]
  __int64 v32; // [rsp+50h] [rbp+20h]
  __int128 v33; // [rsp+58h] [rbp+28h] BYREF
  __int64 v34; // [rsp+68h] [rbp+38h]

  v32 = a4;
  v31 = a3;
  v4 = a2;
  ContextEx = 0LL;
  ContextFlags = 0;
  ContextLength = 0;
  v6 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !v6 )
    goto LABEL_11;
  v7 = (__int64)&a2[6];
  if ( (unsigned __int64)&a2[6] >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  ContextFlags = *(_DWORD *)v7;
  result = sub_140298720(&ContextFlags, v6);
  if ( result >= 0 )
  {
    v9 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v10 = ContextLength + 15LL;
      if ( v10 <= ContextLength )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v9, &ContextEx);
      if ( result >= 0 )
      {
        p_XState = &ContextEx[-39].XState;
        LOBYTE(v14) = 1;
        result = sub_140703290(v15, v14, (_DWORD)ContextEx, v9, (__int64)v4, 0LL);
        if ( result >= 0 )
        {
          v4 = p_XState;
LABEL_11:
          CurrentThread = KeGetCurrentThread();
          v18 = 1;
          CurrentIrql = KeGetCurrentIrql();
          if ( !CurrentIrql )
          {
            KeGetCurrentIrql();
            __writecr8(1uLL);
          }
          if ( v6 )
          {
            if ( (*((_DWORD *)CurrentThread + 29) & 0x100000) != 0 )
            {
              v30 = 0LL;
              if ( (int)sub_140298378((__int64)CurrentThread, v4, &v30) < 0
                || (v33 = 0LL,
                    v34 = 0LL,
                    (int)sub_1402985E4((__int64)CurrentThread, (__int64)v4, v20, (int)&v33, (__int64)&v30) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v18 = 0;
              }
            }
          }
          v21 = *((_QWORD *)CurrentThread + 133);
          if ( v21
            && (v4[6].Offset & 0x100040) == 0x100040
            && (v21 & *(_QWORD *)((char *)&v4[154] + v4[156].Offset)) != 0 )
          {
            v22 = -1073741811;
          }
          else
          {
            if ( v18 )
            {
              LOBYTE(v26) = v6;
              sub_14041F500(v32, v31, (__int64)v4, v4[6].Offset, v26);
            }
            v22 = 0;
          }
          if ( !CurrentIrql )
          {
            if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v24 = *((_QWORD *)CurrentPrcb + 4375);
              v25 = (*(_DWORD *)(v24 + 20) & 0xFFFF0001) == 0;
              *(_DWORD *)(v24 + 20) &= 0xFFFF0001;
              if ( v25 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
            __writecr8(0LL);
          }
          return v22;
        }
      }
    }
  }
  return result;
}

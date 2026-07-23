/*
 * XREFs of KiContinuePreviousModeUser @ 0x14030D474
 * Callers:
 *     KiContinueEx @ 0x14030D1A0 (KiContinueEx.c)
 * Callees:
 *     KeVerifyContextXStateCetU @ 0x1402A3E70 (KeVerifyContextXStateCetU.c)
 *     RtlInitializeExtendedContext @ 0x14030D640 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14030D6C0 (RtlGetExtendedContextLength.c)
 *     RtlpSanitizeContextFlags @ 0x14030D9CC (RtlpSanitizeContextFlags.c)
 *     KeVerifyContextRecord @ 0x14030E004 (KeVerifyContextRecord.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeContextToKframes @ 0x14041EF10 (KeContextToKframes.c)
 *     _alloca_probe @ 0x140429EA0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpReadExtendedContext @ 0x1407700D0 (RtlpReadExtendedContext.c)
 */

int __fastcall KiContinuePreviousModeUser(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  int v5; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  int result; // eax
  unsigned __int64 v9; // rax
  void *v10; // rsp
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned __int64 ExtendedFeatureDisableMask; // rdx
  __int64 v15; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp+10h] BYREF
  int v20; // [rsp+60h] [rbp+30h]

  v5 = a2;
  ContextEx = 0LL;
  ContextLength = 0;
  CurrentThread = KeGetCurrentThread();
  ContextFlags = *(_DWORD *)(a1 + 48);
  if ( a4 > 0xFF )
  {
    *(_OWORD *)v19 = *(_OWORD *)a4;
    *(_QWORD *)&v19[16] = *(_QWORD *)(a4 + 16);
    if ( (*(_DWORD *)&v19[4] & 0xFFFFFFFC) != 0 || *(_DWORD *)v19 >= 4u || *(_OWORD *)&v19[8] != 0LL )
      return -1073741811;
  }
  else
  {
    memset(v19, 0, sizeof(v19));
  }
  LOBYTE(a2) = 1;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v9 = ContextLength + 15LL;
      if ( v9 <= ContextLength )
        v9 = 0xFFFFFFFFFFFFFF0LL;
      v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&ContextFlags, 0, ContextLength);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, ContextFlags, &ContextEx);
      if ( result >= 0 )
      {
        LOBYTE(v11) = 1;
        result = RtlpReadExtendedContext(v12, v11, (_DWORD)ContextEx, ContextFlags, a1, 0LL);
        if ( result >= 0 )
        {
          ContextEx = 0LL;
          result = KeVerifyContextXStateCetU(
                     (__int64)CurrentThread,
                     (__int64)&ContextFlags,
                     (unsigned __int64 *)&ContextEx);
          if ( result >= 0 )
          {
            result = KeVerifyContextRecord(
                       (_DWORD)CurrentThread,
                       (unsigned int)&ContextFlags,
                       v13,
                       (unsigned int)v19,
                       (__int64)&ContextEx);
            if ( result >= 0 )
            {
              ExtendedFeatureDisableMask = CurrentThread->ExtendedFeatureDisableMask;
              if ( ExtendedFeatureDisableMask
                && (v20 & 0x100040) == 0x100040
                && (ExtendedFeatureDisableMask & *(_QWORD *)((_BYTE *)&ContextFlags + SLODWORD(STACK[0x510]) + 1232)) != 0 )
              {
                return -1073741811;
              }
              else
              {
                LOBYTE(v15) = 1;
                KeContextToKframes(a3, v5, (unsigned int)&ContextFlags, ContextFlags, v15);
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

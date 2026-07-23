/*
 * XREFs of PnpConcatPWSTR @ 0x1407FAC78
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x1407FA7A8 (PiDqOpenUserObjectRegKey.c)
 *     PiSwInstanceInfoInit @ 0x1408196F0 (PiSwInstanceInfoInit.c)
 *     PiSwGetChildPdo @ 0x140848620 (PiSwGetChildPdo.c)
 *     PipCheckForDenyExecute @ 0x140866EE4 (PipCheckForDenyExecute.c)
 *     PiSwStopDestroy @ 0x140869F08 (PiSwStopDestroy.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14022C750 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14022CF3C (RtlULongLongMult.c)
 *     RtlStringCbCatW @ 0x1403717B4 (RtlStringCbCatW.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpConcatPWSTR(size_t cchMax, ULONG Tag, PVOID *a3, unsigned __int64 a4)
{
  ULONGLONG v7; // r11
  unsigned __int64 v8; // r14
  STRSAFE_PCNZWCH *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // r11
  _WORD *Pool2; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  NTSTRSAFE_PCWSTR *v15; // rdi
  ULONGLONG pullResult; // [rsp+20h] [rbp-18h] BYREF
  size_t pcchLength[2]; // [rsp+28h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp+60h] BYREF

  v19 = a4;
  pcchLength[0] = 0LL;
  pullResult = 0LL;
  *a3 = 0LL;
  v7 = 1LL;
  v8 = 0LL;
  if ( a4 )
  {
    v9 = (STRSAFE_PCNZWCH *)&v19;
    do
    {
      if ( *++v9 )
      {
        v10 = RtlStringCchLengthW(*v9, cchMax, pcchLength);
        if ( v10 < 0 )
          goto LABEL_19;
        v7 = pcchLength[0] + v11;
        a4 = v19;
      }
      ++v8;
    }
    while ( v8 < a4 );
  }
  if ( v7 > cchMax )
  {
    v10 = -1073741811;
    goto LABEL_19;
  }
  v10 = RtlULongLongMult(v7, 2uLL, &pullResult);
  if ( v10 < 0 )
    goto LABEL_19;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, pullResult, Tag);
  *a3 = Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741670;
LABEL_19:
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, Tag);
      *a3 = 0LL;
    }
    return (unsigned int)v10;
  }
  *Pool2 = 0;
  v13 = v19;
  v14 = 0LL;
  if ( v19 )
  {
    v15 = (NTSTRSAFE_PCWSTR *)&v19;
    do
    {
      if ( *++v15 )
      {
        v10 = RtlStringCbCatW((NTSTRSAFE_PWSTR)*a3, pullResult, *v15);
        if ( v10 < 0 )
          goto LABEL_19;
        v13 = v19;
      }
      ++v14;
    }
    while ( v14 < v13 );
  }
  return (unsigned int)v10;
}

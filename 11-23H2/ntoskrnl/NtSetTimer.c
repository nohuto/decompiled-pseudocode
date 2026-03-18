/*
 * XREFs of NtSetTimer @ 0x1403B2920
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14032D2CC (PoDestroyReasonContext.c)
 *     ExpSetTimer @ 0x14032E728 (ExpSetTimer.c)
 */

__int64 __fastcall NtSetTimer(
        void *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        signed int a6,
        __int64 a7)
{
  __int64 *v9; // rbx
  bool v10; // si
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v12; // rax
  char v13; // cl
  _QWORD *v14; // r14
  NTSTATUS v15; // eax
  int v16; // ebx
  __int64 result; // rax
  char v18; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-38h] BYREF

  v9 = (__int64 *)a2;
  v19 = 0LL;
  v18 = 0;
  P[0] = 0LL;
  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v12 = a2;
    v19 = *(_QWORD *)v12;
    v9 = &v19;
    P[1] = &v19;
    v13 = a5;
  }
  else
  {
    v13 = a5;
    if ( a5 )
      v10 = PoPowerDownActionInProgress != 0;
  }
  if ( a6 < 0 )
    return 3221225716LL;
  if ( !v13
    || v10
    || (result = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 1, (bool *)&v18, (__int64 *)P), (int)result >= 0) )
  {
    v14 = P[0];
    v15 = ExpSetTimer(a1, PreviousMode, (__int64)v9, a3, a4, (__int64)P[0], v18, a6, 0, a7);
    v16 = v15;
    if ( (v15 < 0 || v15 == 1073741861) && v14 )
      PoDestroyReasonContext(v14);
    if ( v16 >= 0 && v10 )
      return 1073741861;
    return (unsigned int)v16;
  }
  return result;
}

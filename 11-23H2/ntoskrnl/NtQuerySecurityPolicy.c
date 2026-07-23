/*
 * XREFs of NtQuerySecurityPolicy @ 0x1407DEF10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     SepCaptureUnicodeStringArray @ 0x1406D4C80 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall NtQuerySecurityPolicy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        volatile void *a5,
        unsigned __int64 Address)
{
  __int64 v7; // r12
  void *Pool2; // rsi
  char PreviousMode; // r14
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r8
  _DWORD *v14; // r15
  void *v15; // r12
  unsigned int v16; // eax
  SIZE_T Length; // [rsp+44h] [rbp-54h] BYREF
  int v19; // [rsp+4Ch] [rbp-4Ch] BYREF
  void *v20; // [rsp+50h] [rbp-48h]
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  PVOID v22; // [rsp+60h] [rbp-38h] BYREF
  PVOID v23[3]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  P = 0LL;
  v22 = 0LL;
  Pool2 = 0LL;
  v20 = 0LL;
  v23[0] = 0LL;
  LODWORD(Length) = 0;
  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(a3) = PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1u, a3, &P);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = PreviousMode;
    v11 = SepCaptureUnicodeStringArray(a2, 1u, v12, &v22);
    if ( v11 >= 0 )
    {
      LOBYTE(v13) = PreviousMode;
      v11 = SepCaptureUnicodeStringArray(v7, 1u, v13, v23);
      HIDWORD(Length) = v11;
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v14 = (_DWORD *)Address;
          if ( (Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address + 4 > 0x7FFFFFFF0000LL || Address + 4 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          LODWORD(Length) = *(_DWORD *)Address;
          if ( !(_DWORD)Length )
          {
            Length = 0xC000000D00000000uLL;
            v11 = -1073741811;
            goto LABEL_24;
          }
          ProbeForWrite((volatile void *)Address, 4uLL, 4u);
          v15 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, (unsigned int)Length, 1u);
            Pool2 = (void *)ExAllocatePool2(257LL, (unsigned int)Length, 538994003LL);
            v20 = Pool2;
            if ( !Pool2 )
            {
              v11 = -1073741670;
              goto LABEL_24;
            }
          }
        }
        else
        {
          v15 = (void *)a5;
          Pool2 = (void *)a5;
          v20 = (void *)a5;
          v14 = (_DWORD *)Address;
          LODWORD(Length) = *(_DWORD *)Address;
        }
        if ( qword_140C379D0 )
        {
          if ( Pool2 && !(_DWORD)Length )
            v11 = -1073741811;
          else
            v11 = qword_140C379D0(P, v22, v23[0], &v19, Pool2, &Length);
        }
        else
        {
          v11 = -1073741637;
        }
        HIDWORD(Length) = v11;
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          *a4 = v19;
          v16 = Length;
          *v14 = Length;
          if ( v15 )
          {
            if ( PreviousMode == 1 && v11 >= 0 )
              memmove(v15, Pool2, v16);
          }
        }
      }
    }
  }
LABEL_24:
  if ( PreviousMode == 1 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v23[0] )
      ExFreePoolWithTag(v23[0], 0);
  }
  if ( Pool2 && PreviousMode == 1 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}

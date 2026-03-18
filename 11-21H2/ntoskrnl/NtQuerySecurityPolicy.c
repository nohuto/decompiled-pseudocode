/*
 * XREFs of NtQuerySecurityPolicy @ 0x1406A0770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SepCaptureUnicodeStringArray @ 0x1406A0BF0 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  unsigned int v17; // eax
  SIZE_T Length; // [rsp+44h] [rbp-54h] BYREF
  void *v19; // [rsp+50h] [rbp-48h]
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  PVOID v21; // [rsp+60h] [rbp-38h] BYREF
  PVOID v22[3]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  P = 0LL;
  v21 = 0LL;
  Pool2 = 0LL;
  v19 = 0LL;
  v22[0] = 0LL;
  Length = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(a3) = PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1LL, a3, &P);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = PreviousMode;
    v11 = SepCaptureUnicodeStringArray(a2, 1LL, v12, &v21);
    if ( v11 >= 0 )
    {
      LOBYTE(v13) = PreviousMode;
      v11 = SepCaptureUnicodeStringArray(v7, 1LL, v13, v22);
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
          ProbeForWrite((volatile void *)Address, 4uLL, 4u);
          v15 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, (unsigned int)Length, 1u);
            Pool2 = (void *)ExAllocatePool2(257LL, (unsigned int)Length, 538994003LL);
            v19 = Pool2;
            if ( !Pool2 )
            {
              v11 = -1073741670;
              goto LABEL_19;
            }
          }
        }
        else
        {
          v15 = (void *)a5;
          Pool2 = (void *)a5;
          v19 = (void *)a5;
          v14 = (_DWORD *)Address;
          LODWORD(Length) = *(_DWORD *)Address;
        }
        if ( qword_140C1B938 )
        {
          if ( Pool2 && !(_DWORD)Length )
            v11 = -1073741811;
          else
            v11 = qword_140C1B938(P, v21, v22[0], (char *)&Length + 4, Pool2, &Length);
        }
        else
        {
          v11 = -1073741637;
        }
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          *a4 = HIDWORD(Length);
          v17 = Length;
          *v14 = Length;
          if ( v15 )
          {
            if ( PreviousMode == 1 && v11 >= 0 )
              memmove(v15, Pool2, v17);
          }
        }
      }
    }
  }
LABEL_19:
  if ( PreviousMode == 1 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v22[0] )
      ExFreePoolWithTag(v22[0], 0);
  }
  if ( Pool2 && PreviousMode == 1 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}

/*
 * XREFs of sub_1406A0770 @ 0x1406A0770
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406A0BF0 @ 0x1406A0BF0 (sub_1406A0BF0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406A0770(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        volatile void *a5,
        unsigned __int64 Address)
{
  __int64 v7; // r12
  void *Pool2; // rsi
  char v10; // r14
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r8
  _DWORD *v14; // r15
  void *v15; // r12
  unsigned int Length; // [rsp+44h] [rbp-54h]
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  PVOID v19; // [rsp+60h] [rbp-38h] BYREF
  PVOID v20[3]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  P = 0LL;
  v19 = 0LL;
  Pool2 = 0LL;
  v20[0] = 0LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  LOBYTE(a3) = v10;
  v11 = sub_1406A0BF0(a1, 1LL, a3, &P);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = v10;
    v11 = sub_1406A0BF0(a2, 1LL, v12, &v19);
    if ( v11 >= 0 )
    {
      LOBYTE(v13) = v10;
      v11 = sub_1406A0BF0(v7, 1LL, v13, v20);
      if ( v11 >= 0 )
      {
        if ( v10 == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v14 = (_DWORD *)Address;
          if ( (Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address + 4 > 0x7FFFFFFF0000LL || Address + 4 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          Length = *(_DWORD *)Address;
          ProbeForWrite((volatile void *)Address, 4uLL, 4u);
          v15 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, Length, 1u);
            Pool2 = (void *)ExAllocatePool2(257LL, Length, 538994003LL);
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
          v14 = (_DWORD *)Address;
          Length = *(_DWORD *)Address;
        }
        if ( qword_140C1B938 )
        {
          if ( Pool2 && !Length )
            v11 = -1073741811;
          else
            v11 = sub_14042A5E0(P, v19);
        }
        else
        {
          v11 = -1073741637;
        }
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          *a4 = 0;
          *v14 = Length;
          if ( v15 )
          {
            if ( v10 == 1 && v11 >= 0 )
              memmove(v15, Pool2, Length);
          }
        }
      }
    }
  }
LABEL_19:
  if ( v10 == 1 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v20[0] )
      ExFreePoolWithTag(v20[0], 0);
  }
  if ( Pool2 && v10 == 1 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v11;
}

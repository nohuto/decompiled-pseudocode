/*
 * XREFs of sub_140556050 @ 0x140556050
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 * Callees:
 *     sub_14020C4B8 @ 0x14020C4B8 (sub_14020C4B8.c)
 *     IoInitializeIrp @ 0x140229D70 (IoInitializeIrp.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 */

__int64 __fastcall sub_140556050(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  PIRP v8; // rbx
  __int64 v9; // rdx
  LARGE_INTEGER v10; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > byte_140C470E0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140C470B8 != CurrentThread )
    {
      v10.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140C470B0, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140C470C0, Executive, 0, 0, &v10) == 258 )
        {
          LOBYTE(v9) = v3;
          result = sub_1402AACA0(a1, v9, 0LL);
          if ( result )
            return result;
        }
      }
      v8 = qword_140C470A8;
      IoInitializeIrp(qword_140C470A8, 72 * v3 + 352, v3 + 2);
      v8->AllocationFlags = 33;
      qword_140C470B8 = (__int64)KeGetCurrentThread();
      goto LABEL_9;
    }
    v8 = qword_140C470D8;
    if ( qword_140C470D8 )
    {
LABEL_19:
      qword_140C470D8 = *(PIRP *)&qword_140C470D8->Type;
      IoInitializeIrp(v8, 72 * a2 + 352, a2 + 2);
      v8->Tail.Overlay.CurrentStackLocation -= 2;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      v8->AllocationFlags = 33;
      goto LABEL_20;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140C47088 == CurrentThread )
  {
    v8 = qword_140C470D8;
    if ( !qword_140C470D8 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140C47080, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140C47090, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v6) = v3;
      result = sub_1402AACA0(a1, v6, 0LL);
      if ( result )
        return result;
    }
  }
  v8 = Irp;
  IoInitializeIrp(Irp, 72 * v3 + 352, v3 + 2);
  v8->AllocationFlags = 33;
  qword_140C47088 = (__int64)KeGetCurrentThread();
LABEL_9:
  v8->Tail.Overlay.CurrentStackLocation -= 2;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
LABEL_20:
  v8->StackCount -= 2;
  v8->CurrentLocation -= 2;
  if ( sub_14020C4B8() )
    sub_140556BE4(v8);
  return (__int64)v8;
}

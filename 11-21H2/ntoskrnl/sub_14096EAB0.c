/*
 * XREFs of sub_14096EAB0 @ 0x14096EAB0
 * Callers:
 *     sub_140982AF8 @ 0x140982AF8 (sub_140982AF8.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_14096E3D8 @ 0x14096E3D8 (sub_14096E3D8.c)
 */

__int64 __fastcall sub_14096EAB0(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // zf
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v3 = sub_14096E3D8(a1, &v12, (volatile signed __int64 **)&BugCheckParameter2);
  v4 = v12;
  if ( v3 )
  {
    if ( (a2 == 0) == (v3[9] == 0LL) )
    {
      v5 = 255;
    }
    else
    {
      *(_QWORD *)&v9 = v3;
      v10 = a2;
      *((_QWORD *)&v9 + 1) = v12;
      KeGenericCallDpc((__int64)sub_14059A460, (__int64)&v9);
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073740640;
  }
  if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    sub_1402AFC00(BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    v7 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v7 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
    v4 = v12;
  }
  if ( v4 )
    sub_1403606C4(*(_QWORD *)(v4 + 176));
  return v5;
}

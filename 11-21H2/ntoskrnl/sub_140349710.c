/*
 * XREFs of sub_140349710 @ 0x140349710
 * Callers:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_1403A6628 @ 0x1403A6628 (sub_1403A6628.c)
 *     sub_1403D0750 @ 0x1403D0750 (sub_1403D0750.c)
 *     sub_1403D1580 @ 0x1403D1580 (sub_1403D1580.c)
 *     sub_1403D9134 @ 0x1403D9134 (sub_1403D9134.c)
 *     sub_14053C5FC @ 0x14053C5FC (sub_14053C5FC.c)
 *     sub_14053CF1C @ 0x14053CF1C (sub_14053CF1C.c)
 *     sub_140A6E028 @ 0x140A6E028 (sub_140A6E028.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140349710(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  int v9; // ebx
  __int64 result; // rax
  _QWORD *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 >= 0 )
    v7 = 1;
  else
    v7 = (unsigned __int16)word_140D05000;
  v8 = a5;
  v9 = a4 & 0x7FFFFFFF;
  v12 = 0;
  if ( a4 >= 0 )
    v9 = a4;
  while ( 1 )
  {
    result = sub_1403497C0(a1, v8);
    if ( result )
      break;
    if ( !--v7 || (unsigned int)sub_14030B3F0(v9, &v12) == -1 )
    {
      ++dword_140C11774;
      if ( (a1 & 2) != 0 )
      {
        v11 = (_QWORD *)qword_140C5EA40[0];
        if ( (a1 & 0x200) != 0 )
          v11 = (_QWORD *)qword_140C5EA48;
        KeBugCheckEx(0x41u, a2, (unsigned int)v11[17], (unsigned int)v11[21] + (unsigned int)v11[23], 0LL);
      }
      if ( (a1 & 0x10) != 0 )
        RtlRaiseStatus(-1073741670);
      return 0LL;
    }
  }
  return result;
}

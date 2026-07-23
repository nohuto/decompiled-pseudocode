/*
 * XREFs of sub_1402A38B4 @ 0x1402A38B4
 * Callers:
 *     sub_140280170 @ 0x140280170 (sub_140280170.c)
 *     sub_1402A36D0 @ 0x1402A36D0 (sub_1402A36D0.c)
 *     sub_14055802C @ 0x14055802C (sub_14055802C.c)
 *     sub_140558AE0 @ 0x140558AE0 (sub_140558AE0.c)
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14072B200 @ 0x14072B200 (sub_14072B200.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IoCopyDeviceObjectHint @ 0x1409361B0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     sub_1402A3A14 @ 0x1402A3A14 (sub_1402A3A14.c)
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 *     sub_1402A3F70 @ 0x1402A3F70 (sub_1402A3F70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402A38B4(__int64 a1, unsigned int a2, unsigned int a3, char a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v7; // r14
  __int64 result; // rax
  void *v11; // r8

  v7 = a3;
  if ( !a4 || (result = sub_1402A3A60(a1, 0LL), (int)result >= 0) )
  {
    v11 = (void *)sub_1402A3A14(a1, a2);
    if ( !v11 && a4 )
    {
      if ( !ExAllocatePool2(64LL, v7, 1162243913LL) )
        return 3221225626LL;
      if ( (int)sub_1402A3F70(0LL, a2) < 0 )
      {
        ExFreePoolWithTag(v11, 0);
        v11 = (void *)sub_1402A3A14(a1, a2);
      }
    }
    if ( a5 )
      *a5 = v11;
    if ( a6 )
      *a6 = 0LL;
    return 0LL;
  }
  return result;
}

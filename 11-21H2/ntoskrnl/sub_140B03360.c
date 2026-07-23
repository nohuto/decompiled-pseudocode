/*
 * XREFs of sub_140B03360 @ 0x140B03360
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140791480 (ExUnsubscribeWnfStateChange.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 *     sub_1408455A0 @ 0x1408455A0 (sub_1408455A0.c)
 *     sub_1409A0CB8 @ 0x1409A0CB8 (sub_1409A0CB8.c)
 *     sub_1409A0CD4 @ 0x1409A0CD4 (sub_1409A0CD4.c)
 *     sub_1409A1190 @ 0x1409A1190 (sub_1409A1190.c)
 *     sub_140B019D0 @ 0x140B019D0 (sub_140B019D0.c)
 *     sub_140B01B6C @ 0x140B01B6C (sub_140B01B6C.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 */

__int64 __fastcall sub_140B03360(int a1)
{
  NTSTATUS v1; // ebx
  _RTL_RUN_ONCE *v2; // rax
  _RTL_RUN_ONCE *v3; // rax
  __int64 v4; // rdx

  switch ( a1 )
  {
    case 0:
      RtlRunOnceInitialize(&stru_140C1C828);
      qword_140C1C818 = (__int64)&qword_140C1C810;
      v2 = (_RTL_RUN_ONCE *)&unk_140C1C850;
      qword_140C1C810 = (__int64)&qword_140C1C810;
      do
      {
        RtlRunOnceInitialize(v2 - 2);
        v3[1].Ptr = v3;
        v3->Ptr = v3;
        v2 = v3 + 4;
      }
      while ( v4 != 1 );
      qword_140C1C3B0 = 0LL;
      xmmword_140C1C3A0 = 0LL;
      byte_140C1C940 = 1;
      return 0;
    case 1:
      v1 = sub_140B2984C();
      if ( v1 >= 0 )
      {
        sub_140B01B6C();
        return (unsigned int)v1;
      }
      goto LABEL_15;
    case 3:
      v1 = sub_1408455A0();
      if ( v1 < 0 )
        goto LABEL_15;
      byte_140C1C830 = 1;
      v1 = sub_140B019D0();
      if ( v1 < 0 )
        goto LABEL_15;
      return 0;
  }
  v1 = -1073741811;
LABEL_15:
  if ( byte_140C1C390 )
  {
    sub_1409A0CD4();
    byte_140C1C390 = 0;
  }
  if ( byte_140C1C379 )
  {
    ExUnsubscribeWnfStateChange((void *)qword_140C1C380);
    byte_140C1C379 = 0;
  }
  if ( byte_140C1C830 )
  {
    sub_1409A0CB8();
    byte_140C1C830 = 0;
  }
  while ( (__int64 *)qword_140C1C810 != &qword_140C1C810 )
    sub_1409A1190((ULONG *)qword_140C1C810);
  byte_140C1C940 = 0;
  return (unsigned int)v1;
}

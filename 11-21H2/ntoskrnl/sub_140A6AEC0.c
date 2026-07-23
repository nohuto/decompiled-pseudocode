/*
 * XREFs of sub_140A6AEC0 @ 0x140A6AEC0
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeAttachProcess @ 0x140252530 (KeAttachProcess.c)
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     KeAcquireGuardedMutex @ 0x14029ECC0 (KeAcquireGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140389F20 (CcWaitForCurrentLazyWriterActivity.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140601514 @ 0x140601514 (sub_140601514.c)
 *     sub_1407EBF04 @ 0x1407EBF04 (sub_1407EBF04.c)
 *     sub_1407FDA6C @ 0x1407FDA6C (sub_1407FDA6C.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 *     sub_14082EFB8 @ 0x14082EFB8 (sub_14082EFB8.c)
 *     sub_140911B58 @ 0x140911B58 (sub_140911B58.c)
 *     sub_1409681E4 @ 0x1409681E4 (sub_1409681E4.c)
 *     sub_140983EF0 @ 0x140983EF0 (sub_140983EF0.c)
 *     sub_140989C70 @ 0x140989C70 (sub_140989C70.c)
 *     sub_1409A0D80 @ 0x1409A0D80 (sub_1409A0D80.c)
 *     sub_1409A0FA4 @ 0x1409A0FA4 (sub_1409A0FA4.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_1409B1468 @ 0x1409B1468 (sub_1409B1468.c)
 *     sub_140A49448 @ 0x140A49448 (sub_140A49448.c)
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 *     sub_140A651B8 @ 0x140A651B8 (sub_140A651B8.c)
 *     sub_140A6A3E0 @ 0x140A6A3E0 (sub_140A6A3E0.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 *     sub_140A6C7A8 @ 0x140A6C7A8 (sub_140A6C7A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __noreturn sub_140A6AEC0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  PVOID *v5; // rbx
  char *v6; // rdx
  __int64 v7; // r8
  char *v8; // r9
  struct _KPROCESS *v9; // rcx
  char *v10; // rdx
  __int64 v11; // r8
  char *v12; // r9

  sub_1407EBF04(10, 1);
  sub_140256CA0(&stru_140038480);
  sub_1409A0FA4();
  *(_QWORD *)(*(_QWORD *)&qword_140C227F8 + 16LL) = KeGetCurrentThread();
  sub_140256CA0(&stru_140037CF0);
  sub_1409681E4();
  sub_140256CA0(&stru_140037A78);
  if ( !*(_QWORD *)&qword_140C227F0 )
    sub_14042A5E0(v1, v0);
  sub_140601514();
  if ( dword_140C23508 )
  {
    sub_1409B1074();
    KeSetEvent(&stru_140C23960, 0, 0);
    KeAcquireGuardedMutex(&stru_140C23920);
    byte_140C5AD33 = 0;
    KeReleaseGuardedMutex(&stru_140C23920);
    while ( 1 )
    {
      v4 = qword_140C23980;
      if ( (__int64 *)qword_140C23980 == &qword_140C23980 )
        break;
      if ( *(__int64 **)(qword_140C23980 + 8) != &qword_140C23980
        || (v3 = *(_QWORD *)qword_140C23980, *(_QWORD *)(*(_QWORD *)qword_140C23980 + 8LL) != qword_140C23980) )
      {
        __fastfail(3u);
      }
      qword_140C23980 = *(_QWORD *)qword_140C23980;
      *(_QWORD *)(v3 + 8) = &qword_140C23980;
      sub_14042A5E0(*(_QWORD *)(v4 + 24), v2);
    }
    while ( 1 )
    {
      v5 = (PVOID *)qword_140C23990;
      if ( !qword_140C23990 )
        break;
      qword_140C23990 = *(PVOID *)qword_140C23990;
      KeWaitForSingleObject(v5[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v5[1], 0x64536F50u);
      ExFreePoolWithTag(v5, 0);
    }
  }
  TmShutdownSystem();
  sub_140911B58();
  sub_140A6C7A8(0LL);
  sub_140256CA0(&stru_140038420);
  sub_140A651B8(0);
  sub_140256CA0(&stru_140039710);
  if ( dword_140C23508 )
  {
    sub_140256CA0(&stru_140038A68);
    sub_1409B1468();
    sub_140256CA0(&stru_140037AE8);
  }
  if ( (dword_140C23508 & 0x10) != 0 )
    sub_140983EF0(0LL, v6, v7, v8);
  sub_140256CA0(&stru_1400389A0);
  sub_140911B58();
  sub_140911B58();
  sub_140256CA0(&stru_140039300);
  if ( byte_140C5AE14 )
    EtwWriteEndScenario((PVOID *)RegHandle, &stru_1400397A8, &stru_14003C0A8, 0, 0LL);
  sub_1409A0D80();
  sub_1407FDA6C(0);
  sub_140A6C7A8(1LL);
  sub_140A6A3E0(0);
  sub_140989C70();
  sub_1407EBF04(10, 2);
  sub_14082EFB8();
  sub_140256CA0(&stru_1400398B0);
  sub_140A651B8(1);
  sub_140256CA0(&stru_140038378);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140C227F0 )
  {
    v9 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140C227F0 + 8LL);
    if ( v9 )
      KeAttachProcess(v9);
    sub_1403D99B4(qword_140C227F0, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140C227F0 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140C227F0 + 64LL));
  }
  byte_140C09740 = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140C227F8 + 448LL) = 0;
  sub_140A50C40((void *)(*(_QWORD *)&qword_140C227F8 + 48LL));
  sub_140A49448();
  sub_140A6C7A8(2LL);
  if ( (dword_140C23508 & 0x10) != 0 )
    sub_140983EF0((PVOID *)2, v10, v11, v12);
  sub_140A6A3E0(2);
  sub_140A6BE04((unsigned int)qword_140C227C4);
}

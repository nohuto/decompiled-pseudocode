/*
 * XREFs of sub_14075EA10 @ 0x14075EA10
 * Callers:
 *     sub_1406797C8 @ 0x1406797C8 (sub_1406797C8.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402D1708 @ 0x1402D1708 (sub_1402D1708.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14067B1DC @ 0x14067B1DC (sub_14067B1DC.c)
 *     sub_14075E908 @ 0x14075E908 (sub_14075E908.c)
 *     sub_14075EB84 @ 0x14075EB84 (sub_14075EB84.c)
 *     sub_140947068 @ 0x140947068 (sub_140947068.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075EA10(UNICODE_STRING *a1, void *a2, __int64 a3, unsigned int a4, int a5, _OWORD *a6)
{
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  UNICODE_STRING P; // [rsp+30h] [rbp-18h] BYREF

  P = 0LL;
  if ( byte_140C4E508 || !byte_140D3B044 )
    return 0LL;
  v8 = sub_14067B1DC(a1, a2, &P);
  if ( v8 < 0 )
  {
    if ( (dword_140D3CA24 & 8) == 0 )
    {
      dword_140D3CA24 |= 8u;
      P = 0LL;
      RtlInitUnicodeString(&P, L"BUILD DRIVER PATH FAILED");
      sub_140947068(&P, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C45F40, 1u);
    v8 = sub_14075EB84(&P, a3, v11, a6);
    if ( v8 == -1073741823 )
      v8 = sub_14075E908((__int64)&P, a3, a4, a6);
    if ( v8 == -1073740948 )
    {
      if ( !a5 )
        v8 = -1073740949;
    }
    else if ( v8 == -1073740949 && a5 )
    {
      v8 = -1073740948;
    }
    ExReleaseResourceLite(&stru_140C45F40);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P.Buffer, 0);
  }
  if ( (unsigned int)(v8 + 1073740949) <= 1 )
  {
    if ( (byte_140C0DD4A & 2) != 0 )
      sub_1402D1708((__int64)qword_140C03910, (__int64)qword_140014FA0, v9, (__int64)a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}

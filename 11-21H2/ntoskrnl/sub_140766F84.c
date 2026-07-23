/*
 * XREFs of sub_140766F84 @ 0x140766F84
 * Callers:
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_140563B98 @ 0x140563B98 (sub_140563B98.c)
 *     sub_140563CAC @ 0x140563CAC (sub_140563CAC.c)
 *     sub_1406E34FC @ 0x1406E34FC (sub_1406E34FC.c)
 *     sub_14076E82C @ 0x14076E82C (sub_14076E82C.c)
 *     sub_14078C9E8 @ 0x14078C9E8 (sub_14078C9E8.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140766F84(__int64 a1, const WCHAR *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD **v9; // r14
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  const wchar_t *v16; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *Str2; // [rsp+98h] [rbp+20h] BYREF

  Str2 = 0LL;
  DestinationString = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
  RtlInitUnicodeString(&DestinationString, a2);
  v9 = (_QWORD **)sub_14076E82C(&DestinationString);
  if ( v9 )
  {
    if ( (byte_140C0DD4C & 2) != 0 )
      sub_140563B98(v7, (const EVENT_DESCRIPTOR *)qword_14003B720, v8, a2, L"DRIVERENUM", 0LL);
    v4 = 1;
    v10 = sub_14078C9E8(200LL, 1466986064LL, &Str2, 2LL, L"SWD\\", L"DRIVERENUM");
    if ( v10 >= 0 )
    {
      v14 = *v9;
      while ( v14 != v9 )
      {
        v15 = (__int64)(v14 - 12);
        v16 = (const wchar_t *)*(v14 - 11);
        v14 = (_QWORD *)*v14;
        if ( !wcsicmp(v16, Str2) && (*(_DWORD *)(v15 + 4) & 1) == 0 && sub_1406E34FC(v15, a3, 1) )
          sub_14095341C(v15);
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v10 = -1073741772;
  }
  ExReleaseResourceLite(&stru_140C44820);
  KeLeaveCriticalRegion();
  if ( v4 && (byte_140C0DD4C & 2) != 0 )
    sub_140563CAC(v11, (const EVENT_DESCRIPTOR *)qword_14003B0B0, v12, a2, L"DRIVERENUM", 0LL, v10);
  return (unsigned int)v10;
}

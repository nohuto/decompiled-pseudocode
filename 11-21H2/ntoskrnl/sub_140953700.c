/*
 * XREFs of sub_140953700 @ 0x140953700
 * Callers:
 *     sub_140764DB0 @ 0x140764DB0 (sub_140764DB0.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_14056370C @ 0x14056370C (sub_14056370C.c)
 *     sub_1405637DC @ 0x1405637DC (sub_1405637DC.c)
 *     sub_140767130 @ 0x140767130 (sub_140767130.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140811C50 @ 0x140811C50 (sub_140811C50.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 */

void __fastcall sub_140953700(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  char v7; // si
  __int64 v8; // rax
  wchar_t *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_14056370C(
      a1,
      (const EVENT_DESCRIPTOR *)qword_14003B660,
      a3,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_12;
  v6 = *(_QWORD *)(a1 + 112);
  v7 = 0;
  while ( 1 )
  {
    v9 = *(wchar_t **)(v6 + 8);
    if ( wcsnicmp(v9, L"SWD\\", 4uLL) )
      break;
    v8 = sub_140767130(v9);
    if ( !v8 )
      goto LABEL_12;
    if ( !*(_DWORD *)(v8 + 180) && (*(_DWORD *)(v8 + 4) & 2) == 0 )
      goto LABEL_13;
    v6 = *(_QWORD *)(v8 + 112);
  }
  RtlInitUnicodeString(&DestinationString, v9);
  v10 = sub_140779C10((__int64)&DestinationString, 0x746C6644u);
  if ( v10 )
    ObfDereferenceObject(v10);
  else
LABEL_12:
    v7 = 1;
LABEL_13:
  v11 = *(_QWORD *)(a1 + 144);
  if ( v11 && _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL) )
  {
    v3 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v7 )
  {
    sub_140811C50(a1 + 72, 0);
    sub_14095341C(a1, v12, v13);
  }
  ExReleaseResourceLite(&stru_140C44820);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741536;
    IofCompleteRequest(v3, 0);
  }
  if ( (byte_140C0DD4C & 2) != 0 )
    sub_1405637DC(
      v14,
      (const EVENT_DESCRIPTOR *)qword_14003B530,
      v15,
      *(const wchar_t **)(a1 + 8),
      *(const wchar_t **)(a1 + 16),
      v7);
}

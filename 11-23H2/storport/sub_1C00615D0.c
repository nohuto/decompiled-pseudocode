/*
 * XREFs of sub_1C00615D0 @ 0x1C00615D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C000EF50 @ 0x1C000EF50 (sub_1C000EF50.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     sub_1C001FE14 @ 0x1C001FE14 (sub_1C001FE14.c)
 *     sub_1C0068BC0 @ 0x1C0068BC0 (sub_1C0068BC0.c)
 */

__int64 __fastcall sub_1C00615D0(__int64 a1, IRP *a2, ULONG_PTR a3)
{
  __int64 DeviceExtension; // rbp
  __int64 *v6; // r11
  __int64 v7; // r11
  __int64 v8; // rdi
  void *v9; // rcx
  __int64 v10; // rcx
  ULONG_PTR BugCheckParameter4; // r11
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-18h] BYREF

  DeviceExtension = (__int64)a2->Tail.Overlay.CurrentStackLocation[-1].DeviceObject->DeviceExtension;
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v6 = *(__int64 **)(a3 + 64);
  else
    v6 = *(__int64 **)(a3 + 24);
  v7 = *v6;
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = *(_QWORD *)(v7 + 48);
  *(_BYTE *)(v8 + 17) &= ~4u;
  if ( a2->IoStatus.Status < 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 3, 1) != 4 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 2, 1) == 4 )
  {
LABEL_9:
    sub_1C000EF50(*(_QWORD *)(DeviceExtension + 24), v8, 1);
    goto LABEL_10;
  }
  v10 = *(_QWORD *)(DeviceExtension + 24);
  *(_OWORD *)BugCheckParameter2 = 0LL;
  sub_1C0010EE0(*(_QWORD *)(v10 + 16), (__int64)BugCheckParameter2);
  if ( dword_1C00933E0 == 1 )
  {
    sub_1C0068BC0(v8, BugCheckParameter2);
  }
  else if ( dword_1C00933E0 == 2 )
  {
    KeBugCheckEx(0xF0u, 2uLL, BugCheckParameter2[1], a3, BugCheckParameter4);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 776), 3, 2);
LABEL_10:
  sub_1C000729C(DeviceExtension);
  sub_1C001FE14(a2);
  if ( *(_BYTE *)(a3 + 2) == 40 )
    v9 = *(void **)(a3 + 64);
  else
    v9 = *(void **)(a3 + 24);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72536152u);
  ExFreePoolWithTag((PVOID)a3, 0x72536152u);
  return 3221225494LL;
}

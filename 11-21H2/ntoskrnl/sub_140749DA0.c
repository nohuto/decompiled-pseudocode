/*
 * XREFs of sub_140749DA0 @ 0x140749DA0
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D2574 @ 0x1402D2574 (sub_1402D2574.c)
 *     sub_1402D301C @ 0x1402D301C (sub_1402D301C.c)
 *     sub_1402D3C18 @ 0x1402D3C18 (sub_1402D3C18.c)
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140555FF0 @ 0x140555FF0 (sub_140555FF0.c)
 *     sub_140560F74 @ 0x140560F74 (sub_140560F74.c)
 *     sub_14074ECA8 @ 0x14074ECA8 (sub_14074ECA8.c)
 *     sub_14074ED04 @ 0x14074ED04 (sub_14074ED04.c)
 *     sub_140950084 @ 0x140950084 (sub_140950084.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140749DA0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // eax
  int v7; // r14d
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdx
  _QWORD v14[4]; // [rsp+40h] [rbp-78h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-58h] BYREF

  v14[0] = 0LL;
  PreviousAffinity = 0LL;
  if ( (byte_140C0DD4B & 8) != 0 )
    sub_140560F74(
      *(_WORD *)(a2 + 56) >> 1,
      a2,
      a3,
      a4,
      *(_WORD *)(a2 + 56) >> 1,
      *(_QWORD *)(a2 + 64),
      *(const wchar_t **)(a1 + 48));
  v6 = sub_1402D301C(*(_QWORD *)(a1 + 32), &PreviousAffinity);
  v14[1] = a1;
  v14[2] = a2;
  v7 = v6;
  v14[3] = KeGetCurrentThread();
  v8 = sub_14074ECA8(4LL, v14);
  v9 = sub_1402D2574(*(struct _DEVICE_OBJECT **)(a1 + 32), (struct _DRIVER_OBJECT *)a2);
  if ( v8 )
  {
    v11 = *(_QWORD *)(v8 + 8);
    ExDeleteTimer(*(_QWORD *)(v11 + 56), 1, 1, 0LL);
    *(_QWORD *)(v11 + 56) = 0LL;
    if ( *(int *)(v11 + 96) > 0 )
      KeWaitForSingleObject((PVOID)(v11 + 104), Executive, 0, 0, 0LL);
    ExFreePoolWithTag((PVOID)v11, 0x54645750u);
    v12 = *(unsigned int *)(v8 + 16);
    *(_QWORD *)(v8 + 8) = 0LL;
    sub_14074ED04(0LL, v12);
    if ( *(_BYTE *)(v8 + 32) )
      sub_140950084(v8, 0LL);
    sub_1402D3C18((void *)v8);
  }
  if ( v7 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (byte_140C0DD4B & 8) != 0 )
    sub_140555FF0(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B380, v10, v9);
  return v9;
}

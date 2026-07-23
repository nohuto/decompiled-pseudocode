/*
 * XREFs of sub_140A69140 @ 0x140A69140
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140562A68 @ 0x140562A68 (sub_140562A68.c)
 *     sub_140952A20 @ 0x140952A20 (sub_140952A20.c)
 *     sub_140A68674 @ 0x140A68674 (sub_140A68674.c)
 *     sub_140A6927C @ 0x140A6927C (sub_140A6927C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A69140(PVOID P)
{
  int v2; // eax
  struct _KEVENT *v3; // rcx
  int v4; // ebx
  PVOID v5[2]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v6[3]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v7; // [rsp+80h] [rbp-28h]
  int v8; // [rsp+88h] [rbp-20h]

  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 0;
  v5[0] = (PVOID)(qword_140C448A8 + 33048);
  v5[1] = (PVOID)(qword_140C448A8 + 33096);
  if ( KeWaitForMultipleObjects(2u, v5, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    sub_140952A20();
    v2 = sub_140A68674((__int64)v6);
    v3 = (struct _KEVENT *)qword_140C448A8;
    v4 = v2;
    *(_DWORD *)(qword_140C448A8 + 33144) = v2;
    KeSetEvent(v3 + 1378, 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(qword_140C448A8 + 33096), Executive, 0, 0, 0LL);
      sub_140A6927C(v6);
    }
    sub_140562A68();
  }
  KeSetEvent((PRKEVENT)(qword_140C448A8 + 33120), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}

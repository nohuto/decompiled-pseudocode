/*
 * XREFs of sub_14067BE48 @ 0x14067BE48
 * Callers:
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 * Callees:
 *     sub_140208958 @ 0x140208958 (sub_140208958.c)
 *     sub_140208994 @ 0x140208994 (sub_140208994.c)
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_140657990 @ 0x140657990 (sub_140657990.c)
 *     sub_14067BD84 @ 0x14067BD84 (sub_14067BD84.c)
 *     sub_14067C24C @ 0x14067C24C (sub_14067C24C.c)
 *     sub_14067C3A4 @ 0x14067C3A4 (sub_14067C3A4.c)
 *     sub_14067C45C @ 0x14067C45C (sub_14067C45C.c)
 *     sub_14067EB68 @ 0x14067EB68 (sub_14067EB68.c)
 *     sub_14067EDC0 @ 0x14067EDC0 (sub_14067EDC0.c)
 *     sub_14067EE40 @ 0x14067EE40 (sub_14067EE40.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_14071B5A0 @ 0x14071B5A0 (sub_14071B5A0.c)
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 */

BOOLEAN __fastcall sub_14067BE48(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rcx
  REGHANDLE v9; // r15
  unsigned int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // r9d
  ULONGLONG v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  int v24; // r14d
  unsigned int v25; // ebx
  _PRIVILEGE_SET *v26; // rcx
  unsigned int v27; // esi
  unsigned int v28; // eax
  REGHANDLE v29; // rbx
  BOOLEAN result; // al
  signed __int32 v31[8]; // [rsp+0h] [rbp-A9h] BYREF
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-89h]
  __int64 v33; // [rsp+28h] [rbp-81h]
  __int16 v34; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+38h] [rbp-71h] BYREF
  _LIST_ENTRY ListHead; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v38; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40[4]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  ListHead = 0LL;
  InitializeListHead(&ListHead);
  v6 = *(_DWORD *)(v3 + 4112) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 6;
  v7 = *(_QWORD *)(v3 + 4152);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v3 + 64);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      *(_DWORD *)(v8 + 144) &= ~1u;
    else
      *(_DWORD *)(v8 + 144) |= 1u;
    sub_1406CA514(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v9 = qword_140D3B010;
  v34 = 0;
  EventDescriptor = (EVENT_DESCRIPTOR)xmmword_140015B90;
  if ( EtwEventEnabled(qword_140D3B010, &EventDescriptor) )
  {
    v10 = 0;
    if ( *(_QWORD *)(v3 + 1848) )
    {
      v40[0].Ptr = *(_QWORD *)(v3 + 1848);
      v10 = 1;
      v40[0].Size = *(unsigned __int16 *)(v3 + 1840);
      v40[0].Reserved = 0;
    }
    v11 = v10;
    v12 = v10 + 1;
    v40[v11].Ptr = (ULONGLONG)&v34;
    *(_QWORD *)&v40[v11].Size = 2LL;
    v13 = *(_QWORD *)(v3 + 1864);
    if ( v13 )
    {
      v14 = v12++;
      v40[v14].Ptr = v13;
      v40[v14].Size = *(unsigned __int16 *)(v3 + 1856);
      *(&v40[0].Reserved + 1 * v14) = 0;
    }
    v15 = v12;
    v40[v15].Ptr = (ULONGLONG)&v34;
    *(_QWORD *)&v40[v15].Size = 2LL;
    EtwWrite(v9, &EventDescriptor, 0LL, v12 + 1, v40);
  }
  sub_1402089E0(v3, a1, (__int64)&ListHead);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 1;
    sub_140208958();
  }
  sub_14067EE40(a1, 1LL, &ListHead);
  sub_14067EDC0(a1, &ListHead);
  sub_14067EB68(a1);
  sub_140657990(a1);
  LOBYTE(v16) = 1;
  sub_14071B5A0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), v16);
  sub_140346C60(&ListHead);
  sub_140AB4260(v18, v17, v19, v20, UserData, v33);
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    sub_14068934C();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(qword_140CE1FC8, (PUNICODE_STRING)(v3 + 1856));
  sub_14067C45C(v3);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  sub_140208994(v3);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v22 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v22 + 8) != v3 + 1624 || (v23 = *(_QWORD **)(v3 + 1632), *v23 != v3 + 1624) )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
  }
  sub_14067C3A4(v3);
  v24 = sub_1406885A4(v3);
  if ( v24 == -1073741811 )
    v24 = 0;
  v25 = *(_DWORD *)(v3 + 280) + 4096;
  sub_14079B518(v3);
  if ( v24 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1800) - v25) > 0x100000 )
    sub_14068EC28(v3, 0LL, v25, 0LL);
  sub_14067C24C(v3);
  v26 = *(_PRIVILEGE_SET **)(v3 + 4792);
  if ( v26 )
    sub_14067BD84(v26);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 0;
    _InterlockedOr(v31, 0);
    if ( *(_QWORD *)(v3 + 4776) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4776), 0LL);
  }
  v27 = 0;
  if ( *(_DWORD *)(v3 + 2920) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2928) + 8LL * v27), 0, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v3 + 2928) + 8LL * v27));
      v28 = *(_DWORD *)(v3 + 2920);
      ++v27;
    }
    while ( v27 < v28 );
    if ( v28 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2928), 0);
  }
  v29 = qword_140D3B010;
  v35 = v24;
  v38 = (EVENT_DESCRIPTOR)xmmword_140015BA0;
  result = EtwEventEnabled(qword_140D3B010, &v38);
  if ( result )
  {
    *(_QWORD *)&v39.Size = 4LL;
    v39.Ptr = (ULONGLONG)&v35;
    return EtwWrite(v29, &v38, 0LL, 1u, &v39);
  }
  return result;
}

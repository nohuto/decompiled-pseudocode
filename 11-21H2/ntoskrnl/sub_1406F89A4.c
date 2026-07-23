/*
 * XREFs of sub_1406F89A4 @ 0x1406F89A4
 * Callers:
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 * Callees:
 *     sub_140216E18 @ 0x140216E18 (sub_140216E18.c)
 *     sub_140216EB4 @ 0x140216EB4 (sub_140216EB4.c)
 *     sub_14024CB6C @ 0x14024CB6C (sub_14024CB6C.c)
 *     sub_14024E9E0 @ 0x14024E9E0 (sub_14024E9E0.c)
 *     sub_140251BDC @ 0x140251BDC (sub_140251BDC.c)
 *     sub_14025247C @ 0x14025247C (sub_14025247C.c)
 *     sub_14025F344 @ 0x14025F344 (sub_14025F344.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_140281C00 @ 0x140281C00 (sub_140281C00.c)
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D75D4 @ 0x1402D75D4 (sub_1402D75D4.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_14030EA00 @ 0x14030EA00 (sub_14030EA00.c)
 *     sub_14030EB30 @ 0x14030EB30 (sub_14030EB30.c)
 *     sub_14030EB64 @ 0x14030EB64 (sub_14030EB64.c)
 *     sub_14030EB80 @ 0x14030EB80 (sub_14030EB80.c)
 *     sub_14032A72C @ 0x14032A72C (sub_14032A72C.c)
 *     sub_14057FE58 @ 0x14057FE58 (sub_14057FE58.c)
 *     sub_1405B3370 @ 0x1405B3370 (sub_1405B3370.c)
 *     sub_140693F68 @ 0x140693F68 (sub_140693F68.c)
 *     sub_1406EC1C4 @ 0x1406EC1C4 (sub_1406EC1C4.c)
 *     sub_1406F8C0C @ 0x1406F8C0C (sub_1406F8C0C.c)
 *     sub_14097D034 @ 0x14097D034 (sub_14097D034.c)
 *     sub_1409D9F0C @ 0x1409D9F0C (sub_1409D9F0C.c)
 */

char __fastcall sub_1406F89A4(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  unsigned __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  int v9; // r14d
  _QWORD *v10; // rax
  void *v11; // rbx
  void *v12; // r12
  unsigned __int64 v13; // rax
  BOOL v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rax
  unsigned __int32 v23; // ett
  __int64 v24; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 2288);
  memset(&Event, 0, sizeof(Event));
  if ( v1 )
    sub_1409D9F0C();
  v3 = *(_DWORD *)(a1 + 1124);
  if ( (v3 & 0x20) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 1124) & 0xC00;
    if ( v4 > 0x400 )
    {
      if ( v4 != 2048 )
        goto LABEL_6;
      sub_140216EB4(a1, v1, *(_QWORD *)(a1 + 1776) - 4LL);
      v22 = sub_14032A72C(a1);
      sub_140216E18(v22, *(_QWORD *)(a1 + 1776) - 4LL);
      v4 = *(_DWORD *)(a1 + 1124);
      do
      {
        v23 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1124), v4 & 0xFFFFF3FF | 0x400, v4);
      }
      while ( v23 != v4 );
      v21 = (*(_DWORD *)(a1 + 1124) & 0x10000) == 0;
LABEL_32:
      if ( !v21 )
        LOBYTE(v4) = sub_140693F68();
      return v4;
    }
LABEL_31:
    v21 = (v3 & 0x10000) == 0;
    goto LABEL_32;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( (_BYTE)v4 != 96 )
    goto LABEL_31;
LABEL_6:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v27 = sub_14025F344((__int64)CurrentThread, a1);
  v6 = sub_14032A72C(a1);
  v7 = *(_QWORD *)(a1 + 1680);
  v8 = v6;
LABEL_7:
  while ( 1 )
  {
    v9 = 0;
    sub_14030EB30((__int64)CurrentThread, a1);
    v10 = sub_1402D75D4(a1);
    v11 = v10;
    if ( !v10 )
      break;
    sub_14030EB64((__int64)v10);
    while ( 1 )
    {
      v12 = v11;
      v13 = sub_140281C00((unsigned __int64)v11);
      v11 = (void *)v13;
      if ( v13 )
        sub_14030EB64(v13);
      sub_14030EA00((__int64)CurrentThread, a1);
      sub_14030B7F0((__int64)CurrentThread, (__int64)v12);
      if ( (unsigned int)sub_1406F8C0C(v12) )
        v9 = 1;
      sub_14030EB30((__int64)CurrentThread, a1);
      if ( !v11 )
        break;
      sub_14030B7F0((__int64)CurrentThread, (__int64)v11);
      if ( (unsigned int)sub_14030EB80((__int64)v11) )
      {
        sub_140281C44((__int64)CurrentThread, (__int64)v11);
        sub_14030EA00((__int64)CurrentThread, a1);
        sub_14030B7F0((__int64)CurrentThread, (__int64)v11);
        sub_1406F8C0C(v11);
        goto LABEL_7;
      }
      sub_140281C44((__int64)CurrentThread, (__int64)v11);
    }
    if ( !v9 )
      break;
    sub_14030EA00((__int64)CurrentThread, a1);
  }
  *(_QWORD *)(v7 + 304) = &Event;
  v14 = _InterlockedAdd((volatile signed __int32 *)(v7 + 280), 0xFFFFFFFF) != 0;
  sub_14030EA00((__int64)CurrentThread, a1);
  if ( v14 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(a1 + 1851) & 0x60) == 0x60 )
    sub_14057FE58(a1 + 1664);
  sub_140251BDC(v16, v15);
  sub_14024CB6C();
  sub_14030B820((__int64)CurrentThread, a1);
  *(_QWORD *)(v7 + 304) = 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 376LL);
  if ( v17 )
  {
    v24 = sub_14097D034(v17);
    if ( v24 )
    {
      *(_QWORD *)(a1 + 2032) = 0LL;
      sub_1405B3370(a1, v24);
    }
  }
  v18 = *(_QWORD **)(a1 + 1408);
  if ( v18 && *v18 )
    *v18 = 0LL;
  sub_14025247C(a1, 0);
  v19 = sub_14024E9E0(a1);
  sub_140281A58((__int64)CurrentThread, a1);
  sub_140216EB4(a1, v20, v19);
  LOBYTE(v4) = sub_140216E18(v8, v19);
  if ( (*(_DWORD *)(a1 + 1124) & 0x10000) != 0 )
    LOBYTE(v4) = sub_140693F68();
  if ( v27 )
    LOBYTE(v4) = sub_1406EC1C4(v8);
  return v4;
}

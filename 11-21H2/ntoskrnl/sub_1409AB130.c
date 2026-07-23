/*
 * XREFs of sub_1409AB130 @ 0x1409AB130
 * Callers:
 *     sub_1409A6714 @ 0x1409A6714 (sub_1409A6714.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A8FE0 @ 0x1409A8FE0 (sub_1409A8FE0.c)
 */

__int64 __fastcall sub_1409AB130(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-60h]
  _QWORD v13[3]; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+6Ch] [rbp-14h]
  __int128 v16; // [rsp+70h] [rbp-10h]
  void *v17; // [rsp+98h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v17 = 0LL;
  v5 = *((_BYTE *)CurrentThread + 562);
  v15 = 0;
  v13[1] = 0LL;
  v13[2] = 0LL;
  v13[0] = 48LL;
  v14 = 32;
  v16 = 0LL;
  v6 = sub_14072B3B0(0, qword_140D3CDB8, (int)v13, v5, v12, 176, 0, 0, &v17, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (char *)v17;
    memset(v17, 0, 0xB0uLL);
    *((_QWORD *)v8 + 20) = v8 + 152;
    *((_QWORD *)v8 + 19) = v8 + 152;
    ExInitializeResourceLite((PERESOURCE)(v8 + 24));
    KeInitializeEvent((PRKEVENT)(v8 + 128), NotificationEvent, 0);
    v8[168] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v9 = v17;
    *((_QWORD *)v17 + 2) = a1;
    v10 = *(_QWORD **)(a1 + 88);
    if ( *v10 != a1 + 80 )
      __fastfail(3u);
    v9[1] = v10;
    *v9 = a1 + 80;
    *v10 = v9;
    *(_QWORD *)(a1 + 88) = v9;
    sub_1409A8FE0((__int64)v9);
    *a2 = v9;
    return 0;
  }
  else
  {
    sub_1409A8628("TtmiCreateEventQueue", 566, v6, v6);
  }
  return v7;
}

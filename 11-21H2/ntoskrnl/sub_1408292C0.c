/*
 * XREFs of sub_1408292C0 @ 0x1408292C0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x1403588D0 (KeInitializeTimer2.c)
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     sub_1403C0F80 @ 0x1403C0F80 (sub_1403C0F80.c)
 *     sub_1408193F4 @ 0x1408193F4 (sub_1408193F4.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void __fastcall sub_1408292C0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 296;
  if ( dword_140C22268 )
  {
    v8 = 262152;
    sub_1403725A0(v2, (__int64)sub_1405D09A0, a1, (unsigned __int8 *)&v8, 2);
  }
  else
  {
    KeInitializeTimer2(v2, (__int64)sub_1405D09A0, a1, 0LL);
  }
  v3 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 69) = -1;
  *(_DWORD *)(a1 + 80) = 100;
  *(_DWORD *)(a1 + 84) = 100;
  *(_BYTE *)(a1 + 64) = 6;
  *(_BYTE *)(a1 + 67) = 2;
  *(_DWORD *)(a1 + 76) = 1000;
  *(_DWORD *)(v3 + 48) = -1073741667;
  LODWORD(v3) = dword_140C22324;
  *(_DWORD *)(a1 + 496) = dword_140C22324;
  *(_DWORD *)(a1 + 216) = 100;
  dword_140C22324 = v3 + 1;
  KeInitializeEvent((PRKEVENT)(a1 + 448), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 472), NotificationEvent, 0);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 280) = sub_140850980;
  *(_QWORD *)(a1 + 288) = a1;
  v5 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 512) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 520) = v5;
  *(_QWORD *)(a1 + 440) = 0LL;
  LODWORD(v5) = dword_140C222F4;
  *(_QWORD *)(a1 + 432) = 0LL;
  dword_140C222F4 = v5 + 1;
  if ( !(_DWORD)v5 )
  {
    sub_140A48330(v4);
    if ( BYTE13(xmmword_140C23400) != 1 )
    {
      BYTE13(xmmword_140C23400) = 1;
      sub_1408193F4();
    }
    sub_140A47CF8(v7, v6);
  }
  sub_1403C0F80(1);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 264), DelayedWorkQueue);
}

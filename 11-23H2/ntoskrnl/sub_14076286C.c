/*
 * XREFs of sub_14076286C @ 0x14076286C
 * Callers:
 *     WbDispatchOperation @ 0x140763418 (WbDispatchOperation.c)
 * Callees:
 *     sub_1407627D8 @ 0x1407627D8 (sub_1407627D8.c)
 *     WbSetTrapFrame @ 0x140763048 (WbSetTrapFrame.c)
 *     WbGetWarbirdThread @ 0x1407631A4 (WbGetWarbirdThread.c)
 *     sub_1407633E4 @ 0x1407633E4 (sub_1407633E4.c)
 */

__int64 __fastcall sub_14076286C(__int64 a1, __int64 a2)
{
  int WarbirdThread; // eax
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v11 = 0;
  WarbirdThread = WbGetWarbirdThread(a1, a2, &v12);
  v4 = v12;
  v5 = WarbirdThread;
  if ( WarbirdThread >= 0 )
  {
    v6 = *(_DWORD *)(v12 + 16);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v12 + 24) + 32LL * (unsigned int)(v6 - 1);
      v9[1] = *(_QWORD *)(v7 + 8);
      v9[0] = *(_QWORD *)(v7 + 16);
      v10 = *(_DWORD *)(v7 + 24);
      v5 = WbSetTrapFrame(v12, v9);
      if ( v5 >= 0 )
        v5 = sub_1407627D8(a1, v4, 1);
    }
    else
    {
      v5 = -1073741811;
    }
  }
  sub_1407633E4(a1, v4);
  return (unsigned int)v5;
}

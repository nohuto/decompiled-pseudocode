/*
 * XREFs of PostPointerEventMessage @ 0x1C01E8F50
 * Callers:
 *     PostDeviceNotification @ 0x1C0102FA4 (PostDeviceNotification.c)
 *     PostPointerDeviceInRangeMessage @ 0x1C016C320 (PostPointerDeviceInRangeMessage.c)
 *     PostPointerDeviceOutOfRangeMessage @ 0x1C016C340 (PostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 *     PHIDTtoPT @ 0x1C01E8F0C (PHIDTtoPT.c)
 */

void __fastcall PostPointerEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v9; // r10
  __int64 v10; // r8
  bool v11; // zf
  struct tagQ *v12; // rax
  __int64 v13; // [rsp+70h] [rbp+17h] BYREF
  struct tagWND *v14; // [rsp+78h] [rbp+1Fh] BYREF
  struct tagQ *v15; // [rsp+80h] [rbp+27h] BYREF
  unsigned int v16; // [rsp+D8h] [rbp+7Fh] BYREF

  Flink = gPointerDeviceClients.Flink;
  if ( !a4 )
    a3 = (int)PHIDTtoPT(a1);
  while ( Flink != &gPointerDeviceClients )
  {
    v9 = Flink[-1].Flink;
    v10 = (__int64)v9[1].Flink;
    if ( a4 )
    {
      if ( a2 == 568 && a3 - 1 <= 1 )
        v11 = **(_DWORD **)(*(_QWORD *)(v10 + 456) + 40LL) == gSessionId;
      else
        v11 = *(_QWORD *)(v10 + 456) == grpdeskRitInput;
      if ( v11 )
      {
        v12 = *(struct tagQ **)(v10 + 432);
        v16 = 0;
        v15 = v12;
        v13 = v10;
        v14 = (struct tagWND *)v9;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                             (__int64 *)&v15,
                             (__int64 *)&v14,
                             (struct tagTHREADINFO **)&v13,
                             a2,
                             0LL,
                             &v16) )
          PostInputMessage(v15, v14, a2, a3, *(_QWORD *)(a1 + 784), 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v16, v13);
      }
    }
    else if ( LODWORD(Flink[-1].Blink) && *(_QWORD *)(v10 + 456) == grpdeskRitInput )
    {
      PostMessage((int)Flink[-1].Flink, a2, a3, *(_QWORD *)(a1 + 784));
    }
    Flink = Flink->Flink;
  }
}

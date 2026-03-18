/*
 * XREFs of NtUserGetMessage @ 0x1C00E3AC0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C00E3BC8 (ClientGetMessageMPH.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  int MessageMPH; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  ULONG64 v13; // rcx
  unsigned __int64 v15; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+48h] [rbp-40h] BYREF
  __int128 v17; // [rsp+58h] [rbp-30h]
  __int128 v18; // [rsp+68h] [rbp-20h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8);
  }
  else
  {
    LODWORD(v15) = 1;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)&v16, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage(&v16, a2, a3, a4, v15, 1u);
    v9 = MessageMPH;
    HIDWORD(v16) = 0;
    HIDWORD(v18) = 0;
    v11 = v17;
    v12 = v18;
    v13 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v16;
    a1[1] = v11;
    a1[2] = v12;
  }
  UserSessionSwitchLeaveCrit(v13);
  return v9;
}

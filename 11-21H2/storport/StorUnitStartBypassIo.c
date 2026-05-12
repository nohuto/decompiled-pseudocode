/*
 * XREFs of StorUnitStartBypassIo @ 0x1C0056990
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitSubmitRequest @ 0x1C0009690 (RaidUnitSubmitRequest.c)
 *     GetSrbScsiData @ 0x1C001BAA4 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     WPP_SF_qqqD @ 0x1C004C058 (WPP_SF_qqqD.c)
 *     StorEtwIORequestDispatch @ 0x1C005AAEC (StorEtwIORequestDispatch.c)
 */

__int64 __fastcall StorUnitStartBypassIo(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // r8d
  int v10; // eax
  char v11; // al
  int v12; // ecx
  int v13; // ebp
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE *SrbScsiData; // rax
  unsigned int v18; // edi
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 184);
  v6 = 0LL;
  v7 = *(_DWORD *)v2;
  v8 = *(_QWORD *)(v4 + 8);
  v20 = 0LL;
  if ( v7 != 1 )
    goto LABEL_2;
  if ( *(_BYTE *)v4 != 15
    || !v8
    || ((v11 = *(_BYTE *)(v8 + 2), v11 != 40) ? (v12 = *(_DWORD *)(v8 + 12)) : (v12 = *(_DWORD *)(v8 + 24)),
        (v12 & 0x4000) == 0) )
  {
LABEL_5:
    v9 = -1073741811;
    goto LABEL_3;
  }
  if ( v11 == 40 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v2 + 24) + 442LL) != 1 )
    {
      *(_BYTE *)(v8 + 3) = 6;
      v9 = -1073741637;
      goto LABEL_3;
    }
    v6 = v8;
    v13 = *(_DWORD *)(v8 + 20);
    v14 = *(_DWORD *)(v8 + 24);
    if ( *(_DWORD *)(v8 + 8) != 1397899864 || *(_DWORD *)(v8 + 48) || *(_QWORD *)(v8 + 72) )
    {
      *(_BYTE *)(v8 + 3) = 6;
      goto LABEL_5;
    }
  }
  else
  {
    v14 = *(_DWORD *)(v8 + 12);
    v13 = *(unsigned __int8 *)(v8 + 2);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Au,
      (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
      v2,
      a2,
      v13);
  }
  if ( (v14 & 0x100000) != 0 )
  {
    if ( (v15 = *(_QWORD *)(v2 + 24), (v16 = *(_QWORD *)(v15 + 4832)) != 0) && (*(_DWORD *)(v16 + 20) & 1) == 0
      || (*(_BYTE *)(v15 + 107) & 4) != 0
      || *(_DWORD *)(v15 + 308) != 1 )
    {
      *(_BYTE *)(v8 + 3) = 36;
LABEL_2:
      v9 = -1073741823;
LABEL_3:
      *(_QWORD *)(a2 + 56) = 0LL;
      v10 = RaidCompleteRequestEx((PIRP)a2, 0, v9);
      goto LABEL_43;
    }
  }
  if ( v13
    || (*(_BYTE *)(v8 + 2) != 40
      ? (SrbScsiData = (_BYTE *)(v8 + 72))
      : (SrbScsiData = (_BYTE *)GetSrbScsiData(v6, 0LL, 0LL, 0LL, 0LL, 0LL)),
        ((*SrbScsiData - 8) & 0x5D) != 0) )
  {
    *(_BYTE *)(v8 + 3) = 6;
    goto LABEL_2;
  }
  if ( StorEtwLoggingEnabled
    && ((byte_1C00799E1 & 8) != 0
     || (byte_1C00799E1 & 0x10) != 0
     || (byte_1C00799E1 & 2) != 0
     || (byte_1C00799E1 & 4) != 0)
    && ((*SrbScsiData - 8) & 0x5D) == 0 )
  {
    IoGetActivityIdIrp(a2, &v20);
    StorEtwIORequestDispatch(a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v10 = RaidUnitSubmitRequest(v2, a2);
LABEL_43:
  v18 = v10;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Bu,
      (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
      a1,
      v2,
      a2,
      v10);
  }
  return v18;
}

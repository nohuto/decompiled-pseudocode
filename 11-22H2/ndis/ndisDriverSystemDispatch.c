/*
 * XREFs of ndisDriverSystemDispatch @ 0x1C0034AD0
 * Callers:
 *     ndisDispatchRequest @ 0x1C0002B08 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000D070 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A098 (WPP_RECORDER_SF_D.c)
 *     ndisEtwRegisterGuids @ 0x1C0034950 (ndisEtwRegisterGuids.c)
 */

__int64 __fastcall ndisDriverSystemDispatch(char a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rdi
  unsigned __int8 *v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-40h]
  unsigned int v11; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v11 = 0;
  v5 = *(_DWORD *)(v2 + 24);
  v6 = *(_QWORD *)(v2 + 32);
  v7 = (unsigned __int8 *)(v2 + 1);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_824b22f4f32f3f23845d72b4ca1f6a19_Traceguids,
      a1,
      a2,
      *v7);
  switch ( *v7 )
  {
    case 4u:
      if ( v5 < 0x30 || !v6 || *(_DWORD *)v6 < 0x30u )
        goto LABEL_29;
      v9 = *(_QWORD *)(v6 + 24) - *(_QWORD *)&ndisControlGuid.Data1;
      if ( !v9 )
        v9 = *(_QWORD *)(v6 + 32) - *(_QWORD *)ndisControlGuid.Data4;
      if ( v9 )
      {
LABEL_29:
        v3 = -1073741811;
      }
      else
      {
        qword_1C00F76A8 = *(_QWORD *)(v6 + 8);
        byte_1C00F76A4 = BYTE2(qword_1C00F76A8);
        ndisLogger = HIDWORD(qword_1C00F76A8);
        if ( (qword_1C00F76A8 & 0x800000000LL) != 0 )
          LOBYTE(dword_1C00F76B0) = 1;
        if ( (qword_1C00F76A8 & 0x100000000LL) != 0 )
          BYTE1(dword_1C00F76B0) = 1;
        if ( (qword_1C00F76A8 & 0x200000000LL) != 0 )
          BYTE2(dword_1C00F76B0) = 1;
        if ( (qword_1C00F76A8 & 0x400000000LL) != 0 )
          HIBYTE(dword_1C00F76B0) = 1;
        if ( (qword_1C00F76A8 & 0x1000000000LL) != 0 )
          LOBYTE(word_1C00F76B4) = 1;
        if ( (qword_1C00F76A8 & 0x2000000000LL) != 0 )
          HIBYTE(word_1C00F76B4) = 1;
      }
      break;
    case 5u:
      byte_1C00F76A4 = 0;
      ndisLogger = 0;
      qword_1C00F76A8 = 0LL;
      dword_1C00F76B0 = 0;
      word_1C00F76B4 = 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      break;
    case 0xBu:
      v3 = ndisEtwRegisterGuids((char *)v6, v5, &v11);
      *(_QWORD *)(a2 + 56) = v11;
      break;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v3;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDu,
      (struct _GUID *)&WPP_824b22f4f32f3f23845d72b4ca1f6a19_Traceguids,
      v10);
  }
  return v3;
}

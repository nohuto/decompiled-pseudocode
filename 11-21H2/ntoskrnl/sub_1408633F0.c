/*
 * XREFs of sub_1408633F0 @ 0x1408633F0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     sub_1407F0F98 @ 0x1407F0F98 (sub_1407F0F98.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 */

__int64 sub_1408633F0()
{
  __int64 v0; // rdi
  __int64 v2; // rcx
  const wchar_t *v3; // rax
  __int16 v4; // cx
  int v5; // eax
  const wchar_t *v6; // rax
  __int16 v7; // di
  int v8; // eax
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-49h] BYREF
  __int128 v10[8]; // [rsp+48h] [rbp-39h] BYREF
  char v11; // [rsp+E8h] [rbp+67h] BYREF

  v0 = 0x7FFFLL;
  if ( sub_1407F0F98() )
  {
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 2;
    v2 = 0x7FFFLL;
    HIDWORD(v10[1]) = 2031619;
    *((_QWORD *)&v10[3] + 1) = sub_1409AB660;
    *(_QWORD *)&v10[4] = sub_1409AB560;
    *(__int128 *)((char *)v10 + 12) = xmmword_14003C768;
    *((_QWORD *)&v10[4] + 1) = sub_1409AB5A0;
    v3 = L"TerminalEventQueue";
    DWORD1(v10[2]) = 512;
    HIDWORD(v10[2]) = 176;
    SourceString = 0LL;
    while ( *v3 )
    {
      ++v3;
      if ( !--v2 )
        goto LABEL_11;
    }
    v4 = 2 * v2;
    SourceString.Buffer = L"TerminalEventQueue";
    SourceString.Length = -2 - v4;
    SourceString.MaximumLength = -v4;
LABEL_11:
    v5 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, (__int16 *)0x80, &qword_140D3CDB8);
    if ( v5 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v5, 0LL, 0LL);
  }
  else
  {
    qword_140D3CDB8 = 0LL;
  }
  ExInitializeResourceLite(&stru_140C1C020);
  qword_140D3CB08 = 0LL;
  if ( sub_1407F0F98() )
  {
    if ( !dword_140D3CB3C )
      dword_140D3CB3C = 3000;
    qword_140C1C108 = -300000000LL;
    ExInitializeResourceLite(&stru_140C1C0A0);
    KeInitializeTimerEx(&stru_140C1C1A0, NotificationTimer);
    KeInitializeDpc(&stru_140C1C160, (PKDEFERRED_ROUTINE)sub_1405DFE60, 0LL);
    stru_140C1C120.Parameter = 0LL;
    stru_140C1C120.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1409A3CB0;
    stru_140C1C120.List.Flink = 0LL;
    memset(v10, 0, 0x78uLL);
    LOWORD(v10[0]) = 120;
    DWORD2(v10[0]) = 400;
    BYTE2(v10[0]) = BYTE2(v10[0]) & 0xF1 | 6;
    *((_QWORD *)&v10[3] + 1) = sub_1409A3AB0;
    *(_QWORD *)&v10[4] = sub_1409A3930;
    *(__int128 *)((char *)v10 + 12) = xmmword_14003C758;
    *((_QWORD *)&v10[4] + 1) = sub_1409A39E0;
    v6 = L"Terminal";
    HIDWORD(v10[1]) = 2031619;
    DWORD1(v10[2]) = 512;
    HIDWORD(v10[2]) = 288;
    SourceString = 0LL;
    while ( *v6 )
    {
      ++v6;
      if ( !--v0 )
        goto LABEL_20;
    }
    v7 = 2 * v0;
    SourceString.Buffer = L"Terminal";
    SourceString.Length = -2 - v7;
    SourceString.MaximumLength = -v7;
LABEL_20:
    v8 = ObCreateObjectTypeEx(&SourceString, v10, 0LL, 0LL, &qword_140D3CC60);
    if ( v8 < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, v8, 0LL, 0LL);
    ExSubscribeWnfStateChange((int)&v11, (int)&qword_140037730, 1, 0, (__int64)sub_1409A4000, 0LL);
  }
  else
  {
    qword_140D3CC60 = 0LL;
  }
  sub_1406D2264((char *)&dword_140D3B908, (__int64)sub_1409AB070, 0LL);
  return sub_1406D2264((char *)&dword_140D3B8D0, 0LL, 0LL);
}

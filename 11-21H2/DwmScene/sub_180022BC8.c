/*
 * XREFs of sub_180022BC8 @ 0x180022BC8
 * Callers:
 *     sub_18002216C @ 0x18002216C (sub_18002216C.c)
 * Callees:
 *     sub_180001130 @ 0x180001130 (sub_180001130.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_180022AD4 @ 0x180022AD4 (sub_180022AD4.c)
 *     sub_18002384C @ 0x18002384C (sub_18002384C.c)
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_180022BC8(_QWORD *a1)
{
  __int64 *v2; // rdi
  size_t v3; // r8
  char *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r10
  _QWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  _SYSTEM_INFO SystemInfo; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+98h] [rbp+10h] BYREF

  *a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  sub_18002384C(a1 + 1);
  sub_18002384C(a1 + 2);
  sub_18002384C(a1 + 3);
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[8] = 0LL;
  a1[9] = 15LL;
  *((_BYTE *)a1 + 48) = 0;
  a1[12] = 0LL;
  a1[13] = 15LL;
  *((_BYTE *)a1 + 80) = 0;
  sub_180012190(a1 + 10, "CanvasDefault", 0xDuLL);
  v2 = a1 + 14;
  a1[14] = 0LL;
  GetSystemInfo(&SystemInfo);
  v3 = 5LL;
  if ( !SystemInfo.wProcessorArchitecture )
  {
    v4 = "WIN32";
    goto LABEL_9;
  }
  if ( SystemInfo.wProcessorArchitecture == 5 )
  {
    v4 = "ARM";
    goto LABEL_6;
  }
  if ( SystemInfo.wProcessorArchitecture == 9 )
  {
    v4 = "x64";
LABEL_6:
    v3 = 3LL;
    goto LABEL_9;
  }
  v4 = "UNKNOWN";
  v3 = 7LL;
LABEL_9:
  sub_180012190(a1 + 6, v4, v3);
  v5 = sub_180022AD4(&v15);
  if ( v2 != v5 )
  {
    v6 = *v5;
    *v5 = 0LL;
    v7 = *v2;
    *v2 = v6;
    if ( v7 )
      o__aligned_free();
  }
  if ( v15 )
    o__aligned_free();
  v8 = (void *)*v2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v2 + 144), 0LL);
  sub_180025C4C(v8);
  if ( !_InterlockedExchangeAdd64((volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F74D0), 1uLL) )
    sub_180001130((ULONGLONG *)&dword_1801EA1C0);
  v9 = sub_18001D684();
  if ( v9 )
  {
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 12) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj2<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    sub_180022AC0((_QWORD *)(v9 + 16), (__int64)(a1 + 1), (__int64)(a1 + 2), (__int64)(a1 + 6));
  }
  else
  {
    v10 = 0LL;
  }
  v13 = 0LL;
  v12[0] = a1[4];
  a1[4] = v10 + 16;
  v12[1] = a1[5];
  a1[5] = v10;
  sub_180010910((__int64)v12);
  sub_180010910((__int64)&v13);
  return a1;
}

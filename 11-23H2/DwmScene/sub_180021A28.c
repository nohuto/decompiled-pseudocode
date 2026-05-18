/*
 * XREFs of sub_180021A28 @ 0x180021A28
 * Callers:
 *     sub_180021124 @ 0x180021124 (sub_180021124.c)
 * Callees:
 *     sub_1800013E0 @ 0x1800013E0 (sub_1800013E0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180021990 @ 0x180021990 (sub_180021990.c)
 *     sub_180021D9C @ 0x180021D9C (sub_180021D9C.c)
 *     sub_180021ECC @ 0x180021ECC (sub_180021ECC.c)
 *     sub_1800224D4 @ 0x1800224D4 (sub_1800224D4.c)
 *     sub_180024220 @ 0x180024220 (sub_180024220.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180021A28(__int64 a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  size_t v4; // r8
  const char *v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  v2 = a1 + 8;
  sub_1800224D4(a1 + 8);
  sub_1800224D4(a1 + 16);
  sub_1800224D4(a1 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 15LL;
  *(_BYTE *)(a1 + 48) = 0;
  sub_180010DD0((_QWORD *)(a1 + 80), (__int64)"CanvasDefault");
  v3 = (__int64 *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  GetSystemInfo(&SystemInfo);
  v4 = 5LL;
  if ( SystemInfo.wProcessorArchitecture )
  {
    if ( SystemInfo.wProcessorArchitecture == 5 )
    {
      v5 = "ARM";
    }
    else
    {
      if ( SystemInfo.wProcessorArchitecture != 9 )
      {
        v5 = "UNKNOWN";
        v4 = 7LL;
        goto LABEL_9;
      }
      v5 = "x64";
    }
    v4 = 3LL;
  }
  else
  {
    v5 = "WIN32";
  }
LABEL_9:
  sub_180011BA0((void **)(a1 + 48), v5, v4);
  v6 = sub_180021990(&v14);
  if ( v3 != v6 )
  {
    v7 = *v6;
    *v6 = 0LL;
    sub_1800246F8(a1 + 112, v7);
  }
  sub_180021D9C(&v14);
  v8 = (void *)*v3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v3 + 144), 0LL);
  sub_180024220(v8);
  if ( !sub_180021ECC(&unk_1801D33C8) )
    sub_1800013E0((ULONGLONG *)&dword_1801C81C0);
  v9 = sub_18001C190();
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 12) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj2<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    *(_QWORD *)(v9 + 16) = v2;
    *(_QWORD *)(v9 + 24) = a1 + 16;
    *(_QWORD *)(v9 + 32) = a1 + 48;
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = v10 + 16;
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v10;
  if ( v11 )
    sub_180010530(v11);
  return a1;
}

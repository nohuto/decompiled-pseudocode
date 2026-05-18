/*
 * XREFs of sub_1800A1768 @ 0x1800A1768
 * Callers:
 *     sub_1800A18F0 @ 0x1800A18F0 (sub_1800A18F0.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_18002AE4C @ 0x18002AE4C (sub_18002AE4C.c)
 *     sub_18002B7C0 @ 0x18002B7C0 (sub_18002B7C0.c)
 *     sub_1800A07A8 @ 0x1800A07A8 (sub_1800A07A8.c)
 *     sub_1800A1A68 @ 0x1800A1A68 (sub_1800A1A68.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A1768(__int64 a1)
{
  char v2; // bp
  int v3; // r15d
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v10[136]; // [rsp+40h] [rbp-C8h] BYREF
  void *v11[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+110h] [rbp+8h] BYREF
  __int64 v13; // [rsp+120h] [rbp+18h]
  __int64 v14; // [rsp+128h] [rbp+20h] BYREF

  v13 = a1;
  sub_18002A570(a1);
  sub_180011CA0(&v12);
  sub_18002B7C0((__int64)v10);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 56);
  v4 = **(_QWORD **)(a1 + 48);
LABEL_2:
  while ( v4 != *(_QWORD *)(a1 + 48) && !v2 )
  {
    while ( 1 )
    {
      v5 = sub_180011CA0(&v14);
      if ( *v5 - v12 >= 500000000 )
        break;
      LOBYTE(v6) = 1;
      if ( (unsigned int)sub_1800A305C(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v4 + 32) + 4LL)), v10, v6) == 3 )
      {
        sub_1800A07A8(a1 + 8, (__int64 *)(v4 + 32));
        v4 = *(_QWORD *)sub_1800A1A68(a1 + 48, v9, v4);
        goto LABEL_2;
      }
      Thrd_yield();
    }
    sub_18001DB68(
      &stru_1801C8488,
      4,
      "GpuProfiler::FramesData::WaitPendingFrames() -- wait for flush abandoned (limit is %lld ms)",
      500LL);
    v2 = 1;
  }
  v7 = sub_180011CA0(&v14);
  sub_18001DB68(
    &stru_1801C8488,
    2,
    "GpuProfiler::FramesData::WaitPendingFrames() -- waited %lld ms for flush (pending frames: %d)",
    (*v7 - v12) / 1000000,
    v3);
  sub_18002AE4C(v11, (__int64)v11);
  return sub_18002A62C(a1);
}

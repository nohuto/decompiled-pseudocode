/*
 * XREFs of sub_180049AF0 @ 0x180049AF0
 * Callers:
 *     sub_180013C9C @ 0x180013C9C (sub_180013C9C.c)
 *     sub_1800536F0 @ 0x1800536F0 (sub_1800536F0.c)
 *     sub_18006FE60 @ 0x18006FE60 (sub_18006FE60.c)
 *     sub_180071A08 @ 0x180071A08 (sub_180071A08.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_1800A6170 @ 0x1800A6170 (sub_1800A6170.c)
 *     sub_1800AC560 @ 0x1800AC560 (sub_1800AC560.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180049B78 @ 0x180049B78 (sub_180049B78.c)
 *     sub_1800569D0 @ 0x1800569D0 (sub_1800569D0.c)
 *     sub_18006958C @ 0x18006958C (sub_18006958C.c)
 */

__int64 __fastcall sub_180049AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // di
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 144);
  v4 = a3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = *(_QWORD *)(a1 + 144);
  }
  v6 = *(_QWORD *)(a1 + 136);
  v12 = v6;
  v13 = v3;
  if ( v6 )
  {
    v7 = (_QWORD *)sub_18006958C(v6, v14, a3, a2, v12, v13);
    v9 = sub_1800569D0(*v7, v8);
    LOBYTE(v10) = v4;
    sub_180049B78(a1, v9, v10);
    sub_180010910((__int64)v14);
  }
  return sub_180010910((__int64)&v12);
}

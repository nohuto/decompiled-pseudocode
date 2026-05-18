/*
 * XREFs of sub_180088100 @ 0x180088100
 * Callers:
 *     sub_1800880BC @ 0x1800880BC (sub_1800880BC.c)
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 * Callees:
 *     atexit @ 0x18000B978 (atexit.c)
 *     sub_18000C548 @ 0x18000C548 (sub_18000C548.c)
 *     sub_18000C5B0 @ 0x18000C5B0 (sub_18000C5B0.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180087CC0 @ 0x180087CC0 (sub_180087CC0.c)
 *     sub_180087FA4 @ 0x180087FA4 (sub_180087FA4.c)
 *     sub_180088770 @ 0x180088770 (sub_180088770.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180088100(_QWORD *a1, signed int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v18; // [rsp+30h] [rbp-30h]
  __int64 v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  signed int v22; // [rsp+98h] [rbp+38h] BYREF
  __int64 *v23; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  v22 = a2;
  if ( dword_1801FADE0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000C5B0(&dword_1801FADE0);
    if ( dword_1801FADE0 == -1 )
    {
      v23 = (__int64 *)sub_180011088(0x38uLL);
      sub_18001DE8C(v23, (__int64 *)&v23);
      sub_18001DE8C((__int64 *)(v14 + 8), (__int64 *)&v23);
      sub_18001DE8C((__int64 *)(v15 + 16), (__int64 *)&v23);
      *(_WORD *)(v16 + 24) = 257;
      qword_1801FADE8 = v16;
      atexit(sub_180119A90);
      sub_18000C548(&dword_1801FADE0);
    }
  }
  v4 = sub_18001D684();
  v5 = v4;
  v24 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    sub_180087CC0((__int64 *)(v4 + 16), (unsigned int *)&v22);
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)&v17 = v5 + 16;
  *((_QWORD *)&v17 + 1) = v5;
  v6 = *(_QWORD *)(qword_1801FADE8 + 8);
  v20 = v6;
  v21 = 0;
  v7 = qword_1801FADE8;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v20 = v6;
    if ( *(_DWORD *)(v6 + 32) >= a2 )
    {
      v21 = 1;
      v7 = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v21 = 0;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  if ( *(_BYTE *)(v7 + 25) || a2 < *(_DWORD *)(v7 + 32) )
  {
    if ( qword_1801FADF0 == 0x492492492492492LL )
      sub_18001F56C();
    v24 = qword_1801FADE8;
    v18 = &qword_1801FADE8;
    v8 = sub_180011088(0x38uLL);
    v19 = v8;
    *(_DWORD *)(v8 + 32) = a2;
    *(_QWORD *)(v8 + 40) = v5 + 16;
    *(_QWORD *)(v8 + 48) = v5;
    v17 = 0LL;
    sub_18001DE7C((__int64 *)v8, &v24);
    sub_18001DE7C((__int64 *)(v9 + 8), &v24);
    sub_18001DE7C((__int64 *)(v10 + 16), &v24);
    *(_WORD *)(v11 + 24) = 0;
    v7 = sub_180088770(&qword_1801FADE8, &v20);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  v12 = *(_QWORD *)(v7 + 48);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(v7 + 48);
  }
  *a1 = *(_QWORD *)(v7 + 40);
  a1[1] = v12;
  sub_180087FA4((__int64)&v17);
  return a1;
}

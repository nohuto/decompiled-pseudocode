/*
 * XREFs of sub_180049E98 @ 0x180049E98
 * Callers:
 *     sub_180049E28 @ 0x180049E28 (sub_180049E28.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180048AAC @ 0x180048AAC (sub_180048AAC.c)
 *     sub_18007B774 @ 0x18007B774 (sub_18007B774.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180049E98(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // rax
  __int64 v19; // rbx
  __int128 v21; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v22[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  _OWORD v24[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+30h] BYREF
  unsigned __int16 v26; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+40h] BYREF

  v26 = a2;
  v27 = a3;
  v7 = (_QWORD *)(a1 + 200);
  v8 = *(_QWORD *)(a1 + 200);
  v9 = *(_QWORD *)(v8 + 8);
  *(_QWORD *)&v24[0] = v9;
  DWORD2(v24[0]) = 0;
  v10 = v8;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    *(_QWORD *)&v24[0] = v9;
    if ( *(_WORD *)(v9 + 28) >= a2 )
    {
      DWORD2(v24[0]) = 1;
      v10 = v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      DWORD2(v24[0]) = 0;
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  if ( *(_BYTE *)(v10 + 25) || a2 < *(_WORD *)(v10 + 28) )
  {
    if ( v7[1] == 0x666666666666666LL )
      sub_18001F56C();
    v25 = v8;
    v22[2] = v7;
    v11 = sub_180011088(0x28uLL);
    v22[3] = v11;
    *(_WORD *)(v11 + 28) = v26;
    *(_DWORD *)(v11 + 32) = 0;
    sub_18001DE7C((__int64 *)v11, &v25);
    sub_18001DE7C((__int64 *)(v12 + 8), &v25);
    sub_18001DE7C((__int64 *)(v13 + 16), &v25);
    *(_WORD *)(v14 + 24) = 0;
    v23 = v24[0];
    v10 = sub_18001F31C(v7, (__int64)&v23, v14);
  }
  *(_DWORD *)(v10 + 32) = 1;
  v21 = 0LL;
  v15 = *(_QWORD *)(a1 + 104);
  if ( !v15 )
LABEL_20:
    sub_1800120F4();
  v16 = *(_DWORD *)(v15 + 8);
  do
  {
    if ( !v16 )
      goto LABEL_20;
    v17 = v16;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16);
  }
  while ( v17 != v16 );
  v21 = *(_OWORD *)(a1 + 96);
  v18 = sub_18001D684();
  v19 = v18;
  if ( v18 )
  {
    *(_DWORD *)(v18 + 8) = 1;
    *(_DWORD *)(v18 + 12) = 1;
    *(_QWORD *)v18 = &std::_Ref_count_obj2<Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler>::`vftable';
    sub_180048AAC(v18 + 16, (__int64 *)&v21, (__int16 *)&v26, &v27);
  }
  else
  {
    v19 = 0LL;
  }
  v22[0] = v19 + 16;
  v22[1] = v19;
  v23 = 0LL;
  ((void (__fastcall *)(__int64, _OWORD *, __int64, _QWORD *, _QWORD, _QWORD))sub_18007B774)(
    a4,
    v24,
    a3,
    v22,
    v21,
    *((_QWORD *)&v21 + 1));
  sub_180010910((__int64)v24);
  sub_180010910((__int64)&v23);
  return sub_180010910((__int64)&v21);
}

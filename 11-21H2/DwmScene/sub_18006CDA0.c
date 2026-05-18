/*
 * XREFs of sub_18006CDA0 @ 0x18006CDA0
 * Callers:
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18006B3A0 @ 0x18006B3A0 (sub_18006B3A0.c)
 *     sub_18006B7A8 @ 0x18006B7A8 (sub_18006B7A8.c)
 *     sub_18007D30C @ 0x18007D30C (sub_18007D30C.c)
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 *     sub_18007F664 @ 0x18007F664 (sub_18007F664.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006CDA0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  __int64 v5; // rsi
  _QWORD *v6; // r10
  char v7; // r13
  char v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // r12d
  int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdi
  __int128 v21; // [rsp+20h] [rbp-50h] BYREF
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v24; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v25[2]; // [rsp+60h] [rbp-10h] BYREF

  v4 = a4;
  v5 = sub_180036808(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 96LL))(*v6, 7LL) )
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F99B8, 0LL);
  else
    v7 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &qword_1801F99F8, 0LL);
  if ( v8
    && (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &qword_1801F8318, 0LL) )
  {
    v8 = 0;
  }
  v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 152LL))(*v4);
  v10 = v9[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = v9[1];
  }
  v11 = *v9;
  v23[0] = v11;
  v23[1] = v10;
  sub_18006B3A0(v11, &v21);
  if ( v8 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &qword_1801F9A38, 0LL);
    v14 = v13;
    v15 = 2;
    if ( (unsigned int)v13 > 2 )
    {
      if ( v13 < 0 )
        v15 = 0;
      v14 = v15;
    }
    v16 = v21;
    if ( !(_QWORD)v21 )
      goto LABEL_20;
    if ( *(_DWORD *)(v21 + 144) != v14 )
    {
      v17 = *((_QWORD *)&v21 + 1);
      if ( *((_QWORD *)&v21 + 1) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL));
        v11 = v23[0];
        v17 = *((_QWORD *)&v21 + 1);
        v16 = v21;
      }
      v24 = v21;
      sub_18007F664(v11, &v24);
      *(_QWORD *)&v22 = v16;
      v16 = 0LL;
      v21 = 0uLL;
      *((_QWORD *)&v22 + 1) = v17;
      sub_180010910((__int64)&v22);
      v4 = a4;
    }
    if ( !v16 )
    {
LABEL_20:
      v18 = sub_18001D684();
      v19 = v18;
      if ( v18 )
      {
        *(_OWORD *)v18 = 0LL;
        *(_DWORD *)(v18 + 8) = 1;
        *(_DWORD *)(v18 + 12) = 1;
        *(_QWORD *)v18 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectBloom>::`vftable';
        sub_18006B7A8();
      }
      else
      {
        v19 = 0LL;
      }
      v22 = 0LL;
      v25[0] = 0LL;
      *(_QWORD *)&v21 = v19 + 16;
      v25[1] = *((_QWORD *)&v21 + 1);
      *((_QWORD *)&v21 + 1) = v19;
      sub_180010910((__int64)v25);
      sub_180010910((__int64)&v22);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v19 + 16) + 40LL))(v19 + 16, *a3, v14);
      v22 = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v16 = v21;
      *(_QWORD *)&v22 = v21;
      *((_QWORD *)&v22 + 1) = v19;
      v11 = v23[0];
      sub_18007D30C(v23[0], &v22);
    }
    *(float *)(v16 + 280) = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 88LL))(v5, &qword_1801F9A18);
  }
  else
  {
    v16 = v21;
  }
  if ( v16 )
    *(_BYTE *)(v16 + 136) = v8;
  LOBYTE(v12) = v7;
  sub_18007F0F0(v11, v4, v12);
  sub_180010910((__int64)&v21);
  return sub_180010910((__int64)v23);
}

/*
 * XREFs of sub_18006DE34 @ 0x18006DE34
 * Callers:
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_18005D20C @ 0x18005D20C (sub_18005D20C.c)
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 *     sub_18005D2E8 @ 0x18005D2E8 (sub_18005D2E8.c)
 *     sub_18005D33C @ 0x18005D33C (sub_18005D33C.c)
 *     sub_1800628C8 @ 0x1800628C8 (sub_1800628C8.c)
 *     sub_18008EC88 @ 0x18008EC88 (sub_18008EC88.c)
 *     sub_18008EC98 @ 0x18008EC98 (sub_18008EC98.c)
 *     sub_18008ECA8 @ 0x18008ECA8 (sub_18008ECA8.c)
 *     sub_18008ECD0 @ 0x18008ECD0 (sub_18008ECD0.c)
 *     sub_18008ECE0 @ 0x18008ECE0 (sub_18008ECE0.c)
 *     sub_18008ED2C @ 0x18008ED2C (sub_18008ED2C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18006DE34(__int64 a1, __int64 *a2)
{
  __int64 v3; // r15
  int v4; // xmm12_4
  int v5; // xmm13_4
  int v6; // xmm14_4
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm0_8
  __int64 v10; // rdi
  _UNKNOWN **v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r13
  char result; // al
  __int64 v16; // rdx
  char v17; // al
  char v18; // r14
  double v19; // xmm0_8
  float v20; // xmm11_4
  double v21; // xmm0_8
  float v22; // xmm9_4
  double v23; // xmm0_8
  float v24; // xmm8_4
  char v25; // bp
  char v26; // al
  char v27; // si
  int v28; // edi
  int v29; // eax
  int v30; // ebx
  double v31; // xmm0_8
  int v32; // xmm6_4
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  double v36; // xmm0_8
  __int64 v37; // [rsp+20h] [rbp-108h]
  __int64 v38; // [rsp+28h] [rbp-100h]
  __int64 v39; // [rsp+30h] [rbp-F8h]
  __int64 v40; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+40h] [rbp-E8h]
  _QWORD v42[3]; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v43; // [rsp+138h] [rbp+10h]
  _UNKNOWN **v44; // [rsp+140h] [rbp+18h]
  __int64 v45; // [rsp+148h] [rbp+20h]

  v3 = sub_180034094(a1, *(_DWORD *)(*a2 + 112));
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801D5668, 0LL) )
  {
    v7 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801D5608);
    v4 = LODWORD(v7);
    v8 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801D5628);
    v5 = LODWORD(v8);
    v9 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, &unk_1801D5648);
    v6 = LODWORD(v9);
  }
  v43 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801D55C8, 0LL);
  v39 = sub_1800628C8(*a2);
  v10 = 0LL;
  v45 = 0LL;
  v11 = &off_1801C8890;
  v44 = &off_1801C8890;
  v12 = (__int64 *)(v39 + 144);
  v13 = 3LL;
  v37 = 3LL;
  do
  {
    if ( *v12 )
      _InterlockedIncrement((volatile signed __int32 *)(*v12 + 8));
    v14 = *(v12 - 1);
    v42[0] = v14;
    v38 = *v12;
    v42[1] = *v12;
    result = sub_180011DE0(v42);
    if ( result )
    {
      sub_18001246C(&v40, (_QWORD *)(v10 + v16 + 8));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *(v11 - 2), 0LL);
      v18 = v17;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *(v11 - 1));
      v19 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, *v11);
      v20 = *(float *)&v19;
      v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[3]);
      v22 = *(float *)&v21;
      v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[4]);
      v24 = *(float *)&v23;
      v25 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v11[2], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, v11[5], 0LL);
      v27 = v26;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v11[6]);
      v28 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v11[8], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, v11[9], 0LL);
      v30 = v29;
      v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v44[10]);
      v32 = LODWORD(v31);
      *(float *)&v31 = o_roundf();
      sub_18008ECA8(v14, (unsigned int)(int)*(float *)&v31);
      sub_18008ED2C(v14, v43);
      *(_BYTE *)(v14 + 72) = v18;
      sub_18005D33C(v14, v20);
      LOBYTE(v33) = v25;
      sub_18008ECD0(v14, v33);
      sub_18005D2E8(v34, v22);
      sub_18005D20C(v14, v24);
      LOBYTE(v35) = v27;
      sub_18008EC98(v14, v35);
      sub_18008EC88();
      *(_DWORD *)(v14 + 1960) = v28;
      *(_DWORD *)(v14 + 1964) = v30;
      *(_DWORD *)(v14 + 1968) = v32;
      if ( sub_180011DE0(&v40) && *(_DWORD *)(v40 + 120) == 1 )
      {
        sub_18005D23C(v14, *(float *)(v40 + 112));
        result = sub_18008ECE0(v14);
        v11 = v44;
      }
      else
      {
        v11 = v44;
        v36 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v44[1]);
        sub_18005D23C(v14, *(float *)&v36);
        (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v3 + 88LL))(v3, v44[7]);
        result = sub_18008ECE0(v14);
      }
      *(_DWORD *)(v14 + 400) = v4;
      *(_DWORD *)(v14 + 404) = v5;
      *(_DWORD *)(v14 + 408) = v6;
      if ( v41 )
        result = sub_180010530(v41);
      v13 = v37;
      v10 = v45;
    }
    if ( v38 )
      result = sub_180010530(v38);
    v10 += 16LL;
    v45 = v10;
    v12 += 2;
    v11 += 13;
    v44 = v11;
    v37 = --v13;
  }
  while ( v13 );
  return result;
}

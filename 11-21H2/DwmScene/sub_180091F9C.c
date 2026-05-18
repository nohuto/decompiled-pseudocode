/*
 * XREFs of sub_180091F9C @ 0x180091F9C
 * Callers:
 *     sub_1800491C8 @ 0x1800491C8 (sub_1800491C8.c)
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_1800681E8 @ 0x1800681E8 (sub_1800681E8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18003DAA8 @ 0x18003DAA8 (sub_18003DAA8.c)
 *     sub_18003DAD0 @ 0x18003DAD0 (sub_18003DAD0.c)
 *     sub_18003DAE8 @ 0x18003DAE8 (sub_18003DAE8.c)
 *     sub_18003DD4C @ 0x18003DD4C (sub_18003DD4C.c)
 *     sub_18005BEF0 @ 0x18005BEF0 (sub_18005BEF0.c)
 *     sub_18005C41C @ 0x18005C41C (sub_18005C41C.c)
 *     sub_18005D0C0 @ 0x18005D0C0 (sub_18005D0C0.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_180091DD0 @ 0x180091DD0 (sub_180091DD0.c)
 *     sub_180092300 @ 0x180092300 (sub_180092300.c)
 *     sub_180092D8C @ 0x180092D8C (sub_180092D8C.c)
 *     sub_180092DB4 @ 0x180092DB4 (sub_180092DB4.c)
 *     sub_180092DC4 @ 0x180092DC4 (sub_180092DC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180091F9C(__int64 a1, __int64 *a2, int a3)
{
  int v3; // ebx
  __int64 *v4; // r12
  __int64 v6; // r8
  unsigned int v7; // r15d
  __int64 v8; // r9
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // r9d
  int v21; // edi
  unsigned int i; // r14d
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rdx
  _QWORD *v31; // r12
  unsigned int v32; // r13d
  _QWORD *v33; // rax
  bool v34; // di
  _QWORD *v35; // rax
  bool v36; // di
  __int64 v38; // [rsp+20h] [rbp-59h]
  __int64 v39; // [rsp+28h] [rbp-51h]
  __int128 v40; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v43; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v45[10]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v46; // [rsp+E0h] [rbp+67h]
  int v49; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = a3;
  v4 = a2;
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 88);
  LODWORD(v38) = v7;
  v40 = 0LL;
  v8 = *(_QWORD *)(v6 + 80);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    while ( v9 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
      if ( v10 == v9 )
      {
        v40 = *(_OWORD *)(v6 + 72);
        break;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 40) )
  {
    v11 = *(_QWORD *)(a1 + 128);
    if ( !v11 )
      goto LABEL_17;
    v12 = *(__int64 **)(v11 + 112);
    v13 = (__int64 *)v12[1];
    v14 = v12;
    while ( !*((_BYTE *)v13 + 25) )
    {
      if ( *((_DWORD *)v13 + 8) >= v7 )
      {
        v14 = v13;
        v13 = (__int64 *)*v13;
      }
      else
      {
        v13 = (__int64 *)v13[2];
      }
    }
    if ( *((_BYTE *)v14 + 25) || v7 < *((_DWORD *)v14 + 8) || v14 == v12 )
    {
LABEL_17:
      v43 = 0LL;
      if ( *((_QWORD *)&v40 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL));
      v43 = v40;
      sub_180092300(a1, &v43);
    }
    sub_180092D8C(a1);
    if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)sub_180091DD0((__int64 *)(a1 + 88), v7) )
    {
      v15 = sub_180092DC4(a1);
      v19 = sub_180092DB4(v17, v16, v18, v15);
      sub_18003DD4C((_QWORD **)*v4, a1 + 128, v19, v20);
      v21 = *(_DWORD *)(a1 + 80);
      *(_DWORD *)sub_180091DD0((__int64 *)(a1 + 88), v7) = v21;
    }
  }
  (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)v40 + 200LL))(v40, &v49);
  for ( i = 0; i < 6; ++i )
  {
    if ( ((1 << i) & v3) != 0 )
    {
      if ( sub_1800122C0((_QWORD *)(a1 + 128)) )
      {
        sub_18003DAA8(*v4);
        v23 = 0xCCCCCCCCCCCCCCCDuLL;
      }
      if ( ((1 << i) & v49) != 0 )
      {
        v46 = 0;
        v24 = *(_QWORD *)(a1 + 56);
        if ( v23 * ((*(_QWORD *)(a1 + 64) - v24) >> 3) )
        {
          v25 = 0LL;
          v26 = v38;
          do
          {
            v27 = 5 * v25;
            v28 = *(_QWORD *)(v24 + 40 * v25 + 8);
            if ( v28 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
              v28 = *(_QWORD *)(v24 + 8 * v27 + 8);
            }
            v29 = *(_QWORD *)(v24 + 8 * v27);
            v41[0] = v29;
            v41[1] = v28;
            v30 = *(_QWORD *)(v24 + 8 * v27 + 24);
            if ( v30 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
              v30 = *(_QWORD *)(v24 + 8 * v27 + 24);
              v29 = v41[0];
            }
            v31 = *(_QWORD **)(v24 + 8 * v27 + 16);
            v42[0] = v31;
            v42[1] = v30;
            v32 = *(_DWORD *)(v24 + 8 * v27 + 32);
            if ( !sub_1800122C0(v41) )
              goto LABEL_40;
            v33 = sub_18005E29C(v29, v44, v26);
            v34 = sub_1800122B0(v33);
            sub_180010910((__int64)v44);
            if ( v34 )
              sub_18005D0C0(v29, (__int64 *)&v40);
            sub_18003DAE8(*a2, i, (__int64)v41, v32, v38, v39);
            if ( sub_1800122C0(v42) )
            {
              v35 = sub_18005C41C((__int64)v31, v45, v26);
              v36 = sub_1800122B0(v35);
              sub_180010910((__int64)v45);
              if ( v36 )
                sub_18005BEF0(v31, (__int64 *)&v40);
              v4 = a2;
              sub_18003DAD0(*a2, i, (__int64)v42, v32, v38, v39);
            }
            else
            {
LABEL_40:
              v4 = a2;
            }
            sub_180010910((__int64)v42);
            sub_180010910((__int64)v41);
            ++v46;
            v24 = *(_QWORD *)(a1 + 56);
            v25 = v46;
          }
          while ( v46 < 0xCCCCCCCCCCCCCCCDuLL * ((*(_QWORD *)(a1 + 64) - v24) >> 3) );
          v3 = a3;
        }
      }
    }
  }
  return sub_180010910((__int64)&v40);
}

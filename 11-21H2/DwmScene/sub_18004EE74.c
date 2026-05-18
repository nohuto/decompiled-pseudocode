/*
 * XREFs of sub_18004EE74 @ 0x18004EE74
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BA30 @ 0x18002BA30 (sub_18002BA30.c)
 *     sub_18003D440 @ 0x18003D440 (sub_18003D440.c)
 *     sub_18003D4A0 @ 0x18003D4A0 (sub_18003D4A0.c)
 *     sub_18003D9BC @ 0x18003D9BC (sub_18003D9BC.c)
 *     sub_18003D9D4 @ 0x18003D9D4 (sub_18003D9D4.c)
 *     sub_18003DB18 @ 0x18003DB18 (sub_18003DB18.c)
 *     sub_18004DFA0 @ 0x18004DFA0 (sub_18004DFA0.c)
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18004EE74(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  unsigned int v10; // eax
  __int64 v11; // rcx
  int *v12; // rdi
  __int128 *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r10
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  __int64 v45; // [rsp+120h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 120) )
  {
    v6 = *a2;
    v18 = 0LL;
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      while ( v8 )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
        if ( v9 == v8 )
        {
          v18 = *(_OWORD *)(v6 + 72);
          break;
        }
      }
    }
    v10 = sub_180028544(v18);
    if ( !sub_18002BA30(a1, v10) )
    {
      if ( !sub_18002BA14(a1, 4) )
      {
LABEL_20:
        sub_180010910((__int64)&v18);
        return;
      }
      sub_18004DFA0(v11, (__int64 *)&v18);
    }
    v20 = 0LL;
    v21 = a1 + 144;
    v22 = 1LL;
    v23 = 0;
    v24 = a1 + 160;
    v25 = 2LL;
    v26 = 1;
    v27 = a1 + 176;
    v28 = 16LL;
    v29 = 4;
    v30 = a1 + 192;
    v31 = 4LL;
    v32 = 2;
    v33 = a1 + 240;
    v34 = 32LL;
    v35 = 5;
    v36 = a1 + 256;
    v37 = 64LL;
    v38 = 6;
    v39 = a1 + 208;
    v40 = 512LL;
    v41 = 9;
    v42 = a1 + 224;
    v43 = 1024LL;
    v44 = 10;
    v12 = &v23;
    do
    {
      v13 = (__int128 *)*((_QWORD *)v12 - 2);
      if ( !*(_QWORD *)v13 || (a3 & *((_QWORD *)v12 - 1)) == 0 )
        v13 = &v20;
      sub_18003DB18(*a2, v13);
      v12 += 6;
    }
    while ( v12 - 4 != (int *)&v45 );
    sub_18003D9D4(*a2, *(_DWORD *)(a1 + 300));
    if ( *(_QWORD *)(a1 + 272) )
    {
      sub_18003D9BC(*a2);
      sub_18003D4A0((_QWORD **)*a2, *(_DWORD *)(a1 + 112));
      v14 = sub_18007BD8C();
      sub_18007BD68(v14, 1LL, 1LL);
    }
    else
    {
      v19 = 0LL;
      sub_18003D9BC(*a2);
      sub_18003D440((_QWORD **)*a2, *(_DWORD *)(a1 + 120));
      sub_180010910((__int64)&v19);
    }
    v15 = sub_18007BD8C();
    sub_18007BD68(v15, 0LL, 1LL);
    sub_18007BD68(v17, 12LL, v16);
    sub_180010910((__int64)&v20);
    goto LABEL_20;
  }
}

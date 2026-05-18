/*
 * XREFs of sub_18007A618 @ 0x18007A618
 * Callers:
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 *     sub_18007E464 @ 0x18007E464 (sub_18007E464.c)
 *     sub_18007EDF4 @ 0x18007EDF4 (sub_18007EDF4.c)
 *     sub_18009E008 @ 0x18009E008 (sub_18009E008.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_180039EBC @ 0x180039EBC (sub_180039EBC.c)
 *     sub_180079C78 @ 0x180079C78 (sub_180079C78.c)
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     sub_18007AA0C @ 0x18007AA0C (sub_18007AA0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18007A618(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 *v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // r8
  char *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v29[2]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v30[2]; // [rsp+58h] [rbp-59h] BYREF
  char *v31; // [rsp+68h] [rbp-49h] BYREF
  __int64 v32; // [rsp+70h] [rbp-41h]
  __int64 v33; // [rsp+78h] [rbp-39h]
  _QWORD v34[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v35[4]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v36[5]; // [rsp+B0h] [rbp-1h] BYREF

  if ( a6 )
    sub_18002BCC0((__int64)a1, 1, 1);
  v10 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v11 = (__int64 *)sub_18007AA0C((unsigned int)v35, v10, a2, a3, a4, 0, a5);
  v12 = *v11;
  v13 = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  v29[0] = a1[14];
  a1[14] = v12;
  v29[1] = a1[15];
  a1[15] = v13;
  sub_180010910((__int64)v29);
  sub_180010910((__int64)v35);
  LOBYTE(v14) = sub_18002BA14((__int64)a1, 1);
  if ( (_BYTE)v14 )
  {
    if ( a6 )
    {
      sub_180079C78(a6, v29);
      v15 = v29[0];
      v16 = sub_18002B9EC((__int64)a1, v35);
      sub_18002BC44(v15, v16);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v29[0] + 40LL))(v29[0], a2, a3, a4, a5);
      sub_18007A1F8(a1, v29);
      sub_18002BCC0((__int64)a1, 2, 0);
      sub_18002BCC0(v18, v17 + 4, v17);
      LOBYTE(v14) = sub_180010910((__int64)v29);
    }
    else
    {
      sub_180039EBC(v10, &v31);
      v19 = 0;
      v20 = v32;
      v21 = v31;
      v14 = (v32 - (__int64)v31) >> 4;
      if ( v14 )
      {
        v22 = 0LL;
        do
        {
          v23 = 2 * v22;
          v24 = *(_QWORD *)&v21[8 * v23 + 8];
          if ( v24 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
            v24 = *(_QWORD *)&v21[8 * v23 + 8];
          }
          v25 = *(_QWORD *)&v21[8 * v23];
          v34[0] = v25;
          v34[1] = v24;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25) )
          {
            sub_180079C78(v25, v30);
            v26 = v30[0];
            v27 = sub_18002B9EC((__int64)a1, v36);
            sub_18002BC44(v26, v27);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v30[0] + 40LL))(
              v30[0],
              a2,
              a3,
              a4,
              a5);
            sub_18007A1F8(a1, v30);
            sub_180010910((__int64)v30);
          }
          sub_180010910((__int64)v34);
          ++v19;
          v20 = v32;
          v21 = v31;
          v14 = (v32 - (__int64)v31) >> 4;
          v22 = v19;
        }
        while ( v19 < v14 );
      }
      if ( v21 )
      {
        sub_1800126E8((__int64)v21, v20);
        LOBYTE(v14) = sub_180010884(v31, (v33 - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v14;
}

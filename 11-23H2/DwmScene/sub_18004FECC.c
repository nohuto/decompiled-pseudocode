/*
 * XREFs of sub_18004FECC @ 0x18004FECC
 * Callers:
 *     sub_180087454 @ 0x180087454 (sub_180087454.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18004D19C @ 0x18004D19C (sub_18004D19C.c)
 *     sub_18004D270 @ 0x18004D270 (sub_18004D270.c)
 *     sub_18004D344 @ 0x18004D344 (sub_18004D344.c)
 *     sub_18004D418 @ 0x18004D418 (sub_18004D418.c)
 *     sub_18004D4EC @ 0x18004D4EC (sub_18004D4EC.c)
 *     sub_18004DB34 @ 0x18004DB34 (sub_18004DB34.c)
 *     sub_180050C40 @ 0x180050C40 (sub_180050C40.c)
 *     sub_180050C60 @ 0x180050C60 (sub_180050C60.c)
 *     sub_180050CB0 @ 0x180050CB0 (sub_180050CB0.c)
 *     sub_18008B0A8 @ 0x18008B0A8 (sub_18008B0A8.c)
 *     sub_18008B320 @ 0x18008B320 (sub_18008B320.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_18004FECC(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // rbx
  unsigned __int64 **v7; // rdi
  __int64 *v8; // r12
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v25; // [rsp+20h] [rbp-79h] BYREF
  __int64 v26; // [rsp+30h] [rbp-69h] BYREF
  __int64 v27; // [rsp+38h] [rbp-61h]
  __int64 v28; // [rsp+40h] [rbp-59h] BYREF
  __int64 v29; // [rsp+48h] [rbp-51h]
  __int64 v30; // [rsp+50h] [rbp-49h] BYREF
  __int64 v31; // [rsp+58h] [rbp-41h]
  __int64 v32; // [rsp+60h] [rbp-39h] BYREF
  __int64 v33; // [rsp+68h] [rbp-31h]
  __int64 v34; // [rsp+70h] [rbp-29h] BYREF
  __int64 v35; // [rsp+78h] [rbp-21h]
  unsigned __int64 v36[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v37; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v38[3]; // [rsp+98h] [rbp-1h] BYREF

  v38[0] = a2;
  v38[2] = a3;
  v6 = (_QWORD *)(a1 + 18576);
  sub_180050CB0(a1 + 18576, &v37, a3);
  if ( v37 == *v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = (unsigned __int64 **)(v37 + 64);
    v25 = 0LL;
    v8 = (__int64 *)(v37 + 88);
    if ( *(_QWORD *)(v37 + 88) )
      sub_1800124F8((__int64 *)&v25, (_QWORD *)(v37 + 88));
    v9 = *v7;
    if ( *v7 )
    {
      v10 = *v9;
      if ( *v9 == v9[1] )
        v10 = v9[3];
    }
    else
    {
      v10 = 0LL;
    }
    v36[0] = v10;
    if ( sub_180011DD0(&v25) )
    {
      if ( *(_BYTE *)(a1 + 18624) )
      {
        if ( *v7 )
        {
          if ( !(unsigned __int8)sub_180050C40(*v7) && *v11 == v11[1] )
          {
            if ( v11[3] )
            {
              sub_180050C60(a1 + 18608, v38, v36);
              if ( v38[0] != *(_QWORD *)(a1 + 18608) )
                sub_1800124F8((__int64 *)&v25, (_QWORD *)(v38[0] + 40LL));
            }
          }
        }
      }
    }
    if ( sub_180011DD0(&v25) && *v7 && !(unsigned __int8)sub_180050C40(*v7) )
    {
      if ( *((_DWORD *)v7 + 4) == 1 )
      {
        sub_18004D4EC(*(_QWORD *)(a1 + 18688), &v26);
        sub_18008B320(v26, a3);
        sub_18008B0A8(v26, v7);
        v12 = v27;
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
          v12 = v27;
        }
        v13 = v26;
        *(_QWORD *)&v25 = v26;
        v14 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v12;
        if ( v14 )
        {
          sub_180010530(v14);
          v12 = v27;
        }
        if ( v12 )
          sub_180010530(v12);
      }
      else
      {
        v13 = v25;
      }
      if ( *((_DWORD *)v7 + 4) == 5 )
      {
        sub_18004D418(*(_QWORD *)(a1 + 18688), &v28);
        sub_18008B320(v28, a3);
        sub_18008B0A8(v28, v7);
        v15 = v29;
        if ( v29 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
          v15 = v29;
        }
        v13 = v28;
        *(_QWORD *)&v25 = v28;
        v16 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v15;
        if ( v16 )
        {
          sub_180010530(v16);
          v15 = v29;
        }
        if ( v15 )
          sub_180010530(v15);
      }
      if ( *((_DWORD *)v7 + 4) == 4 )
      {
        sub_18004D270(*(_QWORD *)(a1 + 18688), &v30);
        sub_18008B320(v30, a3);
        sub_18008B0A8(v30, v7);
        v17 = v31;
        if ( v31 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
          v17 = v31;
        }
        v13 = v30;
        *(_QWORD *)&v25 = v30;
        v18 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v17;
        if ( v18 )
        {
          sub_180010530(v18);
          v17 = v31;
        }
        if ( v17 )
          sub_180010530(v17);
      }
      if ( *((_DWORD *)v7 + 4) == 3 )
      {
        sub_18004D19C(*(_QWORD *)(a1 + 18688), &v32);
        sub_18008B320(v32, a3);
        sub_18008B0A8(v32, v7);
        v19 = v33;
        if ( v33 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
          v19 = v33;
        }
        v13 = v32;
        *(_QWORD *)&v25 = v32;
        v20 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v19;
        if ( v20 )
        {
          sub_180010530(v20);
          v19 = v33;
        }
        if ( v19 )
          sub_180010530(v19);
      }
      if ( *((_DWORD *)v7 + 4) == 2 )
      {
        sub_18004D344(*(_QWORD *)(a1 + 18688), &v34);
        sub_18008B320(v34, a3);
        sub_18008B0A8(v34, v7);
        v21 = v35;
        if ( v35 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
          v21 = v35;
        }
        v13 = v34;
        *(_QWORD *)&v25 = v34;
        v22 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v21;
        if ( v22 )
        {
          sub_180010530(v22);
          v21 = v35;
        }
        if ( v21 )
          sub_180010530(v21);
      }
    }
    else
    {
      v13 = v25;
    }
    if ( v13 )
    {
      sub_1800124F8(v8, &v25);
      if ( *(_BYTE *)(a1 + 18624) )
      {
        v23 = sub_18004DB34((__int64 *)(a1 + 18608), (__int64)v38, v36);
        sub_1800124F8((__int64 *)(*(_QWORD *)v23 + 40LL), &v25);
      }
    }
    *a2 = v13;
    a2[1] = *((_QWORD *)&v25 + 1);
  }
  sub_180011B24(a3);
  return a2;
}

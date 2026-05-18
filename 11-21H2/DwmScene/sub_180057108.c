/*
 * XREFs of sub_180057108 @ 0x180057108
 * Callers:
 *     sub_1800953A0 @ 0x1800953A0 (sub_1800953A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_18001FB60 @ 0x18001FB60 (sub_18001FB60.c)
 *     sub_180053CC0 @ 0x180053CC0 (sub_180053CC0.c)
 *     sub_180053EA8 @ 0x180053EA8 (sub_180053EA8.c)
 *     sub_180054090 @ 0x180054090 (sub_180054090.c)
 *     sub_180054278 @ 0x180054278 (sub_180054278.c)
 *     sub_180054460 @ 0x180054460 (sub_180054460.c)
 *     sub_180055504 @ 0x180055504 (sub_180055504.c)
 *     sub_180058450 @ 0x180058450 (sub_180058450.c)
 *     sub_180099D5C @ 0x180099D5C (sub_180099D5C.c)
 *     sub_18009A0A0 @ 0x18009A0A0 (sub_18009A0A0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_180057108(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 **v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned __int64 v29; // rdx
  __int64 *result; // rax
  __int128 v31; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  __int64 *v43; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v45[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v46[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v47[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v48[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v49[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v50[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v51[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v52[2]; // [rsp+110h] [rbp+10h] BYREF

  v32[0] = a1;
  v43 = a2;
  v52[0] = a3;
  v5 = (__int64 **)(a1 + 18576);
  sub_180058450(a1 + 18576, &v43, a3);
  v6 = v43;
  if ( v43 == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = v43 + 8;
    v31 = 0LL;
    v8 = v43[11];
    if ( v8 )
    {
      v9 = v43[12];
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v8 = v6[11];
        v9 = v6[12];
      }
      v45[0] = 0LL;
      *(_QWORD *)&v31 = v8;
      v45[1] = 0LL;
      *((_QWORD *)&v31 + 1) = v9;
      sub_180010910((__int64)v45);
    }
    else
    {
      v9 = *((_QWORD *)&v31 + 1);
      v8 = v31;
    }
    v10 = (__int64 *)*v7;
    if ( *v7 )
    {
      if ( *v10 == v10[1] )
        v11 = v10[3];
      else
        v11 = sub_18001FB60(*v10);
    }
    else
    {
      v11 = 0LL;
    }
    v44 = v11;
    if ( sub_1800122B0(&v31) )
    {
      if ( *(_BYTE *)(v13 + 18624) )
      {
        v14 = (__int64 *)*v7;
        if ( *v7 )
        {
          if ( *v14 == v14[1] && *((_DWORD *)v14 + 8) != *((_DWORD *)v14 + 6) )
          {
            if ( v14[3] )
            {
              v15 = *(__int64 **)(v13 + 18608);
              v16 = (__int64 *)v15[1];
              v17 = v15;
              while ( !*((_BYTE *)v16 + 25) )
              {
                if ( v16[4] >= v12 )
                {
                  v17 = v16;
                  v16 = (__int64 *)*v16;
                }
                else
                {
                  v16 = (__int64 *)v16[2];
                }
              }
              if ( !*((_BYTE *)v17 + 25) && v12 >= v17[4] && v17 != v15 )
              {
                v18 = v17[6];
                if ( v18 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
                  v18 = v17[6];
                  v9 = *((_QWORD *)&v31 + 1);
                  v8 = v31;
                }
                v46[0] = v8;
                v8 = v17[5];
                *(_QWORD *)&v31 = v8;
                v46[1] = v9;
                v9 = v18;
                *((_QWORD *)&v31 + 1) = v18;
                sub_180010910((__int64)v46);
              }
            }
          }
        }
      }
    }
    if ( !sub_1800122B0(&v31)
      || (v20 = (__int64 *)*v7) == 0LL
      || *v20 == v20[1] && *((_DWORD *)v20 + 8) == *((_DWORD *)v20 + 6) )
    {
      v26 = v32[0];
    }
    else
    {
      v21 = *((_DWORD *)v6 + 20);
      if ( v21 == 1 )
      {
        sub_180054460(*(__int64 **)(v19 + 18688), &v33);
        sub_18009A0A0(v33, a3);
        sub_180099D5C(v33, v6 + 8);
        v22 = v34;
        if ( v34 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
          v9 = *((_QWORD *)&v31 + 1);
          v8 = v31;
          v22 = v34;
        }
        v47[0] = v8;
        v8 = v33;
        *(_QWORD *)&v31 = v33;
        v47[1] = v9;
        v9 = v22;
        *((_QWORD *)&v31 + 1) = v22;
        sub_180010910((__int64)v47);
        sub_180010910((__int64)&v33);
        v21 = *((_DWORD *)v6 + 20);
      }
      if ( v21 == 5 )
      {
        sub_180054278(*(__int64 **)(v32[0] + 18688LL), &v35);
        sub_18009A0A0(v35, a3);
        sub_180099D5C(v35, v6 + 8);
        v23 = v36;
        if ( v36 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
          v9 = *((_QWORD *)&v31 + 1);
          v8 = v31;
          v23 = v36;
        }
        v48[0] = v8;
        v8 = v35;
        *(_QWORD *)&v31 = v35;
        v48[1] = v9;
        v9 = v23;
        *((_QWORD *)&v31 + 1) = v23;
        sub_180010910((__int64)v48);
        sub_180010910((__int64)&v35);
        v21 = *((_DWORD *)v6 + 20);
      }
      if ( v21 == 4 )
      {
        sub_180053EA8(*(__int64 **)(v32[0] + 18688LL), &v37);
        sub_18009A0A0(v37, a3);
        sub_180099D5C(v37, v6 + 8);
        v24 = v38;
        if ( v38 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
          v9 = *((_QWORD *)&v31 + 1);
          v8 = v31;
          v24 = v38;
        }
        v49[0] = v8;
        v8 = v37;
        *(_QWORD *)&v31 = v37;
        v49[1] = v9;
        v9 = v24;
        *((_QWORD *)&v31 + 1) = v24;
        sub_180010910((__int64)v49);
        sub_180010910((__int64)&v37);
        v21 = *((_DWORD *)v6 + 20);
      }
      if ( v21 == 3 )
      {
        sub_180053CC0(*(__int64 **)(v32[0] + 18688LL), &v39);
        sub_18009A0A0(v39, a3);
        sub_180099D5C(v39, v6 + 8);
        v25 = v40;
        if ( v40 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v40 + 8));
          v9 = *((_QWORD *)&v31 + 1);
          v8 = v31;
          v25 = v40;
        }
        v50[0] = v8;
        v8 = v39;
        *(_QWORD *)&v31 = v39;
        v50[1] = v9;
        v9 = v25;
        *((_QWORD *)&v31 + 1) = v25;
        sub_180010910((__int64)v50);
        sub_180010910((__int64)&v39);
        v21 = *((_DWORD *)v6 + 20);
      }
      v26 = v32[0];
      if ( v21 == 2 )
      {
        sub_180054090(*(__int64 **)(v32[0] + 18688LL), &v41);
        sub_18009A0A0(v41, a3);
        sub_180099D5C(v41, v7);
        v27 = v42;
        if ( v42 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v42 + 8));
          v9 = *((_QWORD *)&v31 + 1);
          v8 = v31;
          v27 = v42;
        }
        v32[0] = v8;
        v8 = v41;
        *(_QWORD *)&v31 = v41;
        v32[1] = v9;
        v9 = v27;
        *((_QWORD *)&v31 + 1) = v27;
        sub_180010910((__int64)v32);
        sub_180010910((__int64)&v41);
      }
    }
    if ( v8 )
    {
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        v9 = *((_QWORD *)&v31 + 1);
        v8 = v31;
      }
      v51[0] = v7[3];
      v7[3] = v8;
      v51[1] = v7[4];
      v7[4] = v9;
      sub_180010910((__int64)v51);
      if ( *(_BYTE *)(v26 + 18624) )
      {
        v28 = (_QWORD *)sub_180055504((__int64 *)(v26 + 18608), (unsigned __int64 *)&v44);
        if ( v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
          v9 = *((_QWORD *)&v31 + 1);
          v8 = v31;
        }
        v52[0] = *v28;
        *v28 = v8;
        v52[1] = v28[1];
        v28[1] = v9;
        sub_180010910((__int64)v52);
      }
    }
    *a2 = v8;
    a2[1] = v9;
    v31 = 0LL;
    sub_180010910((__int64)&v31);
  }
  v29 = *(_QWORD *)(a3 + 24);
  if ( v29 >= 0x10 )
    sub_180010884(*(char **)a3, v29 + 1);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  result = a2;
  *(_BYTE *)a3 = 0;
  return result;
}

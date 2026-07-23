/*
 * XREFs of sub_14075ECF4 @ 0x14075ECF4
 * Callers:
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_140B11EBC @ 0x140B11EBC (sub_140B11EBC.c)
 * Callees:
 *     sub_1402D8AA0 @ 0x1402D8AA0 (sub_1402D8AA0.c)
 *     sub_1403C09C8 @ 0x1403C09C8 (sub_1403C09C8.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14057D738 @ 0x14057D738 (sub_14057D738.c)
 *     sub_14057D9D4 @ 0x14057D9D4 (sub_14057D9D4.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_14075CDF8 @ 0x14075CDF8 (sub_14075CDF8.c)
 *     sub_14075EC70 @ 0x14075EC70 (sub_14075EC70.c)
 *     sub_14075EE20 @ 0x14075EE20 (sub_14075EE20.c)
 */

__int64 __fastcall sub_14075ECF4(__int64 *a1, __int64 a2, const void **a3)
{
  __int64 v3; // r14
  int v6; // edi
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // r8
  __int64 (__fastcall **v18)(__int64, IRP *); // rcx
  char *v19; // r9
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, IRP *); // rdx
  __int64 (__fastcall *v22)(__int64, IRP *); // r11
  _QWORD v23[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v24[32]; // [rsp+48h] [rbp-C0h] BYREF

  v3 = a1[6];
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, sizeof(v23));
  v6 = 0;
  if ( a3 )
  {
    if ( dword_140C54EF4 == 2 && (dword_140C54EF0 & 1) == 0 )
    {
      v6 = sub_14075CDF8((__int64)v23, a3);
      if ( v6 >= 0 )
      {
        v6 = sub_14075EE20(v23, &v23[2]);
        if ( v6 >= 0 )
        {
          v6 = sub_14075EC70(a1[3], v24);
          if ( v6 >= 0 )
          {
            v8 = (char *)sub_14057D9D4(0x100uLL);
            if ( v8 )
            {
              v9 = a1[11];
              if ( v9 )
              {
                v10 = v24[0];
                if ( v24[0] )
                {
                  *(_QWORD *)v8 = v9;
                  a1[11] = v10;
                }
              }
              v11 = a1[12];
              if ( v11 )
              {
                v12 = v24[1];
                if ( v24[1] )
                {
                  *((_QWORD *)v8 + 1) = v11;
                  a1[12] = v12;
                }
              }
              v13 = a1[13];
              if ( v13 )
              {
                v14 = v24[2];
                if ( v24[2] )
                {
                  *((_QWORD *)v8 + 2) = v13;
                  a1[13] = v14;
                }
              }
              v15 = *(_QWORD *)(v3 + 8);
              if ( v15 )
              {
                v16 = v24[3];
                if ( v24[3] )
                {
                  *((_QWORD *)v8 + 3) = v15;
                  *(_QWORD *)(v3 + 8) = v16;
                }
              }
              v17 = v8 - (char *)a1;
              v18 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
              v19 = (char *)((char *)&v24[4] - (char *)a1);
              v20 = 28LL;
              do
              {
                v21 = *v18;
                if ( *v18 )
                {
                  if ( v21 != sub_14023EE50 )
                  {
                    v22 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + (_QWORD)v19 - 112);
                    if ( v22 )
                    {
                      *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + v17 - 80) = v21;
                      *v18 = v22;
                    }
                  }
                }
                ++v18;
                --v20;
              }
              while ( v20 );
              *(_QWORD *)(v3 + 56) = v8;
              v6 = 0;
              qword_140C2A440[((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F] = 524550LL;
              if ( (dword_140D04880 & 1) != 0 )
                sub_14057D738(9LL, "KSE: Hooked callbacks for driver [%ws].\n", v23[1], v19, v23[0]);
              sub_1403C09C8(9);
              goto LABEL_8;
            }
            v6 = -1073741801;
          }
        }
      }
      sub_1402D8AA0(0LL);
    }
LABEL_8:
    sub_14075CDC4((__int64)v23);
    return (unsigned int)v6;
  }
  qword_140C2A440[((unsigned __int8)_InterlockedExchangeAdd(&dword_140C2A420, 1u) + 1) & 0x3F] = 524436LL;
  if ( (dword_140D04880 & 1) != 0 )
    sub_14057D738(0LL, "KSE: Callback shimming - missing driver object or driver name.\n");
  sub_1403C09C8(0);
  return 3221225485LL;
}

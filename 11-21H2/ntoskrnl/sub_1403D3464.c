/*
 * XREFs of sub_1403D3464 @ 0x1403D3464
 * Callers:
 *     sub_140850980 @ 0x140850980 (sub_140850980.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409A0558 @ 0x1409A0558 (sub_1409A0558.c)
 */

void __fastcall sub_1403D3464(char *a1, unsigned __int16 *a2, __int64 a3)
{
  void *v4; // rax
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned int v8; // kr00_4
  unsigned int v9; // kr04_4
  unsigned int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  unsigned int v13; // kr08_4
  unsigned int *v14; // r10
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int16 *v19; // r9
  __int64 v20; // rax
  ULONG v21; // edx
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int16 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v31; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v32; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v35; // [rsp+78h] [rbp-88h]
  unsigned __int16 v36; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  unsigned int *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  _DWORD *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  _DWORD *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  _DWORD *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  _DWORD v49[10]; // [rsp+210h] [rbp+110h] BYREF

  v35 = a2;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v33 = 0;
  v34 = 0;
  if ( byte_140C5AE14 )
  {
    v4 = sub_14036B86C(a3, 0x67446F50u);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)v4 + 39) + 40LL);
      if ( v6 )
      {
        v7 = v6 + 128;
        v8 = *((_DWORD *)a1 + 5);
        v36 = *(_WORD *)(v6 + 128) >> 1;
        v9 = *((_DWORD *)a1 + 7);
        v30 = v36;
        v10 = v8 / 0xA;
        v11 = v9 / 0xA;
        v12 = *((_DWORD *)a1 + 19) / 0xAu;
        v13 = *((_DWORD *)a1 + 6);
        v33 = v8 / 0xA;
        v32 = v9 / 0xA;
        v34 = v12;
        if ( EtwEventEnabled(RegHandle, &stru_140037A68) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          UserData.Ptr = (ULONGLONG)&v30;
          v14 = v49;
          v15 = 0;
          v38 = *(_QWORD *)(v7 + 8);
          v16 = 6;
          v40 = 0;
          v39 = 2 * v36;
          v42 = 4LL;
          v41 = &v33;
          v43 = a1 + 4;
          v45 = a1 + 8;
          v47 = a1 + 12;
          v44 = 4LL;
          v46 = 4LL;
          v48 = 4LL;
          do
          {
            v17 = v15++;
            *v14 = *(unsigned int *)((char *)v14 + a1 - (char *)v49 + 36) / 0xA;
            ++v14;
            v18 = v16++;
            v18 *= 2LL;
            *(&UserData.Ptr + v18) = (ULONGLONG)&v49[v17];
            *((_QWORD *)&UserData.Size + v18) = 4LL;
          }
          while ( v15 < 0xA );
          v19 = v35;
          v20 = 2LL * v16;
          v21 = *v35;
          *(&UserData.Ptr + v20) = (ULONGLONG)&v32;
          *((_QWORD *)&UserData.Size + v20) = 4LL;
          v22 = v16 + 1;
          v23 = v16 + 2;
          v22 *= 2LL;
          *(&UserData.Ptr + v22) = (ULONGLONG)&v34;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
          v24 = 2LL * v23;
          *(&UserData.Ptr + v24) = (ULONGLONG)(a1 + 80);
          *((_QWORD *)&UserData.Size + v24) = 4LL;
          v25 = v23 + 1;
          v23 += 2;
          v25 *= 2LL;
          *(&UserData.Ptr + v25) = (ULONGLONG)(a1 + 24);
          *((_QWORD *)&UserData.Size + v25) = 4LL;
          v26 = 2LL * v23;
          *(&UserData.Ptr + v26) = (ULONGLONG)(a1 + 84);
          *((_QWORD *)&UserData.Size + v26) = 4LL;
          v31 = (unsigned __int16)v21 >> 1;
          v27 = v23 + 1;
          v23 += 2;
          v27 *= 2LL;
          *(&UserData.Ptr + v27) = (ULONGLONG)&v31;
          *((_QWORD *)&UserData.Size + v27) = 2LL;
          v28 = 2LL * v23;
          *(&UserData.Ptr + v28) = *((_QWORD *)v19 + 1);
          *(&UserData.Size + 2 * v28) = v21;
          *(&UserData.Reserved + 2 * v28) = 0;
          v29 = 2LL * (v23 + 1);
          *(&UserData.Ptr + v29) = (ULONGLONG)(a1 + 88);
          *((_QWORD *)&UserData.Size + v29) = 4LL;
          EtwWriteEx(RegHandle, &stru_140037A68, 0LL, 0, 0LL, 0LL, 0x18u, &UserData);
          v11 = v32;
          v10 = v33;
          v12 = v34;
        }
        sub_1409A0558(
          v7,
          (_DWORD)v35,
          v10,
          *((_DWORD *)a1 + 1),
          *((_DWORD *)a1 + 2),
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 9) / 0xAu,
          *((_DWORD *)a1 + 10) / 0xAu,
          v11,
          v12,
          v13 / 0xA,
          *((_DWORD *)a1 + 22));
      }
      ObfDereferenceObjectWithTag(v5, 0x67446F50u);
    }
  }
}

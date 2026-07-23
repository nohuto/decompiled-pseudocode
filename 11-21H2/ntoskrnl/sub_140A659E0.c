/*
 * XREFs of sub_140A659E0 @ 0x140A659E0
 * Callers:
 *     sub_140A666B0 @ 0x140A666B0 (sub_140A666B0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405228C8 @ 0x1405228C8 (sub_1405228C8.c)
 *     sub_140552800 @ 0x140552800 (sub_140552800.c)
 *     sub_14055A67C @ 0x14055A67C (sub_14055A67C.c)
 *     sub_14055BF14 @ 0x14055BF14 (sub_14055BF14.c)
 *     sub_140567038 @ 0x140567038 (sub_140567038.c)
 */

char __fastcall sub_140A659E0(_DWORD *a1)
{
  _DWORD *v1; // r13
  ULONG v2; // edi
  __int64 *v3; // rsi
  bool v4; // r12
  __int64 *v5; // r14
  __int64 *v6; // rax
  void *v7; // rcx
  bool v8; // r13
  int v9; // r9d
  unsigned int v10; // eax
  int v11; // r9d
  char *v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-C8h]
  _DWORD *v17; // [rsp+48h] [rbp-C0h]
  __int128 v18; // [rsp+50h] [rbp-B8h]
  __int128 v19; // [rsp+60h] [rbp-A8h]
  _QWORD v20[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-88h]
  _DWORD *v22; // [rsp+88h] [rbp-80h]
  __int128 v23; // [rsp+90h] [rbp-78h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v25; // [rsp+B0h] [rbp-58h]
  __int128 v26; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-38h] BYREF

  v1 = a1;
  v17 = a1;
  v22 = a1;
  v18 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v2 = 1;
  v15 = 1LL;
  v3 = qword_140A5B910;
  v16 = qword_140A5B910;
  v4 = sub_14055A67C();
  if ( v4 )
    EtwWrite(qword_140D00A98, &stru_140037B60, 0LL, 0, 0LL);
  v5 = (__int64 *)qword_140C2B800;
  v6 = &qword_140C2B800;
  v20[0] = &qword_140C2B800;
  while ( 1 )
  {
    v20[1] = v5;
    if ( v5 == &qword_140C2B800 )
      break;
    v21 = v5;
    LOBYTE(v6) = sub_140567038((__int64)v5, 6, v20);
    if ( (_BYTE)v6 )
    {
      if ( v4 )
      {
        v7 = (void *)v5[3];
        if ( v7 && MmIsAddressValid(v7) && (int)sub_1405228C8((_BYTE *)v5[3], 0x101uLL, &v15) >= 0 )
        {
          v3 = (__int64 *)v5[3];
          v2 = ++v15;
        }
        else
        {
          v15 = 1LL;
          v2 = 1;
          v3 = qword_140A5B910;
        }
        v16 = v3;
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(qword_140D00A98, &stru_1400380C8, 0LL, 1u, &UserData);
      }
      *(_QWORD *)&v18 = 0LL;
      HIDWORD(v18) = *v1;
      do
      {
        v19 = 0uLL;
        DWORD2(v18) = 0;
        v8 = 0;
        sub_14042A5E0(6LL, v21);
        if ( *((_QWORD *)&v19 + 1) )
        {
          v9 = DWORD2(v18);
          if ( (DWORD2(v18) & 0x80000003) != 0 )
          {
            v10 = DWORD2(v18) & 0x80000000;
            if ( SDWORD2(v18) < 0 )
            {
              v9 = DWORD2(v18) & 0x7FFFFFFF;
              DWORD2(v18) &= ~0x80000000;
            }
            v8 = v10 != 0;
            if ( ((v9 - 1) & v9) != 0 )
            {
              v13 = -1073741811;
            }
            else
            {
              v11 = v9 & 1;
              v12 = (char *)v19;
              if ( !v11 )
                v12 = (char *)((unsigned __int64)v19 >> 12);
              v23 = *((_OWORD *)v17 + 36);
              *(_QWORD *)&v25 = &v23;
              v13 = sub_140552800((__int64)&v24, v12, *((__int64 *)&v19 + 1), 2 * (v11 ^ 1u));
            }
            if ( v13 < 0 )
            {
              v8 = 0;
              sub_14055BF14((__int64)v3, v2, v13);
            }
          }
        }
      }
      while ( v8 );
      if ( v4 )
      {
        UserData.Ptr = (ULONGLONG)v3;
        UserData.Size = v2;
        UserData.Reserved = 0;
        EtwWrite(qword_140D00A98, &stru_140038AA8, 0LL, 1u, &UserData);
      }
      v1 = v17;
    }
    else if ( !v20[0] )
    {
      break;
    }
    v5 = (__int64 *)*v5;
    v6 = &qword_140C2B800;
  }
  if ( v4 )
    LOBYTE(v6) = EtwWrite(qword_140D00A98, &stru_1400381E0, 0LL, 0, 0LL);
  return (char)v6;
}

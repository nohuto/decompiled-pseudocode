/*
 * XREFs of PopPlTraceLogPowerPlane @ 0x1405A1F30
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x1405A1D84 (PopPlRegisterPowerPlane.c)
 *     PopDiagTraceControlCallback @ 0x140862C20 (PopDiagTraceControlCallback.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

int __fastcall PopPlTraceLogPowerPlane(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  unsigned __int16 *v4; // rbx
  __int64 **v5; // r12
  unsigned __int64 v7; // rsi
  unsigned __int16 *v8; // rcx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  _QWORD *v11; // r15
  unsigned __int16 *v12; // rcx
  int v13; // edx
  int v15; // [rsp+28h] [rbp-E0h]
  int v16; // [rsp+30h] [rbp-D8h]
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int16 *v21; // [rsp+58h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  int *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int64 *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h] BYREF
  __int64 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h] BYREF
  int *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  int *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  unsigned __int16 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  v3 = &retaddr;
  v4 = a1 + 24;
  v5 = (__int64 **)(a1 + 4);
  LOWORD(v18) = 0;
  v21 = a1 + 24;
  if ( (unsigned int)dword_140C03950 <= 5 )
  {
    v21 = a1 + 24;
  }
  else
  {
    LOWORD(v17) = 1;
    v23 = &v17;
    v24 = 2LL;
    v25 = &v28;
    v27 = *v5;
    v28 = *a1;
    v19 = *(_DWORD *)v4;
    v29 = (__int64 *)&v19;
    v20 = *((_DWORD *)a1 + 7);
    v31 = (__int64 *)&v20;
    v26 = 2LL;
    v30 = 4LL;
    v32 = 4LL;
    LODWORD(v3) = tlgWriteEx_EtwWriteEx(
                    (__int64)&dword_140C03950,
                    (unsigned __int8 *)&word_1400321C6,
                    a3,
                    1u,
                    v15,
                    v16,
                    7u,
                    v22);
  }
  v7 = 0LL;
  if ( *(_QWORD *)v4 )
  {
    do
    {
      v8 = *(unsigned __int16 **)(*((_QWORD *)a1 + 7) + 8 * v7);
      LOWORD(v18) = 4;
      if ( (unsigned int)dword_140C03950 > 5 )
      {
        LOWORD(v17) = 1;
        v23 = &v17;
        v24 = 2LL;
        v25 = &v28;
        v27 = (__int64 *)*((_QWORD *)v8 + 1);
        v28 = *v8;
        v29 = &v32;
        v31 = *v5;
        v32 = *a1;
        v20 = *((_DWORD *)v8 + 18);
        v33 = (__int64 *)&v20;
        v19 = *((_DWORD *)v8 + 8);
        v35 = &v19;
        v37 = &v18;
        v39 = v8 + 18;
        v26 = 2LL;
        v30 = 2LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 2LL;
        v40 = 32LL;
        tlgWriteEx_EtwWriteEx(
          (__int64)&dword_140C03950,
          (unsigned __int8 *)&dword_140032224,
          a3,
          1u,
          v15,
          v16,
          0xBu,
          v22);
      }
      v3 = *(_UNKNOWN ***)v4;
      ++v7;
    }
    while ( v7 < *(_QWORD *)v4 );
    v9 = 0LL;
    if ( v3 )
    {
      do
      {
        v3 = (_UNKNOWN **)*((_QWORD *)a1 + 7);
        v10 = 0LL;
        v11 = v3[v9];
        if ( v11[9] )
        {
          do
          {
            v3 = (_UNKNOWN **)v11[10];
            v12 = (unsigned __int16 *)v3[v10];
            v13 = v12[12];
            LOWORD(v18) = v12[12];
            if ( (unsigned int)dword_140C03950 > 5 )
            {
              v25 = (__int64 *)v12;
              v23 = &v17;
              LOWORD(v17) = 1;
              v27 = &v30;
              v29 = (__int64 *)v11[1];
              v30 = *(unsigned __int16 *)v11;
              v31 = &v34;
              v33 = *v5;
              v34 = *a1;
              v35 = &v18;
              v37 = (int *)(v12 + 16);
              v24 = 2LL;
              v38 = (unsigned int)(8 * v13);
              v26 = 16LL;
              v28 = 2LL;
              v32 = 2LL;
              v36 = 2LL;
              LODWORD(v3) = tlgWriteEx_EtwWriteEx(
                              (__int64)&dword_140C03950,
                              (unsigned __int8 *)&byte_140032139,
                              a3,
                              1u,
                              v15,
                              v16,
                              0xAu,
                              v22);
            }
            ++v10;
          }
          while ( v10 < v11[9] );
          v4 = v21;
        }
        ++v9;
      }
      while ( v9 < *(_QWORD *)v4 );
    }
  }
  return (int)v3;
}

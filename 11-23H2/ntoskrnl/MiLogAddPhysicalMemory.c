/*
 * XREFs of MiLogAddPhysicalMemory @ 0x14061BE5C
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140368110 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char __fastcall MiLogAddPhysicalMemory(unsigned __int16 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  int v12; // r11d
  int v13; // eax
  int v14; // ecx
  unsigned __int8 *v15; // rdx
  int v16; // r9d
  _DWORD *v17; // r11
  int v18; // eax
  int v20; // [rsp+28h] [rbp-71h]
  int v21; // [rsp+30h] [rbp-69h]
  ULONG v22; // [rsp+38h] [rbp-61h]
  int v23; // [rsp+48h] [rbp-51h] BYREF
  int v24; // [rsp+4Ch] [rbp-4Dh] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h] BYREF
  __int64 v26; // [rsp+58h] [rbp-41h] BYREF
  __int64 v27; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+68h] [rbp-31h] BYREF
  int *v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+94h] [rbp-5h]
  __int64 *v32; // [rsp+98h] [rbp-1h]
  int v33; // [rsp+A0h] [rbp+7h]
  int v34; // [rsp+A4h] [rbp+Bh]
  __int64 *v35; // [rsp+A8h] [rbp+Fh]
  int v36; // [rsp+B0h] [rbp+17h]
  int v37; // [rsp+B4h] [rbp+1Bh]
  int *v38; // [rsp+B8h] [rbp+1Fh]
  int v39; // [rsp+C0h] [rbp+27h]
  int v40; // [rsp+C4h] [rbp+2Bh]
  __int64 *v41; // [rsp+C8h] [rbp+2Fh]
  int v42; // [rsp+D0h] [rbp+37h]
  int v43; // [rsp+D4h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( *(_QWORD *)&qword_140C698E8 )
  {
    if ( a5 )
    {
      if ( **(_DWORD **)&qword_140C698E8 > 5u )
      {
        LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C698E8, 256LL);
        if ( (_BYTE)v5 )
        {
          v18 = *a1;
          v14 = 4;
          v31 = 0;
          v43 = 0;
          v24 = v18;
          v29 = &v24;
          v26 = *a2;
          v32 = &v26;
          v27 = *a3;
          v35 = &v27;
          v38 = &v23;
          LODWORD(v25) = *v17;
          v41 = &v25;
          v33 = 8;
          v36 = 8;
          v15 = (unsigned __int8 *)&word_14003852A;
          v22 = 7;
          v23 = v16;
          v42 = 4;
          goto LABEL_9;
        }
      }
    }
    else if ( **(_DWORD **)&qword_140C698E8 > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C698E8, 256LL);
      if ( (_BYTE)v5 )
      {
        v13 = *a1;
        v14 = v12 + 4;
        v31 &= v12;
        v23 = v13;
        v29 = &v23;
        v25 = *a2;
        v32 = &v25;
        v26 = *a3;
        v35 = &v26;
        v38 = &v24;
        v33 = v12 + 8;
        v36 = v12 + 8;
        v15 = (unsigned __int8 *)word_1400384D2;
        v22 = 6;
        v24 = v10;
LABEL_9:
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v30 = v14;
        v39 = v14;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v11, v15, v9, 1u, v20, v21, v22, &v28);
      }
    }
  }
  return (char)v5;
}

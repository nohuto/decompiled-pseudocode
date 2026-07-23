/*
 * XREFs of sub_1407FE0BC @ 0x1407FE0BC
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1403C0D08 @ 0x1403C0D08 (sub_1403C0D08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407FE004 @ 0x1407FE004 (sub_1407FE004.c)
 *     sub_140A53260 @ 0x140A53260 (sub_140A53260.c)
 */

char __fastcall sub_1407FE0BC(__int16 a1)
{
  char result; // al
  unsigned __int64 v3; // rdi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v13; // r8
  __int128 *v14; // rdx
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int16 v23; // cx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v24; // rcx
  __int64 v25; // r8
  __int128 *v26; // rdx
  int v27; // [rsp+38h] [rbp-89h] BYREF
  int v28; // [rsp+3Ch] [rbp-85h] BYREF
  int v29; // [rsp+40h] [rbp-81h] BYREF
  int v30; // [rsp+44h] [rbp-7Dh] BYREF
  int v31; // [rsp+48h] [rbp-79h] BYREF
  __int64 v32; // [rsp+50h] [rbp-71h] BYREF
  int v33; // [rsp+58h] [rbp-69h] BYREF
  int v34; // [rsp+5Ch] [rbp-65h] BYREF
  int v35; // [rsp+60h] [rbp-61h] BYREF
  int v36; // [rsp+64h] [rbp-5Dh] BYREF
  __int128 v37; // [rsp+68h] [rbp-59h] BYREF
  __int128 v38; // [rsp+78h] [rbp-49h] BYREF
  __int64 v39; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  int *v41; // [rsp+A8h] [rbp-19h]
  __int64 v42; // [rsp+B0h] [rbp-11h]
  int *v43; // [rsp+B8h] [rbp-9h]
  __int64 v44; // [rsp+C0h] [rbp-1h]
  int *v45; // [rsp+C8h] [rbp+7h]
  __int64 v46; // [rsp+D0h] [rbp+Fh]
  int *v47; // [rsp+D8h] [rbp+17h]
  __int64 v48; // [rsp+E0h] [rbp+1Fh]

  result = 0;
  v32 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  if ( byte_140C5AE14 )
  {
    result = EtwEventEnabled(RegHandle, &stru_14000EFF8);
    if ( result )
    {
      v3 = 1000LL * *(unsigned int *)(sub_140348800(0) + 68);
      v34 = sub_140A53260(&qword_140C22D00, &qword_140C22D08);
      v33 = sub_140A53260(&qword_140C22CF0, &qword_140C22CF8);
      if ( qword_140C22CE8 )
      {
        v32 = 0LL;
        v29 = sub_140A53260(&v32, &qword_140C22CE8);
        v27 = v29 + sub_140A53260(&qword_140C22CC8, &qword_140C22CD0);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&qword_140C22EA8;
        v41 = &v27;
        v43 = &v29;
        v45 = &v33;
        v47 = &v34;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        return EtwWrite(RegHandle, (PCEVENT_DESCRIPTOR)qword_140039B30, 0LL, 5u, &UserData);
      }
      result = dword_140C22EF0;
      if ( dword_140C22EF0 )
      {
        v4 = qword_140C22D58;
        v30 = (4 * dword_140C22EF0) & 0x3FFFFF;
        v36 = qword_140C22D58;
        v31 = qword_140C22D30 / v3;
        result = qword_140C22F00;
        v27 = qword_140C22F00;
        if ( (a1 & 8) != 0 )
        {
          if ( !qword_140C23F10 )
            return result;
          v28 = sub_140A53260(&qword_140C23F10, &qword_140C22CA8) + v4;
          if ( (int)sub_1403C0D08(
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                      L"LastLogOffEndTimePerfCounter",
                      8uLL,
                      0,
                      &v32) < 0 )
            v5 = 0;
          else
            v5 = sub_140A53260(&v32, &qword_140C22D60);
          v35 = v5;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v30;
          v42 = 4LL;
          v41 = &v28;
          v44 = 4LL;
          v43 = &v31;
          v45 = &v35;
          v46 = 4LL;
          EtwWrite(RegHandle, &stru_1400398F0, 0LL, 4u, &UserData);
          sub_1407FE004((unsigned __int64 *)&qword_140C22D18, v3, (__int64)&v37);
          LODWORD(v38) = v27;
          v6 = (unsigned __int64)qword_140C22ED8 >> 8;
          WORD3(v38) = -1;
          if ( (unsigned __int64)qword_140C22ED8 >> 8 > 0x7FFF )
            LOWORD(v6) = 0x7FFF;
          WORD2(v38) = v6 & 0x7FFF;
          if ( (unsigned __int64)qword_140C22EE0 >> 8 <= 0xFFFF )
            WORD3(v38) = (unsigned int)qword_140C22EE0 >> 8;
          WORD4(v38) = -1;
          if ( 1000 * qword_140C22D78 / (unsigned __int64)qword_140D069F8 <= 0xFFFF )
            WORD4(v38) = 1000 * qword_140C22D78 / (unsigned __int64)qword_140D069F8;
          WORD5(v38) = -1;
          if ( qword_140C22E68 / v3 <= 0xFFFF )
            WORD5(v38) = qword_140C22E68 / v3;
          WORD6(v38) = -1;
          if ( (unsigned int)qword_140C22D68 <= 0xFFFF )
            WORD6(v38) = qword_140C22D68;
          HIWORD(v38) = -1;
          if ( (unsigned int)qword_140C22EA8 <= 0xFFFF )
            HIWORD(v38) = qword_140C22EA8;
          v7 = DWORD1(v37);
          HIWORD(v39) = -1;
          if ( DWORD1(v37) > 0x3FF )
            v7 = 1023;
          v8 = HIDWORD(v37);
          if ( HIDWORD(v37) > 0x1FF )
            v8 = 511;
          v9 = v7 ^ (v7 ^ (v8 << 10)) & 0x7FC00;
          v10 = 1000 * (qword_140C22DF8 - qword_140C22E30) / (unsigned __int64)qword_140D069F8;
          if ( v10 > 0x1FFF )
            LODWORD(v10) = 0x1FFF;
          LODWORD(v39) = v9 & 0x7FFFF | ((_DWORD)v10 << 19);
          v11 = (unsigned __int64)qword_140C22EB8 >> 8;
          if ( (unsigned __int64)qword_140C22EB8 >> 8 > 0x7FFF )
            LOWORD(v11) = 0x7FFF;
          WORD2(v39) = v11 & 0x7FFF;
          if ( (unsigned __int64)qword_140C22EC0 >> 8 <= 0xFFFF )
            HIWORD(v39) = (unsigned int)qword_140C22EC0 >> 8;
          p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v13 = 6LL;
          v14 = &v38;
          do
          {
            *(_QWORD *)&p_Reserved[-3].Reserved = v14;
            v14 = (__int128 *)((char *)v14 + 4);
            *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
            p_Reserved += 4;
            --v13;
          }
          while ( v13 );
          v15 = (const EVENT_DESCRIPTOR *)qword_1400381C0;
          return EtwWrite(RegHandle, v15, 0LL, 6u, &UserData);
        }
        UserData.Ptr = (ULONGLONG)&v30;
        v41 = &v36;
        *(_QWORD *)&UserData.Size = 4LL;
        v43 = &v31;
        v42 = 4LL;
        v44 = 4LL;
        result = EtwWrite(RegHandle, &stru_140038440, 0LL, 3u, &UserData);
        v16 = qword_140C22D68;
        if ( (_DWORD)qword_140C22D68 )
        {
          sub_1407FE004((unsigned __int64 *)&qword_140C22D18, v3, (__int64)&v37);
          LODWORD(v38) = v27;
          v17 = (unsigned __int64)qword_140C22ED8 >> 8;
          if ( (unsigned __int64)qword_140C22ED8 >> 8 > 0x7FFF )
            LOWORD(v17) = 0x7FFF;
          WORD2(v38) = (a1 << 10) ^ (v17 ^ (a1 << 10)) & 0x7FFF;
          WORD3(v38) = (unsigned int)qword_140C22EE0 >> 8;
          if ( (unsigned __int64)qword_140C22EE0 >> 8 >= 0xFFFF )
            WORD3(v38) = -1;
          WORD4(v38) = 1000 * qword_140C22D78 / (unsigned __int64)qword_140D069F8;
          if ( 1000 * qword_140C22D78 / (unsigned __int64)qword_140D069F8 >= 0xFFFF )
            WORD4(v38) = -1;
          WORD5(v38) = qword_140C22E68 / v3;
          if ( qword_140C22E68 / v3 >= 0xFFFF )
            WORD5(v38) = -1;
          WORD6(v38) = v16;
          if ( v16 >= 0xFFFF )
            WORD6(v38) = -1;
          HIWORD(v38) = qword_140C22EA8;
          if ( (unsigned int)qword_140C22EA8 >= 0xFFFF )
            HIWORD(v38) = -1;
          v18 = DWORD1(v37);
          if ( DWORD1(v37) > 0x3FF )
            v18 = 1023;
          v19 = HIDWORD(v37);
          if ( HIDWORD(v37) > 0x1FF )
            v19 = 511;
          v20 = v18 ^ (v18 ^ (v19 << 10)) & 0x7FC00;
          v21 = 1000 * (qword_140C22DF8 - qword_140C22E30) / (unsigned __int64)qword_140D069F8;
          if ( v21 > 0x1FFF )
            LODWORD(v21) = 0x1FFF;
          LODWORD(v39) = v20 & 0x7FFFF | ((_DWORD)v21 << 19);
          v22 = (unsigned __int64)qword_140C22EB8 >> 8;
          if ( (unsigned __int64)qword_140C22EB8 >> 8 > 0x7FFF )
            LOWORD(v22) = 0x7FFF;
          if ( dword_140C23678 )
            v23 = 0x8000;
          else
            v23 = 0;
          WORD2(v39) = v23 | v22 & 0x7FFF;
          HIWORD(v39) = (unsigned int)qword_140C22EC0 >> 8;
          if ( (unsigned __int64)qword_140C22EC0 >> 8 >= 0xFFFF )
            HIWORD(v39) = -1;
          v24 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v25 = 6LL;
          v26 = &v38;
          do
          {
            *(_QWORD *)&v24[-3].Reserved = v26;
            v26 = (__int128 *)((char *)v26 + 4);
            *(_QWORD *)&v24[-1].Reserved = 4LL;
            v24 += 4;
            --v25;
          }
          while ( v25 );
          v15 = &stru_1400384D8;
          return EtwWrite(RegHandle, v15, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return result;
}

/*
 * XREFs of sub_140974FBC @ 0x140974FBC
 * Callers:
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140971650 @ 0x140971650 (sub_140971650.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140972700 @ 0x140972700 (sub_140972700.c)
 *     sub_140973B80 @ 0x140973B80 (sub_140973B80.c)
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_140977B70 @ 0x140977B70 (sub_140977B70.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     sub_1403747BC @ 0x1403747BC (sub_1403747BC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140974FBC(unsigned int a1, unsigned int a2, UNICODE_STRING *a3, unsigned int a4, int a5)
{
  UNICODE_STRING *p_DestinationString_8; // rdi
  __int64 v9; // r14
  struct _KPROCESS *v10; // r9
  __int64 v11; // r8
  ULONG v12; // r9d
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  int v16; // r11d
  unsigned __int8 *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // r14
  struct _KPROCESS *v20; // r9
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // r10
  int v24; // r11d
  bool v25; // zf
  int v26; // r9d
  int v27; // [rsp+28h] [rbp-E0h]
  int v28; // [rsp+30h] [rbp-D8h]
  ULONG v29; // [rsp+38h] [rbp-D0h]
  ULONG v30; // [rsp+38h] [rbp-D0h]
  int v31; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING *DestinationString; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41[2]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  unsigned int *v44; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D0h] [rbp-38h]
  unsigned int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  __int64 *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  __int64 *Buffer; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h] BYREF
  __int64 *p_DestinationString; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  __int64 *v54; // [rsp+118h] [rbp+10h]
  _QWORD v55[3]; // [rsp+120h] [rbp+18h] BYREF

  p_DestinationString_8 = a3;
  v38 = 0LL;
  DestinationString_8 = 0LL;
  if ( !*(_QWORD *)&qword_140C53448 )
    return;
  if ( !a3 )
  {
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    p_DestinationString_8 = &DestinationString_8;
  }
  if ( a5 )
  {
    if ( a5 == 1 || a5 == 7 )
    {
      if ( **(_DWORD **)&qword_140C53448 <= 5u || !sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000020LL) )
        return;
      v25 = v26 == 7;
      v13 = (char *)&unk_14002D8F0;
    }
    else
    {
      if ( ((a5 - 2) & 0xFFFFFFFB) != 0 )
      {
        if ( a5 == 3 )
        {
          if ( **(_DWORD **)&qword_140C53448 <= 5u || !sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000020LL) )
            return;
          ProcessId = a4;
          p_ProcessId = &ProcessId;
          v17 = (unsigned __int8 *)&word_14002D876;
          v43 = 4LL;
          v44 = &v32;
          v46 = (unsigned int *)&v35;
          v48 = &v51;
          Buffer = (__int64 *)p_DestinationString_8->Buffer;
          LODWORD(v51) = p_DestinationString_8->Length;
          v32 = a1;
          v45 = 4LL;
          LODWORD(v35) = a2;
          v47 = 4LL;
          v49 = 2LL;
          HIDWORD(v51) = v16;
          v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 8LL);
          p_DestinationString = (__int64 *)&v34;
          v38 = 2164260864LL;
          v54 = &v38;
          v30 = 9;
          v34 = v18;
          v53 = 4LL;
          v55[0] = 8LL;
        }
        else
        {
          if ( a5 == 4 )
          {
            sub_1403747BC(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL, &v34, &v38);
            v19 = *(_QWORD *)&qword_140C53448;
            if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000020LL) )
            {
              ProcessId = (unsigned int)PsGetProcessId(v20);
              v43 = 4LL;
              p_ProcessId = &ProcessId;
              sub_1403699D0((__int64)&v44, (const CHAR *)v38);
              v32 = a4;
              v46 = &v32;
              v47 = 4LL;
              v48 = &v35;
              LODWORD(v35) = a1;
              Buffer = &v36;
              v49 = 4LL;
              p_DestinationString = (__int64 *)&DestinationString;
              v37 = 2164260864LL;
              v54 = &v37;
              LODWORD(v36) = a2;
              v51 = 4LL;
              DestinationString = p_DestinationString_8;
              v53 = 8LL;
              v55[0] = 8LL;
              sub_14024A9B0(v19, (unsigned __int8 *)&unk_14002D408, v21, 1u, v21, v21, 9u, v41);
            }
            return;
          }
          if ( **(_DWORD **)&qword_140C53448 <= 5u || !sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000020LL) )
            return;
          LODWORD(v36) = a4;
          p_ProcessId = (unsigned int *)&v36;
          v17 = (unsigned __int8 *)&unk_14002D338;
          v43 = 4LL;
          v44 = &ProcessId;
          v46 = &v32;
          v48 = &v51;
          Buffer = (__int64 *)p_DestinationString_8->Buffer;
          LODWORD(v51) = p_DestinationString_8->Length;
          v37 = 2164260864LL;
          p_DestinationString = &v37;
          v30 = 8;
          ProcessId = a1;
          v45 = 4LL;
          v32 = a2;
          v47 = 4LL;
          v49 = 2LL;
          HIDWORD(v51) = v16;
          v53 = 8LL;
        }
        sub_14024A9B0(v15, v17, 0LL, 1u, v16, v16, v30, v41);
        return;
      }
      if ( **(_DWORD **)&qword_140C53448 <= 5u || !sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000020LL) )
        return;
      v25 = v22 == 6;
      v13 = &byte_14002D7E7;
    }
    v32 = a2;
    p_ProcessId = (unsigned int *)&v36;
    v44 = &ProcessId;
    v46 = &v32;
    v45 = 4LL;
    ProcessId = a1;
    v43 = 4LL;
    v48 = &v51;
    LOBYTE(v31) = v25;
    v14 = v23;
    Buffer = (__int64 *)p_DestinationString_8->Buffer;
    v11 = 0LL;
    v12 = 1;
    LODWORD(v51) = p_DestinationString_8->Length;
    p_DestinationString = (__int64 *)&v31;
    v37 = 2164260864LL;
    v54 = &v37;
    v29 = 9;
    v28 = v24;
    v27 = v24;
    LODWORD(v36) = a4;
    v55[0] = 8LL;
    v53 = 1LL;
    HIDWORD(v51) = v24;
    v49 = 2LL;
    goto LABEL_30;
  }
  sub_1403747BC(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL, &v34, &v38);
  v9 = *(_QWORD *)&qword_140C53448;
  if ( **(_DWORD **)&qword_140C53448 > 5u && sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000020LL) )
  {
    v34 = (unsigned int)PsGetProcessId(v10);
    v43 = 4LL;
    p_ProcessId = &v34;
    sub_1403699D0((__int64)&v44, (const CHAR *)v38);
    LODWORD(v35) = a4;
    v46 = (unsigned int *)&v35;
    v12 = v11 + 1;
    v32 = a1;
    v48 = (__int64 *)&v32;
    v13 = byte_14002D61B;
    v49 = 4LL;
    Buffer = (__int64 *)&ProcessId;
    v14 = v9;
    ProcessId = a2;
    p_DestinationString = v55;
    v54 = (__int64 *)p_DestinationString_8->Buffer;
    LODWORD(v55[0]) = p_DestinationString_8->Length;
    v36 = 2164260864LL;
    v55[1] = &v36;
    v29 = 10;
    v28 = v11;
    v27 = v11;
    v51 = 4LL;
    v53 = 2LL;
    HIDWORD(v55[0]) = v11;
    v55[2] = 8LL;
LABEL_30:
    v47 = 4LL;
    sub_14024A9B0(v14, (unsigned __int8 *)v13, v11, v12, v27, v28, v29, v41);
  }
}

/*
 * XREFs of sub_1406D0CB0 @ 0x1406D0CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140263260 @ 0x140263260 (sub_140263260.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swscanf_s @ 0x1403E75B0 (swscanf_s.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D14BC @ 0x1406D14BC (sub_1406D14BC.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 */

int __fastcall sub_1406D0CB0(int a1, __int64 *a2)
{
  bool v4; // r14
  bool v5; // r13
  char v6; // r15
  int v7; // edi
  __int64 v8; // rax
  void *v9; // r12
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // esi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned int v15; // edi
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int result; // eax
  ULONG v20; // edi
  _QWORD *v21; // rdx
  const UNICODE_STRING *v22; // rdx
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  __int16 v24; // [rsp+38h] [rbp-D0h]
  bool v25; // [rsp+3Ah] [rbp-CEh]
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  ULONG Id[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _PCW_DATA v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v32; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v33; // [rsp+70h] [rbp-98h]
  unsigned __int64 v34; // [rsp+78h] [rbp-90h]
  unsigned __int64 v35; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v37; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-60h]
  struct _PCW_DATA v39; // [rsp+B0h] [rbp-58h] BYREF
  struct _PCW_DATA v40; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v41[26]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v42[26]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v43[26]; // [rsp+278h] [rbp+170h] BYREF
  _QWORD v44[34]; // [rsp+348h] [rbp+240h] BYREF
  WCHAR SourceString[16]; // [rsp+458h] [rbp+350h] BYREF

  v4 = 0;
  memset(v41, 0, 0xC8uLL);
  memset(v42, 0, 0xC8uLL);
  v28 = 0;
  v27 = 0;
  LOWORD(v26) = 0;
  DestinationString = 0LL;
  memset(v43, 0, 0xC8uLL);
  Id[0] = 0;
  memset(v44, 0, 0x108uLL);
  v25 = 0;
  v38 = 0LL;
  v24 = 0;
  v5 = 0;
  v6 = 0;
  v37 = 0LL;
  v7 = a1 - 2;
  if ( !v7 )
  {
    v9 = (void *)a2[3];
    v30.Data = v9;
LABEL_4:
    LODWORD(v31) = KeQueryActiveProcessorCountEx(0xFFFFu);
    v12 = v31;
    v13 = 0LL;
    v34 = 0LL;
    v14 = 0LL;
    v35 = 0LL;
    v27 = 0;
    LOWORD(v15) = 0;
    if ( word_140D05000 )
    {
      while ( 1 )
      {
        LODWORD(v44[0]) = 2097153;
        memset((char *)v44 + 4, 0, 0x104uLL);
        sub_140263260(v15, (unsigned __int16 *)v44, &v26);
        if ( (_WORD)v26 )
        {
          memset(v41, 0, 0xC8uLL);
          *((_QWORD *)&v37 + 1) = v44[1];
          *(_QWORD *)&v37 = v44;
          v33 = 0LL;
          v32 = 0LL;
          v28 = 0;
          LOWORD(v38) = 0;
          while ( !(unsigned int)KeEnumerateNextProcessor(Id, (unsigned __int16 **)&v37) )
          {
            LOBYTE(v18) = v6;
            LOBYTE(v17) = v4;
            LOBYTE(v16) = v5;
            sub_1406D14BC(qword_140D088C0[Id[0]], v16, v17, v18, (__int64)v43);
            LODWORD(Data) = v28;
            sub_1402E1280(SourceString, 0x1AuLL, L"%u,%u", v27, Data);
            ++v28;
            RtlInitUnicodeString(&DestinationString, SourceString);
            v39.Data = v43;
            v39.Size = 200;
            result = PcwAddInstance((PPCW_BUFFER)v9, &DestinationString, Id[0], 1u, &v39);
            if ( result < 0 )
              return result;
            v41[0] += v43[0];
            v41[1] += v43[1];
            v41[2] += v43[2];
            v41[3] += v43[3];
            v41[11] += v43[11];
            v42[0] += v43[0];
            LODWORD(v41[4]) += LODWORD(v43[4]);
            v41[6] += v43[6];
            HIDWORD(v41[7]) += HIDWORD(v43[7]);
            v42[1] += v43[1];
            v42[2] += v43[2];
            v42[3] += v43[3];
            LODWORD(v41[8]) += LODWORD(v43[8]);
            v41[5] += v43[5];
            LODWORD(v42[4]) += LODWORD(v43[4]);
            v42[6] += v43[6];
            HIDWORD(v42[7]) += HIDWORD(v43[7]);
            LODWORD(v41[7]) += LODWORD(v43[7]);
            v41[9] += v43[9];
            v41[12] += v43[12];
            LODWORD(v42[8]) += LODWORD(v43[8]);
            v42[5] += v43[5];
            v41[10] += v43[10];
            LODWORD(v42[7]) += LODWORD(v43[7]);
            v42[9] += v43[9];
            v41[13] += v43[13];
            HIDWORD(v41[23]) |= HIDWORD(v43[23]);
            v41[14] += v43[14];
            v41[21] += v43[21];
            v41[22] += v43[22];
            v41[15] += v43[15];
            HIDWORD(v41[16]) += HIDWORD(v43[16]);
            LODWORD(v41[17]) += LODWORD(v43[17]);
            v32 += LODWORD(v43[18]);
            v33 += HIDWORD(v43[18]);
            v41[19] += v43[19];
            v41[20] += v43[20];
            v41[24] += v43[24];
            LODWORD(v41[23]) += LODWORD(v43[23]);
            v42[12] += v43[12];
            v42[10] += v43[10];
            v42[13] += v43[13];
            v42[11] += v43[11];
            v42[14] += v43[14];
            v42[21] += v43[21];
            v42[22] += v43[22];
            v42[15] += v43[15];
            LODWORD(v42[17]) += LODWORD(v43[17]);
            HIDWORD(v42[16]) += HIDWORD(v43[16]);
            v35 += LODWORD(v43[18]);
            v34 += HIDWORD(v43[18]);
            v42[19] += v43[19];
            v42[20] += v43[20];
            v42[24] += v43[24];
            LODWORD(v42[23]) += LODWORD(v43[23]);
            HIDWORD(v42[23]) |= HIDWORD(v43[23]);
            v6 = HIBYTE(v24);
            v4 = v24;
            v9 = (void *)v30.Data;
            v5 = v25;
          }
          if ( (unsigned __int16)v26 > 1u )
          {
            v41[0] /= (unsigned __int64)(unsigned __int16)v26;
            v41[1] /= (unsigned __int64)(unsigned __int16)v26;
            v41[2] /= (unsigned __int64)(unsigned __int16)v26;
            v41[3] /= (unsigned __int64)(unsigned __int16)v26;
            v41[6] /= (unsigned __int64)(unsigned __int16)v26;
            v41[5] /= (unsigned __int64)(unsigned __int16)v26;
            v41[9] /= (unsigned __int64)(unsigned __int16)v26;
            v41[10] /= (unsigned __int64)(unsigned __int16)v26;
            v41[11] /= (unsigned __int64)(unsigned __int16)v26;
            v41[15] /= (unsigned __int64)(unsigned __int16)v26;
            HIDWORD(v41[16]) /= (unsigned __int16)v26;
            LODWORD(v41[17]) /= (unsigned __int16)v26;
          }
          if ( v6 )
          {
            LODWORD(v41[18]) = v32 / (unsigned __int16)v26;
            HIDWORD(v41[18]) = v33 / (unsigned __int16)v26;
            v41[19] /= (unsigned __int64)(unsigned __int16)v26;
            v41[20] /= (unsigned __int64)(unsigned __int16)v26;
            v41[24] /= (unsigned __int64)(unsigned __int16)v26;
          }
          if ( v4 )
            LODWORD(v41[23]) /= (unsigned __int16)v26;
          sub_1402E1280(SourceString, 0x1AuLL, L"%u,_Total", v27);
          RtlInitUnicodeString(&DestinationString, SourceString);
          v40.Data = v41;
          v40.Size = 200;
          result = PcwAddInstance((PPCW_BUFFER)v9, &DestinationString, v27 + dword_140D068E8, 1u, &v40);
          if ( result < 0 )
            break;
        }
        v15 = v27 + 1;
        v27 = v15;
        if ( v15 >= (unsigned __int16)word_140D05000 )
        {
          v12 = v31;
          v13 = v34;
          v14 = v35;
          goto LABEL_19;
        }
      }
    }
    else
    {
LABEL_19:
      if ( v12 > 1 )
      {
        v42[0] /= (unsigned __int64)v12;
        v42[1] /= (unsigned __int64)v12;
        v42[2] /= (unsigned __int64)v12;
        v42[3] /= (unsigned __int64)v12;
        v42[6] /= (unsigned __int64)v12;
        v42[5] /= (unsigned __int64)v12;
        v42[9] /= (unsigned __int64)v12;
        v42[10] /= (unsigned __int64)v12;
        v42[11] /= (unsigned __int64)v12;
        v42[15] /= (unsigned __int64)v12;
        HIDWORD(v42[16]) /= v12;
        LODWORD(v42[17]) /= v12;
      }
      if ( v6 )
      {
        LODWORD(v42[18]) = v14 / v12;
        HIDWORD(v42[18]) = v13 / v12;
        v42[19] /= (unsigned __int64)v12;
        v42[20] /= (unsigned __int64)v12;
        v42[24] /= (unsigned __int64)v12;
      }
      if ( v4 )
        LODWORD(v42[23]) /= v12;
      sub_1402E1280(SourceString, 0x1AuLL, L"_Total", v14);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v30.Data = v42;
      v30.Size = 200;
      return PcwAddInstance(
               (PPCW_BUFFER)v9,
               &DestinationString,
               dword_140D068E8 + (unsigned __int16)word_140D05000,
               1u,
               &v30);
    }
    return result;
  }
  if ( v7 != 1 )
    return 0;
  v8 = *a2;
  v9 = (void *)a2[3];
  v30.Data = v9;
  v5 = (v8 & 0x100E0FF05LL) != 0;
  v25 = v5;
  v4 = (v8 & 0xC00F0000) != 0;
  v6 = (v8 & 0x63F000000LL) != 0;
  LOBYTE(v24) = v4;
  HIBYTE(v24) = v6;
  if ( swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v27, &v28) != 2 )
    goto LABEL_4;
  Id[0] = *((_DWORD *)a2 + 4);
  v20 = Id[0];
  if ( Id[0] >= (unsigned int)dword_140D06884 )
    return -1073741275;
  v21 = v43;
  LOBYTE(v11) = v6;
  LOBYTE(v21) = v5;
  LOBYTE(v10) = v4;
  sub_1406D14BC(qword_140D088C0[Id[0]], (_DWORD)v21, v10, v11, (__int64)v43);
  v22 = (const UNICODE_STRING *)a2[1];
  v30.Data = v43;
  v30.Size = 200;
  result = PcwAddInstance((PPCW_BUFFER)v9, v22, v20, 1u, &v30);
  if ( result >= 0 )
    return 0;
  return result;
}

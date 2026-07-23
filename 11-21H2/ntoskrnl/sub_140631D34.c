/*
 * XREFs of sub_140631D34 @ 0x140631D34
 * Callers:
 *     sub_1405696DC @ 0x1405696DC (sub_1405696DC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     RtlPcToFileHeader @ 0x1403870E0 (RtlPcToFileHeader.c)
 *     RtlPcToFileName @ 0x1403D6E30 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall sub_140631D34(int a1, __int64 a2)
{
  UNICODE_STRING *v2; // rax
  void *v3; // rsp
  unsigned __int16 Length; // di
  __int16 v5; // si
  int v6; // r15d
  int v7; // ecx
  void *v8; // rsp
  unsigned __int16 v9; // bx
  wchar_t *v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rax
  unsigned __int16 *v13; // r9
  unsigned __int16 *v14; // r10
  PVOID v16[8]; // [rsp+40h] [rbp+0h] BYREF
  UNICODE_STRING v17; // [rsp+80h] [rbp+40h] BYREF
  UNICODE_STRING v18; // [rsp+90h] [rbp+50h] BYREF
  signed __int64 v19; // [rsp+A0h] [rbp+60h] BYREF
  signed __int64 v20; // [rsp+A8h] [rbp+68h] BYREF
  PVOID v21; // [rsp+B0h] [rbp+70h] BYREF
  signed __int64 v22; // [rsp+B8h] [rbp+78h] BYREF
  PVOID v23; // [rsp+C0h] [rbp+80h] BYREF
  signed __int64 v24; // [rsp+C8h] [rbp+88h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp+A0h] BYREF
  wchar_t *Buffer; // [rsp+F0h] [rbp+B0h]
  int v28; // [rsp+F8h] [rbp+B8h]
  int v29; // [rsp+FCh] [rbp+BCh]
  char *v30; // [rsp+100h] [rbp+C0h]
  __int64 v31; // [rsp+108h] [rbp+C8h]
  wchar_t *v32; // [rsp+110h] [rbp+D0h]
  int v33; // [rsp+118h] [rbp+D8h]
  int v34; // [rsp+11Ch] [rbp+DCh]
  PVOID *v35; // [rsp+120h] [rbp+E0h]
  __int64 v36; // [rsp+128h] [rbp+E8h]
  PVOID *v37; // [rsp+130h] [rbp+F0h]
  __int64 v38; // [rsp+138h] [rbp+F8h]
  signed __int64 *v39; // [rsp+140h] [rbp+100h]
  __int64 v40; // [rsp+148h] [rbp+108h]
  char *v41; // [rsp+150h] [rbp+110h]
  __int64 v42; // [rsp+158h] [rbp+118h]
  PVOID *v43; // [rsp+160h] [rbp+120h]
  __int64 v44; // [rsp+168h] [rbp+128h]
  signed __int64 *v45; // [rsp+170h] [rbp+130h]
  __int64 v46; // [rsp+178h] [rbp+138h]
  PVOID *v47; // [rsp+180h] [rbp+140h]
  __int64 v48; // [rsp+188h] [rbp+148h]
  PVOID *v49; // [rsp+190h] [rbp+150h]
  __int64 v50; // [rsp+198h] [rbp+158h]
  char *v51; // [rsp+1A0h] [rbp+160h]
  __int64 v52; // [rsp+1A8h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+1B0h] [rbp+170h] BYREF
  char *v54; // [rsp+1D0h] [rbp+190h]
  __int64 v55; // [rsp+1D8h] [rbp+198h]
  _DWORD *v56; // [rsp+1E0h] [rbp+1A0h]
  __int64 v57; // [rsp+1E8h] [rbp+1A8h]
  __int64 v58; // [rsp+1F0h] [rbp+1B0h]
  _DWORD v59[2]; // [rsp+1F8h] [rbp+1B8h] BYREF
  _DWORD *v60; // [rsp+200h] [rbp+1C0h]
  __int64 v61; // [rsp+208h] [rbp+1C8h]
  __int64 v62; // [rsp+210h] [rbp+1D0h]
  _DWORD v63[2]; // [rsp+218h] [rbp+1D8h] BYREF
  PVOID *v64; // [rsp+220h] [rbp+1E0h]
  __int64 v65; // [rsp+228h] [rbp+1E8h]
  signed __int64 *v66; // [rsp+230h] [rbp+1F0h]
  __int64 v67; // [rsp+238h] [rbp+1F8h]
  PVOID *v68; // [rsp+240h] [rbp+200h]
  __int64 v69; // [rsp+248h] [rbp+208h]
  signed __int64 *v70; // [rsp+250h] [rbp+210h]
  __int64 v71; // [rsp+258h] [rbp+218h]
  PVOID *v72; // [rsp+260h] [rbp+220h]
  __int64 v73; // [rsp+268h] [rbp+228h]
  PVOID *v74; // [rsp+270h] [rbp+230h]
  __int64 v75; // [rsp+278h] [rbp+238h]
  __int64 *v76; // [rsp+280h] [rbp+240h]
  __int64 v77; // [rsp+288h] [rbp+248h]

  v16[3] = *(PVOID *)a2;
  v16[4] = *(PVOID *)(a2 + 8);
  HIDWORD(v16[2]) = *(_DWORD *)(a2 + 16);
  HIDWORD(v16[5]) = *(_DWORD *)(a2 + 20);
  LODWORD(v16[6]) = *(_DWORD *)(a2 + 24);
  LODWORD(v2) = *(_DWORD *)(a2 + 28);
  LODWORD(v16[2]) = (_DWORD)v2;
  v16[1] = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a1 == 1 )
  {
    v3 = alloca(64LL);
    memset(v16, 0, sizeof(v16));
    v17.MaximumLength = 64;
    v17.Buffer = (wchar_t *)v16;
    if ( (int)RtlPcToFileName((unsigned __int64)v16[3], &v17) >= 0 )
    {
      Length = v17.Length;
    }
    else
    {
      Length = 0;
      v17.Length = 0;
    }
    *(_QWORD *)&UserData.Size = 2LL;
    v5 = 6;
    UserData.Ptr = (ULONGLONG)v16;
    v6 = 12;
    if ( Length )
    {
      Buffer = v17.Buffer;
      v7 = Length;
    }
    else
    {
      Buffer = L"(null)";
      v7 = 12;
    }
    v28 = v7;
    v29 = 0;
    v8 = alloca(64LL);
    memset(v16, 0, sizeof(v16));
    v18.MaximumLength = 64;
    v18.Buffer = (wchar_t *)v16;
    if ( (int)RtlPcToFileName((unsigned __int64)v16[4], &v18) >= 0 )
    {
      v9 = v18.Length;
    }
    else
    {
      v9 = 0;
      v18.Length = 0;
    }
    v31 = 2LL;
    v30 = (char *)v16 + 4;
    if ( v9 )
    {
      v10 = v18.Buffer;
      v5 = v9 >> 1;
      v6 = v9;
    }
    else
    {
      v10 = L"(null)";
    }
    v32 = v10;
    v35 = &v16[5];
    WORD2(v16[0]) = v5;
    v33 = v6;
    v34 = 0;
    v36 = 4LL;
    RtlPcToFileHeader(v16[3], &v16[1]);
    if ( v16[1] )
      v11 = (char *)v16[3] - (char *)v16[1];
    else
      v11 = 0LL;
    v19 = v11;
    v37 = &v16[3];
    v39 = &v19;
    v41 = (char *)&v16[5] + 4;
    v38 = 8LL;
    v40 = 8LL;
    v42 = 4LL;
    RtlPcToFileHeader(v16[4], &v16[1]);
    if ( v16[1] )
      v12 = (char *)v16[4] - (char *)v16[1];
    else
      v12 = 0LL;
    v20 = v12;
    v44 = 8LL;
    v43 = &v16[4];
    v46 = 8LL;
    v45 = &v20;
    v47 = &v16[6];
    v49 = &v16[2];
    v51 = (char *)&v16[2] + 4;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    EtwWriteEx(qword_140C15FC8, &stru_140038DF0, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
    v2 = &v18;
    if ( (unsigned int)dword_140C043E0 > 5 )
    {
      LOBYTE(v2) = sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL);
      if ( (_BYTE)v2 )
      {
        HIDWORD(v16[6]) = 1;
        v54 = (char *)&v16[6] + 4;
        v55 = 4LL;
        v56 = v59;
        v58 = *((_QWORD *)v14 + 1);
        v59[0] = *v14;
        v60 = v63;
        v62 = *((_QWORD *)v13 + 1);
        v63[0] = *v13;
        v21 = v16[3];
        v64 = &v21;
        v22 = v19;
        v66 = &v22;
        v23 = v16[4];
        v68 = &v23;
        v24 = v20;
        v70 = &v24;
        LODWORD(v16[7]) = v16[2];
        v72 = &v16[7];
        LODWORD(v16[1]) = HIDWORD(v16[2]);
        v74 = &v16[1];
        v76 = &v25;
        v57 = 2LL;
        v59[1] = 0;
        v61 = 2LL;
        v63[1] = 0;
        v65 = 8LL;
        v67 = 8LL;
        v69 = 8LL;
        v71 = 8LL;
        v73 = 4LL;
        v75 = 4LL;
        v25 = 0x1000000LL;
        v77 = 8LL;
        LOBYTE(v2) = sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)word_14003571A, 0LL, 0LL, 0xEu, &v53);
      }
    }
  }
  return (char)v2;
}

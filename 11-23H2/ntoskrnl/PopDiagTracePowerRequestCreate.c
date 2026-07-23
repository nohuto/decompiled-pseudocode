/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x1407A7AF0
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14032C008 (PopPowerRequestCreateCommon.c)
 *     PopDiagTraceControlCallback @ 0x140862C20 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     PoStoreRequester @ 0x14032D1D4 (PoStoreRequester.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopGetCallerContextFromBuffer @ 0x140980B8C (PopGetCallerContextFromBuffer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  __int64 v6; // rcx
  __int64 Pool2; // rax
  _DWORD *v8; // rbx
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int16 v17; // dx
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  ULONG v28; // r9d
  int v29; // [rsp+38h] [rbp-D0h] BYREF
  int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  int v31; // [rsp+40h] [rbp-C8h] BYREF
  int v32; // [rsp+44h] [rbp-C4h] BYREF
  int v33; // [rsp+48h] [rbp-C0h] BYREF
  int v34; // [rsp+4Ch] [rbp-BCh] BYREF
  int v35; // [rsp+50h] [rbp-B8h] BYREF
  int v36; // [rsp+54h] [rbp-B4h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v42[2]; // [rsp+78h] [rbp-90h] BYREF
  char *v43; // [rsp+80h] [rbp-88h]
  __int128 v44; // [rsp+88h] [rbp-80h] BYREF
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  int *v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+C0h] [rbp-48h]
  __int64 *v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D0h] [rbp-38h]
  char *v51; // [rsp+D8h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-28h]
  int *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  int *v55; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  int *v57; // [rsp+108h] [rbp+0h]
  __int64 v58; // [rsp+110h] [rbp+8h]
  int *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  __int64 v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  __int64 v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  __int64 v65; // [rsp+148h] [rbp+40h]
  __int64 v66; // [rsp+150h] [rbp+48h]
  int *v67; // [rsp+158h] [rbp+50h]
  __int64 v68; // [rsp+160h] [rbp+58h]
  int *v69; // [rsp+168h] [rbp+60h]
  __int64 v70; // [rsp+170h] [rbp+68h]
  __int64 v71; // [rsp+178h] [rbp+70h]
  int v72; // [rsp+180h] [rbp+78h]
  int v73; // [rsp+184h] [rbp+7Ch]
  char v74; // [rsp+1F8h] [rbp+F0h] BYREF

  v41 = a2;
  LOWORD(v29) = 0;
  LOWORD(v30) = 0;
  v44 = 0LL;
  v42[1] = 0;
  v45 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 96);
      v40 = 0LL;
      v42[0] = 1441792;
      v38 = *v5;
      v39 = 0LL;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v37 = 0;
      v36 = 0;
      v35 = 0;
      v6 = *(_QWORD *)(a2 + 96);
      v43 = &v74;
      PoStoreRequester(v6, 0LL, &v40, 0);
      Pool2 = ExAllocatePool2(256LL, v40, 1346721364LL);
      v8 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v41 + 96), Pool2, &v40, 0) >= 0 )
        {
          PopGetCallerContextFromBuffer(v8, v42, &v44, &v45);
          v9 = v41;
          if ( v38 )
          {
            LODWORD(v39) = v8[6];
            HIDWORD(v39) = *(_DWORD *)(v41 + 16);
          }
          v10 = v31;
          if ( !*(_QWORD *)(v41 + 96) )
            v10 = 1;
          v31 = v10;
          v11 = v32;
          if ( (*(_BYTE *)(v41 + 20) & 2) != 0 )
            v11 = 1;
          v32 = v11;
          v12 = v33;
          if ( (*(_BYTE *)(v41 + 20) & 1) != 0 )
            v12 = 1;
          v33 = v12;
          v13 = v34;
          if ( (*(_BYTE *)(v41 + 20) & 4) != 0 )
            v13 = 1;
          v34 = v13;
          v14 = v35;
          if ( (*(_BYTE *)(v41 + 20) & 8) != 0 )
            v14 = 1;
          v35 = v14;
          v15 = v36;
          if ( (*(_BYTE *)(v41 + 20) & 0x10) != 0 )
            v15 = 1;
          v36 = v15;
          v16 = v37;
          if ( (*(_BYTE *)(v41 + 20) & 0x20) != 0 )
            v16 = 1;
          v68 = 2LL;
          v37 = v16;
          UserData.Ptr = (ULONGLONG)&v41;
          v47 = &v38;
          v49 = &v39;
          v51 = (char *)&v39 + 4;
          v53 = &v31;
          v55 = &v32;
          v57 = &v33;
          v59 = &v34;
          v61 = v41 + 44;
          v63 = v41 + 40;
          v65 = v41 + 48;
          v17 = (unsigned __int16)v45 >> 1;
          v67 = &v29;
          v70 = 2LL;
          v18 = 13;
          v69 = &v30;
          LOWORD(v29) = (unsigned __int16)v44 >> 1;
          LOWORD(v30) = (unsigned __int16)v45 >> 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v48 = 4LL;
          v50 = 4LL;
          v52 = 4LL;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          if ( (unsigned __int16)v44 >> 1 )
          {
            v18 = 14;
            v71 = *((_QWORD *)&v44 + 1);
            v73 = 0;
            v72 = 2 * ((unsigned __int16)v44 >> 1);
          }
          if ( v17 )
          {
            v19 = 2LL * v18;
            *(&UserData.Ptr + v19) = *((_QWORD *)&v45 + 1);
            *(&UserData.Reserved + 2 * v19) = 0;
            *(&UserData.Size + 2 * v19) = 2 * v17;
            ++v18;
          }
          v20 = 2LL * v18;
          v21 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v20) = (ULONGLONG)&v35;
          *((_QWORD *)&UserData.Size + v20) = 4LL;
          v22 = v18 + 1;
          v23 = v18 + 2;
          v22 *= 2LL;
          *(&UserData.Ptr + v22) = (ULONGLONG)&v36;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
          v24 = 2LL * v23;
          *(&UserData.Ptr + v24) = (ULONGLONG)&v37;
          *((_QWORD *)&UserData.Size + v24) = 4LL;
          v25 = v23 + 1;
          v23 += 2;
          v25 *= 2LL;
          *(&UserData.Ptr + v25) = v9 + 52;
          *((_QWORD *)&UserData.Size + v25) = 4LL;
          v26 = 2LL * v23;
          *(&UserData.Ptr + v26) = v9 + 56;
          *((_QWORD *)&UserData.Size + v26) = 4LL;
          v27 = v23 + 1;
          v28 = v23 + 2;
          v27 *= 2LL;
          *(&UserData.Ptr + v27) = v9 + 60;
          *((_QWORD *)&UserData.Size + v27) = 4LL;
          if ( !a1 )
            v21 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v21, 0LL, v28, &UserData);
        }
        ExFreePoolWithTag(v8, 0x50455654u);
      }
    }
  }
}

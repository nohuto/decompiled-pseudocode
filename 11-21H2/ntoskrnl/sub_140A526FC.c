/*
 * XREFs of sub_140A526FC @ 0x140A526FC
 * Callers:
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140A526FC(__int64 *a1, _QWORD *a2, int a3, _QWORD *a4, int a5, int a6, int a7)
{
  __int64 v10; // rbx
  unsigned int ProcessId; // eax
  unsigned __int16 *v12; // rbx
  int v13; // r9d
  int v14; // ecx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-60h]
  int v32; // [rsp+B0h] [rbp-58h]
  int v33; // [rsp+B4h] [rbp-54h]
  unsigned int *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  _QWORD *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  int *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  __int64 *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  int *v49; // [rsp+148h] [rbp+40h]
  __int64 v50; // [rsp+150h] [rbp+48h]
  _DWORD *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  __int64 v53; // [rsp+168h] [rbp+60h]
  _DWORD v54[2]; // [rsp+170h] [rbp+68h] BYREF
  int *v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]
  __int64 *v57; // [rsp+188h] [rbp+80h]
  __int64 v58; // [rsp+190h] [rbp+88h]
  int *v59; // [rsp+198h] [rbp+90h]
  __int64 v60; // [rsp+1A0h] [rbp+98h]
  int *v61; // [rsp+1A8h] [rbp+A0h]
  __int64 v62; // [rsp+1B0h] [rbp+A8h]
  int *v63; // [rsp+1B8h] [rbp+B0h]
  __int64 v64; // [rsp+1C0h] [rbp+B8h]
  int v65; // [rsp+218h] [rbp+110h] BYREF

  v65 = a3;
  v22[0] = 0x20000LL;
  v22[1] = &word_140A5BBC0;
  v10 = *((_QWORD *)KeGetCurrentThread() + 23);
  ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v10);
  v21 = ProcessId;
  v12 = *(unsigned __int16 **)(v10 + 1472);
  if ( !v12 || !*v12 )
    v12 = (unsigned __int16 *)v22;
  if ( (unsigned int)dword_140C043E0 > 5 )
  {
    LOBYTE(ProcessId) = sub_1402A2000((__int64)&dword_140C043E0, 0x400000000000LL);
    if ( (_BYTE)ProcessId )
    {
      v23 = *a1;
      v17 = v13;
      v45 = &v23;
      v24 = *a2;
      v47 = &v24;
      v16 = v65;
      v49 = &v16;
      v51 = v54;
      v53 = *((_QWORD *)v12 + 1);
      v54[0] = *v12;
      v55 = &v17;
      v25 = *a4;
      v57 = &v25;
      v18 = a5;
      v59 = &v18;
      v19 = a6;
      v61 = &v19;
      v20 = a7;
      v63 = &v20;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 4LL;
      v52 = 2LL;
      v54[1] = 0;
      v56 = 4LL;
      v58 = 8LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      LOBYTE(ProcessId) = sub_14020A9C4(
                            (__int64)&dword_140C043E0,
                            (unsigned __int8 *)&dword_1400352C4,
                            0LL,
                            0LL,
                            0xCu,
                            &v44);
    }
  }
  if ( qword_140C16478 )
  {
    UserData.Ptr = (ULONGLONG)a1;
    v29 = &v65;
    *(_QWORD *)&UserData.Size = 8LL;
    v27 = a2;
    v28 = 8LL;
    v30 = 4LL;
    v14 = v12[1];
    v31 = *((_QWORD *)v12 + 1);
    v34 = &v21;
    v38 = &a5;
    v40 = &a6;
    v42 = &a7;
    v32 = v14;
    v33 = 0;
    v35 = 4LL;
    v36 = a4;
    v37 = 8LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    LOBYTE(ProcessId) = EtwWrite(qword_140C16478, &stru_14000FAB0, 0LL, 9u, &UserData);
  }
  return ProcessId;
}

/*
 * XREFs of sub_1406F61A4 @ 0x1406F61A4
 * Callers:
 *     sub_1406F653C @ 0x1406F653C (sub_1406F653C.c)
 * Callees:
 *     PsGetCurrentThreadTeb @ 0x140280140 (PsGetCurrentThreadTeb.c)
 *     sub_140280CBC @ 0x140280CBC (sub_140280CBC.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1406F61A4(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int16 v9; // r8
  char v10; // al
  __int64 v11; // rcx
  ULONG v12; // r9d
  _DWORD *CurrentThreadTeb; // rdx
  __int64 v15; // rax
  int v16; // eax
  __int16 v17; // cx
  char v18; // al
  int v19; // [rsp+30h] [rbp-118h] BYREF
  int v20; // [rsp+34h] [rbp-114h] BYREF
  int v21; // [rsp+38h] [rbp-110h] BYREF
  __int64 v22; // [rsp+40h] [rbp-108h]
  __int64 v23; // [rsp+48h] [rbp-100h] BYREF
  __int64 v24; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-E8h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-D8h] BYREF
  int *v29; // [rsp+80h] [rbp-C8h]
  int v30; // [rsp+88h] [rbp-C0h]
  int v31; // [rsp+8Ch] [rbp-BCh]
  __int64 v32; // [rsp+90h] [rbp-B8h]
  int v33; // [rsp+98h] [rbp-B0h]
  int v34; // [rsp+9Ch] [rbp-ACh]
  __int64 v35; // [rsp+A0h] [rbp-A8h]
  int v36; // [rsp+A8h] [rbp-A0h]
  int v37; // [rsp+ACh] [rbp-9Ch]
  __int64 *v38; // [rsp+B0h] [rbp-98h]
  int v39; // [rsp+B8h] [rbp-90h]
  int v40; // [rsp+BCh] [rbp-8Ch]
  __int64 *v41; // [rsp+C0h] [rbp-88h]
  int v42; // [rsp+C8h] [rbp-80h]
  int v43; // [rsp+CCh] [rbp-7Ch]
  __int64 *v44; // [rsp+D0h] [rbp-78h]
  int v45; // [rsp+D8h] [rbp-70h]
  int v46; // [rsp+DCh] [rbp-6Ch]
  __int64 *v47; // [rsp+E0h] [rbp-68h]
  int v48; // [rsp+E8h] [rbp-60h]
  int v49; // [rsp+ECh] [rbp-5Ch]
  __int64 v50; // [rsp+F0h] [rbp-58h]
  int v51; // [rsp+F8h] [rbp-50h]
  int v52; // [rsp+FCh] [rbp-4Ch]
  int *v53; // [rsp+100h] [rbp-48h]
  int v54; // [rsp+108h] [rbp-40h]
  int v55; // [rsp+10Ch] [rbp-3Ch]
  __int64 *v56; // [rsp+110h] [rbp-38h]
  int v57; // [rsp+118h] [rbp-30h]
  int v58; // [rsp+11Ch] [rbp-2Ch]

  v22 = a1;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0;
  if ( a3 )
  {
    EventDescriptor = &stru_14000EF50;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      v15 = *((_QWORD *)KeGetCurrentThread() + 68);
      if ( *(_QWORD *)(v15 + 1408)
        && ((v17 = *(_WORD *)(v15 + 2412), v17 == 332) || v17 == 452 ? (v18 = 1) : (v18 = 0), v18) )
      {
        v16 = CurrentThreadTeb[3032];
      }
      else
      {
        v16 = CurrentThreadTeb[1480];
      }
      v19 = v16;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)qword_14000EF60;
    v6 = *(_QWORD *)(a1 + 240);
    if ( v6 )
    {
      v7 = *((_QWORD *)KeGetCurrentThread() + 68);
      if ( *(_QWORD *)(v7 + 1408) && ((v9 = *(_WORD *)(v7 + 2412), v9 == 332) || v9 == 452 ? (v10 = 1) : (v10 = 0), v10) )
        v8 = *(_DWORD *)(v6 + 12128);
      else
        v8 = *(_DWORD *)(v6 + 5920);
      v19 = v8;
    }
  }
  v20 = *(_DWORD *)(a1 + 1224);
  UserData.Ptr = (ULONGLONG)&v20;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v21 = *(_DWORD *)(a1 + 1232);
  v29 = &v21;
  v30 = 4;
  v31 = 0;
  v32 = a1 + 56;
  v33 = 8;
  v34 = 0;
  v35 = a1 + 48;
  v36 = 8;
  v37 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 240);
    if ( v11 )
    {
      v23 = *(_QWORD *)(v11 + 8);
      v24 = *(_QWORD *)(v11 + 16);
    }
  }
  v38 = &v23;
  v39 = 8;
  v40 = 0;
  v41 = &v24;
  v42 = 8;
  v43 = 0;
  sub_140280CBC(a1, 1);
  v44 = &v25;
  v45 = 8;
  v46 = 0;
  v25 = *(_QWORD *)(a1 + 1312);
  v47 = &v25;
  v48 = 8;
  v49 = 0;
  v50 = a1 + 240;
  v51 = 8;
  v52 = 0;
  v53 = &v19;
  v54 = 4;
  v55 = 0;
  v12 = 10;
  if ( !a3 )
  {
    v26 = *(_QWORD *)(a1 + 72);
    v56 = &v26;
    v57 = 8;
    v58 = 0;
    v12 = 11;
  }
  return EtwWrite(qword_140C15FF8, EventDescriptor, 0LL, v12, &UserData);
}

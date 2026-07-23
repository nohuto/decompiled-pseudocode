/*
 * XREFs of sub_1409E8BEC @ 0x1409E8BEC
 * Callers:
 *     sub_140659D84 @ 0x140659D84 (sub_140659D84.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     sub_1409E73C8 @ 0x1409E73C8 (sub_1409E73C8.c)
 *     sub_1409E7A80 @ 0x1409E7A80 (sub_1409E7A80.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402EDEB4 @ 0x1402EDEB4 (sub_1402EDEB4.c)
 *     sub_1402EDFB0 @ 0x1402EDFB0 (sub_1402EDFB0.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14070BB0C @ 0x14070BB0C (sub_14070BB0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409E8BEC(int a1, int a2, const EVENT_DESCRIPTOR *a3, __int64 a4)
{
  __int64 *v4; // rax
  __int64 *v5; // rdi
  const wchar_t *v10; // rcx
  int v11; // esi
  unsigned __int16 v12; // ax
  int v13; // eax
  const wchar_t *v14; // rax
  __int16 v15; // cx
  int v16; // eax
  int v17; // eax
  int v18; // r9d
  PVOID v19; // rsi
  _WORD v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  _DWORD *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _DWORD v35[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  PVOID v38; // [rsp+D0h] [rbp-30h]
  _DWORD v39[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  const wchar_t *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  __int16 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  const wchar_t *v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+12Ch] [rbp+2Ch]
  __int64 v51[16]; // [rsp+130h] [rbp+30h] BYREF

  v4 = *(__int64 **)(a4 + 1472);
  v5 = &qword_140001AF8;
  v24 = 0LL;
  if ( v4 )
    v5 = v4;
  v10 = L"(null)";
  *(_OWORD *)P = 0LL;
  v11 = 12;
  v12 = *(_WORD *)v5;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v12 )
  {
    v20[0] = v12 >> 1;
    UserData.Ptr = (ULONGLONG)v20;
    v13 = *(unsigned __int16 *)v5;
    v10 = (const wchar_t *)v5[1];
  }
  else
  {
    v20[0] = 6;
    UserData.Ptr = (ULONGLONG)v20;
    v13 = 12;
  }
  v43 = v10;
  v45 = 0;
  v44 = v13;
  sub_14070BB0C(a4, (__int64)P);
  v47 = 2LL;
  v46 = &v21;
  if ( LOWORD(P[0]) )
  {
    v14 = (const wchar_t *)P[1];
    v11 = LOWORD(P[0]);
    v15 = LOWORD(P[0]) >> 1;
  }
  else
  {
    v14 = L"(null)";
    v15 = 6;
  }
  v21 = v15;
  v50 = 0;
  v48 = v14;
  v49 = v11;
  v16 = sub_1402EDEB4(v51, a4, &v24);
  v17 = sub_1402EDFB0((__int64)(&UserData + (unsigned int)(v16 + 4)), (__int64)KeGetCurrentThread());
  EtwWrite(qword_140C15FC8, a3, 0LL, v17 + v18, &UserData);
  v19 = P[1];
  if ( (unsigned int)dword_140C043E0 > 5 && sub_1402A2000((__int64)&dword_140C043E0, 0x200000000000LL) )
  {
    v22 = a1;
    v28 = &v22;
    v29 = 4LL;
    v30 = &v23;
    v23 = a2;
    v32 = v35;
    v34 = v5[1];
    v35[0] = *(unsigned __int16 *)v5;
    v36 = v39;
    v39[0] = LOWORD(P[0]);
    v26 = v24;
    v40 = &v26;
    v31 = 4LL;
    v33 = 2LL;
    v35[1] = 0;
    v37 = 2LL;
    v38 = v19;
    v39[1] = 0;
    v41 = 8LL;
    sub_14020A9C4((__int64)&dword_140C043E0, (unsigned __int8 *)&dword_140035974, 0LL, 0LL, 9u, &v27);
  }
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
}

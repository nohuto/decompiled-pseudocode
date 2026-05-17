/*
 * XREFs of RtlpXfgTlLogFailure @ 0x18011EFDC
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x18010A4F0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180002E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180004EA0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x180067FC0 (LdrpFindLoadedDllByAddress.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

char __fastcall RtlpXfgTlLogFailure(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v9; // r9
  char result; // al
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rbx
  unsigned __int16 *v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  unsigned __int16 *v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-88h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  char v34[32]; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  _DWORD *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  __int64 v39; // [rsp+D8h] [rbp-30h]
  _DWORD v40[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  unsigned __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  unsigned __int64 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  _DWORD *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  __int64 v49; // [rsp+128h] [rbp+20h]
  _DWORD v50[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  unsigned __int64 *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  unsigned __int64 *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int64 *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  _QWORD *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]

  LODWORD(v26[0]) = 0;
  v26[1] = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  LdrpFindLoadedDllByAddress(a2, (unsigned __int64 *)&v25, 0LL, a4);
  result = LdrpFindLoadedDllByAddress(a3, (unsigned __int64 *)&v24, 0LL, v9);
  v14 = v25;
  v15 = v24;
  if ( (unsigned int)dword_180174468 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_180174468, 0x400000000000LL);
    if ( result )
    {
      LODWORD(v27) = a1;
      v35 = &v27;
      v16 = (unsigned __int16 *)(v14 + 72);
      v36 = 4LL;
      if ( !v14 )
        v16 = (unsigned __int16 *)v26;
      v17 = *v16;
      v39 = *((_QWORD *)v16 + 1);
      v37 = v40;
      v38 = 2LL;
      v40[0] = v17;
      v40[1] = 0;
      if ( v14 )
        v18 = *(_QWORD *)(v14 + 48);
      else
        v18 = 0LL;
      v28 = v18;
      v41 = &v28;
      v42 = 8LL;
      if ( v14 )
        v19 = *(_DWORD *)(v14 + 128);
      else
        v19 = 0;
      LODWORD(v24) = v19;
      v43 = (unsigned __int64 *)&v24;
      v45 = &v29;
      v20 = (unsigned __int16 *)(v15 + 72);
      v44 = 4LL;
      v29 = a2;
      v46 = 8LL;
      if ( !v15 )
        v20 = (unsigned __int16 *)v26;
      v21 = *v20;
      v49 = *((_QWORD *)v20 + 1);
      v47 = v50;
      v48 = 2LL;
      v50[0] = v21;
      v50[1] = 0;
      if ( v15 )
        v22 = *(_QWORD *)(v15 + 48);
      else
        v22 = 0LL;
      v30 = v22;
      v51 = &v30;
      v52 = 8LL;
      if ( v15 )
        v23 = *(_DWORD *)(v15 + 128);
      else
        v23 = 0;
      LODWORD(v25) = v23;
      v54 = 4LL;
      v53 = (unsigned __int64 *)&v25;
      v31 = a3;
      v55 = &v31;
      v57 = &v32;
      v33 = a5;
      v59 = &v33;
      v61 = v26;
      v56 = 8LL;
      v32 = a4;
      v58 = 8LL;
      v60 = 8LL;
      v26[0] = 0x1000000LL;
      v62 = 8LL;
      result = tlgWriteTransfer_EtwEventWriteTransfer(
                 (__int64)&dword_180174468,
                 byte_180141EAF,
                 v12,
                 v13,
                 16,
                 (__int64)v34);
    }
  }
  if ( v14 )
    result = LdrpDereferenceModule(v14, v11, v12, v13);
  if ( v15 )
    return LdrpDereferenceModule(v15, v11, v12, v13);
  return result;
}

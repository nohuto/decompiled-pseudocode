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

char __fastcall RtlpXfgTlLogFailure(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  char result; // al
  char *v10; // rdi
  char *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID *v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  int v17; // eax
  PVOID *v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  PVOID v22; // [rsp+38h] [rbp-D0h] BYREF
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+80h] [rbp-88h] BYREF
  __int64 v31; // [rsp+88h] [rbp-80h] BYREF
  _EVENT_DATA_DESCRIPTOR v32; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  _DWORD *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  PVOID v37; // [rsp+D8h] [rbp-30h]
  _DWORD v38[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  PVOID *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  unsigned __int64 *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  _DWORD *v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  PVOID v47; // [rsp+128h] [rbp+20h]
  _DWORD v48[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 *v49; // [rsp+138h] [rbp+30h]
  __int64 v50; // [rsp+140h] [rbp+38h]
  PVOID *v51; // [rsp+148h] [rbp+40h]
  __int64 v52; // [rsp+150h] [rbp+48h]
  unsigned __int64 *v53; // [rsp+158h] [rbp+50h]
  __int64 v54; // [rsp+160h] [rbp+58h]
  __int64 *v55; // [rsp+168h] [rbp+60h]
  __int64 v56; // [rsp+170h] [rbp+68h]
  __int64 *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  PVOID *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]

  LODWORD(BaseAddress[1]) = 0;
  v24 = 0LL;
  BaseAddress[0] = 0LL;
  v22 = 0LL;
  LdrpFindLoadedDllByAddress(a2, (unsigned __int64 *)BaseAddress, 0LL);
  result = LdrpFindLoadedDllByAddress(a3, (unsigned __int64 *)&v22, 0LL);
  v10 = (char *)BaseAddress[0];
  v11 = (char *)v22;
  if ( (unsigned int)dword_180174468 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_180174468, 0x400000000000LL);
    if ( result )
    {
      LODWORD(v25) = a1;
      v33 = &v25;
      v14 = (PVOID *)(v10 + 72);
      v34 = 4LL;
      if ( !v10 )
        v14 = &BaseAddress[1];
      v15 = *(unsigned __int16 *)v14;
      v37 = v14[1];
      v35 = v38;
      v36 = 2LL;
      v38[0] = v15;
      v38[1] = 0;
      if ( v10 )
        v16 = *((_QWORD *)v10 + 6);
      else
        v16 = 0LL;
      v26 = v16;
      v39 = &v26;
      v40 = 8LL;
      if ( v10 )
        v17 = *((_DWORD *)v10 + 32);
      else
        v17 = 0;
      LODWORD(v22) = v17;
      v41 = &v22;
      v43 = &v27;
      v18 = (PVOID *)(v11 + 72);
      v42 = 4LL;
      v27 = a2;
      v44 = 8LL;
      if ( !v11 )
        v18 = &BaseAddress[1];
      v19 = *(unsigned __int16 *)v18;
      v47 = v18[1];
      v45 = v48;
      v46 = 2LL;
      v48[0] = v19;
      v48[1] = 0;
      if ( v11 )
        v20 = *((_QWORD *)v11 + 6);
      else
        v20 = 0LL;
      v28 = v20;
      v49 = &v28;
      v50 = 8LL;
      if ( v11 )
        v21 = *((_DWORD *)v11 + 32);
      else
        v21 = 0;
      LODWORD(BaseAddress[0]) = v21;
      v52 = 4LL;
      v51 = BaseAddress;
      v29 = a3;
      v53 = &v29;
      v55 = &v30;
      v31 = a5;
      v57 = &v31;
      v59 = &BaseAddress[1];
      v54 = 8LL;
      v30 = a4;
      v56 = 8LL;
      v58 = 8LL;
      BaseAddress[1] = (PVOID)0x1000000;
      v60 = 8LL;
      result = tlgWriteTransfer_EtwEventWriteTransfer(
                 (__int64)&dword_180174468,
                 (unsigned __int8 *)dword_180141EAF,
                 v12,
                 v13,
                 0x10u,
                 &v32);
    }
  }
  if ( v10 )
    result = LdrpDereferenceModule(v10);
  if ( v11 )
    return LdrpDereferenceModule(v11);
  return result;
}

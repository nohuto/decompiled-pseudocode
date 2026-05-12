/*
 * XREFs of McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4
 * Callers:
 *     RaidAdapterStorageTcgActivateLocking @ 0x1C0050684 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x1C00508C4 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x1C0050BB8 (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x1C0050E2C (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x1C0051100 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x1C0051360 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x1C0051624 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x1C0051834 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x1C0051A00 (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x1C0051C34 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x1C0051F10 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x1C005219C (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1C005241C (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x1C0052688 (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x1C00528E0 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x1C0052C14 (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98 (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1C0053174 (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x1C00533E4 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x1C005369C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x1C00538C0 (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x1C0053A80 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1C0053CC8 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1C0053FBC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x1C0054260 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x1C00544F8 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0014E0C (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        const wchar_t *a14,
        const char *a15,
        const char *a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21)
{
  const wchar_t *v21; // rdx
  const char *v22; // rsi
  const char *v23; // r10
  const wchar_t *v24; // rbx
  const char *v25; // rdi
  const char *v26; // r11
  int v27; // r14d
  const char *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // r9d
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  int v37; // ecx
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+30h] [rbp-D0h] BYREF
  int *v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  char *v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  char *v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h]
  char *v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  const wchar_t *v57; // [rsp+A0h] [rbp-60h]
  int v58; // [rsp+A8h] [rbp-58h]
  int v59; // [rsp+ACh] [rbp-54h]
  const char *v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B8h] [rbp-48h]
  int v62; // [rsp+BCh] [rbp-44h]
  const char *v63; // [rsp+C0h] [rbp-40h]
  int v64; // [rsp+C8h] [rbp-38h]
  int v65; // [rsp+CCh] [rbp-34h]
  const char *v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D8h] [rbp-28h]
  int v68; // [rsp+DCh] [rbp-24h]
  const wchar_t *v69; // [rsp+E0h] [rbp-20h]
  int v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+ECh] [rbp-14h]
  const char *v72; // [rsp+F0h] [rbp-10h]
  int v73; // [rsp+F8h] [rbp-8h]
  int v74; // [rsp+FCh] [rbp-4h]
  const char *v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+108h] [rbp+8h]
  int v77; // [rsp+10Ch] [rbp+Ch]
  char *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  char *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  char *v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]
  char *v84; // [rsp+140h] [rbp+40h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  char *v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]
  int v88; // [rsp+1B8h] [rbp+B8h] BYREF

  v88 = a4;
  v21 = a10;
  v22 = a16;
  v23 = a15;
  v24 = a14;
  v25 = a13;
  v26 = a12;
  v27 = 10;
  v28 = a11;
  v45 = &v88;
  v47 = &a5;
  v49 = &a6;
  v51 = &a7;
  v53 = a8;
  v55 = a9;
  v29 = -1LL;
  v46 = 4LL;
  v48 = 1LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 16LL;
  v56 = 16LL;
  if ( a10 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a10[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v31 = 10;
  }
  v58 = v31;
  v59 = 0;
  if ( !a10 )
    v21 = L"NULL";
  v57 = v21;
  if ( a11 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a11[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v33 = 5;
  }
  v61 = v33;
  v62 = 0;
  if ( !a11 )
    v28 = "NULL";
  v60 = v28;
  if ( a12 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a12[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v64 = v35;
  v65 = 0;
  if ( !a12 )
    v26 = "NULL";
  v63 = v26;
  if ( a13 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( a13[v36] );
    v37 = v36 + 1;
  }
  else
  {
    v37 = 5;
  }
  v67 = v37;
  v68 = 0;
  if ( !a13 )
    v25 = "NULL";
  v66 = v25;
  v38 = a14 == 0LL;
  if ( a14 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a14[v39] );
    v27 = 2 * v39 + 2;
    v38 = a14 == 0LL;
  }
  if ( v38 )
    v24 = L"NULL";
  v70 = v27;
  v69 = v24;
  v71 = 0;
  if ( a15 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a15[v40] );
    v41 = (unsigned int)(v40 + 1);
  }
  else
  {
    v41 = 5LL;
  }
  v73 = v41;
  v74 = 0;
  if ( !a15 )
    v23 = "NULL";
  v72 = v23;
  if ( a16 )
  {
    do
      ++v29;
    while ( a16[v29] );
    v42 = v29 + 1;
  }
  else
  {
    v42 = 5;
  }
  v76 = v42;
  v77 = 0;
  v78 = &a17;
  v79 = 4LL;
  v80 = &a18;
  if ( !a16 )
    v22 = "NULL";
  v75 = v22;
  v82 = &a19;
  v81 = 8LL;
  v84 = &a20;
  v83 = 8LL;
  v86 = &a21;
  v85 = 8LL;
  v87 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v41, &TcgIoctlFailure, 0LL, 0x13u, &v44);
}

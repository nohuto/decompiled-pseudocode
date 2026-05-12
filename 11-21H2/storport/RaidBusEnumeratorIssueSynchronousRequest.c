/*
 * XREFs of RaidBusEnumeratorIssueSynchronousRequest @ 0x1C001B720
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C001B058 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001B614 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     GetSrbScsiData @ 0x1C001BAA4 (GetSrbScsiData.c)
 *     RaidBuildScsiIrp @ 0x1C001BB98 (RaidBuildScsiIrp.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     WPP_SF_qdddD @ 0x1C003CCC8 (WPP_SF_qdddD.c)
 *     WPP_SF_qdddDDs @ 0x1C003CD4C (WPP_SF_qdddDDs.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueSynchronousRequest(
        _QWORD *a1,
        __int64 a2,
        PIRP *a3,
        __int128 *a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v7; // si
  char v8; // r14
  PIRP *v9; // r10
  unsigned __int8 v10; // r15
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // r13
  PIRP v13; // r9
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  unsigned __int8 *SrbScsiData; // rax
  __int64 v27; // xmm0_8
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm5
  unsigned __int8 v33; // al
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rax
  __int64 result; // rax
  int v46; // eax
  int v47; // ebx
  unsigned __int8 v48; // dl
  _BYTE *v49; // r9
  char v50; // r8
  char v51; // cl
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  int Status; // edx
  int v55; // ebx
  _BYTE *v57; // rcx
  _BYTE *v58; // rax
  char v59; // r14
  const char *v60; // r11
  PIRP Irp; // [rsp+50h] [rbp-B0h]
  _BYTE *v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h]
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int128 v65; // [rsp+70h] [rbp-90h]
  __int128 v66; // [rsp+80h] [rbp-80h]
  __int128 v67; // [rsp+90h] [rbp-70h]
  __int128 v68; // [rsp+A0h] [rbp-60h]
  __int128 v69; // [rsp+B0h] [rbp-50h]
  _OWORD v70[6]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v71; // [rsp+120h] [rbp+20h]
  __int128 v72; // [rsp+130h] [rbp+30h]
  __int128 v73; // [rsp+140h] [rbp+40h]
  __int128 v74; // [rsp+150h] [rbp+50h]
  __int128 v75; // [rsp+160h] [rbp+60h]
  __int128 v76; // [rsp+170h] [rbp+70h]
  __int128 v77; // [rsp+180h] [rbp+80h]
  __int128 v78; // [rsp+190h] [rbp+90h]
  __int128 v79; // [rsp+1A0h] [rbp+A0h]
  __int128 v80; // [rsp+1B0h] [rbp+B0h]
  __int128 v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1D0h] [rbp+D0h]
  unsigned __int8 v84; // [rsp+238h] [rbp+138h]
  int v86; // [rsp+248h] [rbp+148h]

  v5 = *(_QWORD *)(a2 + 8);
  v62 = 0LL;
  v86 = 2;
  a5 = 0;
  v7 = 0;
  v8 = 0;
  memset(v70, 0, 0x58uLL);
  v9 = a3;
  v10 = 0;
  v11 = 0;
  v84 = 0;
  v12 = 0;
  v64 = v5;
  v13 = *a3;
  Irp = *a3;
  if ( *((_BYTE *)a4 + 2) != 40 )
  {
    v32 = *a4;
    v10 = *((_BYTE *)a4 + 5);
    v31 = a4[1];
    v11 = *((_BYTE *)a4 + 6);
    v30 = a4[2];
    v12 = *((_BYTE *)a4 + 7);
    v29 = a4[3];
    v33 = *((_BYTE *)a4 + 72);
    v28 = a4[4];
    v27 = *((_QWORD *)a4 + 10);
    v69 = *a4;
    v68 = v31;
    v67 = v30;
    v66 = v29;
    v65 = v28;
    v63 = v27;
    goto LABEL_6;
  }
  v14 = *((_QWORD *)a4 + 22);
  v15 = a4[1];
  v71 = *a4;
  v16 = a4[2];
  v72 = v15;
  v17 = a4[3];
  v73 = v16;
  v18 = a4[4];
  v74 = v17;
  v19 = a4[5];
  v75 = v18;
  v20 = a4[6];
  v76 = v19;
  v21 = a4[7];
  v77 = v20;
  v22 = a4[8];
  v78 = v21;
  v23 = a4[9];
  v79 = v22;
  v24 = a4[10];
  v80 = v23;
  v81 = v24;
  v82 = v14;
  v25 = (__int64)a4 + *((unsigned int *)a4 + 13);
  if ( *(_WORD *)v25 == 1 )
  {
    v10 = *(_BYTE *)(v25 + 8);
    v11 = *(_BYTE *)(v25 + 9);
    v12 = *(_BYTE *)(v25 + 10);
  }
  SrbScsiData = (unsigned __int8 *)GetSrbScsiData((_DWORD)a4, 0, 0, 0, 0LL, 0LL);
  v27 = *(_QWORD *)&v70[5];
  v28 = v70[4];
  v29 = v70[3];
  v30 = v70[2];
  v31 = v70[1];
  v32 = v70[0];
  v13 = Irp;
  v9 = a3;
  v63 = *(_QWORD *)&v70[5];
  v65 = v70[4];
  v66 = v70[3];
  v67 = v70[2];
  v68 = v70[1];
  v69 = v70[0];
  if ( SrbScsiData )
  {
    v33 = *SrbScsiData;
LABEL_6:
    v84 = v33;
    goto LABEL_7;
  }
  while ( 1 )
  {
LABEL_7:
    if ( *((_BYTE *)a4 + 2) == 40 )
    {
      v34 = v72;
      *a4 = v71;
      v35 = v73;
      a4[1] = v34;
      v36 = v74;
      a4[2] = v35;
      v37 = v75;
      a4[3] = v36;
      v38 = v76;
      a4[4] = v37;
      v39 = v77;
      a4[5] = v38;
      v40 = v78;
      a4[6] = v39;
      v41 = v79;
      a4[7] = v40;
      v42 = v80;
      a4[8] = v41;
      v43 = v81;
      v44 = v82;
      a4[9] = v42;
      a4[10] = v43;
      *((_QWORD *)a4 + 22) = v44;
    }
    else
    {
      *a4 = v32;
      a4[1] = v31;
      a4[2] = v30;
      a4[3] = v29;
      a4[4] = v28;
      *((_QWORD *)a4 + 10) = v27;
    }
    result = RaidBuildScsiIrp(v13, v9[1], a4);
    if ( (int)result < 0 )
      return result;
    v46 = *(_DWORD *)(v5 + 1264);
    if ( *((_BYTE *)a4 + 2) == 40 )
      *((_DWORD *)a4 + 10) = v46;
    else
      *((_DWORD *)a4 + 5) = v46;
    v47 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v5 + 8), Irp);
    if ( v47 < 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_qdddD(WPP_GLOBAL_Control->AttachedDevice, v11, v10, *a1, v10, v11, v12, v47);
      }
      return (unsigned int)v47;
    }
    if ( *((_BYTE *)a4 + 2) == 40 )
    {
      GetSrbScsiData((_DWORD)a4, 0, 0, 0, (__int64)&v62, (__int64)&a5);
      v48 = a5;
      v49 = v62;
    }
    else
    {
      v49 = (_BYTE *)*((_QWORD *)a4 + 4);
      v48 = *((_BYTE *)a4 + 11);
      v62 = v49;
      a5 = v48;
    }
    v50 = *((_BYTE *)a4 + 3);
    v51 = v50;
    if ( v50 < 0 )
    {
      if ( v49 )
      {
        v7 = 0;
        if ( v48 )
        {
          v57 = &v49[v48];
          v58 = v49 + 8;
          if ( (unsigned __int8)((*v49 & 0x7F) - 114) <= 1u )
          {
            if ( v58 <= v57 )
            {
              v59 = v49[1];
LABEL_44:
              v7 = 1;
              v8 = v59 & 0xF;
            }
          }
          else if ( v58 <= v57 )
          {
            v59 = v49[2];
            goto LABEL_44;
          }
          v51 = *((_BYTE *)a4 + 3);
        }
      }
    }
    v52 = v51 & 0x3F;
    if ( (unsigned int)v52 <= 0x21 && (v53 = 0x300000580LL, _bittest64(&v53, v52)) || v7 && v8 == 5 )
    {
      Status = -1073741810;
LABEL_31:
      v13 = Irp;
      goto LABEL_25;
    }
    v13 = Irp;
    if ( v51 != 18 )
    {
      Status = Irp->IoStatus.Status;
      v55 = Status;
      if ( Status >= 0
        || Status == -1073741810
        || Status == -1073741808
        || WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        goto LABEL_25;
      }
      v60 = "retried";
      if ( !v86 )
        v60 = "not retried";
      WPP_SF_qdddDDs(WPP_GLOBAL_Control->AttachedDevice, v84, v12, *a1, v10, v11, v12, v84, v50, (__int64)v60);
      Status = v55;
      goto LABEL_31;
    }
    Status = 0;
    *((_BYTE *)a4 + 3) = 1;
LABEL_25:
    if ( v86-- )
    {
      if ( Status < 0 )
      {
        v27 = v63;
        v5 = v64;
        v9 = a3;
        v28 = v65;
        v29 = v66;
        v30 = v67;
        v31 = v68;
        v32 = v69;
        if ( Status != -1073741810 )
          continue;
      }
    }
    return (unsigned int)Status;
  }
}

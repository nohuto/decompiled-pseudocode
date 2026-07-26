/*
 * XREFs of ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C0086974
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0087D00 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C008638C (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1C008648C (-ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C008651C (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1C0086F44 (-ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBE.c)
 */

__int64 __fastcall ndisInternalSetRSSv2IndirectionTable(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int16 a3,
        struct _PROCESSOR_NUMBER *a4,
        struct _PROCESSOR_NUMBER a5,
        unsigned __int16 a6,
        struct _PROCESSOR_NUMBER *a7,
        struct _PROCESSOR_NUMBER *a8)
{
  struct _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rsi
  struct _PROCESSOR_NUMBER *v9; // r12
  unsigned int v10; // r15d
  struct _NDIS_OID_REQUEST *v11; // r13
  unsigned __int16 v12; // r8
  __int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rax
  struct _PROCESSOR_NUMBER v16; // edi
  struct _NDIS_RSS_SET_INDIRECTION_ENTRIES *v17; // rbx
  char Reserved; // r14
  int v19; // r8d
  int v20; // r10d
  __int64 v21; // r11
  int v22; // eax
  NDIS_OBJECT_HEADER Header; // ecx
  unsigned __int16 v24; // cx
  struct _PROCESSOR_NUMBER v26; // ebx
  unsigned __int16 v27; // di
  unsigned __int64 v28; // r12
  struct _PROCESSOR_NUMBER v29; // ecx
  char v30; // r8
  struct _PROCESSOR_NUMBER *v31; // r9
  int v32; // r8d
  struct _PROCESSOR_NUMBER *v33; // r9
  int v34; // r10d
  unsigned int v35; // r11d
  __int64 v36; // r10
  int v37; // r8d
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  unsigned __int16 v41; // r11
  struct _NDIS_OID_REQUEST *v42; // r14
  int v43; // edi
  unsigned __int16 v44; // r13
  int v45; // r8d
  __int16 v46; // r10
  __int16 v47; // r11
  __int64 v48; // r10
  int v49; // r8d
  __int64 v50; // rdx
  int v51; // eax
  unsigned int v52; // [rsp+20h] [rbp-91h]
  struct _PROCESSOR_NUMBER v53; // [rsp+40h] [rbp-71h]
  int v54; // [rsp+48h] [rbp-69h]
  int v55; // [rsp+48h] [rbp-69h]
  unsigned __int16 v56[2]; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int16 v57; // [rsp+58h] [rbp-59h]
  int v58; // [rsp+5Ch] [rbp-55h] BYREF
  struct _PROCESSOR_NUMBER *v59; // [rsp+60h] [rbp-51h]
  struct _PROCESSOR_NUMBER *v60; // [rsp+70h] [rbp-41h]
  struct _NDIS_OID_REQUEST *v61; // [rsp+78h] [rbp-39h]
  struct _NDIS_MINIPORT_BLOCK *v62; // [rsp+80h] [rbp-31h]
  struct _PROCESSOR_NUMBER *v63; // [rsp+88h] [rbp-29h]
  __int128 v64; // [rsp+90h] [rbp-21h] BYREF

  RssV2Context = a1->RssV2Context;
  v9 = a4;
  v10 = a3;
  v57 = a6;
  v11 = a2;
  v59 = a7;
  v12 = 0;
  v60 = a4;
  v62 = a1;
  v13 = v10;
  v61 = a2;
  v63 = a8;
  v58 = 0;
  v64 = 0LL;
  if ( (unsigned __int16)v10 > 0x3Fu )
  {
    v14 = (unsigned __int16)(((unsigned __int16)(v10 - 64) >> 6) + 1);
    do
    {
      v15 = v12++;
      *((_QWORD *)&v64 + v15) = -1LL;
      v13 -= 64;
      --v14;
    }
    while ( v14 );
  }
  if ( v13 )
    *((_QWORD *)&v64 + v12) = (1LL << v13) - 1;
  v16 = a5;
  v17 = (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68);
  *((_BYTE *)RssV2Context + 68) = -55;
  *((_WORD *)RssV2Context + 35) = 20;
  *((_QWORD *)RssV2Context + 10) = 20LL;
  Reserved = 0;
  *((_BYTE *)RssV2Context + 69) = 1;
  *((_DWORD *)RssV2Context + 18) = 0;
  *((_DWORD *)RssV2Context + 19) = 24;
  v53 = a5;
  v53.Reserved = 0;
  if ( !ndisAreProcessorsEqual(a5, *a8) )
  {
    v22 = *(_DWORD *)(&v11->Reserved2 + 1);
    Header = v11[1].Header;
    *(_DWORD *)v56 = v19;
    *((_DWORD *)RssV2Context + 22) = v22;
    HIBYTE(v56[1]) = v21;
    *(_DWORD *)((char *)RssV2Context + 102) = *(_DWORD *)v56;
    *((_DWORD *)RssV2Context + 24) = 2;
    *((_WORD *)RssV2Context + 50) = v21;
    *((NDIS_OBJECT_HEADER *)RssV2Context + 23) = Header;
    *((_DWORD *)RssV2Context + 27) = 259;
    *((_DWORD *)RssV2Context + 21) = v20;
  }
LABEL_8:
  v24 = v21;
  do
  {
    if ( *((_QWORD *)&v64 + v24) != v21 )
    {
      v26 = v53;
      v56[0] = -1;
LABEL_15:
      v27 = v57;
      while ( ndisEntrySetScanForward(v56, (struct _NDIS_RSS_ENTRY_SET *)&v64) )
      {
        v28 = v56[0];
        if ( Reserved == 1 )
        {
          Reserved = 0;
          v29 = v60[v56[0]];
          *((_DWORD *)RssV2Context + 21) = 0;
          v53 = v29;
          v53.Reserved = 0;
          v26 = v53;
        }
        if ( ndisAreProcessorsEqual(v26, v60[v28]) )
        {
          v31 = v59;
          *((_QWORD *)&v64 + (v28 >> 6)) &= ~(1LL << (v30 & 0x3F));
          if ( !ndisAreProcessorsEqual(v31[(unsigned int)v28 % v27], v26) )
          {
            v36 = *((unsigned int *)RssV2Context + 21);
            v54 = v32;
            v37 = *(_DWORD *)(&v11->Reserved2 + 1);
            v38 = 3 * v36;
            HIBYTE(v54) = 0;
            *((_DWORD *)RssV2Context + 2 * v38 + 23) = v11[1].Header;
            *((_DWORD *)RssV2Context + 6 * v36 + 24) = 0;
            v33 = v59;
            *(_DWORD *)((char *)RssV2Context + 8 * v38 + 102) = v54;
            v39 = v36 + 1;
            *((_WORD *)RssV2Context + 4 * v38 + 50) = v28;
            v34 = 1;
            *((_DWORD *)RssV2Context + 2 * v38 + 22) = v37;
            *((_DWORD *)RssV2Context + 2 * v38 + 27) = 259;
            *((_DWORD *)RssV2Context + 21) = v39;
          }
          if ( v27 > (unsigned __int16)v10 )
          {
            v40 = v35 / v10;
            v41 = v34;
            if ( v40 > v34 )
            {
              v42 = v61;
              v43 = v40;
              do
              {
                v44 = v28 + v41 * v10;
                if ( !ndisAreProcessorsEqual(v33[v44], v26) )
                {
                  v48 = *((unsigned int *)RssV2Context + 21);
                  v55 = v45;
                  v49 = *(_DWORD *)(&v42->Reserved2 + 1);
                  v50 = 3 * v48;
                  HIBYTE(v55) = 0;
                  *((_DWORD *)RssV2Context + 2 * v50 + 23) = v42[1].Header;
                  *((_DWORD *)RssV2Context + 6 * v48 + 24) = 0;
                  v33 = v59;
                  *(_DWORD *)((char *)RssV2Context + 8 * v50 + 102) = v55;
                  v51 = v48 + 1;
                  *((_WORD *)RssV2Context + 4 * v50 + 50) = v44;
                  v46 = 1;
                  *((_DWORD *)RssV2Context + 2 * v50 + 22) = v49;
                  *((_DWORD *)RssV2Context + 2 * v50 + 27) = 259;
                  *((_DWORD *)RssV2Context + 21) = v51;
                }
                v41 = v46 + v47;
              }
              while ( v41 < v43 );
              Reserved = v53.Reserved;
              v11 = v61;
              goto LABEL_15;
            }
          }
        }
      }
      ndisExecuteRSSv2DirectOid(v62, v11, (struct _KDPC *)RssV2Context, v26);
      v9 = v60;
      v16 = a5;
      v17 = (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68);
      ndisMergeRSSv2DirectOidResults(
        (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68),
        v10,
        v60,
        a5,
        v52,
        v59,
        v63,
        &v58);
      LOWORD(v20) = 1;
      v21 = 0LL;
      Reserved = 1;
      v53.Reserved = 1;
      goto LABEL_8;
    }
    v24 += v20;
  }
  while ( v24 < 2u );
  if ( !Reserved )
  {
    ndisExecuteRSSv2DirectOid(v62, v11, (struct _KDPC *)RssV2Context, v53);
    ndisMergeRSSv2DirectOidResults(v17, v10, v9, v16, v52, v59, v63, &v58);
  }
  return (unsigned int)v58;
}

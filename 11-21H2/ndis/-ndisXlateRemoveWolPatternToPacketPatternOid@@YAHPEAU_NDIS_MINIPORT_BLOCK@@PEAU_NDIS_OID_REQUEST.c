/*
 * XREFs of ?ndisXlateRemoveWolPatternToPacketPatternOid@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094E68
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090680 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisXlateRemoveWolPatternToPacketPatternOid(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  _QWORD *v8; // rdi
  _SINGLE_LIST_ENTRY *OidSourceHandle; // r8
  _SINGLE_LIST_ENTRY *Next; // rax
  char v11; // cl
  _SINGLE_LIST_ENTRY *v13; // rax
  _SINGLE_LIST_ENTRY *v14; // rsi
  UINT v15; // r12d
  unsigned int *v16; // rax
  unsigned int *v17; // r14
  size_t v18; // r8
  __int64 v19; // rdx
  __int64 Next_high; // rdx
  unsigned int *v21; // rax
  size_t Next_low; // r8

  v3 = 0;
  *a3 = 0;
  Pool2 = ExAllocatePool2(64LL, 32LL, 2021082190);
  v8 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x72u,
        (struct _GUID *)&WPP_c5d0b5f7d8c43de1f0150a9d8e7af364_Traceguids,
        a2);
    goto LABEL_4;
  }
  *(_DWORD *)Pool2 = a2->DATA.QUERY_INFORMATION.Oid;
  *(_QWORD *)(Pool2 + 8) = a2->DATA.QUERY_INFORMATION.InformationBuffer;
  *(_DWORD *)(Pool2 + 16) = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  OidSourceHandle = (_SINGLE_LIST_ENTRY *)ndisGetOidSourceHandle(a2);
  if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
  {
    Next = a1->WOLPatternList.Next;
    v11 = 1;
  }
  else
  {
    Next = a1->PatternList.Next;
    v11 = 0;
  }
  if ( !Next )
    goto LABEL_13;
  while ( LODWORD(Next[5].Next) != *(_DWORD *)&a2->NdisReserved[80] )
  {
    Next = Next->Next;
    if ( !Next )
      goto LABEL_13;
  }
  v13 = Next + 1;
  if ( !v13 )
    goto LABEL_13;
  do
  {
    v14 = v13 - 1;
    if ( v13[2].Next == OidSourceHandle )
      break;
    v13 = v13->Next;
    v14 = 0LL;
  }
  while ( v13 );
  if ( !v14 )
    goto LABEL_13;
  if ( !v11 )
  {
    v15 = LODWORD(v14[7].Next) + 24 + LODWORD(v14[8].Next);
    v21 = (unsigned int *)ExAllocatePool2(64LL, v15, 2021082190);
    v17 = v21;
    if ( !v21 )
      goto LABEL_23;
    Next_low = LODWORD(v14[7].Next);
    *v21 = (unsigned int)v14[6].Next;
    v21[2] = Next_low;
    v21[3] = Next_low + 24;
    v21[4] = (unsigned int)v14[8].Next;
    memmove(v21 + 6, &v14[9], Next_low);
    Next_high = HIDWORD(v14[7].Next);
LABEL_27:
    memmove((char *)v17 + v17[3], (char *)&v14[6] + Next_high, v17[4]);
    a2->DATA.QUERY_INFORMATION.Oid = -50265852;
    a2->DATA.QUERY_INFORMATION.InformationBuffer = v17;
    a2->DATA.QUERY_INFORMATION.InformationBufferLength = v15;
    *(_QWORD *)&a2->NdisReserved[72] = v8;
    v8[3] = v17;
    return v3;
  }
  if ( HIDWORD(v14[7].Next) != 1 )
  {
LABEL_13:
    ExFreePoolWithTag(v8, 0);
    v3 = -1073676267;
    goto LABEL_14;
  }
  v15 = HIDWORD(v14[27].Next) + 24 + HIDWORD(v14[26].Next);
  v16 = (unsigned int *)ExAllocatePool2(64LL, v15, 2021082190);
  v17 = v16;
  if ( v16 )
  {
    v18 = HIDWORD(v14[26].Next);
    v19 = LODWORD(v14[26].Next);
    *v16 = (unsigned int)v14[7].Next;
    v16[2] = v18;
    v16[3] = v18 + 24;
    v16[4] = HIDWORD(v14[27].Next);
    memmove(v16 + 6, (char *)&v14[6] + v19, v18);
    Next_high = LODWORD(v14[27].Next);
    goto LABEL_27;
  }
LABEL_23:
  ExFreePoolWithTag(v8, 0);
LABEL_4:
  v3 = -1073741670;
LABEL_14:
  *a3 = 1;
  return v3;
}

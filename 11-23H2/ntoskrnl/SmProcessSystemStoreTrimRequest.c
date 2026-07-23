/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x1409D788C
 * Callers:
 *     SmSetStoreInformation @ 0x1407E8044 (SmSetStoreInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1405C322C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x14076022C (PsReferencePartitionByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(void *Src, size_t Size, char a3)
{
  size_t v4; // rbx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 ProcessPartition; // rax
  _DWORD **v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v4 = (unsigned int)Size;
  v14 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (((_DWORD)Size - 16) & 0xFFFFFFF7) != 0 )
  {
LABEL_2:
    v6 = -1073741306;
    goto LABEL_28;
  }
  if ( a3 )
  {
    if ( (unsigned __int64)(unsigned int)Size - 1 > 0xFFE )
    {
      ProbeForWrite(Src, (unsigned int)Size, 8u);
    }
    else
    {
      if ( ((unsigned __int8)Src & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
        v7 = (__int64)Src;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + (unsigned int)Size - 1) = *(_BYTE *)(v7 + (unsigned int)Size - 1);
    }
  }
  memmove(&v12, Src, v4);
  if ( (unsigned int)(unsigned __int8)v12 - 1 > 1 )
  {
    v6 = -1073741735;
    goto LABEL_28;
  }
  if ( (unsigned __int8)v12 == 2 && (_DWORD)v4 != 24 || (unsigned __int8)v12 == 1 && (_DWORD)v4 != 16 )
    goto LABEL_2;
  if ( (v12 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v12 + 1) )
  {
    v6 = -1073741811;
    goto LABEL_28;
  }
  if ( v13 )
  {
    v6 = PsReferencePartitionByHandle(v13, 2, a3, 0x52546D53u, &v14);
    if ( v6 < 0 )
      goto LABEL_28;
    ProcessPartition = *(_QWORD *)(v14 + 24);
    if ( !ProcessPartition )
    {
      v6 = -1073741399;
      goto LABEL_28;
    }
  }
  else
  {
    ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  }
  if ( *(_DWORD *)(ProcessPartition + 2112) == -1 )
  {
    v6 = -1073741275;
  }
  else
  {
    v9 = (_DWORD **)SmKmStoreRefFromStoreIndex(ProcessPartition, *(_DWORD *)(ProcessPartition + 2112) & 0x3FF);
    v6 = SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v10, *v9, *((_QWORD **)&v12 + 1));
  }
LABEL_28:
  if ( v14 )
    PsDereferencePartition(v14);
  return (unsigned int)v6;
}

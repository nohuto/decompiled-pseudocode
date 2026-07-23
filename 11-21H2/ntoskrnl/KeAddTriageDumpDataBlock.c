/*
 * XREFs of KeAddTriageDumpDataBlock @ 0x1403D7DF0
 * Callers:
 *     sub_14038D4F0 @ 0x14038D4F0 (sub_14038D4F0.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_1408555E0 @ 0x1408555E0 (sub_1408555E0.c)
 * Callees:
 *     sub_1403D7ED0 @ 0x1403D7ED0 (sub_1403D7ED0.c)
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeAddTriageDumpDataBlock(
        PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray,
        ULONG MaxDataSize,
        PVOID Address,
        SIZE_T Size)
{
  ULONG v4; // edi
  char *v6; // rsi
  ULONG NumBlocksUsed; // r9d
  char *v9; // rdx
  SIZE_T v10; // r8
  char *v11; // rcx
  struct _LIST_ENTRY *v12; // rdx

  v4 = 0;
  v6 = *(char **)&MaxDataSize;
  if ( !KtriageDumpDataArray
    || !(unsigned __int8)sub_1403D7ED0(KtriageDumpDataArray, MaxDataSize, 0LL, Size)
    || !(unsigned __int8)sub_1403D7FD4(v6, Address) )
  {
    return -1073741811;
  }
  if ( !Address )
    return 0;
  NumBlocksUsed = KtriageDumpDataArray->NumBlocksUsed;
  v9 = (char *)Address + (_QWORD)v6;
  if ( NumBlocksUsed )
  {
    do
    {
      v10 = KtriageDumpDataArray->Blocks[v4].Size;
      v11 = (char *)(&KtriageDumpDataArray[1].List.Flink)[2 * v4] + v10;
      if ( v6 < v11 && (unsigned __int64)v9 > v10 )
      {
        if ( (unsigned __int64)v6 < v10 )
        {
          if ( v9 <= v11 )
            v9 = (char *)KtriageDumpDataArray->Blocks[v4].Size;
        }
        else
        {
          if ( v9 <= v11 )
            return 0;
          v6 = (char *)(&KtriageDumpDataArray[1].List.Flink)[2 * v4] + v10;
        }
      }
      ++v4;
    }
    while ( v4 < NumBlocksUsed );
  }
  if ( NumBlocksUsed == KtriageDumpDataArray->NumBlocksTotal )
    return -1073741789;
  v12 = (struct _LIST_ENTRY *)(v9 - v6);
  if ( (unsigned __int64)v12 <= KtriageDumpDataArray->ComponentNameBufferLength - KtriageDumpDataArray->VirtMemSize )
  {
    (&KtriageDumpDataArray[1].List.Flink)[2 * v4] = v12;
    KtriageDumpDataArray->Blocks[v4].Size = (SIZE_T)v6;
    ++KtriageDumpDataArray->NumBlocksUsed;
    KtriageDumpDataArray->VirtMemSize += (unsigned int)v12;
    return 0;
  }
  return -1073741670;
}

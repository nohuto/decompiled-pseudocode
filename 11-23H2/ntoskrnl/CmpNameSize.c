/*
 * XREFs of CmpNameSize @ 0x1407B69BC
 * Callers:
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpAddValueKeyNew @ 0x140709F38 (CmpAddValueKeyNew.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140A16304 (CmpAddValueKeyTombstone.c)
 *     CmpCreateRootNode @ 0x140B374E4 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int64 v2; // r8
  unsigned int v3; // r9d

  v1 = *a1;
  v2 = 0LL;
  v3 = *a1 >> 1;
  if ( v3 )
  {
    while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v2) <= 0xFFu )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v1 >>= 1;
  }
  return v1;
}

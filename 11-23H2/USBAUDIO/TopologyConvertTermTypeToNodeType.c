/*
 * XREFs of TopologyConvertTermTypeToNodeType @ 0x1C002CB08
 * Callers:
 *     TopologyProcessInputTerminalUnit @ 0x1C002DC80 (TopologyProcessInputTerminalUnit.c)
 *     TopologyProcessOutputTerminalUnit @ 0x1C002DF70 (TopologyProcessOutputTerminalUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TopologyConvertTermTypeToNodeType(_DWORD *a1, GUID *a2, GUID *a3)
{
  unsigned int v3; // r9d
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 result; // rax

  v3 = 2;
  if ( a1[19] == 2 )
  {
    v3 = 25;
    goto LABEL_31;
  }
  v6 = a1[17];
  v7 = v6 & 0xF00;
  switch ( v7 )
  {
    case 256:
      v3 = 3;
      goto LABEL_31;
    case 512:
      goto LABEL_31;
    case 768:
LABEL_29:
      v3 = 1;
      goto LABEL_31;
    case 1024:
    case 1280:
    case 1536:
      v19 = a1[5];
      if ( !v19 )
        goto LABEL_31;
      if ( v19 != 1 )
        goto LABEL_26;
      goto LABEL_29;
  }
  if ( v7 != 1792 )
  {
    v3 = 25 - (v7 != 2304);
    goto LABEL_31;
  }
  if ( v6 > 0x70C )
  {
    v14 = v6 - 1805;
    if ( !v14 )
      goto LABEL_31;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_31;
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_31;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_31;
    v18 = v17 - 1;
    if ( v18 )
    {
      v13 = v18 == 2;
LABEL_25:
      if ( v13 )
        goto LABEL_31;
LABEL_26:
      v3 = 24;
      goto LABEL_31;
    }
    goto LABEL_29;
  }
  if ( v6 == 1804 )
    goto LABEL_31;
  v8 = v6 - 1793;
  if ( !v8 )
    goto LABEL_29;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_29;
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 5;
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( v12 )
      {
        v13 = v12 == 1;
        goto LABEL_25;
      }
    }
  }
LABEL_31:
  v20 = 4LL * v3;
  *a2 = *NodeDescriptorInfo[v20];
  result = v3;
  *a3 = *NodeDescriptorInfo[v20 + 1];
  return result;
}

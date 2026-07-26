/*
 * XREFs of ndisConvertIdentifierForNetworkInterface @ 0x1C005BF78
 * Callers:
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x1C01210EC (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 * Callees:
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C0022C88 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C00256E4 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C00340F8 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ndisConvertIdentifierIsCompartmentVisibile @ 0x1C005C0B4 (ndisConvertIdentifierIsCompartmentVisibile.c)
 */

__int64 __fastcall ndisConvertIdentifierForNetworkInterface(
        int a1,
        int a2,
        const struct _GUID *a3,
        __int64 a4,
        __int64 a5)
{
  int v7; // ecx
  struct _LIST_ENTRY *Interface; // rax
  __int64 v9; // r11
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int64 v14; // rcx
  const void *v15; // rdx
  size_t v16; // r8

  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 3221225659LL;
      Interface = ndisIfFindInterface(a3->Data1);
    }
    else
    {
      Interface = ndisIfFindInterfaceByInterfaceGuid(a3);
    }
  }
  else
  {
    Interface = ndisIfFindInterfaceByNetLuid(*(union _NET_LUID_LH *)&a3->Data1);
  }
  if ( !Interface || !(unsigned __int8)ndisConvertIdentifierIsCompartmentVisibile(Interface[86].Flink, a4) )
    return 3221225524LL;
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            return 3221225659LL;
          v14 = a5;
          v15 = (const void *)(v9 + 1160);
          *(_OWORD *)a5 = 0LL;
          *(_OWORD *)(a5 + 16) = 0LL;
          *(_WORD *)(a5 + 32) = 0;
          *(_WORD *)a5 = *(_WORD *)(v9 + 1158);
          v16 = *(unsigned __int16 *)(v9 + 1158);
        }
        else
        {
          v14 = a5;
          v15 = (const void *)(v9 + 1126);
          *(_OWORD *)a5 = 0LL;
          *(_OWORD *)(a5 + 16) = 0LL;
          *(_WORD *)(a5 + 32) = 0;
          *(_WORD *)a5 = *(_WORD *)(v9 + 1124);
          v16 = *(unsigned __int16 *)(v9 + 1124);
        }
        memmove((void *)(v14 + 2), v15, v16);
      }
      else
      {
        *(_DWORD *)a5 = *(_DWORD *)(v9 + 4);
      }
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(v9 + 540);
    }
  }
  else
  {
    *(_QWORD *)a5 = *(_QWORD *)(v9 + 1312);
  }
  return 0LL;
}

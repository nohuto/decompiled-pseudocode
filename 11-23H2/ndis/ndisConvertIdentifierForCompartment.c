/*
 * XREFs of ndisConvertIdentifierForCompartment @ 0x1C0061118
 * Callers:
 *     ?ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDENTIFIER_OUT@@@Z @ 0x1C012CE94 (-ndisConvertIdentifier@@YAJPEAU_ETHREAD@@PEBU_NDIS_CONVERT_IDENTIFIER_IN@@PEAU_NDIS_CONVERT_IDEN.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002FB28 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ndisConvertIdentifierIsCompartmentVisibile @ 0x1C0061324 (ndisConvertIdentifierIsCompartmentVisibile.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C00B8CFC (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisConvertIdentifierForCompartment(int a1, int a2, const struct _GUID *a3, __int64 a4, _OWORD *a5)
{
  KIRQL v9; // r11
  int v10; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  unsigned int v12; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v13; // rsi
  int v14; // edi

  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v10 = a1 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      goto LABEL_9;
    CompartmentBlock = ndisIfFindCompartmentBlock(a3->Data1);
  }
  else
  {
    CompartmentBlock = ndisIfFindCompartmentBlockByGuid(a3);
  }
  v12 = 0;
  v13 = CompartmentBlock;
  if ( !CompartmentBlock || !(unsigned __int8)ndisConvertIdentifierIsCompartmentVisibile(CompartmentBlock, a4) )
  {
    v12 = -1073741772;
    goto LABEL_13;
  }
  v14 = a2 - 1;
  if ( !v14 )
  {
    *a5 = *(_OWORD *)((char *)v13 + 1144);
    goto LABEL_13;
  }
  if ( v14 == 1 )
  {
    *(_DWORD *)a5 = *((_DWORD *)v13 + 4);
    goto LABEL_13;
  }
LABEL_9:
  v12 = -1073741637;
LABEL_13:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  return v12;
}

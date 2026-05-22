/*
 * XREFs of ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x1801818E8
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x180181FA8 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18004B75C (--_U@YAPEAX_K@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::FindCollectionForProperty(__int64 a1, int a2, unsigned int *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int16 v9; // bx
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  NTSTATUS LinkCollectionNodes; // eax
  unsigned int v14; // ecx
  ULONG v15; // edx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ULONG LinkCollectionNodesLength; // [rsp+58h] [rbp+10h] BYREF
  void *v19; // [rsp+60h] [rbp+18h]

  LinkCollectionNodesLength = 0;
  v19 = 0LL;
  *a3 = 0;
  v5 = a2 - 6;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            goto LABEL_24;
          v9 = 40;
        }
        else
        {
          v9 = 39;
        }
      }
      else
      {
        v9 = 38;
      }
    }
    else
    {
      v9 = 37;
    }
  }
  else
  {
    v9 = 36;
  }
  v10 = *(unsigned __int16 *)(a1 + 44);
  LinkCollectionNodesLength = v10;
  if ( !(_WORD)v10 )
  {
    v11 = -2089418750;
    v12 = 91LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
      (const char *)v11);
    goto LABEL_25;
  }
  v19 = operator new[](saturated_mul(v10, 0x18uLL));
  LinkCollectionNodes = HidP_GetLinkCollectionNodes(
                          (PHIDP_LINK_COLLECTION_NODE)v19,
                          &LinkCollectionNodesLength,
                          *(PHIDP_PREPARSED_DATA *)(a1 + 64));
  if ( LinkCollectionNodes < 0 )
  {
    v11 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x64,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
            (const char *)(unsigned int)LinkCollectionNodes);
    goto LABEL_25;
  }
  v14 = 0;
  v15 = LinkCollectionNodesLength;
  if ( LinkCollectionNodesLength )
  {
    while ( *((_WORD *)v19 + 12 * v14 + 1) != 18 || *((_WORD *)v19 + 12 * v14) != v9 )
    {
      if ( ++v14 >= LinkCollectionNodesLength )
        goto LABEL_21;
    }
    *a3 = v14;
  }
LABEL_21:
  if ( v14 == v15 )
  {
    v11 = -2147467259;
    v12 = 113LL;
    goto LABEL_23;
  }
LABEL_24:
  v11 = 0;
LABEL_25:
  if ( v19 )
    operator delete[](v19);
  return v11;
}

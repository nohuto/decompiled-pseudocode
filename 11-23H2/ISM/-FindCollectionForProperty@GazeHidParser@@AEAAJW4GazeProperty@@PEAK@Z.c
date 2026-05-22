/*
 * XREFs of ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x1801A0B24
 * Callers:
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1801A1224 (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800CD748 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___ @ 0x1800E6098 (wil--details--ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___--_ScopeExitFn__lambda_c7ef.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::FindCollectionForProperty(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int16 v10; // di
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  NTSTATUS LinkCollectionNodes; // eax
  unsigned int v14; // ecx
  void *v15; // rdx
  ULONG v16; // r8d
  int v18[2]; // [rsp+20h] [rbp-28h] BYREF
  char v19; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ULONG LinkCollectionNodesLength; // [rsp+58h] [rbp+10h] BYREF
  void *v22; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  LinkCollectionNodesLength = 0;
  v22 = 0LL;
  *(_QWORD *)v18 = &v22;
  v19 = 1;
  *a3 = 0;
  v6 = a2 - 6;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
          {
LABEL_24:
            wil::details::ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___::_ScopeExitFn__lambda_c7ef70729348990a668d5db76062aec0___((__int64)v18);
            return v5;
          }
          v10 = 40;
        }
        else
        {
          v10 = 39;
        }
      }
      else
      {
        v10 = 38;
      }
    }
    else
    {
      v10 = 37;
    }
  }
  else
  {
    v10 = 36;
  }
  v11 = *(unsigned __int16 *)(a1 + 44);
  LinkCollectionNodesLength = v11;
  if ( !(_WORD)v11 )
  {
    v5 = -2089418750;
    v12 = 91LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
      (const char *)v5);
    goto LABEL_24;
  }
  v22 = operator new[](saturated_mul(v11, 0x18uLL));
  LinkCollectionNodes = HidP_GetLinkCollectionNodes(
                          (PHIDP_LINK_COLLECTION_NODE)v22,
                          &LinkCollectionNodesLength,
                          *(PHIDP_PREPARSED_DATA *)(a1 + 64));
  if ( LinkCollectionNodes < 0 )
  {
    v5 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x64,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
           (const char *)(unsigned int)LinkCollectionNodes);
    goto LABEL_24;
  }
  v14 = 0;
  v15 = v22;
  v16 = LinkCollectionNodesLength;
  if ( LinkCollectionNodesLength )
  {
    while ( *((_WORD *)v22 + 12 * v14 + 1) != 18 || *((_WORD *)v22 + 12 * v14) != v10 )
    {
      if ( ++v14 >= LinkCollectionNodesLength )
        goto LABEL_21;
    }
    *a3 = v14;
  }
LABEL_21:
  if ( v14 == v16 )
  {
    v5 = -2147467259;
    v12 = 113LL;
    goto LABEL_23;
  }
  if ( v15 )
    operator delete[](v15);
  return 0LL;
}

/*
 * XREFs of ?GetCurrent@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@@Z @ 0x1801A28E4
 * Callers:
 *     ?get_Current@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x1801A2DF0 (-get_Current@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAPEAU-$IKeyValueP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B7BB4 (-GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ??0?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$0A@@Internal@Collections@Foundation@Windows@@QEAA@Upermission@01234@@Z @ 0x1801A27AC (--0-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@C.c)
 *     ?Initialize@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBQEAUHSTRING__@@0@Z @ 0x1801A2AF8 (-Initialize@-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PEAUHSTRING__@@@I.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U23456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A2BA4 (-InternalRelease@-$ComPtr@V-$SimpleKeyValuePair@PEAUHSTRING__@@PEAU1@U-$DefaultLifetimeTraits@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionIterator::GetCurrent(__int64 a1, HSTRING *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  Windows::UI::Composition::ExpressionAnimation *v6; // rbx
  int Expression; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  HSTRING v11; // rdi
  _QWORD *v12; // rax
  HSTRING v13; // rax
  HSTRING v14; // rsi
  HSTRING v16; // [rsp+20h] [rbp-10h] BYREF
  HSTRING v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  HSTRING v19; // [rsp+60h] [rbp+30h] BYREF
  HSTRING string; // [rsp+68h] [rbp+38h] BYREF
  HSTRING v21; // [rsp+70h] [rbp+40h] BYREF
  HSTRING newString; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  newString = 0LL;
  string = 0LL;
  v19 = 0LL;
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 == *v4 )
    goto LABEL_13;
  v21 = *(HSTRING *)(v5 + 32);
  Microsoft::WRL::Wrappers::HString::Set(&newString, &v21);
  v6 = *(Windows::UI::Composition::ExpressionAnimation **)(*(_QWORD *)(a1 + 72) + 40LL);
  WindowsDeleteString(string);
  Expression = Windows::UI::Composition::ExpressionAnimation::GetExpression(v6, &string);
  v8 = Expression;
  if ( Expression >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v19);
    v11 = 0LL;
    v21 = 0LL;
    v16 = string;
    v17 = newString;
    v19 = 0LL;
    v12 = DefaultHeap::Alloc(0x30uLL);
    if ( v12
      && (v13 = (HSTRING)Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>(v12),
          v21 = v13,
          (v14 = v13) != 0LL) )
    {
      v8 = Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>::Initialize(
             v13,
             &v17,
             &v16);
      if ( v8 >= 0 )
      {
        v21 = 0LL;
        v11 = v14;
        v19 = v14;
      }
    }
    else
    {
      v8 = -2147024882;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v21);
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 116LL;
      goto LABEL_11;
    }
    v19 = 0LL;
    *a2 = v11;
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v9 = (unsigned int)Expression;
  v10 = 111LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioniterator.cpp",
    (const char *)v9);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(&v19);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(newString);
  return (unsigned int)v8;
}

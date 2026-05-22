/*
 * XREFs of ?GetTargetMapEntry@AnimationBindingManager@Composition@UI@Windows@@AEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVSubchannelMaskInfo@@PEAPEAVTargetMapEntry@234@@Z @ 0x18004D6C0
 * Callers:
 *     ?TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180006228 (-TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@.c)
 *     ?StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18004D5B0 (-StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@_N@Z @ 0x18016959C (-UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSION_TYPE@@_NPEAUExpressionErrorInfo@234@PEAPEAVSubchannelMaskInfo@@PEAI@Z @ 0x18004C330 (-ParseSwizzle@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEBGIW4DCOMPOSITION_EXPRESSIO.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z @ 0x180069158 (-SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@Z @ 0x18015ADBC (-OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationBindingManager::GetTargetMapEntry(
        struct _RTL_GENERIC_TABLE *this,
        struct Windows::UI::Composition::ProxyObject *a2,
        HSTRING a3,
        struct SubchannelMaskInfo **a4,
        struct Windows::UI::Composition::TargetMapEntry **a5)
{
  struct Windows::UI::Composition::TargetMapEntry **v5; // r14
  struct Windows::UI::Composition::TargetMapEntry *v6; // rbx
  __int64 v7; // rax
  int v10; // r15d
  void *v11; // rsi
  struct SubchannelMaskInfo *v12; // r12
  char v13; // al
  int v14; // edi
  unsigned int v15; // r15d
  unsigned __int16 *StringRawBuffer; // rax
  UINT32 v18; // r8d
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  char v21; // al
  HSTRING v22; // r12
  const unsigned __int16 *v23; // rsi
  int v24; // edi
  unsigned int v25; // eax
  const unsigned __int16 *v26; // rax
  __int64 Buffer; // [rsp+40h] [rbp-31h] BYREF
  __int128 v28; // [rsp+48h] [rbp-29h]
  UINT32 length; // [rsp+58h] [rbp-19h] BYREF
  int v30; // [rsp+5Ch] [rbp-15h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-11h] BYREF
  HSTRING newString; // [rsp+68h] [rbp-9h] BYREF
  void *v33; // [rsp+70h] [rbp-1h] BYREF
  __int64 v34; // [rsp+78h] [rbp+7h] BYREF
  int v35; // [rsp+80h] [rbp+Fh]
  int v36; // [rsp+84h] [rbp+13h]
  unsigned __int16 *v37; // [rsp+88h] [rbp+17h]
  __int64 v39; // [rsp+D8h] [rbp+67h] BYREF
  HSTRING string; // [rsp+E0h] [rbp+6Fh]

  string = a3;
  v5 = a5;
  v6 = 0LL;
  v7 = *(_QWORD *)a2;
  v34 = 0LL;
  v35 = -1;
  v10 = -1;
  v36 = 2;
  Buffer = 1LL;
  v11 = 0LL;
  LODWORD(v28) = 0;
  v12 = 0LL;
  *((_QWORD *)&v28 + 1) = 0LL;
  v33 = 0LL;
  v31 = 0;
  newString = 0LL;
  v37 = 0LL;
  length = 0;
  LODWORD(v39) = 0;
  v13 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ProxyObject *, HSTRING, __int64 *, __int64 *, int *))(v7 + 200))(
          a2,
          a3,
          &v39,
          &v34,
          &v30);
  if ( (v39 & 2) != 0 && v13 )
  {
    v14 = 0;
    LODWORD(Buffer) = 0;
  }
  else
  {
    StringRawBuffer = (unsigned __int16 *)WindowsGetStringRawBuffer(string, &length);
    v18 = length - 1;
    v37 = StringRawBuffer;
    v19 = (int)(length - 1);
    if ( (int)(length - 1) < 0 )
      goto LABEL_27;
    while ( StringRawBuffer[v19] != 46 )
    {
      --v18;
      if ( --v19 < 0 )
        goto LABEL_27;
    }
    v10 = v18;
    if ( v18 == -1 )
      goto LABEL_27;
    if ( WindowsSubstringWithSpecifiedLength(string, 0, v18, &newString) < 0 )
      Microsoft::WRL2::FailFast::OutOfMemory(v20);
    v21 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ProxyObject *, HSTRING, __int64 *, __int64 *, int *))(*(_QWORD *)a2 + 200LL))(
            a2,
            newString,
            &v39,
            &v34,
            &v30);
    if ( (v39 & 2) != 0 && v21 )
    {
      v14 = 0;
      LODWORD(Buffer) = 0;
    }
    else
    {
LABEL_27:
      v14 = 19;
      LODWORD(Buffer) = 19;
    }
  }
  if ( newString )
    WindowsDeleteString(newString);
  if ( v14 )
  {
    LODWORD(v28) = length;
    HIDWORD(Buffer) = 0;
    Windows::UI::Composition::ExpressionErrorInfo::SetErrorContext(
      (Windows::UI::Composition::ExpressionErrorInfo *)&Buffer,
      v37);
    v24 = Buffer;
    v11 = (void *)*((_QWORD *)&v28 + 1);
    if ( (_DWORD)Buffer )
    {
      v15 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147024809,
        0xB4Cu,
        0LL);
      v22 = string;
      goto LABEL_35;
    }
  }
  if ( v10 <= -1 )
  {
LABEL_8:
    *a4 = v12;
    if ( v11 )
    {
      operator delete(v11);
      v11 = 0LL;
    }
    goto LABEL_10;
  }
  v22 = string;
  LODWORD(v39) = 0;
  v23 = WindowsGetStringRawBuffer(string, (UINT32 *)&v39);
  Windows::UI::Composition::ExpressionAnimationParser::ParseSwizzle(
    &v23[v10 + 1],
    v39 - v10,
    v30,
    0,
    (__int64)&Buffer,
    &v33,
    &v31);
  v24 = Buffer;
  if ( (_DWORD)Buffer )
  {
    v25 = 2915;
  }
  else
  {
    if ( (_DWORD)v39 - v10 - 1 == v31 )
    {
      v11 = (void *)*((_QWORD *)&v28 + 1);
      v12 = (struct SubchannelMaskInfo *)v33;
      goto LABEL_8;
    }
    LODWORD(v28) = v31;
    LODWORD(Buffer) = 17;
    HIDWORD(Buffer) = v39 - v10 - 1;
    Windows::UI::Composition::ExpressionErrorInfo::SetErrorContext(
      (Windows::UI::Composition::ExpressionErrorInfo *)&Buffer,
      v23);
    v24 = Buffer;
    v25 = 2936;
  }
  v15 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(
    4u,
    &Windows::UI::Composition::ExpressionAnimationParser::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    -2147024809,
    v25,
    0LL);
  if ( v33 )
    operator delete(v33, 8uLL);
  v11 = (void *)*((_QWORD *)&v28 + 1);
LABEL_35:
  if ( !v24 )
  {
LABEL_10:
    v39 = v34;
    v15 = 0;
    Buffer = v34;
    v28 = 0LL;
    v6 = (struct Windows::UI::Composition::TargetMapEntry *)RtlLookupElementGenericTable(this, &Buffer);
    goto LABEL_11;
  }
  v26 = WindowsGetStringRawBuffer(v22, 0LL);
  Windows::UI::Composition::ExpressionAnimation::OriginateError(
    (struct Windows::UI::Composition::ExpressionErrorInfo *)&Buffer,
    v26);
  MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FA550, 2u, -2147024809, 0xB1u, 0LL);
  v11 = (void *)*((_QWORD *)&v28 + 1);
  *a4 = 0LL;
LABEL_11:
  *v5 = v6;
  if ( v11 )
    operator delete(v11);
  return v15;
}
